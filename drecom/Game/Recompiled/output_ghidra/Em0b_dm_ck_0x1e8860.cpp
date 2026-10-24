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

// Function: Em0b_dm_ck
// Address: 0x1e8860 - 0x1e9c50
void Em0b_dm_ck_0x1e8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_dm_ck_0x1e8860");
#endif

    switch (ctx->pc) {
        case 0x1e8860u: goto label_1e8860;
        case 0x1e8864u: goto label_1e8864;
        case 0x1e8868u: goto label_1e8868;
        case 0x1e886cu: goto label_1e886c;
        case 0x1e8870u: goto label_1e8870;
        case 0x1e8874u: goto label_1e8874;
        case 0x1e8878u: goto label_1e8878;
        case 0x1e887cu: goto label_1e887c;
        case 0x1e8880u: goto label_1e8880;
        case 0x1e8884u: goto label_1e8884;
        case 0x1e8888u: goto label_1e8888;
        case 0x1e888cu: goto label_1e888c;
        case 0x1e8890u: goto label_1e8890;
        case 0x1e8894u: goto label_1e8894;
        case 0x1e8898u: goto label_1e8898;
        case 0x1e889cu: goto label_1e889c;
        case 0x1e88a0u: goto label_1e88a0;
        case 0x1e88a4u: goto label_1e88a4;
        case 0x1e88a8u: goto label_1e88a8;
        case 0x1e88acu: goto label_1e88ac;
        case 0x1e88b0u: goto label_1e88b0;
        case 0x1e88b4u: goto label_1e88b4;
        case 0x1e88b8u: goto label_1e88b8;
        case 0x1e88bcu: goto label_1e88bc;
        case 0x1e88c0u: goto label_1e88c0;
        case 0x1e88c4u: goto label_1e88c4;
        case 0x1e88c8u: goto label_1e88c8;
        case 0x1e88ccu: goto label_1e88cc;
        case 0x1e88d0u: goto label_1e88d0;
        case 0x1e88d4u: goto label_1e88d4;
        case 0x1e88d8u: goto label_1e88d8;
        case 0x1e88dcu: goto label_1e88dc;
        case 0x1e88e0u: goto label_1e88e0;
        case 0x1e88e4u: goto label_1e88e4;
        case 0x1e88e8u: goto label_1e88e8;
        case 0x1e88ecu: goto label_1e88ec;
        case 0x1e88f0u: goto label_1e88f0;
        case 0x1e88f4u: goto label_1e88f4;
        case 0x1e88f8u: goto label_1e88f8;
        case 0x1e88fcu: goto label_1e88fc;
        case 0x1e8900u: goto label_1e8900;
        case 0x1e8904u: goto label_1e8904;
        case 0x1e8908u: goto label_1e8908;
        case 0x1e890cu: goto label_1e890c;
        case 0x1e8910u: goto label_1e8910;
        case 0x1e8914u: goto label_1e8914;
        case 0x1e8918u: goto label_1e8918;
        case 0x1e891cu: goto label_1e891c;
        case 0x1e8920u: goto label_1e8920;
        case 0x1e8924u: goto label_1e8924;
        case 0x1e8928u: goto label_1e8928;
        case 0x1e892cu: goto label_1e892c;
        case 0x1e8930u: goto label_1e8930;
        case 0x1e8934u: goto label_1e8934;
        case 0x1e8938u: goto label_1e8938;
        case 0x1e893cu: goto label_1e893c;
        case 0x1e8940u: goto label_1e8940;
        case 0x1e8944u: goto label_1e8944;
        case 0x1e8948u: goto label_1e8948;
        case 0x1e894cu: goto label_1e894c;
        case 0x1e8950u: goto label_1e8950;
        case 0x1e8954u: goto label_1e8954;
        case 0x1e8958u: goto label_1e8958;
        case 0x1e895cu: goto label_1e895c;
        case 0x1e8960u: goto label_1e8960;
        case 0x1e8964u: goto label_1e8964;
        case 0x1e8968u: goto label_1e8968;
        case 0x1e896cu: goto label_1e896c;
        case 0x1e8970u: goto label_1e8970;
        case 0x1e8974u: goto label_1e8974;
        case 0x1e8978u: goto label_1e8978;
        case 0x1e897cu: goto label_1e897c;
        case 0x1e8980u: goto label_1e8980;
        case 0x1e8984u: goto label_1e8984;
        case 0x1e8988u: goto label_1e8988;
        case 0x1e898cu: goto label_1e898c;
        case 0x1e8990u: goto label_1e8990;
        case 0x1e8994u: goto label_1e8994;
        case 0x1e8998u: goto label_1e8998;
        case 0x1e899cu: goto label_1e899c;
        case 0x1e89a0u: goto label_1e89a0;
        case 0x1e89a4u: goto label_1e89a4;
        case 0x1e89a8u: goto label_1e89a8;
        case 0x1e89acu: goto label_1e89ac;
        case 0x1e89b0u: goto label_1e89b0;
        case 0x1e89b4u: goto label_1e89b4;
        case 0x1e89b8u: goto label_1e89b8;
        case 0x1e89bcu: goto label_1e89bc;
        case 0x1e89c0u: goto label_1e89c0;
        case 0x1e89c4u: goto label_1e89c4;
        case 0x1e89c8u: goto label_1e89c8;
        case 0x1e89ccu: goto label_1e89cc;
        case 0x1e89d0u: goto label_1e89d0;
        case 0x1e89d4u: goto label_1e89d4;
        case 0x1e89d8u: goto label_1e89d8;
        case 0x1e89dcu: goto label_1e89dc;
        case 0x1e89e0u: goto label_1e89e0;
        case 0x1e89e4u: goto label_1e89e4;
        case 0x1e89e8u: goto label_1e89e8;
        case 0x1e89ecu: goto label_1e89ec;
        case 0x1e89f0u: goto label_1e89f0;
        case 0x1e89f4u: goto label_1e89f4;
        case 0x1e89f8u: goto label_1e89f8;
        case 0x1e89fcu: goto label_1e89fc;
        case 0x1e8a00u: goto label_1e8a00;
        case 0x1e8a04u: goto label_1e8a04;
        case 0x1e8a08u: goto label_1e8a08;
        case 0x1e8a0cu: goto label_1e8a0c;
        case 0x1e8a10u: goto label_1e8a10;
        case 0x1e8a14u: goto label_1e8a14;
        case 0x1e8a18u: goto label_1e8a18;
        case 0x1e8a1cu: goto label_1e8a1c;
        case 0x1e8a20u: goto label_1e8a20;
        case 0x1e8a24u: goto label_1e8a24;
        case 0x1e8a28u: goto label_1e8a28;
        case 0x1e8a2cu: goto label_1e8a2c;
        case 0x1e8a30u: goto label_1e8a30;
        case 0x1e8a34u: goto label_1e8a34;
        case 0x1e8a38u: goto label_1e8a38;
        case 0x1e8a3cu: goto label_1e8a3c;
        case 0x1e8a40u: goto label_1e8a40;
        case 0x1e8a44u: goto label_1e8a44;
        case 0x1e8a48u: goto label_1e8a48;
        case 0x1e8a4cu: goto label_1e8a4c;
        case 0x1e8a50u: goto label_1e8a50;
        case 0x1e8a54u: goto label_1e8a54;
        case 0x1e8a58u: goto label_1e8a58;
        case 0x1e8a5cu: goto label_1e8a5c;
        case 0x1e8a60u: goto label_1e8a60;
        case 0x1e8a64u: goto label_1e8a64;
        case 0x1e8a68u: goto label_1e8a68;
        case 0x1e8a6cu: goto label_1e8a6c;
        case 0x1e8a70u: goto label_1e8a70;
        case 0x1e8a74u: goto label_1e8a74;
        case 0x1e8a78u: goto label_1e8a78;
        case 0x1e8a7cu: goto label_1e8a7c;
        case 0x1e8a80u: goto label_1e8a80;
        case 0x1e8a84u: goto label_1e8a84;
        case 0x1e8a88u: goto label_1e8a88;
        case 0x1e8a8cu: goto label_1e8a8c;
        case 0x1e8a90u: goto label_1e8a90;
        case 0x1e8a94u: goto label_1e8a94;
        case 0x1e8a98u: goto label_1e8a98;
        case 0x1e8a9cu: goto label_1e8a9c;
        case 0x1e8aa0u: goto label_1e8aa0;
        case 0x1e8aa4u: goto label_1e8aa4;
        case 0x1e8aa8u: goto label_1e8aa8;
        case 0x1e8aacu: goto label_1e8aac;
        case 0x1e8ab0u: goto label_1e8ab0;
        case 0x1e8ab4u: goto label_1e8ab4;
        case 0x1e8ab8u: goto label_1e8ab8;
        case 0x1e8abcu: goto label_1e8abc;
        case 0x1e8ac0u: goto label_1e8ac0;
        case 0x1e8ac4u: goto label_1e8ac4;
        case 0x1e8ac8u: goto label_1e8ac8;
        case 0x1e8accu: goto label_1e8acc;
        case 0x1e8ad0u: goto label_1e8ad0;
        case 0x1e8ad4u: goto label_1e8ad4;
        case 0x1e8ad8u: goto label_1e8ad8;
        case 0x1e8adcu: goto label_1e8adc;
        case 0x1e8ae0u: goto label_1e8ae0;
        case 0x1e8ae4u: goto label_1e8ae4;
        case 0x1e8ae8u: goto label_1e8ae8;
        case 0x1e8aecu: goto label_1e8aec;
        case 0x1e8af0u: goto label_1e8af0;
        case 0x1e8af4u: goto label_1e8af4;
        case 0x1e8af8u: goto label_1e8af8;
        case 0x1e8afcu: goto label_1e8afc;
        case 0x1e8b00u: goto label_1e8b00;
        case 0x1e8b04u: goto label_1e8b04;
        case 0x1e8b08u: goto label_1e8b08;
        case 0x1e8b0cu: goto label_1e8b0c;
        case 0x1e8b10u: goto label_1e8b10;
        case 0x1e8b14u: goto label_1e8b14;
        case 0x1e8b18u: goto label_1e8b18;
        case 0x1e8b1cu: goto label_1e8b1c;
        case 0x1e8b20u: goto label_1e8b20;
        case 0x1e8b24u: goto label_1e8b24;
        case 0x1e8b28u: goto label_1e8b28;
        case 0x1e8b2cu: goto label_1e8b2c;
        case 0x1e8b30u: goto label_1e8b30;
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b38u: goto label_1e8b38;
        case 0x1e8b3cu: goto label_1e8b3c;
        case 0x1e8b40u: goto label_1e8b40;
        case 0x1e8b44u: goto label_1e8b44;
        case 0x1e8b48u: goto label_1e8b48;
        case 0x1e8b4cu: goto label_1e8b4c;
        case 0x1e8b50u: goto label_1e8b50;
        case 0x1e8b54u: goto label_1e8b54;
        case 0x1e8b58u: goto label_1e8b58;
        case 0x1e8b5cu: goto label_1e8b5c;
        case 0x1e8b60u: goto label_1e8b60;
        case 0x1e8b64u: goto label_1e8b64;
        case 0x1e8b68u: goto label_1e8b68;
        case 0x1e8b6cu: goto label_1e8b6c;
        case 0x1e8b70u: goto label_1e8b70;
        case 0x1e8b74u: goto label_1e8b74;
        case 0x1e8b78u: goto label_1e8b78;
        case 0x1e8b7cu: goto label_1e8b7c;
        case 0x1e8b80u: goto label_1e8b80;
        case 0x1e8b84u: goto label_1e8b84;
        case 0x1e8b88u: goto label_1e8b88;
        case 0x1e8b8cu: goto label_1e8b8c;
        case 0x1e8b90u: goto label_1e8b90;
        case 0x1e8b94u: goto label_1e8b94;
        case 0x1e8b98u: goto label_1e8b98;
        case 0x1e8b9cu: goto label_1e8b9c;
        case 0x1e8ba0u: goto label_1e8ba0;
        case 0x1e8ba4u: goto label_1e8ba4;
        case 0x1e8ba8u: goto label_1e8ba8;
        case 0x1e8bacu: goto label_1e8bac;
        case 0x1e8bb0u: goto label_1e8bb0;
        case 0x1e8bb4u: goto label_1e8bb4;
        case 0x1e8bb8u: goto label_1e8bb8;
        case 0x1e8bbcu: goto label_1e8bbc;
        case 0x1e8bc0u: goto label_1e8bc0;
        case 0x1e8bc4u: goto label_1e8bc4;
        case 0x1e8bc8u: goto label_1e8bc8;
        case 0x1e8bccu: goto label_1e8bcc;
        case 0x1e8bd0u: goto label_1e8bd0;
        case 0x1e8bd4u: goto label_1e8bd4;
        case 0x1e8bd8u: goto label_1e8bd8;
        case 0x1e8bdcu: goto label_1e8bdc;
        case 0x1e8be0u: goto label_1e8be0;
        case 0x1e8be4u: goto label_1e8be4;
        case 0x1e8be8u: goto label_1e8be8;
        case 0x1e8becu: goto label_1e8bec;
        case 0x1e8bf0u: goto label_1e8bf0;
        case 0x1e8bf4u: goto label_1e8bf4;
        case 0x1e8bf8u: goto label_1e8bf8;
        case 0x1e8bfcu: goto label_1e8bfc;
        case 0x1e8c00u: goto label_1e8c00;
        case 0x1e8c04u: goto label_1e8c04;
        case 0x1e8c08u: goto label_1e8c08;
        case 0x1e8c0cu: goto label_1e8c0c;
        case 0x1e8c10u: goto label_1e8c10;
        case 0x1e8c14u: goto label_1e8c14;
        case 0x1e8c18u: goto label_1e8c18;
        case 0x1e8c1cu: goto label_1e8c1c;
        case 0x1e8c20u: goto label_1e8c20;
        case 0x1e8c24u: goto label_1e8c24;
        case 0x1e8c28u: goto label_1e8c28;
        case 0x1e8c2cu: goto label_1e8c2c;
        case 0x1e8c30u: goto label_1e8c30;
        case 0x1e8c34u: goto label_1e8c34;
        case 0x1e8c38u: goto label_1e8c38;
        case 0x1e8c3cu: goto label_1e8c3c;
        case 0x1e8c40u: goto label_1e8c40;
        case 0x1e8c44u: goto label_1e8c44;
        case 0x1e8c48u: goto label_1e8c48;
        case 0x1e8c4cu: goto label_1e8c4c;
        case 0x1e8c50u: goto label_1e8c50;
        case 0x1e8c54u: goto label_1e8c54;
        case 0x1e8c58u: goto label_1e8c58;
        case 0x1e8c5cu: goto label_1e8c5c;
        case 0x1e8c60u: goto label_1e8c60;
        case 0x1e8c64u: goto label_1e8c64;
        case 0x1e8c68u: goto label_1e8c68;
        case 0x1e8c6cu: goto label_1e8c6c;
        case 0x1e8c70u: goto label_1e8c70;
        case 0x1e8c74u: goto label_1e8c74;
        case 0x1e8c78u: goto label_1e8c78;
        case 0x1e8c7cu: goto label_1e8c7c;
        case 0x1e8c80u: goto label_1e8c80;
        case 0x1e8c84u: goto label_1e8c84;
        case 0x1e8c88u: goto label_1e8c88;
        case 0x1e8c8cu: goto label_1e8c8c;
        case 0x1e8c90u: goto label_1e8c90;
        case 0x1e8c94u: goto label_1e8c94;
        case 0x1e8c98u: goto label_1e8c98;
        case 0x1e8c9cu: goto label_1e8c9c;
        case 0x1e8ca0u: goto label_1e8ca0;
        case 0x1e8ca4u: goto label_1e8ca4;
        case 0x1e8ca8u: goto label_1e8ca8;
        case 0x1e8cacu: goto label_1e8cac;
        case 0x1e8cb0u: goto label_1e8cb0;
        case 0x1e8cb4u: goto label_1e8cb4;
        case 0x1e8cb8u: goto label_1e8cb8;
        case 0x1e8cbcu: goto label_1e8cbc;
        case 0x1e8cc0u: goto label_1e8cc0;
        case 0x1e8cc4u: goto label_1e8cc4;
        case 0x1e8cc8u: goto label_1e8cc8;
        case 0x1e8cccu: goto label_1e8ccc;
        case 0x1e8cd0u: goto label_1e8cd0;
        case 0x1e8cd4u: goto label_1e8cd4;
        case 0x1e8cd8u: goto label_1e8cd8;
        case 0x1e8cdcu: goto label_1e8cdc;
        case 0x1e8ce0u: goto label_1e8ce0;
        case 0x1e8ce4u: goto label_1e8ce4;
        case 0x1e8ce8u: goto label_1e8ce8;
        case 0x1e8cecu: goto label_1e8cec;
        case 0x1e8cf0u: goto label_1e8cf0;
        case 0x1e8cf4u: goto label_1e8cf4;
        case 0x1e8cf8u: goto label_1e8cf8;
        case 0x1e8cfcu: goto label_1e8cfc;
        case 0x1e8d00u: goto label_1e8d00;
        case 0x1e8d04u: goto label_1e8d04;
        case 0x1e8d08u: goto label_1e8d08;
        case 0x1e8d0cu: goto label_1e8d0c;
        case 0x1e8d10u: goto label_1e8d10;
        case 0x1e8d14u: goto label_1e8d14;
        case 0x1e8d18u: goto label_1e8d18;
        case 0x1e8d1cu: goto label_1e8d1c;
        case 0x1e8d20u: goto label_1e8d20;
        case 0x1e8d24u: goto label_1e8d24;
        case 0x1e8d28u: goto label_1e8d28;
        case 0x1e8d2cu: goto label_1e8d2c;
        case 0x1e8d30u: goto label_1e8d30;
        case 0x1e8d34u: goto label_1e8d34;
        case 0x1e8d38u: goto label_1e8d38;
        case 0x1e8d3cu: goto label_1e8d3c;
        case 0x1e8d40u: goto label_1e8d40;
        case 0x1e8d44u: goto label_1e8d44;
        case 0x1e8d48u: goto label_1e8d48;
        case 0x1e8d4cu: goto label_1e8d4c;
        case 0x1e8d50u: goto label_1e8d50;
        case 0x1e8d54u: goto label_1e8d54;
        case 0x1e8d58u: goto label_1e8d58;
        case 0x1e8d5cu: goto label_1e8d5c;
        case 0x1e8d60u: goto label_1e8d60;
        case 0x1e8d64u: goto label_1e8d64;
        case 0x1e8d68u: goto label_1e8d68;
        case 0x1e8d6cu: goto label_1e8d6c;
        case 0x1e8d70u: goto label_1e8d70;
        case 0x1e8d74u: goto label_1e8d74;
        case 0x1e8d78u: goto label_1e8d78;
        case 0x1e8d7cu: goto label_1e8d7c;
        case 0x1e8d80u: goto label_1e8d80;
        case 0x1e8d84u: goto label_1e8d84;
        case 0x1e8d88u: goto label_1e8d88;
        case 0x1e8d8cu: goto label_1e8d8c;
        case 0x1e8d90u: goto label_1e8d90;
        case 0x1e8d94u: goto label_1e8d94;
        case 0x1e8d98u: goto label_1e8d98;
        case 0x1e8d9cu: goto label_1e8d9c;
        case 0x1e8da0u: goto label_1e8da0;
        case 0x1e8da4u: goto label_1e8da4;
        case 0x1e8da8u: goto label_1e8da8;
        case 0x1e8dacu: goto label_1e8dac;
        case 0x1e8db0u: goto label_1e8db0;
        case 0x1e8db4u: goto label_1e8db4;
        case 0x1e8db8u: goto label_1e8db8;
        case 0x1e8dbcu: goto label_1e8dbc;
        case 0x1e8dc0u: goto label_1e8dc0;
        case 0x1e8dc4u: goto label_1e8dc4;
        case 0x1e8dc8u: goto label_1e8dc8;
        case 0x1e8dccu: goto label_1e8dcc;
        case 0x1e8dd0u: goto label_1e8dd0;
        case 0x1e8dd4u: goto label_1e8dd4;
        case 0x1e8dd8u: goto label_1e8dd8;
        case 0x1e8ddcu: goto label_1e8ddc;
        case 0x1e8de0u: goto label_1e8de0;
        case 0x1e8de4u: goto label_1e8de4;
        case 0x1e8de8u: goto label_1e8de8;
        case 0x1e8decu: goto label_1e8dec;
        case 0x1e8df0u: goto label_1e8df0;
        case 0x1e8df4u: goto label_1e8df4;
        case 0x1e8df8u: goto label_1e8df8;
        case 0x1e8dfcu: goto label_1e8dfc;
        case 0x1e8e00u: goto label_1e8e00;
        case 0x1e8e04u: goto label_1e8e04;
        case 0x1e8e08u: goto label_1e8e08;
        case 0x1e8e0cu: goto label_1e8e0c;
        case 0x1e8e10u: goto label_1e8e10;
        case 0x1e8e14u: goto label_1e8e14;
        case 0x1e8e18u: goto label_1e8e18;
        case 0x1e8e1cu: goto label_1e8e1c;
        case 0x1e8e20u: goto label_1e8e20;
        case 0x1e8e24u: goto label_1e8e24;
        case 0x1e8e28u: goto label_1e8e28;
        case 0x1e8e2cu: goto label_1e8e2c;
        case 0x1e8e30u: goto label_1e8e30;
        case 0x1e8e34u: goto label_1e8e34;
        case 0x1e8e38u: goto label_1e8e38;
        case 0x1e8e3cu: goto label_1e8e3c;
        case 0x1e8e40u: goto label_1e8e40;
        case 0x1e8e44u: goto label_1e8e44;
        case 0x1e8e48u: goto label_1e8e48;
        case 0x1e8e4cu: goto label_1e8e4c;
        case 0x1e8e50u: goto label_1e8e50;
        case 0x1e8e54u: goto label_1e8e54;
        case 0x1e8e58u: goto label_1e8e58;
        case 0x1e8e5cu: goto label_1e8e5c;
        case 0x1e8e60u: goto label_1e8e60;
        case 0x1e8e64u: goto label_1e8e64;
        case 0x1e8e68u: goto label_1e8e68;
        case 0x1e8e6cu: goto label_1e8e6c;
        case 0x1e8e70u: goto label_1e8e70;
        case 0x1e8e74u: goto label_1e8e74;
        case 0x1e8e78u: goto label_1e8e78;
        case 0x1e8e7cu: goto label_1e8e7c;
        case 0x1e8e80u: goto label_1e8e80;
        case 0x1e8e84u: goto label_1e8e84;
        case 0x1e8e88u: goto label_1e8e88;
        case 0x1e8e8cu: goto label_1e8e8c;
        case 0x1e8e90u: goto label_1e8e90;
        case 0x1e8e94u: goto label_1e8e94;
        case 0x1e8e98u: goto label_1e8e98;
        case 0x1e8e9cu: goto label_1e8e9c;
        case 0x1e8ea0u: goto label_1e8ea0;
        case 0x1e8ea4u: goto label_1e8ea4;
        case 0x1e8ea8u: goto label_1e8ea8;
        case 0x1e8eacu: goto label_1e8eac;
        case 0x1e8eb0u: goto label_1e8eb0;
        case 0x1e8eb4u: goto label_1e8eb4;
        case 0x1e8eb8u: goto label_1e8eb8;
        case 0x1e8ebcu: goto label_1e8ebc;
        case 0x1e8ec0u: goto label_1e8ec0;
        case 0x1e8ec4u: goto label_1e8ec4;
        case 0x1e8ec8u: goto label_1e8ec8;
        case 0x1e8eccu: goto label_1e8ecc;
        case 0x1e8ed0u: goto label_1e8ed0;
        case 0x1e8ed4u: goto label_1e8ed4;
        case 0x1e8ed8u: goto label_1e8ed8;
        case 0x1e8edcu: goto label_1e8edc;
        case 0x1e8ee0u: goto label_1e8ee0;
        case 0x1e8ee4u: goto label_1e8ee4;
        case 0x1e8ee8u: goto label_1e8ee8;
        case 0x1e8eecu: goto label_1e8eec;
        case 0x1e8ef0u: goto label_1e8ef0;
        case 0x1e8ef4u: goto label_1e8ef4;
        case 0x1e8ef8u: goto label_1e8ef8;
        case 0x1e8efcu: goto label_1e8efc;
        case 0x1e8f00u: goto label_1e8f00;
        case 0x1e8f04u: goto label_1e8f04;
        case 0x1e8f08u: goto label_1e8f08;
        case 0x1e8f0cu: goto label_1e8f0c;
        case 0x1e8f10u: goto label_1e8f10;
        case 0x1e8f14u: goto label_1e8f14;
        case 0x1e8f18u: goto label_1e8f18;
        case 0x1e8f1cu: goto label_1e8f1c;
        case 0x1e8f20u: goto label_1e8f20;
        case 0x1e8f24u: goto label_1e8f24;
        case 0x1e8f28u: goto label_1e8f28;
        case 0x1e8f2cu: goto label_1e8f2c;
        case 0x1e8f30u: goto label_1e8f30;
        case 0x1e8f34u: goto label_1e8f34;
        case 0x1e8f38u: goto label_1e8f38;
        case 0x1e8f3cu: goto label_1e8f3c;
        case 0x1e8f40u: goto label_1e8f40;
        case 0x1e8f44u: goto label_1e8f44;
        case 0x1e8f48u: goto label_1e8f48;
        case 0x1e8f4cu: goto label_1e8f4c;
        case 0x1e8f50u: goto label_1e8f50;
        case 0x1e8f54u: goto label_1e8f54;
        case 0x1e8f58u: goto label_1e8f58;
        case 0x1e8f5cu: goto label_1e8f5c;
        case 0x1e8f60u: goto label_1e8f60;
        case 0x1e8f64u: goto label_1e8f64;
        case 0x1e8f68u: goto label_1e8f68;
        case 0x1e8f6cu: goto label_1e8f6c;
        case 0x1e8f70u: goto label_1e8f70;
        case 0x1e8f74u: goto label_1e8f74;
        case 0x1e8f78u: goto label_1e8f78;
        case 0x1e8f7cu: goto label_1e8f7c;
        case 0x1e8f80u: goto label_1e8f80;
        case 0x1e8f84u: goto label_1e8f84;
        case 0x1e8f88u: goto label_1e8f88;
        case 0x1e8f8cu: goto label_1e8f8c;
        case 0x1e8f90u: goto label_1e8f90;
        case 0x1e8f94u: goto label_1e8f94;
        case 0x1e8f98u: goto label_1e8f98;
        case 0x1e8f9cu: goto label_1e8f9c;
        case 0x1e8fa0u: goto label_1e8fa0;
        case 0x1e8fa4u: goto label_1e8fa4;
        case 0x1e8fa8u: goto label_1e8fa8;
        case 0x1e8facu: goto label_1e8fac;
        case 0x1e8fb0u: goto label_1e8fb0;
        case 0x1e8fb4u: goto label_1e8fb4;
        case 0x1e8fb8u: goto label_1e8fb8;
        case 0x1e8fbcu: goto label_1e8fbc;
        case 0x1e8fc0u: goto label_1e8fc0;
        case 0x1e8fc4u: goto label_1e8fc4;
        case 0x1e8fc8u: goto label_1e8fc8;
        case 0x1e8fccu: goto label_1e8fcc;
        case 0x1e8fd0u: goto label_1e8fd0;
        case 0x1e8fd4u: goto label_1e8fd4;
        case 0x1e8fd8u: goto label_1e8fd8;
        case 0x1e8fdcu: goto label_1e8fdc;
        case 0x1e8fe0u: goto label_1e8fe0;
        case 0x1e8fe4u: goto label_1e8fe4;
        case 0x1e8fe8u: goto label_1e8fe8;
        case 0x1e8fecu: goto label_1e8fec;
        case 0x1e8ff0u: goto label_1e8ff0;
        case 0x1e8ff4u: goto label_1e8ff4;
        case 0x1e8ff8u: goto label_1e8ff8;
        case 0x1e8ffcu: goto label_1e8ffc;
        case 0x1e9000u: goto label_1e9000;
        case 0x1e9004u: goto label_1e9004;
        case 0x1e9008u: goto label_1e9008;
        case 0x1e900cu: goto label_1e900c;
        case 0x1e9010u: goto label_1e9010;
        case 0x1e9014u: goto label_1e9014;
        case 0x1e9018u: goto label_1e9018;
        case 0x1e901cu: goto label_1e901c;
        case 0x1e9020u: goto label_1e9020;
        case 0x1e9024u: goto label_1e9024;
        case 0x1e9028u: goto label_1e9028;
        case 0x1e902cu: goto label_1e902c;
        case 0x1e9030u: goto label_1e9030;
        case 0x1e9034u: goto label_1e9034;
        case 0x1e9038u: goto label_1e9038;
        case 0x1e903cu: goto label_1e903c;
        case 0x1e9040u: goto label_1e9040;
        case 0x1e9044u: goto label_1e9044;
        case 0x1e9048u: goto label_1e9048;
        case 0x1e904cu: goto label_1e904c;
        case 0x1e9050u: goto label_1e9050;
        case 0x1e9054u: goto label_1e9054;
        case 0x1e9058u: goto label_1e9058;
        case 0x1e905cu: goto label_1e905c;
        case 0x1e9060u: goto label_1e9060;
        case 0x1e9064u: goto label_1e9064;
        case 0x1e9068u: goto label_1e9068;
        case 0x1e906cu: goto label_1e906c;
        case 0x1e9070u: goto label_1e9070;
        case 0x1e9074u: goto label_1e9074;
        case 0x1e9078u: goto label_1e9078;
        case 0x1e907cu: goto label_1e907c;
        case 0x1e9080u: goto label_1e9080;
        case 0x1e9084u: goto label_1e9084;
        case 0x1e9088u: goto label_1e9088;
        case 0x1e908cu: goto label_1e908c;
        case 0x1e9090u: goto label_1e9090;
        case 0x1e9094u: goto label_1e9094;
        case 0x1e9098u: goto label_1e9098;
        case 0x1e909cu: goto label_1e909c;
        case 0x1e90a0u: goto label_1e90a0;
        case 0x1e90a4u: goto label_1e90a4;
        case 0x1e90a8u: goto label_1e90a8;
        case 0x1e90acu: goto label_1e90ac;
        case 0x1e90b0u: goto label_1e90b0;
        case 0x1e90b4u: goto label_1e90b4;
        case 0x1e90b8u: goto label_1e90b8;
        case 0x1e90bcu: goto label_1e90bc;
        case 0x1e90c0u: goto label_1e90c0;
        case 0x1e90c4u: goto label_1e90c4;
        case 0x1e90c8u: goto label_1e90c8;
        case 0x1e90ccu: goto label_1e90cc;
        case 0x1e90d0u: goto label_1e90d0;
        case 0x1e90d4u: goto label_1e90d4;
        case 0x1e90d8u: goto label_1e90d8;
        case 0x1e90dcu: goto label_1e90dc;
        case 0x1e90e0u: goto label_1e90e0;
        case 0x1e90e4u: goto label_1e90e4;
        case 0x1e90e8u: goto label_1e90e8;
        case 0x1e90ecu: goto label_1e90ec;
        case 0x1e90f0u: goto label_1e90f0;
        case 0x1e90f4u: goto label_1e90f4;
        case 0x1e90f8u: goto label_1e90f8;
        case 0x1e90fcu: goto label_1e90fc;
        case 0x1e9100u: goto label_1e9100;
        case 0x1e9104u: goto label_1e9104;
        case 0x1e9108u: goto label_1e9108;
        case 0x1e910cu: goto label_1e910c;
        case 0x1e9110u: goto label_1e9110;
        case 0x1e9114u: goto label_1e9114;
        case 0x1e9118u: goto label_1e9118;
        case 0x1e911cu: goto label_1e911c;
        case 0x1e9120u: goto label_1e9120;
        case 0x1e9124u: goto label_1e9124;
        case 0x1e9128u: goto label_1e9128;
        case 0x1e912cu: goto label_1e912c;
        case 0x1e9130u: goto label_1e9130;
        case 0x1e9134u: goto label_1e9134;
        case 0x1e9138u: goto label_1e9138;
        case 0x1e913cu: goto label_1e913c;
        case 0x1e9140u: goto label_1e9140;
        case 0x1e9144u: goto label_1e9144;
        case 0x1e9148u: goto label_1e9148;
        case 0x1e914cu: goto label_1e914c;
        case 0x1e9150u: goto label_1e9150;
        case 0x1e9154u: goto label_1e9154;
        case 0x1e9158u: goto label_1e9158;
        case 0x1e915cu: goto label_1e915c;
        case 0x1e9160u: goto label_1e9160;
        case 0x1e9164u: goto label_1e9164;
        case 0x1e9168u: goto label_1e9168;
        case 0x1e916cu: goto label_1e916c;
        case 0x1e9170u: goto label_1e9170;
        case 0x1e9174u: goto label_1e9174;
        case 0x1e9178u: goto label_1e9178;
        case 0x1e917cu: goto label_1e917c;
        case 0x1e9180u: goto label_1e9180;
        case 0x1e9184u: goto label_1e9184;
        case 0x1e9188u: goto label_1e9188;
        case 0x1e918cu: goto label_1e918c;
        case 0x1e9190u: goto label_1e9190;
        case 0x1e9194u: goto label_1e9194;
        case 0x1e9198u: goto label_1e9198;
        case 0x1e919cu: goto label_1e919c;
        case 0x1e91a0u: goto label_1e91a0;
        case 0x1e91a4u: goto label_1e91a4;
        case 0x1e91a8u: goto label_1e91a8;
        case 0x1e91acu: goto label_1e91ac;
        case 0x1e91b0u: goto label_1e91b0;
        case 0x1e91b4u: goto label_1e91b4;
        case 0x1e91b8u: goto label_1e91b8;
        case 0x1e91bcu: goto label_1e91bc;
        case 0x1e91c0u: goto label_1e91c0;
        case 0x1e91c4u: goto label_1e91c4;
        case 0x1e91c8u: goto label_1e91c8;
        case 0x1e91ccu: goto label_1e91cc;
        case 0x1e91d0u: goto label_1e91d0;
        case 0x1e91d4u: goto label_1e91d4;
        case 0x1e91d8u: goto label_1e91d8;
        case 0x1e91dcu: goto label_1e91dc;
        case 0x1e91e0u: goto label_1e91e0;
        case 0x1e91e4u: goto label_1e91e4;
        case 0x1e91e8u: goto label_1e91e8;
        case 0x1e91ecu: goto label_1e91ec;
        case 0x1e91f0u: goto label_1e91f0;
        case 0x1e91f4u: goto label_1e91f4;
        case 0x1e91f8u: goto label_1e91f8;
        case 0x1e91fcu: goto label_1e91fc;
        case 0x1e9200u: goto label_1e9200;
        case 0x1e9204u: goto label_1e9204;
        case 0x1e9208u: goto label_1e9208;
        case 0x1e920cu: goto label_1e920c;
        case 0x1e9210u: goto label_1e9210;
        case 0x1e9214u: goto label_1e9214;
        case 0x1e9218u: goto label_1e9218;
        case 0x1e921cu: goto label_1e921c;
        case 0x1e9220u: goto label_1e9220;
        case 0x1e9224u: goto label_1e9224;
        case 0x1e9228u: goto label_1e9228;
        case 0x1e922cu: goto label_1e922c;
        case 0x1e9230u: goto label_1e9230;
        case 0x1e9234u: goto label_1e9234;
        case 0x1e9238u: goto label_1e9238;
        case 0x1e923cu: goto label_1e923c;
        case 0x1e9240u: goto label_1e9240;
        case 0x1e9244u: goto label_1e9244;
        case 0x1e9248u: goto label_1e9248;
        case 0x1e924cu: goto label_1e924c;
        case 0x1e9250u: goto label_1e9250;
        case 0x1e9254u: goto label_1e9254;
        case 0x1e9258u: goto label_1e9258;
        case 0x1e925cu: goto label_1e925c;
        case 0x1e9260u: goto label_1e9260;
        case 0x1e9264u: goto label_1e9264;
        case 0x1e9268u: goto label_1e9268;
        case 0x1e926cu: goto label_1e926c;
        case 0x1e9270u: goto label_1e9270;
        case 0x1e9274u: goto label_1e9274;
        case 0x1e9278u: goto label_1e9278;
        case 0x1e927cu: goto label_1e927c;
        case 0x1e9280u: goto label_1e9280;
        case 0x1e9284u: goto label_1e9284;
        case 0x1e9288u: goto label_1e9288;
        case 0x1e928cu: goto label_1e928c;
        case 0x1e9290u: goto label_1e9290;
        case 0x1e9294u: goto label_1e9294;
        case 0x1e9298u: goto label_1e9298;
        case 0x1e929cu: goto label_1e929c;
        case 0x1e92a0u: goto label_1e92a0;
        case 0x1e92a4u: goto label_1e92a4;
        case 0x1e92a8u: goto label_1e92a8;
        case 0x1e92acu: goto label_1e92ac;
        case 0x1e92b0u: goto label_1e92b0;
        case 0x1e92b4u: goto label_1e92b4;
        case 0x1e92b8u: goto label_1e92b8;
        case 0x1e92bcu: goto label_1e92bc;
        case 0x1e92c0u: goto label_1e92c0;
        case 0x1e92c4u: goto label_1e92c4;
        case 0x1e92c8u: goto label_1e92c8;
        case 0x1e92ccu: goto label_1e92cc;
        case 0x1e92d0u: goto label_1e92d0;
        case 0x1e92d4u: goto label_1e92d4;
        case 0x1e92d8u: goto label_1e92d8;
        case 0x1e92dcu: goto label_1e92dc;
        case 0x1e92e0u: goto label_1e92e0;
        case 0x1e92e4u: goto label_1e92e4;
        case 0x1e92e8u: goto label_1e92e8;
        case 0x1e92ecu: goto label_1e92ec;
        case 0x1e92f0u: goto label_1e92f0;
        case 0x1e92f4u: goto label_1e92f4;
        case 0x1e92f8u: goto label_1e92f8;
        case 0x1e92fcu: goto label_1e92fc;
        case 0x1e9300u: goto label_1e9300;
        case 0x1e9304u: goto label_1e9304;
        case 0x1e9308u: goto label_1e9308;
        case 0x1e930cu: goto label_1e930c;
        case 0x1e9310u: goto label_1e9310;
        case 0x1e9314u: goto label_1e9314;
        case 0x1e9318u: goto label_1e9318;
        case 0x1e931cu: goto label_1e931c;
        case 0x1e9320u: goto label_1e9320;
        case 0x1e9324u: goto label_1e9324;
        case 0x1e9328u: goto label_1e9328;
        case 0x1e932cu: goto label_1e932c;
        case 0x1e9330u: goto label_1e9330;
        case 0x1e9334u: goto label_1e9334;
        case 0x1e9338u: goto label_1e9338;
        case 0x1e933cu: goto label_1e933c;
        case 0x1e9340u: goto label_1e9340;
        case 0x1e9344u: goto label_1e9344;
        case 0x1e9348u: goto label_1e9348;
        case 0x1e934cu: goto label_1e934c;
        case 0x1e9350u: goto label_1e9350;
        case 0x1e9354u: goto label_1e9354;
        case 0x1e9358u: goto label_1e9358;
        case 0x1e935cu: goto label_1e935c;
        case 0x1e9360u: goto label_1e9360;
        case 0x1e9364u: goto label_1e9364;
        case 0x1e9368u: goto label_1e9368;
        case 0x1e936cu: goto label_1e936c;
        case 0x1e9370u: goto label_1e9370;
        case 0x1e9374u: goto label_1e9374;
        case 0x1e9378u: goto label_1e9378;
        case 0x1e937cu: goto label_1e937c;
        case 0x1e9380u: goto label_1e9380;
        case 0x1e9384u: goto label_1e9384;
        case 0x1e9388u: goto label_1e9388;
        case 0x1e938cu: goto label_1e938c;
        case 0x1e9390u: goto label_1e9390;
        case 0x1e9394u: goto label_1e9394;
        case 0x1e9398u: goto label_1e9398;
        case 0x1e939cu: goto label_1e939c;
        case 0x1e93a0u: goto label_1e93a0;
        case 0x1e93a4u: goto label_1e93a4;
        case 0x1e93a8u: goto label_1e93a8;
        case 0x1e93acu: goto label_1e93ac;
        case 0x1e93b0u: goto label_1e93b0;
        case 0x1e93b4u: goto label_1e93b4;
        case 0x1e93b8u: goto label_1e93b8;
        case 0x1e93bcu: goto label_1e93bc;
        case 0x1e93c0u: goto label_1e93c0;
        case 0x1e93c4u: goto label_1e93c4;
        case 0x1e93c8u: goto label_1e93c8;
        case 0x1e93ccu: goto label_1e93cc;
        case 0x1e93d0u: goto label_1e93d0;
        case 0x1e93d4u: goto label_1e93d4;
        case 0x1e93d8u: goto label_1e93d8;
        case 0x1e93dcu: goto label_1e93dc;
        case 0x1e93e0u: goto label_1e93e0;
        case 0x1e93e4u: goto label_1e93e4;
        case 0x1e93e8u: goto label_1e93e8;
        case 0x1e93ecu: goto label_1e93ec;
        case 0x1e93f0u: goto label_1e93f0;
        case 0x1e93f4u: goto label_1e93f4;
        case 0x1e93f8u: goto label_1e93f8;
        case 0x1e93fcu: goto label_1e93fc;
        case 0x1e9400u: goto label_1e9400;
        case 0x1e9404u: goto label_1e9404;
        case 0x1e9408u: goto label_1e9408;
        case 0x1e940cu: goto label_1e940c;
        case 0x1e9410u: goto label_1e9410;
        case 0x1e9414u: goto label_1e9414;
        case 0x1e9418u: goto label_1e9418;
        case 0x1e941cu: goto label_1e941c;
        case 0x1e9420u: goto label_1e9420;
        case 0x1e9424u: goto label_1e9424;
        case 0x1e9428u: goto label_1e9428;
        case 0x1e942cu: goto label_1e942c;
        case 0x1e9430u: goto label_1e9430;
        case 0x1e9434u: goto label_1e9434;
        case 0x1e9438u: goto label_1e9438;
        case 0x1e943cu: goto label_1e943c;
        case 0x1e9440u: goto label_1e9440;
        case 0x1e9444u: goto label_1e9444;
        case 0x1e9448u: goto label_1e9448;
        case 0x1e944cu: goto label_1e944c;
        case 0x1e9450u: goto label_1e9450;
        case 0x1e9454u: goto label_1e9454;
        case 0x1e9458u: goto label_1e9458;
        case 0x1e945cu: goto label_1e945c;
        case 0x1e9460u: goto label_1e9460;
        case 0x1e9464u: goto label_1e9464;
        case 0x1e9468u: goto label_1e9468;
        case 0x1e946cu: goto label_1e946c;
        case 0x1e9470u: goto label_1e9470;
        case 0x1e9474u: goto label_1e9474;
        case 0x1e9478u: goto label_1e9478;
        case 0x1e947cu: goto label_1e947c;
        case 0x1e9480u: goto label_1e9480;
        case 0x1e9484u: goto label_1e9484;
        case 0x1e9488u: goto label_1e9488;
        case 0x1e948cu: goto label_1e948c;
        case 0x1e9490u: goto label_1e9490;
        case 0x1e9494u: goto label_1e9494;
        case 0x1e9498u: goto label_1e9498;
        case 0x1e949cu: goto label_1e949c;
        case 0x1e94a0u: goto label_1e94a0;
        case 0x1e94a4u: goto label_1e94a4;
        case 0x1e94a8u: goto label_1e94a8;
        case 0x1e94acu: goto label_1e94ac;
        case 0x1e94b0u: goto label_1e94b0;
        case 0x1e94b4u: goto label_1e94b4;
        case 0x1e94b8u: goto label_1e94b8;
        case 0x1e94bcu: goto label_1e94bc;
        case 0x1e94c0u: goto label_1e94c0;
        case 0x1e94c4u: goto label_1e94c4;
        case 0x1e94c8u: goto label_1e94c8;
        case 0x1e94ccu: goto label_1e94cc;
        case 0x1e94d0u: goto label_1e94d0;
        case 0x1e94d4u: goto label_1e94d4;
        case 0x1e94d8u: goto label_1e94d8;
        case 0x1e94dcu: goto label_1e94dc;
        case 0x1e94e0u: goto label_1e94e0;
        case 0x1e94e4u: goto label_1e94e4;
        case 0x1e94e8u: goto label_1e94e8;
        case 0x1e94ecu: goto label_1e94ec;
        case 0x1e94f0u: goto label_1e94f0;
        case 0x1e94f4u: goto label_1e94f4;
        case 0x1e94f8u: goto label_1e94f8;
        case 0x1e94fcu: goto label_1e94fc;
        case 0x1e9500u: goto label_1e9500;
        case 0x1e9504u: goto label_1e9504;
        case 0x1e9508u: goto label_1e9508;
        case 0x1e950cu: goto label_1e950c;
        case 0x1e9510u: goto label_1e9510;
        case 0x1e9514u: goto label_1e9514;
        case 0x1e9518u: goto label_1e9518;
        case 0x1e951cu: goto label_1e951c;
        case 0x1e9520u: goto label_1e9520;
        case 0x1e9524u: goto label_1e9524;
        case 0x1e9528u: goto label_1e9528;
        case 0x1e952cu: goto label_1e952c;
        case 0x1e9530u: goto label_1e9530;
        case 0x1e9534u: goto label_1e9534;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e953cu: goto label_1e953c;
        case 0x1e9540u: goto label_1e9540;
        case 0x1e9544u: goto label_1e9544;
        case 0x1e9548u: goto label_1e9548;
        case 0x1e954cu: goto label_1e954c;
        case 0x1e9550u: goto label_1e9550;
        case 0x1e9554u: goto label_1e9554;
        case 0x1e9558u: goto label_1e9558;
        case 0x1e955cu: goto label_1e955c;
        case 0x1e9560u: goto label_1e9560;
        case 0x1e9564u: goto label_1e9564;
        case 0x1e9568u: goto label_1e9568;
        case 0x1e956cu: goto label_1e956c;
        case 0x1e9570u: goto label_1e9570;
        case 0x1e9574u: goto label_1e9574;
        case 0x1e9578u: goto label_1e9578;
        case 0x1e957cu: goto label_1e957c;
        case 0x1e9580u: goto label_1e9580;
        case 0x1e9584u: goto label_1e9584;
        case 0x1e9588u: goto label_1e9588;
        case 0x1e958cu: goto label_1e958c;
        case 0x1e9590u: goto label_1e9590;
        case 0x1e9594u: goto label_1e9594;
        case 0x1e9598u: goto label_1e9598;
        case 0x1e959cu: goto label_1e959c;
        case 0x1e95a0u: goto label_1e95a0;
        case 0x1e95a4u: goto label_1e95a4;
        case 0x1e95a8u: goto label_1e95a8;
        case 0x1e95acu: goto label_1e95ac;
        case 0x1e95b0u: goto label_1e95b0;
        case 0x1e95b4u: goto label_1e95b4;
        case 0x1e95b8u: goto label_1e95b8;
        case 0x1e95bcu: goto label_1e95bc;
        case 0x1e95c0u: goto label_1e95c0;
        case 0x1e95c4u: goto label_1e95c4;
        case 0x1e95c8u: goto label_1e95c8;
        case 0x1e95ccu: goto label_1e95cc;
        case 0x1e95d0u: goto label_1e95d0;
        case 0x1e95d4u: goto label_1e95d4;
        case 0x1e95d8u: goto label_1e95d8;
        case 0x1e95dcu: goto label_1e95dc;
        case 0x1e95e0u: goto label_1e95e0;
        case 0x1e95e4u: goto label_1e95e4;
        case 0x1e95e8u: goto label_1e95e8;
        case 0x1e95ecu: goto label_1e95ec;
        case 0x1e95f0u: goto label_1e95f0;
        case 0x1e95f4u: goto label_1e95f4;
        case 0x1e95f8u: goto label_1e95f8;
        case 0x1e95fcu: goto label_1e95fc;
        case 0x1e9600u: goto label_1e9600;
        case 0x1e9604u: goto label_1e9604;
        case 0x1e9608u: goto label_1e9608;
        case 0x1e960cu: goto label_1e960c;
        case 0x1e9610u: goto label_1e9610;
        case 0x1e9614u: goto label_1e9614;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e961cu: goto label_1e961c;
        case 0x1e9620u: goto label_1e9620;
        case 0x1e9624u: goto label_1e9624;
        case 0x1e9628u: goto label_1e9628;
        case 0x1e962cu: goto label_1e962c;
        case 0x1e9630u: goto label_1e9630;
        case 0x1e9634u: goto label_1e9634;
        case 0x1e9638u: goto label_1e9638;
        case 0x1e963cu: goto label_1e963c;
        case 0x1e9640u: goto label_1e9640;
        case 0x1e9644u: goto label_1e9644;
        case 0x1e9648u: goto label_1e9648;
        case 0x1e964cu: goto label_1e964c;
        case 0x1e9650u: goto label_1e9650;
        case 0x1e9654u: goto label_1e9654;
        case 0x1e9658u: goto label_1e9658;
        case 0x1e965cu: goto label_1e965c;
        case 0x1e9660u: goto label_1e9660;
        case 0x1e9664u: goto label_1e9664;
        case 0x1e9668u: goto label_1e9668;
        case 0x1e966cu: goto label_1e966c;
        case 0x1e9670u: goto label_1e9670;
        case 0x1e9674u: goto label_1e9674;
        case 0x1e9678u: goto label_1e9678;
        case 0x1e967cu: goto label_1e967c;
        case 0x1e9680u: goto label_1e9680;
        case 0x1e9684u: goto label_1e9684;
        case 0x1e9688u: goto label_1e9688;
        case 0x1e968cu: goto label_1e968c;
        case 0x1e9690u: goto label_1e9690;
        case 0x1e9694u: goto label_1e9694;
        case 0x1e9698u: goto label_1e9698;
        case 0x1e969cu: goto label_1e969c;
        case 0x1e96a0u: goto label_1e96a0;
        case 0x1e96a4u: goto label_1e96a4;
        case 0x1e96a8u: goto label_1e96a8;
        case 0x1e96acu: goto label_1e96ac;
        case 0x1e96b0u: goto label_1e96b0;
        case 0x1e96b4u: goto label_1e96b4;
        case 0x1e96b8u: goto label_1e96b8;
        case 0x1e96bcu: goto label_1e96bc;
        case 0x1e96c0u: goto label_1e96c0;
        case 0x1e96c4u: goto label_1e96c4;
        case 0x1e96c8u: goto label_1e96c8;
        case 0x1e96ccu: goto label_1e96cc;
        case 0x1e96d0u: goto label_1e96d0;
        case 0x1e96d4u: goto label_1e96d4;
        case 0x1e96d8u: goto label_1e96d8;
        case 0x1e96dcu: goto label_1e96dc;
        case 0x1e96e0u: goto label_1e96e0;
        case 0x1e96e4u: goto label_1e96e4;
        case 0x1e96e8u: goto label_1e96e8;
        case 0x1e96ecu: goto label_1e96ec;
        case 0x1e96f0u: goto label_1e96f0;
        case 0x1e96f4u: goto label_1e96f4;
        case 0x1e96f8u: goto label_1e96f8;
        case 0x1e96fcu: goto label_1e96fc;
        case 0x1e9700u: goto label_1e9700;
        case 0x1e9704u: goto label_1e9704;
        case 0x1e9708u: goto label_1e9708;
        case 0x1e970cu: goto label_1e970c;
        case 0x1e9710u: goto label_1e9710;
        case 0x1e9714u: goto label_1e9714;
        case 0x1e9718u: goto label_1e9718;
        case 0x1e971cu: goto label_1e971c;
        case 0x1e9720u: goto label_1e9720;
        case 0x1e9724u: goto label_1e9724;
        case 0x1e9728u: goto label_1e9728;
        case 0x1e972cu: goto label_1e972c;
        case 0x1e9730u: goto label_1e9730;
        case 0x1e9734u: goto label_1e9734;
        case 0x1e9738u: goto label_1e9738;
        case 0x1e973cu: goto label_1e973c;
        case 0x1e9740u: goto label_1e9740;
        case 0x1e9744u: goto label_1e9744;
        case 0x1e9748u: goto label_1e9748;
        case 0x1e974cu: goto label_1e974c;
        case 0x1e9750u: goto label_1e9750;
        case 0x1e9754u: goto label_1e9754;
        case 0x1e9758u: goto label_1e9758;
        case 0x1e975cu: goto label_1e975c;
        case 0x1e9760u: goto label_1e9760;
        case 0x1e9764u: goto label_1e9764;
        case 0x1e9768u: goto label_1e9768;
        case 0x1e976cu: goto label_1e976c;
        case 0x1e9770u: goto label_1e9770;
        case 0x1e9774u: goto label_1e9774;
        case 0x1e9778u: goto label_1e9778;
        case 0x1e977cu: goto label_1e977c;
        case 0x1e9780u: goto label_1e9780;
        case 0x1e9784u: goto label_1e9784;
        case 0x1e9788u: goto label_1e9788;
        case 0x1e978cu: goto label_1e978c;
        case 0x1e9790u: goto label_1e9790;
        case 0x1e9794u: goto label_1e9794;
        case 0x1e9798u: goto label_1e9798;
        case 0x1e979cu: goto label_1e979c;
        case 0x1e97a0u: goto label_1e97a0;
        case 0x1e97a4u: goto label_1e97a4;
        case 0x1e97a8u: goto label_1e97a8;
        case 0x1e97acu: goto label_1e97ac;
        case 0x1e97b0u: goto label_1e97b0;
        case 0x1e97b4u: goto label_1e97b4;
        case 0x1e97b8u: goto label_1e97b8;
        case 0x1e97bcu: goto label_1e97bc;
        case 0x1e97c0u: goto label_1e97c0;
        case 0x1e97c4u: goto label_1e97c4;
        case 0x1e97c8u: goto label_1e97c8;
        case 0x1e97ccu: goto label_1e97cc;
        case 0x1e97d0u: goto label_1e97d0;
        case 0x1e97d4u: goto label_1e97d4;
        case 0x1e97d8u: goto label_1e97d8;
        case 0x1e97dcu: goto label_1e97dc;
        case 0x1e97e0u: goto label_1e97e0;
        case 0x1e97e4u: goto label_1e97e4;
        case 0x1e97e8u: goto label_1e97e8;
        case 0x1e97ecu: goto label_1e97ec;
        case 0x1e97f0u: goto label_1e97f0;
        case 0x1e97f4u: goto label_1e97f4;
        case 0x1e97f8u: goto label_1e97f8;
        case 0x1e97fcu: goto label_1e97fc;
        case 0x1e9800u: goto label_1e9800;
        case 0x1e9804u: goto label_1e9804;
        case 0x1e9808u: goto label_1e9808;
        case 0x1e980cu: goto label_1e980c;
        case 0x1e9810u: goto label_1e9810;
        case 0x1e9814u: goto label_1e9814;
        case 0x1e9818u: goto label_1e9818;
        case 0x1e981cu: goto label_1e981c;
        case 0x1e9820u: goto label_1e9820;
        case 0x1e9824u: goto label_1e9824;
        case 0x1e9828u: goto label_1e9828;
        case 0x1e982cu: goto label_1e982c;
        case 0x1e9830u: goto label_1e9830;
        case 0x1e9834u: goto label_1e9834;
        case 0x1e9838u: goto label_1e9838;
        case 0x1e983cu: goto label_1e983c;
        case 0x1e9840u: goto label_1e9840;
        case 0x1e9844u: goto label_1e9844;
        case 0x1e9848u: goto label_1e9848;
        case 0x1e984cu: goto label_1e984c;
        case 0x1e9850u: goto label_1e9850;
        case 0x1e9854u: goto label_1e9854;
        case 0x1e9858u: goto label_1e9858;
        case 0x1e985cu: goto label_1e985c;
        case 0x1e9860u: goto label_1e9860;
        case 0x1e9864u: goto label_1e9864;
        case 0x1e9868u: goto label_1e9868;
        case 0x1e986cu: goto label_1e986c;
        case 0x1e9870u: goto label_1e9870;
        case 0x1e9874u: goto label_1e9874;
        case 0x1e9878u: goto label_1e9878;
        case 0x1e987cu: goto label_1e987c;
        case 0x1e9880u: goto label_1e9880;
        case 0x1e9884u: goto label_1e9884;
        case 0x1e9888u: goto label_1e9888;
        case 0x1e988cu: goto label_1e988c;
        case 0x1e9890u: goto label_1e9890;
        case 0x1e9894u: goto label_1e9894;
        case 0x1e9898u: goto label_1e9898;
        case 0x1e989cu: goto label_1e989c;
        case 0x1e98a0u: goto label_1e98a0;
        case 0x1e98a4u: goto label_1e98a4;
        case 0x1e98a8u: goto label_1e98a8;
        case 0x1e98acu: goto label_1e98ac;
        case 0x1e98b0u: goto label_1e98b0;
        case 0x1e98b4u: goto label_1e98b4;
        case 0x1e98b8u: goto label_1e98b8;
        case 0x1e98bcu: goto label_1e98bc;
        case 0x1e98c0u: goto label_1e98c0;
        case 0x1e98c4u: goto label_1e98c4;
        case 0x1e98c8u: goto label_1e98c8;
        case 0x1e98ccu: goto label_1e98cc;
        case 0x1e98d0u: goto label_1e98d0;
        case 0x1e98d4u: goto label_1e98d4;
        case 0x1e98d8u: goto label_1e98d8;
        case 0x1e98dcu: goto label_1e98dc;
        case 0x1e98e0u: goto label_1e98e0;
        case 0x1e98e4u: goto label_1e98e4;
        case 0x1e98e8u: goto label_1e98e8;
        case 0x1e98ecu: goto label_1e98ec;
        case 0x1e98f0u: goto label_1e98f0;
        case 0x1e98f4u: goto label_1e98f4;
        case 0x1e98f8u: goto label_1e98f8;
        case 0x1e98fcu: goto label_1e98fc;
        case 0x1e9900u: goto label_1e9900;
        case 0x1e9904u: goto label_1e9904;
        case 0x1e9908u: goto label_1e9908;
        case 0x1e990cu: goto label_1e990c;
        case 0x1e9910u: goto label_1e9910;
        case 0x1e9914u: goto label_1e9914;
        case 0x1e9918u: goto label_1e9918;
        case 0x1e991cu: goto label_1e991c;
        case 0x1e9920u: goto label_1e9920;
        case 0x1e9924u: goto label_1e9924;
        case 0x1e9928u: goto label_1e9928;
        case 0x1e992cu: goto label_1e992c;
        case 0x1e9930u: goto label_1e9930;
        case 0x1e9934u: goto label_1e9934;
        case 0x1e9938u: goto label_1e9938;
        case 0x1e993cu: goto label_1e993c;
        case 0x1e9940u: goto label_1e9940;
        case 0x1e9944u: goto label_1e9944;
        case 0x1e9948u: goto label_1e9948;
        case 0x1e994cu: goto label_1e994c;
        case 0x1e9950u: goto label_1e9950;
        case 0x1e9954u: goto label_1e9954;
        case 0x1e9958u: goto label_1e9958;
        case 0x1e995cu: goto label_1e995c;
        case 0x1e9960u: goto label_1e9960;
        case 0x1e9964u: goto label_1e9964;
        case 0x1e9968u: goto label_1e9968;
        case 0x1e996cu: goto label_1e996c;
        case 0x1e9970u: goto label_1e9970;
        case 0x1e9974u: goto label_1e9974;
        case 0x1e9978u: goto label_1e9978;
        case 0x1e997cu: goto label_1e997c;
        case 0x1e9980u: goto label_1e9980;
        case 0x1e9984u: goto label_1e9984;
        case 0x1e9988u: goto label_1e9988;
        case 0x1e998cu: goto label_1e998c;
        case 0x1e9990u: goto label_1e9990;
        case 0x1e9994u: goto label_1e9994;
        case 0x1e9998u: goto label_1e9998;
        case 0x1e999cu: goto label_1e999c;
        case 0x1e99a0u: goto label_1e99a0;
        case 0x1e99a4u: goto label_1e99a4;
        case 0x1e99a8u: goto label_1e99a8;
        case 0x1e99acu: goto label_1e99ac;
        case 0x1e99b0u: goto label_1e99b0;
        case 0x1e99b4u: goto label_1e99b4;
        case 0x1e99b8u: goto label_1e99b8;
        case 0x1e99bcu: goto label_1e99bc;
        case 0x1e99c0u: goto label_1e99c0;
        case 0x1e99c4u: goto label_1e99c4;
        case 0x1e99c8u: goto label_1e99c8;
        case 0x1e99ccu: goto label_1e99cc;
        case 0x1e99d0u: goto label_1e99d0;
        case 0x1e99d4u: goto label_1e99d4;
        case 0x1e99d8u: goto label_1e99d8;
        case 0x1e99dcu: goto label_1e99dc;
        case 0x1e99e0u: goto label_1e99e0;
        case 0x1e99e4u: goto label_1e99e4;
        case 0x1e99e8u: goto label_1e99e8;
        case 0x1e99ecu: goto label_1e99ec;
        case 0x1e99f0u: goto label_1e99f0;
        case 0x1e99f4u: goto label_1e99f4;
        case 0x1e99f8u: goto label_1e99f8;
        case 0x1e99fcu: goto label_1e99fc;
        case 0x1e9a00u: goto label_1e9a00;
        case 0x1e9a04u: goto label_1e9a04;
        case 0x1e9a08u: goto label_1e9a08;
        case 0x1e9a0cu: goto label_1e9a0c;
        case 0x1e9a10u: goto label_1e9a10;
        case 0x1e9a14u: goto label_1e9a14;
        case 0x1e9a18u: goto label_1e9a18;
        case 0x1e9a1cu: goto label_1e9a1c;
        case 0x1e9a20u: goto label_1e9a20;
        case 0x1e9a24u: goto label_1e9a24;
        case 0x1e9a28u: goto label_1e9a28;
        case 0x1e9a2cu: goto label_1e9a2c;
        case 0x1e9a30u: goto label_1e9a30;
        case 0x1e9a34u: goto label_1e9a34;
        case 0x1e9a38u: goto label_1e9a38;
        case 0x1e9a3cu: goto label_1e9a3c;
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9a44u: goto label_1e9a44;
        case 0x1e9a48u: goto label_1e9a48;
        case 0x1e9a4cu: goto label_1e9a4c;
        case 0x1e9a50u: goto label_1e9a50;
        case 0x1e9a54u: goto label_1e9a54;
        case 0x1e9a58u: goto label_1e9a58;
        case 0x1e9a5cu: goto label_1e9a5c;
        case 0x1e9a60u: goto label_1e9a60;
        case 0x1e9a64u: goto label_1e9a64;
        case 0x1e9a68u: goto label_1e9a68;
        case 0x1e9a6cu: goto label_1e9a6c;
        case 0x1e9a70u: goto label_1e9a70;
        case 0x1e9a74u: goto label_1e9a74;
        case 0x1e9a78u: goto label_1e9a78;
        case 0x1e9a7cu: goto label_1e9a7c;
        case 0x1e9a80u: goto label_1e9a80;
        case 0x1e9a84u: goto label_1e9a84;
        case 0x1e9a88u: goto label_1e9a88;
        case 0x1e9a8cu: goto label_1e9a8c;
        case 0x1e9a90u: goto label_1e9a90;
        case 0x1e9a94u: goto label_1e9a94;
        case 0x1e9a98u: goto label_1e9a98;
        case 0x1e9a9cu: goto label_1e9a9c;
        case 0x1e9aa0u: goto label_1e9aa0;
        case 0x1e9aa4u: goto label_1e9aa4;
        case 0x1e9aa8u: goto label_1e9aa8;
        case 0x1e9aacu: goto label_1e9aac;
        case 0x1e9ab0u: goto label_1e9ab0;
        case 0x1e9ab4u: goto label_1e9ab4;
        case 0x1e9ab8u: goto label_1e9ab8;
        case 0x1e9abcu: goto label_1e9abc;
        case 0x1e9ac0u: goto label_1e9ac0;
        case 0x1e9ac4u: goto label_1e9ac4;
        case 0x1e9ac8u: goto label_1e9ac8;
        case 0x1e9accu: goto label_1e9acc;
        case 0x1e9ad0u: goto label_1e9ad0;
        case 0x1e9ad4u: goto label_1e9ad4;
        case 0x1e9ad8u: goto label_1e9ad8;
        case 0x1e9adcu: goto label_1e9adc;
        case 0x1e9ae0u: goto label_1e9ae0;
        case 0x1e9ae4u: goto label_1e9ae4;
        case 0x1e9ae8u: goto label_1e9ae8;
        case 0x1e9aecu: goto label_1e9aec;
        case 0x1e9af0u: goto label_1e9af0;
        case 0x1e9af4u: goto label_1e9af4;
        case 0x1e9af8u: goto label_1e9af8;
        case 0x1e9afcu: goto label_1e9afc;
        case 0x1e9b00u: goto label_1e9b00;
        case 0x1e9b04u: goto label_1e9b04;
        case 0x1e9b08u: goto label_1e9b08;
        case 0x1e9b0cu: goto label_1e9b0c;
        case 0x1e9b10u: goto label_1e9b10;
        case 0x1e9b14u: goto label_1e9b14;
        case 0x1e9b18u: goto label_1e9b18;
        case 0x1e9b1cu: goto label_1e9b1c;
        case 0x1e9b20u: goto label_1e9b20;
        case 0x1e9b24u: goto label_1e9b24;
        case 0x1e9b28u: goto label_1e9b28;
        case 0x1e9b2cu: goto label_1e9b2c;
        case 0x1e9b30u: goto label_1e9b30;
        case 0x1e9b34u: goto label_1e9b34;
        case 0x1e9b38u: goto label_1e9b38;
        case 0x1e9b3cu: goto label_1e9b3c;
        case 0x1e9b40u: goto label_1e9b40;
        case 0x1e9b44u: goto label_1e9b44;
        case 0x1e9b48u: goto label_1e9b48;
        case 0x1e9b4cu: goto label_1e9b4c;
        case 0x1e9b50u: goto label_1e9b50;
        case 0x1e9b54u: goto label_1e9b54;
        case 0x1e9b58u: goto label_1e9b58;
        case 0x1e9b5cu: goto label_1e9b5c;
        case 0x1e9b60u: goto label_1e9b60;
        case 0x1e9b64u: goto label_1e9b64;
        case 0x1e9b68u: goto label_1e9b68;
        case 0x1e9b6cu: goto label_1e9b6c;
        case 0x1e9b70u: goto label_1e9b70;
        case 0x1e9b74u: goto label_1e9b74;
        case 0x1e9b78u: goto label_1e9b78;
        case 0x1e9b7cu: goto label_1e9b7c;
        case 0x1e9b80u: goto label_1e9b80;
        case 0x1e9b84u: goto label_1e9b84;
        case 0x1e9b88u: goto label_1e9b88;
        case 0x1e9b8cu: goto label_1e9b8c;
        case 0x1e9b90u: goto label_1e9b90;
        case 0x1e9b94u: goto label_1e9b94;
        case 0x1e9b98u: goto label_1e9b98;
        case 0x1e9b9cu: goto label_1e9b9c;
        case 0x1e9ba0u: goto label_1e9ba0;
        case 0x1e9ba4u: goto label_1e9ba4;
        case 0x1e9ba8u: goto label_1e9ba8;
        case 0x1e9bacu: goto label_1e9bac;
        case 0x1e9bb0u: goto label_1e9bb0;
        case 0x1e9bb4u: goto label_1e9bb4;
        case 0x1e9bb8u: goto label_1e9bb8;
        case 0x1e9bbcu: goto label_1e9bbc;
        case 0x1e9bc0u: goto label_1e9bc0;
        case 0x1e9bc4u: goto label_1e9bc4;
        case 0x1e9bc8u: goto label_1e9bc8;
        case 0x1e9bccu: goto label_1e9bcc;
        case 0x1e9bd0u: goto label_1e9bd0;
        case 0x1e9bd4u: goto label_1e9bd4;
        case 0x1e9bd8u: goto label_1e9bd8;
        case 0x1e9bdcu: goto label_1e9bdc;
        case 0x1e9be0u: goto label_1e9be0;
        case 0x1e9be4u: goto label_1e9be4;
        case 0x1e9be8u: goto label_1e9be8;
        case 0x1e9becu: goto label_1e9bec;
        case 0x1e9bf0u: goto label_1e9bf0;
        case 0x1e9bf4u: goto label_1e9bf4;
        case 0x1e9bf8u: goto label_1e9bf8;
        case 0x1e9bfcu: goto label_1e9bfc;
        case 0x1e9c00u: goto label_1e9c00;
        case 0x1e9c04u: goto label_1e9c04;
        case 0x1e9c08u: goto label_1e9c08;
        case 0x1e9c0cu: goto label_1e9c0c;
        case 0x1e9c10u: goto label_1e9c10;
        case 0x1e9c14u: goto label_1e9c14;
        case 0x1e9c18u: goto label_1e9c18;
        case 0x1e9c1cu: goto label_1e9c1c;
        case 0x1e9c20u: goto label_1e9c20;
        case 0x1e9c24u: goto label_1e9c24;
        case 0x1e9c28u: goto label_1e9c28;
        case 0x1e9c2cu: goto label_1e9c2c;
        case 0x1e9c30u: goto label_1e9c30;
        case 0x1e9c34u: goto label_1e9c34;
        case 0x1e9c38u: goto label_1e9c38;
        case 0x1e9c3cu: goto label_1e9c3c;
        case 0x1e9c40u: goto label_1e9c40;
        case 0x1e9c44u: goto label_1e9c44;
        case 0x1e9c48u: goto label_1e9c48;
        case 0x1e9c4cu: goto label_1e9c4c;
        default: break;
    }

    ctx->pc = 0x1e8860u;

label_1e8860:
    // 0x1e8860: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1e8860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1e8864:
    // 0x1e8864: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1e8864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_1e8868:
    // 0x1e8868: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e886c:
    // 0x1e886c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8870:
    // 0x1e8870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8874:
    // 0x1e8874: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8878:
    // 0x1e8878: 0xafa40198  sw          $a0, 0x198($sp)
    ctx->pc = 0x1e8878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
label_1e887c:
    // 0x1e887c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1e887cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1e8880:
    // 0x1e8880: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_1e8884:
    // 0x1e8884: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e8884u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e8888:
    // 0x1e8888: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e888c:
    // 0x1e888c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1e888cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e8890:
    // 0x1e8890: 0x30830800  andi        $v1, $a0, 0x800
    ctx->pc = 0x1e8890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_1e8894:
    // 0x1e8894: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1e8898:
    if (ctx->pc == 0x1E8898u) {
        ctx->pc = 0x1E889Cu;
        goto label_1e889c;
    }
    ctx->pc = 0x1E8894u;
    {
        const bool branch_taken_0x1e8894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8894) {
            ctx->pc = 0x1E8908u;
            goto label_1e8908;
        }
    }
    ctx->pc = 0x1E889Cu;
label_1e889c:
    // 0x1e889c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e88a0:
    // 0x1e88a0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1e88a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1e88a4:
    // 0x1e88a4: 0x3c06469c  lui         $a2, 0x469C
    ctx->pc = 0x1e88a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18076 << 16));
label_1e88a8:
    // 0x1e88a8: 0x34c44000  ori         $a0, $a2, 0x4000
    ctx->pc = 0x1e88a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_1e88ac:
    // 0x1e88ac: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1e88acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e88b0:
    // 0x1e88b0: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1e88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1e88b4:
    // 0x1e88b4: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1e88b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1e88b8:
    // 0x1e88b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e88b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e88bc:
    // 0x1e88bc: 0xc067b18  jal         func_19EC60
label_1e88c0:
    if (ctx->pc == 0x1E88C0u) {
        ctx->pc = 0x1E88C4u;
        goto label_1e88c4;
    }
    ctx->pc = 0x1E88BCu;
    SET_GPR_U32(ctx, 31, 0x1E88C4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E88BCu, 0x1E88C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88C4u;
label_1e88c4:
    // 0x1e88c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e88c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e88c8:
    // 0x1e88c8: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e88c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e88cc:
    // 0x1e88cc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1e88ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e88d0:
    // 0x1e88d0: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x1e88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_1e88d4:
    // 0x1e88d4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1e88d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1e88d8:
    // 0x1e88d8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e88dc:
    // 0x1e88dc: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e88dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e88e0:
    // 0x1e88e0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e88e4:
    // 0x1e88e4: 0x8c720030  lw          $s2, 0x30($v1)
    ctx->pc = 0x1e88e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1e88e8:
    // 0x1e88e8: 0x3650c000  ori         $s0, $s2, 0xC000
    ctx->pc = 0x1e88e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49152);
label_1e88ec:
    // 0x1e88ec: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x1e88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
label_1e88f0:
    // 0x1e88f0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e88f4:
    // 0x1e88f4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1e88f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e88f8:
    // 0x1e88f8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1e88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1e88fc:
    // 0x1e88fc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1e88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1e8900:
    // 0x1e8900: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e8900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1e8904:
    // 0x1e8904: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1e8904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_1e8908:
    // 0x1e8908: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e890c:
    // 0x1e890c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x1e890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
label_1e8910:
    // 0x1e8910: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1e8914:
    if (ctx->pc == 0x1E8914u) {
        ctx->pc = 0x1E8918u;
        goto label_1e8918;
    }
    ctx->pc = 0x1E8910u;
    {
        const bool branch_taken_0x1e8910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8910) {
            ctx->pc = 0x1E8928u;
            goto label_1e8928;
        }
    }
    ctx->pc = 0x1E8918u;
label_1e8918:
    // 0x1e8918: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e891c:
    // 0x1e891c: 0xa46011f4  sh          $zero, 0x11F4($v1)
    ctx->pc = 0x1e891cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4596), (uint16_t)GPR_U32(ctx, 0));
label_1e8920:
    // 0x1e8920: 0x100004c3  b           . + 4 + (0x4C3 << 2)
label_1e8924:
    if (ctx->pc == 0x1E8924u) {
        ctx->pc = 0x1E8928u;
        goto label_1e8928;
    }
    ctx->pc = 0x1E8920u;
    {
        const bool branch_taken_0x1e8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8920) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E8928u;
label_1e8928:
    // 0x1e8928: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e8928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e892c:
    // 0x1e892c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1e892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1e8930:
    // 0x1e8930: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1e8930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1e8934:
    // 0x1e8934: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_1e8938:
    if (ctx->pc == 0x1E8938u) {
        ctx->pc = 0x1E893Cu;
        goto label_1e893c;
    }
    ctx->pc = 0x1E8934u;
    {
        const bool branch_taken_0x1e8934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8934) {
            ctx->pc = 0x1E8A00u;
            goto label_1e8a00;
        }
    }
    ctx->pc = 0x1E893Cu;
label_1e893c:
    // 0x1e893c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8940:
    // 0x1e8940: 0x946411f4  lhu         $a0, 0x11F4($v1)
    ctx->pc = 0x1e8940u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_1e8944:
    // 0x1e8944: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e8944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1e8948:
    // 0x1e8948: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1e894c:
    if (ctx->pc == 0x1E894Cu) {
        ctx->pc = 0x1E8950u;
        goto label_1e8950;
    }
    ctx->pc = 0x1E8948u;
    {
        const bool branch_taken_0x1e8948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8948) {
            ctx->pc = 0x1E89ACu;
            goto label_1e89ac;
        }
    }
    ctx->pc = 0x1E8950u;
label_1e8950:
    // 0x1e8950: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8954:
    // 0x1e8954: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x1e8954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
label_1e8958:
    // 0x1e8958: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1e8958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1e895c:
    // 0x1e895c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e895cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1e8960:
    // 0x1e8960: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e8960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e8964:
    // 0x1e8964: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e8964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1e8968:
    // 0x1e8968: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x1e8968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1e896c:
    // 0x1e896c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1e896cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e8970:
    // 0x1e8970: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1e8970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1e8974:
    // 0x1e8974: 0x0  nop
    ctx->pc = 0x1e8974u;
    // NOP
label_1e8978:
    // 0x1e8978: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8978u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e897c:
    // 0x1e897c: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x1e897cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_1e8980:
    // 0x1e8980: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e8984:
    // 0x1e8984: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1e8984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e8988:
    // 0x1e8988: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1e8988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_1e898c:
    // 0x1e898c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e898cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e8990:
    // 0x1e8990: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1e8994:
    // 0x1e8994: 0x8424ef68  lh          $a0, -0x1098($at)
    ctx->pc = 0x1e8994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_1e8998:
    // 0x1e8998: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1e8998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e899c:
    // 0x1e899c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1e89a0:
    // 0x1e89a0: 0xa426ef68  sh          $a2, -0x1098($at)
    ctx->pc = 0x1e89a0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 6));
label_1e89a4:
    // 0x1e89a4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1e89a8:
    if (ctx->pc == 0x1E89A8u) {
        ctx->pc = 0x1E89ACu;
        goto label_1e89ac;
    }
    ctx->pc = 0x1E89A4u;
    {
        const bool branch_taken_0x1e89a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e89a4) {
            ctx->pc = 0x1E8A00u;
            goto label_1e8a00;
        }
    }
    ctx->pc = 0x1E89ACu;
label_1e89ac:
    // 0x1e89ac: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e89acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e89b0:
    // 0x1e89b0: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x1e89b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
label_1e89b4:
    // 0x1e89b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e89b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e89b8:
    // 0x1e89b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e89b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e89bc:
    // 0x1e89bc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e89c0:
    // 0x1e89c0: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1e89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_1e89c4:
    // 0x1e89c4: 0x34826667  ori         $v0, $a0, 0x6667
    ctx->pc = 0x1e89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_1e89c8:
    // 0x1e89c8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1e89c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e89cc:
    // 0x1e89cc: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x1e89ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1e89d0:
    // 0x1e89d0: 0x0  nop
    ctx->pc = 0x1e89d0u;
    // NOP
label_1e89d4:
    // 0x1e89d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e89d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e89d8:
    // 0x1e89d8: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e89d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e89dc:
    // 0x1e89dc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1e89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e89e0:
    // 0x1e89e0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e89e4:
    // 0x1e89e4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1e89e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_1e89e8:
    // 0x1e89e8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1e89e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1e89ec:
    // 0x1e89ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e89ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1e89f0:
    // 0x1e89f0: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x1e89f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_1e89f4:
    // 0x1e89f4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1e89f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e89f8:
    // 0x1e89f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e89f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1e89fc:
    // 0x1e89fc: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x1e89fcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 4));
label_1e8a00:
    // 0x1e8a00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1e8a04:
    // 0x1e8a04: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x1e8a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_1e8a08:
    // 0x1e8a08: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1e8a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1e8a0c:
    // 0x1e8a0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e8a0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1e8a10:
    // 0x1e8a10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1e8a14:
    // 0x1e8a14: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x1e8a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963050)));
label_1e8a18:
    // 0x1e8a18: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1e8a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_1e8a1c:
    // 0x1e8a1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e8a1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e8a20:
    // 0x1e8a20: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1e8a20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e8a24:
    // 0x1e8a24: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1e8a28:
    if (ctx->pc == 0x1E8A28u) {
        ctx->pc = 0x1E8A2Cu;
        goto label_1e8a2c;
    }
    ctx->pc = 0x1E8A24u;
    {
        const bool branch_taken_0x1e8a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a24) {
            ctx->pc = 0x1E8A3Cu;
            goto label_1e8a3c;
        }
    }
    ctx->pc = 0x1E8A2Cu;
label_1e8a2c:
    // 0x1e8a2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1e8a30:
    // 0x1e8a30: 0x8424ef6a  lh          $a0, -0x1096($at)
    ctx->pc = 0x1e8a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963050)));
label_1e8a34:
    // 0x1e8a34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1e8a38:
    // 0x1e8a38: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x1e8a38u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 4));
label_1e8a3c:
    // 0x1e8a3c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8a40:
    // 0x1e8a40: 0x8c511210  lw          $s1, 0x1210($v0)
    ctx->pc = 0x1e8a40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
label_1e8a44:
    // 0x1e8a44: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8a48:
    // 0x1e8a48: 0x904211f0  lbu         $v0, 0x11F0($v0)
    ctx->pc = 0x1e8a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4592)));
label_1e8a4c:
    // 0x1e8a4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e8a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e8a50:
    // 0x1e8a50: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e8a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1e8a54:
    // 0x1e8a54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e8a58:
    if (ctx->pc == 0x1E8A58u) {
        ctx->pc = 0x1E8A5Cu;
        goto label_1e8a5c;
    }
    ctx->pc = 0x1E8A54u;
    {
        const bool branch_taken_0x1e8a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a54) {
            ctx->pc = 0x1E8A88u;
            goto label_1e8a88;
        }
    }
    ctx->pc = 0x1E8A5Cu;
label_1e8a5c:
    // 0x1e8a5c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8a60:
    // 0x1e8a60: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1e8a64:
    // 0x1e8a64: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1e8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1e8a68:
    // 0x1e8a68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e8a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1e8a6c:
    // 0x1e8a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e8a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8a70:
    // 0x1e8a70: 0x2404030a  addiu       $a0, $zero, 0x30A
    ctx->pc = 0x1e8a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
label_1e8a74:
    // 0x1e8a74: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1e8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1e8a78:
    // 0x1e8a78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e8a78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8a7c:
    // 0x1e8a7c: 0xc067b18  jal         func_19EC60
label_1e8a80:
    if (ctx->pc == 0x1E8A80u) {
        ctx->pc = 0x1E8A84u;
        goto label_1e8a84;
    }
    ctx->pc = 0x1E8A7Cu;
    SET_GPR_U32(ctx, 31, 0x1E8A84u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E8A7Cu, 0x1E8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A84u;
label_1e8a84:
    // 0x1e8a84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e8a84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8a88:
    // 0x1e8a88: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8a8c:
    // 0x1e8a8c: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x1e8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_1e8a90:
    // 0x1e8a90: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1e8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e8a94:
    // 0x1e8a94: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1e8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1e8a98:
    // 0x1e8a98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1e8a9c:
    // 0x1e8a9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e8a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e8aa0:
    // 0x1e8aa0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1e8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1e8aa4:
    // 0x1e8aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e8aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8aa8:
    // 0x1e8aa8: 0x0  nop
    ctx->pc = 0x1e8aa8u;
    // NOP
label_1e8aac:
    // 0x1e8aac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e8aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e8ab0:
    // 0x1e8ab0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8ab4:
    // 0x1e8ab4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1e8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1e8ab8:
    // 0x1e8ab8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1e8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1e8abc:
    // 0x1e8abc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1e8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_1e8ac0:
    // 0x1e8ac0: 0xc05ccfc  jal         func_1733F0
label_1e8ac4:
    if (ctx->pc == 0x1E8AC4u) {
        ctx->pc = 0x1E8AC8u;
        goto label_1e8ac8;
    }
    ctx->pc = 0x1E8AC0u;
    SET_GPR_U32(ctx, 31, 0x1E8AC8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1E8AC0u, 0x1E8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8AC8u;
label_1e8ac8:
    // 0x1e8ac8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e8ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e8acc:
    // 0x1e8acc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e8accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ad0:
    // 0x1e8ad0: 0x0  nop
    ctx->pc = 0x1e8ad0u;
    // NOP
label_1e8ad4:
    // 0x1e8ad4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1e8ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1e8ad8:
    // 0x1e8ad8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e8ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1e8adc:
    // 0x1e8adc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e8adcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ae0:
    // 0x1e8ae0: 0x0  nop
    ctx->pc = 0x1e8ae0u;
    // NOP
label_1e8ae4:
    // 0x1e8ae4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e8ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1e8ae8:
    // 0x1e8ae8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8aec:
    // 0x1e8aec: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x1e8aecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_1e8af0:
    // 0x1e8af0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e8af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1e8af4:
    // 0x1e8af4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8af8:
    // 0x1e8af8: 0x14830129  bne         $a0, $v1, . + 4 + (0x129 << 2)
label_1e8afc:
    if (ctx->pc == 0x1E8AFCu) {
        ctx->pc = 0x1E8B00u;
        goto label_1e8b00;
    }
    ctx->pc = 0x1E8AF8u;
    {
        const bool branch_taken_0x1e8af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e8af8) {
            ctx->pc = 0x1E8FA0u;
            goto label_1e8fa0;
        }
    }
    ctx->pc = 0x1E8B00u;
label_1e8b00:
    // 0x1e8b00: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8b04:
    // 0x1e8b04: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x1e8b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_1e8b08:
    // 0x1e8b08: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e8b0c:
    // 0x1e8b0c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8b10:
    // 0x1e8b10: 0xa0a310a8  sb          $v1, 0x10A8($a1)
    ctx->pc = 0x1e8b10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1e8b14:
    // 0x1e8b14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e8b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e8b18:
    // 0x1e8b18: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1e8b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1e8b1c:
    // 0x1e8b1c: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x1e8b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1e8b20:
    // 0x1e8b20: 0x14800107  bnez        $a0, . + 4 + (0x107 << 2)
label_1e8b24:
    if (ctx->pc == 0x1E8B24u) {
        ctx->pc = 0x1E8B28u;
        goto label_1e8b28;
    }
    ctx->pc = 0x1E8B20u;
    {
        const bool branch_taken_0x1e8b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b20) {
            ctx->pc = 0x1E8F40u;
            goto label_1e8f40;
        }
    }
    ctx->pc = 0x1E8B28u;
label_1e8b28:
    // 0x1e8b28: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8b2c:
    // 0x1e8b2c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1e8b2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1e8b30:
    // 0x1e8b30: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1e8b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1e8b34:
    // 0x1e8b34: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e8b38:
    // 0x1e8b38: 0x10c30119  beq         $a2, $v1, . + 4 + (0x119 << 2)
label_1e8b3c:
    if (ctx->pc == 0x1E8B3Cu) {
        ctx->pc = 0x1E8B40u;
        goto label_1e8b40;
    }
    ctx->pc = 0x1E8B38u;
    {
        const bool branch_taken_0x1e8b38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b38) {
            ctx->pc = 0x1E8FA0u;
            goto label_1e8fa0;
        }
    }
    ctx->pc = 0x1E8B40u;
label_1e8b40:
    // 0x1e8b40: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1e8b44:
    // 0x1e8b44: 0x10c300d9  beq         $a2, $v1, . + 4 + (0xD9 << 2)
label_1e8b48:
    if (ctx->pc == 0x1E8B48u) {
        ctx->pc = 0x1E8B4Cu;
        goto label_1e8b4c;
    }
    ctx->pc = 0x1E8B44u;
    {
        const bool branch_taken_0x1e8b44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b44) {
            ctx->pc = 0x1E8EACu;
            goto label_1e8eac;
        }
    }
    ctx->pc = 0x1E8B4Cu;
label_1e8b4c:
    // 0x1e8b4c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e8b50:
    // 0x1e8b50: 0x10c300d6  beq         $a2, $v1, . + 4 + (0xD6 << 2)
label_1e8b54:
    if (ctx->pc == 0x1E8B54u) {
        ctx->pc = 0x1E8B58u;
        goto label_1e8b58;
    }
    ctx->pc = 0x1E8B50u;
    {
        const bool branch_taken_0x1e8b50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b50) {
            ctx->pc = 0x1E8EACu;
            goto label_1e8eac;
        }
    }
    ctx->pc = 0x1E8B58u;
label_1e8b58:
    // 0x1e8b58: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e8b5c:
    // 0x1e8b5c: 0x10c30080  beq         $a2, $v1, . + 4 + (0x80 << 2)
label_1e8b60:
    if (ctx->pc == 0x1E8B60u) {
        ctx->pc = 0x1E8B64u;
        goto label_1e8b64;
    }
    ctx->pc = 0x1E8B5Cu;
    {
        const bool branch_taken_0x1e8b5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b5c) {
            ctx->pc = 0x1E8D60u;
            goto label_1e8d60;
        }
    }
    ctx->pc = 0x1E8B64u;
label_1e8b64:
    // 0x1e8b64: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e8b68:
    // 0x1e8b68: 0x10c3002c  beq         $a2, $v1, . + 4 + (0x2C << 2)
label_1e8b6c:
    if (ctx->pc == 0x1E8B6Cu) {
        ctx->pc = 0x1E8B70u;
        goto label_1e8b70;
    }
    ctx->pc = 0x1E8B68u;
    {
        const bool branch_taken_0x1e8b68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b68) {
            ctx->pc = 0x1E8C1Cu;
            goto label_1e8c1c;
        }
    }
    ctx->pc = 0x1E8B70u;
label_1e8b70:
    // 0x1e8b70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e8b74:
    // 0x1e8b74: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
label_1e8b78:
    if (ctx->pc == 0x1E8B78u) {
        ctx->pc = 0x1E8B7Cu;
        goto label_1e8b7c;
    }
    ctx->pc = 0x1E8B74u;
    {
        const bool branch_taken_0x1e8b74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b74) {
            ctx->pc = 0x1E8C1Cu;
            goto label_1e8c1c;
        }
    }
    ctx->pc = 0x1E8B7Cu;
label_1e8b7c:
    // 0x1e8b7c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1e8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e8b80:
    // 0x1e8b80: 0x10c30026  beq         $a2, $v1, . + 4 + (0x26 << 2)
label_1e8b84:
    if (ctx->pc == 0x1E8B84u) {
        ctx->pc = 0x1E8B88u;
        goto label_1e8b88;
    }
    ctx->pc = 0x1E8B80u;
    {
        const bool branch_taken_0x1e8b80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b80) {
            ctx->pc = 0x1E8C1Cu;
            goto label_1e8c1c;
        }
    }
    ctx->pc = 0x1E8B88u;
label_1e8b88:
    // 0x1e8b88: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e8b8c:
    // 0x1e8b8c: 0x10c30023  beq         $a2, $v1, . + 4 + (0x23 << 2)
label_1e8b90:
    if (ctx->pc == 0x1E8B90u) {
        ctx->pc = 0x1E8B94u;
        goto label_1e8b94;
    }
    ctx->pc = 0x1E8B8Cu;
    {
        const bool branch_taken_0x1e8b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b8c) {
            ctx->pc = 0x1E8C1Cu;
            goto label_1e8c1c;
        }
    }
    ctx->pc = 0x1E8B94u;
label_1e8b94:
    // 0x1e8b94: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1e8b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e8b98:
    // 0x1e8b98: 0x10c50020  beq         $a2, $a1, . + 4 + (0x20 << 2)
label_1e8b9c:
    if (ctx->pc == 0x1E8B9Cu) {
        ctx->pc = 0x1E8BA0u;
        goto label_1e8ba0;
    }
    ctx->pc = 0x1E8B98u;
    {
        const bool branch_taken_0x1e8b98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e8b98) {
            ctx->pc = 0x1E8C1Cu;
            goto label_1e8c1c;
        }
    }
    ctx->pc = 0x1E8BA0u;
label_1e8ba0:
    // 0x1e8ba0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e8ba4:
    // 0x1e8ba4: 0x10c4001d  beq         $a2, $a0, . + 4 + (0x1D << 2)
label_1e8ba8:
    if (ctx->pc == 0x1E8BA8u) {
        ctx->pc = 0x1E8BACu;
        goto label_1e8bac;
    }
    ctx->pc = 0x1E8BA4u;
    {
        const bool branch_taken_0x1e8ba4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e8ba4) {
            ctx->pc = 0x1E8C1Cu;
            goto label_1e8c1c;
        }
    }
    ctx->pc = 0x1E8BACu;
label_1e8bac:
    // 0x1e8bac: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e8bb0:
    if (ctx->pc == 0x1E8BB0u) {
        ctx->pc = 0x1E8BB4u;
        goto label_1e8bb4;
    }
    ctx->pc = 0x1E8BACu;
    {
        const bool branch_taken_0x1e8bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bac) {
            ctx->pc = 0x1E8BB4u;
            goto label_1e8bb4;
        }
    }
    ctx->pc = 0x1E8BB4u;
label_1e8bb4:
    // 0x1e8bb4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8bb8:
    // 0x1e8bb8: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x1e8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8bbc:
    // 0x1e8bbc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e8bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1e8bc0:
    // 0x1e8bc0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8bc4:
    // 0x1e8bc4: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x1e8bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8bc8:
    // 0x1e8bc8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1e8bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1e8bcc:
    // 0x1e8bcc: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8bd0:
    // 0x1e8bd0: 0xc4a01208  lwc1        $f0, 0x1208($a1)
    ctx->pc = 0x1e8bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8bd4:
    // 0x1e8bd4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1e8bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1e8bd8:
    // 0x1e8bd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e8bdc:
    // 0x1e8bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8be0:
    // 0x1e8be0: 0x0  nop
    ctx->pc = 0x1e8be0u;
    // NOP
label_1e8be4:
    // 0x1e8be4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e8be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1e8be8:
    // 0x1e8be8: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8bec:
    // 0x1e8bec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8becu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8bf0:
    // 0x1e8bf0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e8bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e8bf4:
    // 0x1e8bf4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8bf4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8bf8:
    // 0x1e8bf8: 0xc062f5c  jal         func_18BD70
label_1e8bfc:
    if (ctx->pc == 0x1E8BFCu) {
        ctx->pc = 0x1E8C00u;
        goto label_1e8c00;
    }
    ctx->pc = 0x1E8BF8u;
    SET_GPR_U32(ctx, 31, 0x1E8C00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8BF8u, 0x1E8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C00u;
label_1e8c00:
    // 0x1e8c00: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e8c00u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8c04:
    // 0x1e8c04: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1e8c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e8c08:
    // 0x1e8c08: 0xc0630a8  jal         func_18C2A0
label_1e8c0c:
    if (ctx->pc == 0x1E8C0Cu) {
        ctx->pc = 0x1E8C10u;
        goto label_1e8c10;
    }
    ctx->pc = 0x1E8C08u;
    SET_GPR_U32(ctx, 31, 0x1E8C10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8C08u, 0x1E8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C10u;
label_1e8c10:
    // 0x1e8c10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8c10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8c14:
    // 0x1e8c14: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_1e8c18:
    if (ctx->pc == 0x1E8C18u) {
        ctx->pc = 0x1E8C1Cu;
        goto label_1e8c1c;
    }
    ctx->pc = 0x1E8C14u;
    {
        const bool branch_taken_0x1e8c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c14) {
            ctx->pc = 0x1E8F98u;
            goto label_1e8f98;
        }
    }
    ctx->pc = 0x1E8C1Cu;
label_1e8c1c:
    // 0x1e8c1c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8c20:
    // 0x1e8c20: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x1e8c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c24:
    // 0x1e8c24: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1e8c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1e8c28:
    // 0x1e8c28: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8c2c:
    // 0x1e8c2c: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x1e8c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c30:
    // 0x1e8c30: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1e8c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1e8c34:
    // 0x1e8c34: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8c38:
    // 0x1e8c38: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e8c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c3c:
    // 0x1e8c3c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1e8c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1e8c40:
    // 0x1e8c40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e8c44:
    // 0x1e8c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8c48:
    // 0x1e8c48: 0x0  nop
    ctx->pc = 0x1e8c48u;
    // NOP
label_1e8c4c:
    // 0x1e8c4c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e8c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1e8c50:
    // 0x1e8c50: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8c54:
    // 0x1e8c54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8c54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8c58:
    // 0x1e8c58: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e8c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e8c5c:
    // 0x1e8c5c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8c5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8c60:
    // 0x1e8c60: 0xc062f5c  jal         func_18BD70
label_1e8c64:
    if (ctx->pc == 0x1E8C64u) {
        ctx->pc = 0x1E8C68u;
        goto label_1e8c68;
    }
    ctx->pc = 0x1E8C60u;
    SET_GPR_U32(ctx, 31, 0x1E8C68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8C60u, 0x1E8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C68u;
label_1e8c68:
    // 0x1e8c68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e8c68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8c6c:
    // 0x1e8c6c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1e8c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e8c70:
    // 0x1e8c70: 0xc0630a8  jal         func_18C2A0
label_1e8c74:
    if (ctx->pc == 0x1E8C74u) {
        ctx->pc = 0x1E8C78u;
        goto label_1e8c78;
    }
    ctx->pc = 0x1E8C70u;
    SET_GPR_U32(ctx, 31, 0x1E8C78u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8C70u, 0x1E8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C78u;
label_1e8c78:
    // 0x1e8c78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8c78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8c7c:
    // 0x1e8c7c: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e8c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8c80:
    // 0x1e8c80: 0xc4c01200  lwc1        $f0, 0x1200($a2)
    ctx->pc = 0x1e8c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c84:
    // 0x1e8c84: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1e8c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1e8c88:
    // 0x1e8c88: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8c8c:
    // 0x1e8c8c: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e8c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c90:
    // 0x1e8c90: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1e8c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1e8c94:
    // 0x1e8c94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e8c98:
    // 0x1e8c98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8c9c:
    // 0x1e8c9c: 0x0  nop
    ctx->pc = 0x1e8c9cu;
    // NOP
label_1e8ca0:
    // 0x1e8ca0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e8ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1e8ca4:
    // 0x1e8ca4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8ca8:
    // 0x1e8ca8: 0xc4611204  lwc1        $f1, 0x1204($v1)
    ctx->pc = 0x1e8ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8cac:
    // 0x1e8cac: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1e8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1e8cb0:
    // 0x1e8cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8cb4:
    // 0x1e8cb4: 0x0  nop
    ctx->pc = 0x1e8cb4u;
    // NOP
label_1e8cb8:
    // 0x1e8cb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e8cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e8cbc:
    // 0x1e8cbc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1e8cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1e8cc0:
    // 0x1e8cc0: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8cc4:
    // 0x1e8cc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8cc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8cc8:
    // 0x1e8cc8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e8cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e8ccc:
    // 0x1e8ccc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8cccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8cd0:
    // 0x1e8cd0: 0xc062f5c  jal         func_18BD70
label_1e8cd4:
    if (ctx->pc == 0x1E8CD4u) {
        ctx->pc = 0x1E8CD8u;
        goto label_1e8cd8;
    }
    ctx->pc = 0x1E8CD0u;
    SET_GPR_U32(ctx, 31, 0x1E8CD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8CD0u, 0x1E8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CD8u;
label_1e8cd8:
    // 0x1e8cd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8cdc:
    // 0x1e8cdc: 0xc0630a8  jal         func_18C2A0
label_1e8ce0:
    if (ctx->pc == 0x1E8CE0u) {
        ctx->pc = 0x1E8CE4u;
        goto label_1e8ce4;
    }
    ctx->pc = 0x1E8CDCu;
    SET_GPR_U32(ctx, 31, 0x1E8CE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8CDCu, 0x1E8CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CE4u;
label_1e8ce4:
    // 0x1e8ce4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e8ce4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8ce8:
    // 0x1e8ce8: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8cec:
    // 0x1e8cec: 0xc4a11204  lwc1        $f1, 0x1204($a1)
    ctx->pc = 0x1e8cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8cf0:
    // 0x1e8cf0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1e8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1e8cf4:
    // 0x1e8cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8cf8:
    // 0x1e8cf8: 0x0  nop
    ctx->pc = 0x1e8cf8u;
    // NOP
label_1e8cfc:
    // 0x1e8cfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e8cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e8d00:
    // 0x1e8d00: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1e8d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1e8d04:
    // 0x1e8d04: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8d08:
    // 0x1e8d08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8d08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8d0c:
    // 0x1e8d0c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e8d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e8d10:
    // 0x1e8d10: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8d10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8d14:
    // 0x1e8d14: 0xc062f5c  jal         func_18BD70
label_1e8d18:
    if (ctx->pc == 0x1E8D18u) {
        ctx->pc = 0x1E8D1Cu;
        goto label_1e8d1c;
    }
    ctx->pc = 0x1E8D14u;
    SET_GPR_U32(ctx, 31, 0x1E8D1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8D14u, 0x1E8D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D1Cu;
label_1e8d1c:
    // 0x1e8d1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8d1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8d20:
    // 0x1e8d20: 0xc0630a8  jal         func_18C2A0
label_1e8d24:
    if (ctx->pc == 0x1E8D24u) {
        ctx->pc = 0x1E8D28u;
        goto label_1e8d28;
    }
    ctx->pc = 0x1E8D20u;
    SET_GPR_U32(ctx, 31, 0x1E8D28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8D20u, 0x1E8D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D28u;
label_1e8d28:
    // 0x1e8d28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8d2c:
    // 0x1e8d2c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8d30:
    // 0x1e8d30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e8d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1e8d34:
    // 0x1e8d34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8d38:
    // 0x1e8d38: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8d3c:
    // 0x1e8d3c: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1e8d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_1e8d40:
    // 0x1e8d40: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8d44:
    // 0x1e8d44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1e8d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e8d48:
    // 0x1e8d48: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8d4c:
    // 0x1e8d4c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1e8d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e8d50:
    // 0x1e8d50: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8d54:
    // 0x1e8d54: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1e8d58:
    // 0x1e8d58: 0x1000008f  b           . + 4 + (0x8F << 2)
label_1e8d5c:
    if (ctx->pc == 0x1E8D5Cu) {
        ctx->pc = 0x1E8D60u;
        goto label_1e8d60;
    }
    ctx->pc = 0x1E8D58u;
    {
        const bool branch_taken_0x1e8d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d58) {
            ctx->pc = 0x1E8F98u;
            goto label_1e8f98;
        }
    }
    ctx->pc = 0x1E8D60u;
label_1e8d60:
    // 0x1e8d60: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e8d64:
    // 0x1e8d64: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1e8d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1e8d68:
    // 0x1e8d68: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x1e8d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e8d6c:
    // 0x1e8d6c: 0x14a0008a  bnez        $a1, . + 4 + (0x8A << 2)
label_1e8d70:
    if (ctx->pc == 0x1E8D70u) {
        ctx->pc = 0x1E8D74u;
        goto label_1e8d74;
    }
    ctx->pc = 0x1E8D6Cu;
    {
        const bool branch_taken_0x1e8d6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d6c) {
            ctx->pc = 0x1E8F98u;
            goto label_1e8f98;
        }
    }
    ctx->pc = 0x1E8D74u;
label_1e8d74:
    // 0x1e8d74: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8d78:
    // 0x1e8d78: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e8d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8d7c:
    // 0x1e8d7c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1e8d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1e8d80:
    // 0x1e8d80: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8d84:
    // 0x1e8d84: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x1e8d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8d88:
    // 0x1e8d88: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1e8d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1e8d8c:
    // 0x1e8d8c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8d90:
    // 0x1e8d90: 0xc4a01208  lwc1        $f0, 0x1208($a1)
    ctx->pc = 0x1e8d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8d94:
    // 0x1e8d94: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1e8d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1e8d98:
    // 0x1e8d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e8d9c:
    // 0x1e8d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8da0:
    // 0x1e8da0: 0x0  nop
    ctx->pc = 0x1e8da0u;
    // NOP
label_1e8da4:
    // 0x1e8da4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1e8da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1e8da8:
    // 0x1e8da8: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8dac:
    // 0x1e8dac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8db0:
    // 0x1e8db0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e8db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e8db4:
    // 0x1e8db4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8db4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8db8:
    // 0x1e8db8: 0xc062f5c  jal         func_18BD70
label_1e8dbc:
    if (ctx->pc == 0x1E8DBCu) {
        ctx->pc = 0x1E8DC0u;
        goto label_1e8dc0;
    }
    ctx->pc = 0x1E8DB8u;
    SET_GPR_U32(ctx, 31, 0x1E8DC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8DB8u, 0x1E8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DC0u;
label_1e8dc0:
    // 0x1e8dc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8dc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8dc4:
    // 0x1e8dc4: 0xc0630a8  jal         func_18C2A0
label_1e8dc8:
    if (ctx->pc == 0x1E8DC8u) {
        ctx->pc = 0x1E8DCCu;
        goto label_1e8dcc;
    }
    ctx->pc = 0x1E8DC4u;
    SET_GPR_U32(ctx, 31, 0x1E8DCCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8DC4u, 0x1E8DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DCCu;
label_1e8dcc:
    // 0x1e8dcc: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8dd0:
    // 0x1e8dd0: 0xc4a01200  lwc1        $f0, 0x1200($a1)
    ctx->pc = 0x1e8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8dd4:
    // 0x1e8dd4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1e8dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1e8dd8:
    // 0x1e8dd8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8ddc:
    // 0x1e8ddc: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e8ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8de0:
    // 0x1e8de0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1e8de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1e8de4:
    // 0x1e8de4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e8de8:
    // 0x1e8de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8dec:
    // 0x1e8dec: 0x0  nop
    ctx->pc = 0x1e8decu;
    // NOP
label_1e8df0:
    // 0x1e8df0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1e8df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1e8df4:
    // 0x1e8df4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8df8:
    // 0x1e8df8: 0xc4411204  lwc1        $f1, 0x1204($v0)
    ctx->pc = 0x1e8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8dfc:
    // 0x1e8dfc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1e8e00:
    // 0x1e8e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8e04:
    // 0x1e8e04: 0x0  nop
    ctx->pc = 0x1e8e04u;
    // NOP
label_1e8e08:
    // 0x1e8e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e8e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e8e0c:
    // 0x1e8e0c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1e8e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1e8e10:
    // 0x1e8e10: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8e14:
    // 0x1e8e14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8e14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8e18:
    // 0x1e8e18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e8e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e8e1c:
    // 0x1e8e1c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8e1cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8e20:
    // 0x1e8e20: 0xc062f5c  jal         func_18BD70
label_1e8e24:
    if (ctx->pc == 0x1E8E24u) {
        ctx->pc = 0x1E8E28u;
        goto label_1e8e28;
    }
    ctx->pc = 0x1E8E20u;
    SET_GPR_U32(ctx, 31, 0x1E8E28u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8E20u, 0x1E8E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E28u;
label_1e8e28:
    // 0x1e8e28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8e28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8e2c:
    // 0x1e8e2c: 0xc0630a8  jal         func_18C2A0
label_1e8e30:
    if (ctx->pc == 0x1E8E30u) {
        ctx->pc = 0x1E8E34u;
        goto label_1e8e34;
    }
    ctx->pc = 0x1E8E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E34u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8E2Cu, 0x1E8E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E34u;
label_1e8e34:
    // 0x1e8e34: 0x8fb00198  lw          $s0, 0x198($sp)
    ctx->pc = 0x1e8e34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8e38:
    // 0x1e8e38: 0xc6011204  lwc1        $f1, 0x1204($s0)
    ctx->pc = 0x1e8e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8e3c:
    // 0x1e8e3c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1e8e40:
    // 0x1e8e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8e44:
    // 0x1e8e44: 0x0  nop
    ctx->pc = 0x1e8e44u;
    // NOP
label_1e8e48:
    // 0x1e8e48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e8e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e8e4c:
    // 0x1e8e4c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1e8e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1e8e50:
    // 0x1e8e50: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8e54:
    // 0x1e8e54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8e58:
    // 0x1e8e58: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e8e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e8e5c:
    // 0x1e8e5c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8e5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8e60:
    // 0x1e8e60: 0xc062f5c  jal         func_18BD70
label_1e8e64:
    if (ctx->pc == 0x1E8E64u) {
        ctx->pc = 0x1E8E68u;
        goto label_1e8e68;
    }
    ctx->pc = 0x1E8E60u;
    SET_GPR_U32(ctx, 31, 0x1E8E68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8E60u, 0x1E8E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E68u;
label_1e8e68:
    // 0x1e8e68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8e68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8e6c:
    // 0x1e8e6c: 0xc0630a8  jal         func_18C2A0
label_1e8e70:
    if (ctx->pc == 0x1E8E70u) {
        ctx->pc = 0x1E8E74u;
        goto label_1e8e74;
    }
    ctx->pc = 0x1E8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8E6Cu, 0x1E8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E74u;
label_1e8e74:
    // 0x1e8e74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8e78:
    // 0x1e8e78: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8e7c:
    // 0x1e8e7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e8e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1e8e80:
    // 0x1e8e80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e8e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8e84:
    // 0x1e8e84: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8e88:
    // 0x1e8e88: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x1e8e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_1e8e8c:
    // 0x1e8e8c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8e90:
    // 0x1e8e90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1e8e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e8e94:
    // 0x1e8e94: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8e98:
    // 0x1e8e98: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1e8e98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e8e9c:
    // 0x1e8e9c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8ea0:
    // 0x1e8ea0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1e8ea4:
    // 0x1e8ea4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1e8ea8:
    if (ctx->pc == 0x1E8EA8u) {
        ctx->pc = 0x1E8EACu;
        goto label_1e8eac;
    }
    ctx->pc = 0x1E8EA4u;
    {
        const bool branch_taken_0x1e8ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ea4) {
            ctx->pc = 0x1E8F98u;
            goto label_1e8f98;
        }
    }
    ctx->pc = 0x1E8EACu;
label_1e8eac:
    // 0x1e8eac: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8eb0:
    // 0x1e8eb0: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8eb4:
    // 0x1e8eb4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1e8eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e8eb8:
    // 0x1e8eb8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8ebc:
    // 0x1e8ebc: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x1e8ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8ec0:
    // 0x1e8ec0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1e8ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e8ec4:
    // 0x1e8ec4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8ec8:
    // 0x1e8ec8: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8ecc:
    // 0x1e8ecc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1e8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e8ed0:
    // 0x1e8ed0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e8ed4:
    // 0x1e8ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ed8:
    // 0x1e8ed8: 0x0  nop
    ctx->pc = 0x1e8ed8u;
    // NOP
label_1e8edc:
    // 0x1e8edc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1e8edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e8ee0:
    // 0x1e8ee0: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8ee4:
    // 0x1e8ee4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8ee8:
    // 0x1e8ee8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1e8ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1e8eec:
    // 0x1e8eec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8eecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8ef0:
    // 0x1e8ef0: 0xc062f5c  jal         func_18BD70
label_1e8ef4:
    if (ctx->pc == 0x1E8EF4u) {
        ctx->pc = 0x1E8EF8u;
        goto label_1e8ef8;
    }
    ctx->pc = 0x1E8EF0u;
    SET_GPR_U32(ctx, 31, 0x1E8EF8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8EF0u, 0x1E8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EF8u;
label_1e8ef8:
    // 0x1e8ef8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8ef8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8efc:
    // 0x1e8efc: 0xc0630a8  jal         func_18C2A0
label_1e8f00:
    if (ctx->pc == 0x1E8F00u) {
        ctx->pc = 0x1E8F04u;
        goto label_1e8f04;
    }
    ctx->pc = 0x1E8EFCu;
    SET_GPR_U32(ctx, 31, 0x1E8F04u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8EFCu, 0x1E8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F04u;
label_1e8f04:
    // 0x1e8f04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e8f04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8f08:
    // 0x1e8f08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8f0c:
    // 0x1e8f0c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8f10:
    // 0x1e8f10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e8f10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1e8f14:
    // 0x1e8f14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8f18:
    // 0x1e8f18: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8f1c:
    // 0x1e8f1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1e8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1e8f20:
    // 0x1e8f20: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8f24:
    // 0x1e8f24: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1e8f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e8f28:
    // 0x1e8f28: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8f2c:
    // 0x1e8f2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e8f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e8f30:
    // 0x1e8f30: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8f34:
    // 0x1e8f34: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1e8f38:
    // 0x1e8f38: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e8f3c:
    if (ctx->pc == 0x1E8F3Cu) {
        ctx->pc = 0x1E8F40u;
        goto label_1e8f40;
    }
    ctx->pc = 0x1E8F38u;
    {
        const bool branch_taken_0x1e8f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f38) {
            ctx->pc = 0x1E8F98u;
            goto label_1e8f98;
        }
    }
    ctx->pc = 0x1E8F40u;
label_1e8f40:
    // 0x1e8f40: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e8f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8f44:
    // 0x1e8f44: 0xc4c01200  lwc1        $f0, 0x1200($a2)
    ctx->pc = 0x1e8f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f48:
    // 0x1e8f48: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e8f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1e8f4c:
    // 0x1e8f4c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8f50:
    // 0x1e8f50: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x1e8f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f54:
    // 0x1e8f54: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e8f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1e8f58:
    // 0x1e8f58: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8f5c:
    // 0x1e8f5c: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e8f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f60:
    // 0x1e8f60: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e8f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1e8f64:
    // 0x1e8f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e8f68:
    // 0x1e8f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8f6c:
    // 0x1e8f6c: 0x0  nop
    ctx->pc = 0x1e8f6cu;
    // NOP
label_1e8f70:
    // 0x1e8f70: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e8f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1e8f74:
    // 0x1e8f74: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e8f78:
    // 0x1e8f78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8f78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8f7c:
    // 0x1e8f7c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e8f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e8f80:
    // 0x1e8f80: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8f80u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e8f84:
    // 0x1e8f84: 0xc062f5c  jal         func_18BD70
label_1e8f88:
    if (ctx->pc == 0x1E8F88u) {
        ctx->pc = 0x1E8F8Cu;
        goto label_1e8f8c;
    }
    ctx->pc = 0x1E8F84u;
    SET_GPR_U32(ctx, 31, 0x1E8F8Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8F84u, 0x1E8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F8Cu;
label_1e8f8c:
    // 0x1e8f8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8f8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e8f90:
    // 0x1e8f90: 0xc0630a8  jal         func_18C2A0
label_1e8f94:
    if (ctx->pc == 0x1E8F94u) {
        ctx->pc = 0x1E8F98u;
        goto label_1e8f98;
    }
    ctx->pc = 0x1E8F90u;
    SET_GPR_U32(ctx, 31, 0x1E8F98u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8F90u, 0x1E8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F98u;
label_1e8f98:
    // 0x1e8f98: 0x10000325  b           . + 4 + (0x325 << 2)
label_1e8f9c:
    if (ctx->pc == 0x1E8F9Cu) {
        ctx->pc = 0x1E8FA0u;
        goto label_1e8fa0;
    }
    ctx->pc = 0x1E8F98u;
    {
        const bool branch_taken_0x1e8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f98) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E8FA0u;
label_1e8fa0:
    // 0x1e8fa0: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8fa4:
    // 0x1e8fa4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e8fa8:
    // 0x1e8fa8: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x1e8fa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
label_1e8fac:
    // 0x1e8fac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e8facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1e8fb0:
    // 0x1e8fb0: 0x30860004  andi        $a2, $a0, 0x4
    ctx->pc = 0x1e8fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e8fb4:
    // 0x1e8fb4: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_1e8fb8:
    if (ctx->pc == 0x1E8FB8u) {
        ctx->pc = 0x1E8FBCu;
        goto label_1e8fbc;
    }
    ctx->pc = 0x1E8FB4u;
    {
        const bool branch_taken_0x1e8fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fb4) {
            ctx->pc = 0x1E9140u;
            goto label_1e9140;
        }
    }
    ctx->pc = 0x1E8FBCu;
label_1e8fbc:
    // 0x1e8fbc: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8fc0:
    // 0x1e8fc0: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x1e8fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_1e8fc4:
    // 0x1e8fc4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e8fc8:
    // 0x1e8fc8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8fcc:
    // 0x1e8fcc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1e8fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1e8fd0:
    // 0x1e8fd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e8fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e8fd4:
    // 0x1e8fd4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1e8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1e8fd8:
    // 0x1e8fd8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1e8fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1e8fdc:
    // 0x1e8fdc: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_1e8fe0:
    if (ctx->pc == 0x1E8FE0u) {
        ctx->pc = 0x1E8FE4u;
        goto label_1e8fe4;
    }
    ctx->pc = 0x1E8FDCu;
    {
        const bool branch_taken_0x1e8fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fdc) {
            ctx->pc = 0x1E9140u;
            goto label_1e9140;
        }
    }
    ctx->pc = 0x1E8FE4u;
label_1e8fe4:
    // 0x1e8fe4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8fe8:
    // 0x1e8fe8: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x1e8fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_1e8fec:
    // 0x1e8fec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e8fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1e8ff0:
    // 0x1e8ff0: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_1e8ff4:
    if (ctx->pc == 0x1E8FF4u) {
        ctx->pc = 0x1E8FF8u;
        goto label_1e8ff8;
    }
    ctx->pc = 0x1E8FF0u;
    {
        const bool branch_taken_0x1e8ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ff0) {
            ctx->pc = 0x1E9038u;
            goto label_1e9038;
        }
    }
    ctx->pc = 0x1E8FF8u;
label_1e8ff8:
    // 0x1e8ff8: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e8ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e8ffc:
    // 0x1e8ffc: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9000:
    // 0x1e9000: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e9000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1e9004:
    // 0x1e9004: 0x84c611f2  lh          $a2, 0x11F2($a2)
    ctx->pc = 0x1e9004u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4594)));
label_1e9008:
    // 0x1e9008: 0xc06d1d8  jal         func_1B4760
label_1e900c:
    if (ctx->pc == 0x1E900Cu) {
        ctx->pc = 0x1E9010u;
        goto label_1e9010;
    }
    ctx->pc = 0x1E9008u;
    SET_GPR_U32(ctx, 31, 0x1E9010u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1E9008u, 0x1E9010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9010u;
label_1e9010:
    // 0x1e9010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9014:
    // 0x1e9014: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e9014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9018:
    // 0x1e9018: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1e9018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1e901c:
    // 0x1e901c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1e901cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1e9020:
    // 0x1e9020: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e9020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9024:
    // 0x1e9024: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_1e9028:
    // 0x1e9028: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1e902c:
    // 0x1e902c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e902cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9030:
    // 0x1e9030: 0xc067b18  jal         func_19EC60
label_1e9034:
    if (ctx->pc == 0x1E9034u) {
        ctx->pc = 0x1E9038u;
        goto label_1e9038;
    }
    ctx->pc = 0x1E9030u;
    SET_GPR_U32(ctx, 31, 0x1E9038u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E9030u, 0x1E9038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9038u;
label_1e9038:
    // 0x1e9038: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e903c:
    // 0x1e903c: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x1e903cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_1e9040:
    // 0x1e9040: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e9040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1e9044:
    // 0x1e9044: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
label_1e9048:
    if (ctx->pc == 0x1E9048u) {
        ctx->pc = 0x1E904Cu;
        goto label_1e904c;
    }
    ctx->pc = 0x1E9044u;
    {
        const bool branch_taken_0x1e9044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9044) {
            ctx->pc = 0x1E9128u;
            goto label_1e9128;
        }
    }
    ctx->pc = 0x1E904Cu;
label_1e904c:
    // 0x1e904c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9050:
    // 0x1e9050: 0xc4801200  lwc1        $f0, 0x1200($a0)
    ctx->pc = 0x1e9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9054:
    // 0x1e9054: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e9054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1e9058:
    // 0x1e9058: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e905c:
    // 0x1e905c: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x1e905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9060:
    // 0x1e9060: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e9060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1e9064:
    // 0x1e9064: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9068:
    // 0x1e9068: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e9068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e906c:
    // 0x1e906c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1e9070:
    // 0x1e9070: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e9070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e9074:
    // 0x1e9074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9078:
    // 0x1e9078: 0x0  nop
    ctx->pc = 0x1e9078u;
    // NOP
label_1e907c:
    // 0x1e907c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1e9080:
    // 0x1e9080: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e9080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e9084:
    // 0x1e9084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e9084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9088:
    // 0x1e9088: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e9088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1e908c:
    // 0x1e908c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e908cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9090:
    // 0x1e9090: 0xc062f5c  jal         func_18BD70
label_1e9094:
    if (ctx->pc == 0x1E9094u) {
        ctx->pc = 0x1E9098u;
        goto label_1e9098;
    }
    ctx->pc = 0x1E9090u;
    SET_GPR_U32(ctx, 31, 0x1E9098u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E9090u, 0x1E9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9098u;
label_1e9098:
    // 0x1e9098: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e9098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e909c:
    // 0x1e909c: 0xc0630a8  jal         func_18C2A0
label_1e90a0:
    if (ctx->pc == 0x1E90A0u) {
        ctx->pc = 0x1E90A4u;
        goto label_1e90a4;
    }
    ctx->pc = 0x1E909Cu;
    SET_GPR_U32(ctx, 31, 0x1E90A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E909Cu, 0x1E90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90A4u;
label_1e90a4:
    // 0x1e90a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e90a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e90a8:
    // 0x1e90a8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1e90a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e90ac:
    // 0x1e90ac: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1e90acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1e90b0:
    // 0x1e90b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e90b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e90b4:
    // 0x1e90b4: 0x0  nop
    ctx->pc = 0x1e90b4u;
    // NOP
label_1e90b8:
    // 0x1e90b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e90b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e90bc:
    // 0x1e90bc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e90bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1e90c0:
    // 0x1e90c0: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e90c4:
    // 0x1e90c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e90c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e90c8:
    // 0x1e90c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e90c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1e90cc:
    // 0x1e90cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e90ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e90d0:
    // 0x1e90d0: 0xc062f5c  jal         func_18BD70
label_1e90d4:
    if (ctx->pc == 0x1E90D4u) {
        ctx->pc = 0x1E90D8u;
        goto label_1e90d8;
    }
    ctx->pc = 0x1E90D0u;
    SET_GPR_U32(ctx, 31, 0x1E90D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E90D0u, 0x1E90D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90D8u;
label_1e90d8:
    // 0x1e90d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e90d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e90dc:
    // 0x1e90dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1e90dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e90e0:
    // 0x1e90e0: 0xc0630a8  jal         func_18C2A0
label_1e90e4:
    if (ctx->pc == 0x1E90E4u) {
        ctx->pc = 0x1E90E8u;
        goto label_1e90e8;
    }
    ctx->pc = 0x1E90E0u;
    SET_GPR_U32(ctx, 31, 0x1E90E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E90E0u, 0x1E90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90E8u;
label_1e90e8:
    // 0x1e90e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e90e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e90ec:
    // 0x1e90ec: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e90f0:
    // 0x1e90f0: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1e90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1e90f4:
    // 0x1e90f4: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x1e90f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1e90f8:
    // 0x1e90f8: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x1e90f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1e90fc:
    // 0x1e90fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e9100:
    // 0x1e9100: 0x3293c  dsll32      $a1, $v1, 4
    ctx->pc = 0x1e9100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 4));
label_1e9104:
    // 0x1e9104: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x1e9104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
label_1e9108:
    // 0x1e9108: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1e9108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
label_1e910c:
    // 0x1e910c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1e910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e9110:
    // 0x1e9110: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e9110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_1e9114:
    // 0x1e9114: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e9114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1e9118:
    // 0x1e9118: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1e9118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_1e911c:
    // 0x1e911c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e9120:
    // 0x1e9120: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1e9120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1e9124:
    // 0x1e9124: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1e9124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_1e9128:
    // 0x1e9128: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e912c:
    // 0x1e912c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1e912cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_1e9130:
    // 0x1e9130: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e9130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e9134:
    // 0x1e9134: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9134u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e9138:
    // 0x1e9138: 0x46102bd  bgez        $v1, . + 4 + (0x2BD << 2)
label_1e913c:
    if (ctx->pc == 0x1E913Cu) {
        ctx->pc = 0x1E9140u;
        goto label_1e9140;
    }
    ctx->pc = 0x1E9138u;
    {
        const bool branch_taken_0x1e9138 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e9138) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E9140u;
label_1e9140:
    // 0x1e9140: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9144:
    // 0x1e9144: 0x946411f4  lhu         $a0, 0x11F4($v1)
    ctx->pc = 0x1e9144u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_1e9148:
    // 0x1e9148: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e9148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1e914c:
    // 0x1e914c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9150:
    // 0x1e9150: 0x1464005c  bne         $v1, $a0, . + 4 + (0x5C << 2)
label_1e9154:
    if (ctx->pc == 0x1E9154u) {
        ctx->pc = 0x1E9158u;
        goto label_1e9158;
    }
    ctx->pc = 0x1E9150u;
    {
        const bool branch_taken_0x1e9150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e9150) {
            ctx->pc = 0x1E92C4u;
            goto label_1e92c4;
        }
    }
    ctx->pc = 0x1E9158u;
label_1e9158:
    // 0x1e9158: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e915c:
    // 0x1e915c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x1e915cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_1e9160:
    // 0x1e9160: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e9160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e9164:
    // 0x1e9164: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9168:
    // 0x1e9168: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1e9168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1e916c:
    // 0x1e916c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9170:
    // 0x1e9170: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x1e9170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9174:
    // 0x1e9174: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e9174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e9178:
    // 0x1e9178: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e917c:
    // 0x1e917c: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x1e917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9180:
    // 0x1e9180: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e9180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e9184:
    // 0x1e9184: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9188:
    // 0x1e9188: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e9188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e918c:
    // 0x1e918c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e9190:
    // 0x1e9190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e9190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e9194:
    // 0x1e9194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9198:
    // 0x1e9198: 0x0  nop
    ctx->pc = 0x1e9198u;
    // NOP
label_1e919c:
    // 0x1e919c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e919cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1e91a0:
    // 0x1e91a0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x1e91a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_1e91a4:
    // 0x1e91a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e91a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e91a8:
    // 0x1e91a8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e91a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1e91ac:
    // 0x1e91ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e91acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e91b0:
    // 0x1e91b0: 0xc062f5c  jal         func_18BD70
label_1e91b4:
    if (ctx->pc == 0x1E91B4u) {
        ctx->pc = 0x1E91B8u;
        goto label_1e91b8;
    }
    ctx->pc = 0x1E91B0u;
    SET_GPR_U32(ctx, 31, 0x1E91B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E91B0u, 0x1E91B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91B8u;
label_1e91b8:
    // 0x1e91b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e91b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e91bc:
    // 0x1e91bc: 0xc0630a8  jal         func_18C2A0
label_1e91c0:
    if (ctx->pc == 0x1E91C0u) {
        ctx->pc = 0x1E91C4u;
        goto label_1e91c4;
    }
    ctx->pc = 0x1E91BCu;
    SET_GPR_U32(ctx, 31, 0x1E91C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E91BCu, 0x1E91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91C4u;
label_1e91c4:
    // 0x1e91c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e91c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e91c8:
    // 0x1e91c8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x1e91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_1e91cc:
    // 0x1e91cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e91ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e91d0:
    // 0x1e91d0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e91d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1e91d4:
    // 0x1e91d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e91d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e91d8:
    // 0x1e91d8: 0xc062f5c  jal         func_18BD70
label_1e91dc:
    if (ctx->pc == 0x1E91DCu) {
        ctx->pc = 0x1E91E0u;
        goto label_1e91e0;
    }
    ctx->pc = 0x1E91D8u;
    SET_GPR_U32(ctx, 31, 0x1E91E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E91D8u, 0x1E91E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91E0u;
label_1e91e0:
    // 0x1e91e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e91e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e91e4:
    // 0x1e91e4: 0xc0630a8  jal         func_18C2A0
label_1e91e8:
    if (ctx->pc == 0x1E91E8u) {
        ctx->pc = 0x1E91ECu;
        goto label_1e91ec;
    }
    ctx->pc = 0x1E91E4u;
    SET_GPR_U32(ctx, 31, 0x1E91ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E91E4u, 0x1E91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91ECu;
label_1e91ec:
    // 0x1e91ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e91ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e91f0:
    // 0x1e91f0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e91f4:
    // 0x1e91f4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1e91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1e91f8:
    // 0x1e91f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1e91fc:
    // 0x1e91fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e91fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9200:
    // 0x1e9200: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1e9200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_1e9204:
    // 0x1e9204: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1e9208:
    // 0x1e9208: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e9208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e920c:
    // 0x1e920c: 0xc067b18  jal         func_19EC60
label_1e9210:
    if (ctx->pc == 0x1E9210u) {
        ctx->pc = 0x1E9214u;
        goto label_1e9214;
    }
    ctx->pc = 0x1E920Cu;
    SET_GPR_U32(ctx, 31, 0x1E9214u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E920Cu, 0x1E9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9214u;
label_1e9214:
    // 0x1e9214: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9218:
    // 0x1e9218: 0x946411f6  lhu         $a0, 0x11F6($v1)
    ctx->pc = 0x1e9218u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1e921c:
    // 0x1e921c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1e9220:
    // 0x1e9220: 0x2065fff6  addi        $a1, $v1, -0xA
    ctx->pc = 0x1e9220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_1e9224:
    // 0x1e9224: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x1e9224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1e9228:
    // 0x1e9228: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_1e922c:
    if (ctx->pc == 0x1E922Cu) {
        ctx->pc = 0x1E9230u;
        goto label_1e9230;
    }
    ctx->pc = 0x1E9228u;
    {
        const bool branch_taken_0x1e9228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9228) {
            ctx->pc = 0x1E92BCu;
            goto label_1e92bc;
        }
    }
    ctx->pc = 0x1E9230u;
label_1e9230:
    // 0x1e9230: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1e9234:
    // 0x1e9234: 0x24640c80  addiu       $a0, $v1, 0xC80
    ctx->pc = 0x1e9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
label_1e9238:
    // 0x1e9238: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e9238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e923c:
    // 0x1e923c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1e923cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e9240:
    // 0x1e9240: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e9240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9244:
    // 0x1e9244: 0x600008  jr          $v1
label_1e9248:
    if (ctx->pc == 0x1E9248u) {
        ctx->pc = 0x1E924Cu;
        goto label_1e924c;
    }
    ctx->pc = 0x1E9244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9244u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E924Cu;
label_1e924c:
    // 0x1e924c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9250:
    // 0x1e9250: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9254:
    // 0x1e9254: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1e9254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e9258:
    // 0x1e9258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e925c:
    // 0x1e925c: 0x8fb10198  lw          $s1, 0x198($sp)
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9260:
    // 0x1e9260: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1e9260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1e9264:
    // 0x1e9264: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9268:
    // 0x1e9268: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1e9268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e926c:
    // 0x1e926c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9270:
    // 0x1e9270: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1e9270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e9274:
    // 0x1e9274: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9278:
    // 0x1e9278: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e9278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1e927c:
    // 0x1e927c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9280:
    // 0x1e9280: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x1e9280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
label_1e9284:
    // 0x1e9284: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9288:
    // 0x1e9288: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x1e9288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
label_1e928c:
    // 0x1e928c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9290:
    // 0x1e9290: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1e9290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1e9294:
    // 0x1e9294: 0xc067694  jal         func_19DA50
label_1e9298:
    if (ctx->pc == 0x1E9298u) {
        ctx->pc = 0x1E929Cu;
        goto label_1e929c;
    }
    ctx->pc = 0x1E9294u;
    SET_GPR_U32(ctx, 31, 0x1E929Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E9294u, 0x1E929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E929Cu;
label_1e929c:
    // 0x1e929c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1e929cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e92a0:
    // 0x1e92a0: 0x30850007  andi        $a1, $a0, 0x7
    ctx->pc = 0x1e92a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_1e92a4:
    // 0x1e92a4: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1e92a8:
    // 0x1e92a8: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1e92a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_1e92ac:
    // 0x1e92ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1e92acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1e92b0:
    // 0x1e92b0: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e92b4:
    // 0x1e92b4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e92b8:
    // 0x1e92b8: 0xa465005e  sh          $a1, 0x5E($v1)
    ctx->pc = 0x1e92b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 5));
label_1e92bc:
    // 0x1e92bc: 0x1000025c  b           . + 4 + (0x25C << 2)
label_1e92c0:
    if (ctx->pc == 0x1E92C0u) {
        ctx->pc = 0x1E92C4u;
        goto label_1e92c4;
    }
    ctx->pc = 0x1E92BCu;
    {
        const bool branch_taken_0x1e92bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92bc) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E92C4u;
label_1e92c4:
    // 0x1e92c4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e92c8:
    // 0x1e92c8: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x1e92c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
label_1e92cc:
    // 0x1e92cc: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e92d0:
    // 0x1e92d0: 0x8c421210  lw          $v0, 0x1210($v0)
    ctx->pc = 0x1e92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
label_1e92d4:
    // 0x1e92d4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1e92d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e92d8:
    // 0x1e92d8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e92dc:
    // 0x1e92dc: 0x904411ef  lbu         $a0, 0x11EF($v0)
    ctx->pc = 0x1e92dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
label_1e92e0:
    // 0x1e92e0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e92e4:
    // 0x1e92e4: 0xa04410a8  sb          $a0, 0x10A8($v0)
    ctx->pc = 0x1e92e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1e92e8:
    // 0x1e92e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e92e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e92ec:
    // 0x1e92ec: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x1e92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_1e92f0:
    // 0x1e92f0: 0x30a60fff  andi        $a2, $a1, 0xFFF
    ctx->pc = 0x1e92f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
label_1e92f4:
    // 0x1e92f4: 0x2cc1000b  sltiu       $at, $a2, 0xB
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1e92f8:
    // 0x1e92f8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e92fc:
    if (ctx->pc == 0x1E92FCu) {
        ctx->pc = 0x1E9300u;
        goto label_1e9300;
    }
    ctx->pc = 0x1E92F8u;
    {
        const bool branch_taken_0x1e92f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92f8) {
            ctx->pc = 0x1E931Cu;
            goto label_1e931c;
        }
    }
    ctx->pc = 0x1E9300u;
label_1e9300:
    // 0x1e9300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e9304:
    // 0x1e9304: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1e9304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_1e9308:
    // 0x1e9308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e930c:
    // 0x1e930c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e930cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e9310:
    // 0x1e9310: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1e9310u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6744), GPR_U32(ctx, 3));
label_1e9314:
    // 0x1e9314: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e9318:
    if (ctx->pc == 0x1E9318u) {
        ctx->pc = 0x1E931Cu;
        goto label_1e931c;
    }
    ctx->pc = 0x1E9314u;
    {
        const bool branch_taken_0x1e9314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9314) {
            ctx->pc = 0x1E9330u;
            goto label_1e9330;
        }
    }
    ctx->pc = 0x1E931Cu;
label_1e931c:
    // 0x1e931c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e931cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e9320:
    // 0x1e9320: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x1e9320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_1e9324:
    // 0x1e9324: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x1e9324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_1e9328:
    // 0x1e9328: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e932c:
    // 0x1e932c: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x1e932cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 3));
label_1e9330:
    // 0x1e9330: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9334:
    // 0x1e9334: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1e9334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1e9338:
    // 0x1e9338: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1e9338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1e933c:
    // 0x1e933c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1e933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e9340:
    // 0x1e9340: 0x10a300ef  beq         $a1, $v1, . + 4 + (0xEF << 2)
label_1e9344:
    if (ctx->pc == 0x1E9344u) {
        ctx->pc = 0x1E9348u;
        goto label_1e9348;
    }
    ctx->pc = 0x1E9340u;
    {
        const bool branch_taken_0x1e9340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9340) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E9348u;
label_1e9348:
    // 0x1e9348: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1e9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1e934c:
    // 0x1e934c: 0x10a400ec  beq         $a1, $a0, . + 4 + (0xEC << 2)
label_1e9350:
    if (ctx->pc == 0x1E9350u) {
        ctx->pc = 0x1E9354u;
        goto label_1e9354;
    }
    ctx->pc = 0x1E934Cu;
    {
        const bool branch_taken_0x1e934c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e934c) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E9354u;
label_1e9354:
    // 0x1e9354: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e9354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e9358:
    // 0x1e9358: 0x10a300e9  beq         $a1, $v1, . + 4 + (0xE9 << 2)
label_1e935c:
    if (ctx->pc == 0x1E935Cu) {
        ctx->pc = 0x1E9360u;
        goto label_1e9360;
    }
    ctx->pc = 0x1E9358u;
    {
        const bool branch_taken_0x1e9358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9358) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E9360u;
label_1e9360:
    // 0x1e9360: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e9360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e9364:
    // 0x1e9364: 0x10a300e6  beq         $a1, $v1, . + 4 + (0xE6 << 2)
label_1e9368:
    if (ctx->pc == 0x1E9368u) {
        ctx->pc = 0x1E936Cu;
        goto label_1e936c;
    }
    ctx->pc = 0x1E9364u;
    {
        const bool branch_taken_0x1e9364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9364) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E936Cu;
label_1e936c:
    // 0x1e936c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1e936cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e9370:
    // 0x1e9370: 0x10a600e3  beq         $a1, $a2, . + 4 + (0xE3 << 2)
label_1e9374:
    if (ctx->pc == 0x1E9374u) {
        ctx->pc = 0x1E9378u;
        goto label_1e9378;
    }
    ctx->pc = 0x1E9370u;
    {
        const bool branch_taken_0x1e9370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e9370) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E9378u;
label_1e9378:
    // 0x1e9378: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1e9378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e937c:
    // 0x1e937c: 0x10a300e0  beq         $a1, $v1, . + 4 + (0xE0 << 2)
label_1e9380:
    if (ctx->pc == 0x1E9380u) {
        ctx->pc = 0x1E9384u;
        goto label_1e9384;
    }
    ctx->pc = 0x1E937Cu;
    {
        const bool branch_taken_0x1e937c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e937c) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E9384u;
label_1e9384:
    // 0x1e9384: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e9388:
    // 0x1e9388: 0x10a300dd  beq         $a1, $v1, . + 4 + (0xDD << 2)
label_1e938c:
    if (ctx->pc == 0x1E938Cu) {
        ctx->pc = 0x1E9390u;
        goto label_1e9390;
    }
    ctx->pc = 0x1E9388u;
    {
        const bool branch_taken_0x1e9388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9388) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E9390u;
label_1e9390:
    // 0x1e9390: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1e9390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e9394:
    // 0x1e9394: 0x10a300da  beq         $a1, $v1, . + 4 + (0xDA << 2)
label_1e9398:
    if (ctx->pc == 0x1E9398u) {
        ctx->pc = 0x1E939Cu;
        goto label_1e939c;
    }
    ctx->pc = 0x1E9394u;
    {
        const bool branch_taken_0x1e9394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9394) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E939Cu;
label_1e939c:
    // 0x1e939c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e93a0:
    // 0x1e93a0: 0x10a300d7  beq         $a1, $v1, . + 4 + (0xD7 << 2)
label_1e93a4:
    if (ctx->pc == 0x1E93A4u) {
        ctx->pc = 0x1E93A8u;
        goto label_1e93a8;
    }
    ctx->pc = 0x1E93A0u;
    {
        const bool branch_taken_0x1e93a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e93a0) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E93A8u;
label_1e93a8:
    // 0x1e93a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e93ac:
    // 0x1e93ac: 0x10a300d4  beq         $a1, $v1, . + 4 + (0xD4 << 2)
label_1e93b0:
    if (ctx->pc == 0x1E93B0u) {
        ctx->pc = 0x1E93B4u;
        goto label_1e93b4;
    }
    ctx->pc = 0x1E93ACu;
    {
        const bool branch_taken_0x1e93ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e93ac) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E93B4u;
label_1e93b4:
    // 0x1e93b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e93b8:
    // 0x1e93b8: 0x10a300d1  beq         $a1, $v1, . + 4 + (0xD1 << 2)
label_1e93bc:
    if (ctx->pc == 0x1E93BCu) {
        ctx->pc = 0x1E93C0u;
        goto label_1e93c0;
    }
    ctx->pc = 0x1E93B8u;
    {
        const bool branch_taken_0x1e93b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e93b8) {
            ctx->pc = 0x1E9700u;
            goto label_1e9700;
        }
    }
    ctx->pc = 0x1E93C0u;
label_1e93c0:
    // 0x1e93c0: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e93c4:
    if (ctx->pc == 0x1E93C4u) {
        ctx->pc = 0x1E93C8u;
        goto label_1e93c8;
    }
    ctx->pc = 0x1E93C0u;
    {
        const bool branch_taken_0x1e93c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e93c0) {
            ctx->pc = 0x1E93C8u;
            goto label_1e93c8;
        }
    }
    ctx->pc = 0x1E93C8u;
label_1e93c8:
    // 0x1e93c8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e93cc:
    // 0x1e93cc: 0x846311f2  lh          $v1, 0x11F2($v1)
    ctx->pc = 0x1e93ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_1e93d0:
    // 0x1e93d0: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1e93d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_1e93d4:
    // 0x1e93d4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1e93d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1e93d8:
    // 0x1e93d8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e93dc:
    // 0x1e93dc: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1e93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1e93e0:
    // 0x1e93e0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1e93e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_1e93e4:
    // 0x1e93e4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1e93e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e93e8:
    // 0x1e93e8: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1e93e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1e93ec:
    // 0x1e93ec: 0x0  nop
    ctx->pc = 0x1e93ecu;
    // NOP
label_1e93f0:
    // 0x1e93f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1e93f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e93f4:
    // 0x1e93f4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1e93f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_1e93f8:
    // 0x1e93f8: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1e93f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e93fc:
    // 0x1e93fc: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x1e93fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_1e9400:
    // 0x1e9400: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9400u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e9404:
    // 0x1e9404: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9408:
    // 0x1e9408: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e9408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1e940c:
    // 0x1e940c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1e940cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e9410:
    // 0x1e9410: 0xc06d1d8  jal         func_1B4760
label_1e9414:
    if (ctx->pc == 0x1E9414u) {
        ctx->pc = 0x1E9418u;
        goto label_1e9418;
    }
    ctx->pc = 0x1E9410u;
    SET_GPR_U32(ctx, 31, 0x1E9418u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1E9410u, 0x1E9418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9418u;
label_1e9418:
    // 0x1e9418: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9418u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e941c:
    // 0x1e941c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9420:
    // 0x1e9420: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1e9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9424:
    // 0x1e9424: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1e9424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1e9428:
    // 0x1e9428: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_1e942c:
    // 0x1e942c: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x1e942cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e9430:
    // 0x1e9430: 0x10c00098  beqz        $a2, . + 4 + (0x98 << 2)
label_1e9434:
    if (ctx->pc == 0x1E9434u) {
        ctx->pc = 0x1E9438u;
        goto label_1e9438;
    }
    ctx->pc = 0x1E9430u;
    {
        const bool branch_taken_0x1e9430 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9430) {
            ctx->pc = 0x1E9694u;
            goto label_1e9694;
        }
    }
    ctx->pc = 0x1E9438u;
label_1e9438:
    // 0x1e9438: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e943c:
    // 0x1e943c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9440:
    // 0x1e9440: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e9440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1e9444:
    // 0x1e9444: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x1e9444u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_1e9448:
    // 0x1e9448: 0xc06d1d8  jal         func_1B4760
label_1e944c:
    if (ctx->pc == 0x1E944Cu) {
        ctx->pc = 0x1E9450u;
        goto label_1e9450;
    }
    ctx->pc = 0x1E9448u;
    SET_GPR_U32(ctx, 31, 0x1E9450u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1E9448u, 0x1E9450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9450u;
label_1e9450:
    // 0x1e9450: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9450u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9454:
    // 0x1e9454: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9458:
    // 0x1e9458: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1e9458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e945c:
    // 0x1e945c: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x1e945cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
label_1e9460:
    // 0x1e9460: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1e9460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_1e9464:
    // 0x1e9464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9468:
    // 0x1e9468: 0x0  nop
    ctx->pc = 0x1e9468u;
    // NOP
label_1e946c:
    // 0x1e946c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1e946cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e9470:
    // 0x1e9470: 0xc058fec  jal         func_163FB0
label_1e9474:
    if (ctx->pc == 0x1E9474u) {
        ctx->pc = 0x1E9478u;
        goto label_1e9478;
    }
    ctx->pc = 0x1E9470u;
    SET_GPR_U32(ctx, 31, 0x1E9478u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9470u, 0x1E9478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9478u;
label_1e9478:
    // 0x1e9478: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e947c:
    // 0x1e947c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1e947cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1e9480:
    // 0x1e9480: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e9480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9484:
    // 0x1e9484: 0xc4c11288  lwc1        $f1, 0x1288($a2)
    ctx->pc = 0x1e9484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9488:
    // 0x1e9488: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x1e9488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
label_1e948c:
    // 0x1e948c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e948cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9490:
    // 0x1e9490: 0x0  nop
    ctx->pc = 0x1e9490u;
    // NOP
label_1e9494:
    // 0x1e9494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9498:
    // 0x1e9498: 0x0  nop
    ctx->pc = 0x1e9498u;
    // NOP
label_1e949c:
    // 0x1e949c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_1e94a0:
    if (ctx->pc == 0x1E94A0u) {
        ctx->pc = 0x1E94A4u;
        goto label_1e94a4;
    }
    ctx->pc = 0x1E949Cu;
    {
        const bool branch_taken_0x1e949c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e949c) {
            ctx->pc = 0x1E9588u;
            goto label_1e9588;
        }
    }
    ctx->pc = 0x1E94A4u;
label_1e94a4:
    // 0x1e94a4: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e94a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e94a8:
    // 0x1e94a8: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e94ac:
    // 0x1e94ac: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x1e94acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
label_1e94b0:
    // 0x1e94b0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1e94b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1e94b4:
    // 0x1e94b4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1e94b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e94b8:
    // 0x1e94b8: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x1e94b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_1e94bc:
    // 0x1e94bc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e94bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1e94c0:
    // 0x1e94c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1e94c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e94c4:
    // 0x1e94c4: 0x26620120  addiu       $v0, $s3, 0x120
    ctx->pc = 0x1e94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
label_1e94c8:
    // 0x1e94c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e94c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e94cc:
    // 0x1e94cc: 0xc05caf8  jal         func_172BE0
label_1e94d0:
    if (ctx->pc == 0x1E94D0u) {
        ctx->pc = 0x1E94D4u;
        goto label_1e94d4;
    }
    ctx->pc = 0x1E94CCu;
    SET_GPR_U32(ctx, 31, 0x1E94D4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1E94CCu, 0x1E94D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94D4u;
label_1e94d4:
    // 0x1e94d4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1e94d8:
    if (ctx->pc == 0x1E94D8u) {
        ctx->pc = 0x1E94DCu;
        goto label_1e94dc;
    }
    ctx->pc = 0x1E94D4u;
    {
        const bool branch_taken_0x1e94d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e94d4) {
            ctx->pc = 0x1E9588u;
            goto label_1e9588;
        }
    }
    ctx->pc = 0x1E94DCu;
label_1e94dc:
    // 0x1e94dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e94dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e94e0:
    // 0x1e94e0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e94e4:
    // 0x1e94e4: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1e94e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_1e94e8:
    // 0x1e94e8: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e94e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e94ec:
    // 0x1e94ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e94f0:
    // 0x1e94f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e94f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e94f4:
    // 0x1e94f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e94f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e94f8:
    // 0x1e94f8: 0xc0c7a24  jal         func_31E890
label_1e94fc:
    if (ctx->pc == 0x1E94FCu) {
        ctx->pc = 0x1E9500u;
        goto label_1e9500;
    }
    ctx->pc = 0x1E94F8u;
    SET_GPR_U32(ctx, 31, 0x1E9500u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E94F8u, 0x1E9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9500u;
label_1e9500:
    // 0x1e9500: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9500u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9504:
    // 0x1e9504: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9508:
    // 0x1e9508: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e9508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e950c:
    // 0x1e950c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e950cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9510:
    // 0x1e9510: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e9510u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9514:
    // 0x1e9514: 0xc0c7a24  jal         func_31E890
label_1e9518:
    if (ctx->pc == 0x1E9518u) {
        ctx->pc = 0x1E951Cu;
        goto label_1e951c;
    }
    ctx->pc = 0x1E9514u;
    SET_GPR_U32(ctx, 31, 0x1E951Cu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9514u, 0x1E951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E951Cu;
label_1e951c:
    // 0x1e951c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e951cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9520:
    // 0x1e9520: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9524:
    // 0x1e9524: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e9524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e9528:
    // 0x1e9528: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e9528u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e952c:
    // 0x1e952c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e952cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9530:
    // 0x1e9530: 0xc0c7a24  jal         func_31E890
label_1e9534:
    if (ctx->pc == 0x1E9534u) {
        ctx->pc = 0x1E9538u;
        goto label_1e9538;
    }
    ctx->pc = 0x1E9530u;
    SET_GPR_U32(ctx, 31, 0x1E9538u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9530u, 0x1E9538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9538u;
label_1e9538:
    // 0x1e9538: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e953c:
    // 0x1e953c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e9540:
    // 0x1e9540: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e9540u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9544:
    // 0x1e9544: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e9544u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9548:
    // 0x1e9548: 0xc0c7a24  jal         func_31E890
label_1e954c:
    if (ctx->pc == 0x1E954Cu) {
        ctx->pc = 0x1E9550u;
        goto label_1e9550;
    }
    ctx->pc = 0x1E9548u;
    SET_GPR_U32(ctx, 31, 0x1E9550u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9548u, 0x1E9550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9550u;
label_1e9550:
    // 0x1e9550: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9554:
    // 0x1e9554: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e9558:
    // 0x1e9558: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e9558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1e955c:
    // 0x1e955c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e955cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9560:
    // 0x1e9560: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e9560u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9564:
    // 0x1e9564: 0xc0c7a24  jal         func_31E890
label_1e9568:
    if (ctx->pc == 0x1E9568u) {
        ctx->pc = 0x1E956Cu;
        goto label_1e956c;
    }
    ctx->pc = 0x1E9564u;
    SET_GPR_U32(ctx, 31, 0x1E956Cu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9564u, 0x1E956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E956Cu;
label_1e956c:
    // 0x1e956c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9570:
    // 0x1e9570: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e9570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9574:
    // 0x1e9574: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e9574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e9578:
    // 0x1e9578: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e9578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e957c:
    // 0x1e957c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e957cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9580:
    // 0x1e9580: 0xc0c7a24  jal         func_31E890
label_1e9584:
    if (ctx->pc == 0x1E9584u) {
        ctx->pc = 0x1E9588u;
        goto label_1e9588;
    }
    ctx->pc = 0x1E9580u;
    SET_GPR_U32(ctx, 31, 0x1E9588u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9580u, 0x1E9588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9588u;
label_1e9588:
    // 0x1e9588: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e958c:
    // 0x1e958c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1e958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9590:
    // 0x1e9590: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_1e9594:
    // 0x1e9594: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1e9594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_1e9598:
    // 0x1e9598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e959c:
    // 0x1e959c: 0x0  nop
    ctx->pc = 0x1e959cu;
    // NOP
label_1e95a0:
    // 0x1e95a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e95a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e95a4:
    // 0x1e95a4: 0xc058fec  jal         func_163FB0
label_1e95a8:
    if (ctx->pc == 0x1E95A8u) {
        ctx->pc = 0x1E95ACu;
        goto label_1e95ac;
    }
    ctx->pc = 0x1E95A4u;
    SET_GPR_U32(ctx, 31, 0x1E95ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E95A4u, 0x1E95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E95ACu;
label_1e95ac:
    // 0x1e95ac: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e95acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e95b0:
    // 0x1e95b0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1e95b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1e95b4:
    // 0x1e95b4: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e95b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e95b8:
    // 0x1e95b8: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x1e95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_1e95bc:
    // 0x1e95bc: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1e95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1e95c0:
    // 0x1e95c0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e95c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e95c4:
    // 0x1e95c4: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x1e95c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1e95c8:
    // 0x1e95c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e95cc:
    // 0x1e95cc: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x1e95ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
label_1e95d0:
    // 0x1e95d0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1e95d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
label_1e95d4:
    // 0x1e95d4: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x1e95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
label_1e95d8:
    // 0x1e95d8: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1e95d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e95dc:
    // 0x1e95dc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1e95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_1e95e0:
    // 0x1e95e0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x1e95e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1e95e4:
    // 0x1e95e4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1e95e8:
    // 0x1e95e8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1e95e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e95ec:
    // 0x1e95ec: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x1e95ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_1e95f0:
    // 0x1e95f0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1e95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_1e95f4:
    // 0x1e95f4: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e95f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e95f8:
    // 0x1e95f8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1e95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1e95fc:
    // 0x1e95fc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1e95fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1e9600:
    // 0x1e9600: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e9600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9604:
    // 0x1e9604: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1e9604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_1e9608:
    // 0x1e9608: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1e9608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1e960c:
    // 0x1e960c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e960cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9610:
    // 0x1e9610: 0xc067b18  jal         func_19EC60
label_1e9614:
    if (ctx->pc == 0x1E9614u) {
        ctx->pc = 0x1E9618u;
        goto label_1e9618;
    }
    ctx->pc = 0x1E9610u;
    SET_GPR_U32(ctx, 31, 0x1E9618u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E9610u, 0x1E9618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9618u;
label_1e9618:
    // 0x1e9618: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e961c:
    // 0x1e961c: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9620:
    // 0x1e9620: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e9620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1e9624:
    // 0x1e9624: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9628:
    // 0x1e9628: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x1e9628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e962c:
    // 0x1e962c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e962cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1e9630:
    // 0x1e9630: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9634:
    // 0x1e9634: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e9634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9638:
    // 0x1e9638: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1e963c:
    // 0x1e963c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e963cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1e9640:
    // 0x1e9640: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e9640u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9644:
    // 0x1e9644: 0x0  nop
    ctx->pc = 0x1e9644u;
    // NOP
label_1e9648:
    // 0x1e9648: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e9648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1e964c:
    // 0x1e964c: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e964cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9650:
    // 0x1e9650: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1e9650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1e9654:
    // 0x1e9654: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1e9654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1e9658:
    // 0x1e9658: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e9658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1e965c:
    // 0x1e965c: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1e965cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_1e9660:
    // 0x1e9660: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1e9660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1e9664:
    // 0x1e9664: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x1e9664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1e9668:
    // 0x1e9668: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e9668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1e966c:
    // 0x1e966c: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x1e966cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1e9670:
    // 0x1e9670: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9674:
    // 0x1e9674: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e9674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1e9678:
    // 0x1e9678: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x1e9678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_1e967c:
    // 0x1e967c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e967cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9680:
    // 0x1e9680: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1e9680u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9684:
    // 0x1e9684: 0xc06371c  jal         func_18DC70
label_1e9688:
    if (ctx->pc == 0x1E9688u) {
        ctx->pc = 0x1E968Cu;
        goto label_1e968c;
    }
    ctx->pc = 0x1E9684u;
    SET_GPR_U32(ctx, 31, 0x1E968Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1E9684u, 0x1E968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E968Cu;
label_1e968c:
    // 0x1e968c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e9690:
    if (ctx->pc == 0x1E9690u) {
        ctx->pc = 0x1E9694u;
        goto label_1e9694;
    }
    ctx->pc = 0x1E968Cu;
    {
        const bool branch_taken_0x1e968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e968c) {
            ctx->pc = 0x1E9788u;
            goto label_1e9788;
        }
    }
    ctx->pc = 0x1E9694u;
label_1e9694:
    // 0x1e9694: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9698:
    // 0x1e9698: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e9698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e969c:
    // 0x1e969c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1e96a0:
    // 0x1e96a0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e96a4:
    // 0x1e96a4: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e96a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96a8:
    // 0x1e96a8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e96a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1e96ac:
    // 0x1e96ac: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e96acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1e96b0:
    // 0x1e96b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e96b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e96b4:
    // 0x1e96b4: 0x0  nop
    ctx->pc = 0x1e96b4u;
    // NOP
label_1e96b8:
    // 0x1e96b8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e96b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1e96bc:
    // 0x1e96bc: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e96bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e96c0:
    // 0x1e96c0: 0xc4c01204  lwc1        $f0, 0x1204($a2)
    ctx->pc = 0x1e96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96c4:
    // 0x1e96c4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e96c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1e96c8:
    // 0x1e96c8: 0x2402170e  addiu       $v0, $zero, 0x170E
    ctx->pc = 0x1e96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_1e96cc:
    // 0x1e96cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e96ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e96d0:
    // 0x1e96d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e96d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e96d4:
    // 0x1e96d4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1e96d8:
    // 0x1e96d8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e96d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e96dc:
    // 0x1e96dc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e96dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e96e0:
    // 0x1e96e0: 0xc062f5c  jal         func_18BD70
label_1e96e4:
    if (ctx->pc == 0x1E96E4u) {
        ctx->pc = 0x1E96E8u;
        goto label_1e96e8;
    }
    ctx->pc = 0x1E96E0u;
    SET_GPR_U32(ctx, 31, 0x1E96E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E96E0u, 0x1E96E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96E8u;
label_1e96e8:
    // 0x1e96e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e96e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e96ec:
    // 0x1e96ec: 0xc0630a8  jal         func_18C2A0
label_1e96f0:
    if (ctx->pc == 0x1E96F0u) {
        ctx->pc = 0x1E96F4u;
        goto label_1e96f4;
    }
    ctx->pc = 0x1E96ECu;
    SET_GPR_U32(ctx, 31, 0x1E96F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E96ECu, 0x1E96F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96F4u;
label_1e96f4:
    // 0x1e96f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e96f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e96f8:
    // 0x1e96f8: 0x10000023  b           . + 4 + (0x23 << 2)
label_1e96fc:
    if (ctx->pc == 0x1E96FCu) {
        ctx->pc = 0x1E9700u;
        goto label_1e9700;
    }
    ctx->pc = 0x1E96F8u;
    {
        const bool branch_taken_0x1e96f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e96f8) {
            ctx->pc = 0x1E9788u;
            goto label_1e9788;
        }
    }
    ctx->pc = 0x1E9700u;
label_1e9700:
    // 0x1e9700: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9704:
    // 0x1e9704: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9708:
    // 0x1e9708: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e9708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1e970c:
    // 0x1e970c: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x1e970cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_1e9710:
    // 0x1e9710: 0xc06d1d8  jal         func_1B4760
label_1e9714:
    if (ctx->pc == 0x1E9714u) {
        ctx->pc = 0x1E9718u;
        goto label_1e9718;
    }
    ctx->pc = 0x1E9710u;
    SET_GPR_U32(ctx, 31, 0x1E9718u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1E9710u, 0x1E9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9718u;
label_1e9718:
    // 0x1e9718: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9718u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e971c:
    // 0x1e971c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1e9720:
    // 0x1e9720: 0xc040cbc  jal         func_1032F0
label_1e9724:
    if (ctx->pc == 0x1E9724u) {
        ctx->pc = 0x1E9728u;
        goto label_1e9728;
    }
    ctx->pc = 0x1E9720u;
    SET_GPR_U32(ctx, 31, 0x1E9728u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E9728u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E9728u) { return; }
    ctx->pc = 0x1E9728u;
label_1e9728:
    // 0x1e9728: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9728u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e972c:
    // 0x1e972c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9730:
    // 0x1e9730: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x1e9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9734:
    // 0x1e9734: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1e9734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1e9738:
    // 0x1e9738: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e973c:
    // 0x1e973c: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x1e973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9740:
    // 0x1e9740: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1e9740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1e9744:
    // 0x1e9744: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9748:
    // 0x1e9748: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e9748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e974c:
    // 0x1e974c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1e974cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1e9750:
    // 0x1e9750: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e9754:
    // 0x1e9754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9758:
    // 0x1e9758: 0x0  nop
    ctx->pc = 0x1e9758u;
    // NOP
label_1e975c:
    // 0x1e975c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1e975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1e9760:
    // 0x1e9760: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x1e9760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_1e9764:
    // 0x1e9764: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e9764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9768:
    // 0x1e9768: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1e9768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1e976c:
    // 0x1e976c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e976cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9770:
    // 0x1e9770: 0xc062f5c  jal         func_18BD70
label_1e9774:
    if (ctx->pc == 0x1E9774u) {
        ctx->pc = 0x1E9778u;
        goto label_1e9778;
    }
    ctx->pc = 0x1E9770u;
    SET_GPR_U32(ctx, 31, 0x1E9778u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E9770u, 0x1E9778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9778u;
label_1e9778:
    // 0x1e9778: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e9778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e977c:
    // 0x1e977c: 0xc0630a8  jal         func_18C2A0
label_1e9780:
    if (ctx->pc == 0x1E9780u) {
        ctx->pc = 0x1E9784u;
        goto label_1e9784;
    }
    ctx->pc = 0x1E977Cu;
    SET_GPR_U32(ctx, 31, 0x1E9784u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E977Cu, 0x1E9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9784u;
label_1e9784:
    // 0x1e9784: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e9784u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9788:
    // 0x1e9788: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e978c:
    // 0x1e978c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1e978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9790:
    // 0x1e9790: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1e9790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1e9794:
    // 0x1e9794: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1e9794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_1e9798:
    // 0x1e9798: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1e9798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_1e979c:
    // 0x1e979c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1e97a0:
    // 0x1e97a0: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1e97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2720)));
label_1e97a4:
    // 0x1e97a4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1e97a8:
    if (ctx->pc == 0x1E97A8u) {
        ctx->pc = 0x1E97ACu;
        goto label_1e97ac;
    }
    ctx->pc = 0x1E97A4u;
    {
        const bool branch_taken_0x1e97a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e97a4) {
            ctx->pc = 0x1E97E0u;
            goto label_1e97e0;
        }
    }
    ctx->pc = 0x1E97ACu;
label_1e97ac:
    // 0x1e97ac: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e97acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e97b0:
    // 0x1e97b0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1e97b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1e97b4:
    // 0x1e97b4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e97b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1e97b8:
    // 0x1e97b8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1e97bc:
    // 0x1e97bc: 0x24639d60  addiu       $v1, $v1, -0x62A0
    ctx->pc = 0x1e97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942048));
label_1e97c0:
    // 0x1e97c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e97c4:
    // 0x1e97c4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1e97c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e97c8:
    // 0x1e97c8: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1e97c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1e97cc:
    // 0x1e97cc: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e97d0:
    // 0x1e97d0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1e97d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e97d4:
    // 0x1e97d4: 0x84a3005e  lh          $v1, 0x5E($a1)
    ctx->pc = 0x1e97d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 94)));
label_1e97d8:
    // 0x1e97d8: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e97dc:
    // 0x1e97dc: 0xa4a4005e  sh          $a0, 0x5E($a1)
    ctx->pc = 0x1e97dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 94), (uint16_t)GPR_U32(ctx, 4));
label_1e97e0:
    // 0x1e97e0: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e97e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e97e4:
    // 0x1e97e4: 0x84c310a6  lh          $v1, 0x10A6($a2)
    ctx->pc = 0x1e97e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4262)));
label_1e97e8:
    // 0x1e97e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e97e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e97ec:
    // 0x1e97ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e97ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e97f0:
    // 0x1e97f0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
label_1e97f4:
    if (ctx->pc == 0x1E97F4u) {
        ctx->pc = 0x1E97F8u;
        goto label_1e97f8;
    }
    ctx->pc = 0x1E97F0u;
    {
        const bool branch_taken_0x1e97f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e97f0) {
            ctx->pc = 0x1E9808u;
            goto label_1e9808;
        }
    }
    ctx->pc = 0x1E97F8u;
label_1e97f8:
    // 0x1e97f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e97f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e97fc:
    // 0x1e97fc: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9800:
    // 0x1e9800: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x1e9800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9804:
    // 0x1e9804: 0xa644005e  sh          $a0, 0x5E($s2)
    ctx->pc = 0x1e9804u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 94), (uint16_t)GPR_U32(ctx, 4));
label_1e9808:
    // 0x1e9808: 0x8fb00198  lw          $s0, 0x198($sp)
    ctx->pc = 0x1e9808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e980c:
    // 0x1e980c: 0x860311f2  lh          $v1, 0x11F2($s0)
    ctx->pc = 0x1e980cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
label_1e9810:
    // 0x1e9810: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1e9810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_1e9814:
    // 0x1e9814: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1e9814u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1e9818:
    // 0x1e9818: 0x28a1012d  slti        $at, $a1, 0x12D
    ctx->pc = 0x1e9818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)301) ? 1 : 0);
label_1e981c:
    // 0x1e981c: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_1e9820:
    if (ctx->pc == 0x1E9820u) {
        ctx->pc = 0x1E9824u;
        goto label_1e9824;
    }
    ctx->pc = 0x1E981Cu;
    {
        const bool branch_taken_0x1e981c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e981c) {
            ctx->pc = 0x1E98A4u;
            goto label_1e98a4;
        }
    }
    ctx->pc = 0x1E9824u;
label_1e9824:
    // 0x1e9824: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9828:
    // 0x1e9828: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e9828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e982c:
    // 0x1e982c: 0x8463005e  lh          $v1, 0x5E($v1)
    ctx->pc = 0x1e982cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
label_1e9830:
    // 0x1e9830: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e9830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e9834:
    // 0x1e9834: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9834u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e9838:
    // 0x1e9838: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
label_1e983c:
    if (ctx->pc == 0x1E983Cu) {
        ctx->pc = 0x1E9840u;
        goto label_1e9840;
    }
    ctx->pc = 0x1E9838u;
    {
        const bool branch_taken_0x1e9838 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e9838) {
            ctx->pc = 0x1E98A4u;
            goto label_1e98a4;
        }
    }
    ctx->pc = 0x1E9840u;
label_1e9840:
    // 0x1e9840: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9844:
    // 0x1e9844: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_1e9848:
    // 0x1e9848: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e9848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e984c:
    // 0x1e984c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e984cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e9850:
    // 0x1e9850: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
label_1e9854:
    if (ctx->pc == 0x1E9854u) {
        ctx->pc = 0x1E9858u;
        goto label_1e9858;
    }
    ctx->pc = 0x1E9850u;
    {
        const bool branch_taken_0x1e9850 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e9850) {
            ctx->pc = 0x1E98A4u;
            goto label_1e98a4;
        }
    }
    ctx->pc = 0x1E9858u;
label_1e9858:
    // 0x1e9858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e985c:
    // 0x1e985c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1e985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1e9860:
    // 0x1e9860: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1e9860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1e9864:
    // 0x1e9864: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1e9868:
    if (ctx->pc == 0x1E9868u) {
        ctx->pc = 0x1E986Cu;
        goto label_1e986c;
    }
    ctx->pc = 0x1E9864u;
    {
        const bool branch_taken_0x1e9864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9864) {
            ctx->pc = 0x1E98A4u;
            goto label_1e98a4;
        }
    }
    ctx->pc = 0x1E986Cu;
label_1e986c:
    // 0x1e986c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9870:
    // 0x1e9870: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9874:
    // 0x1e9874: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e9874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1e9878:
    // 0x1e9878: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e9878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e987c:
    // 0x1e987c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9880:
    // 0x1e9880: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1e9880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1e9884:
    // 0x1e9884: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9888:
    // 0x1e9888: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1e9888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e988c:
    // 0x1e988c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9890:
    // 0x1e9890: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e9894:
    // 0x1e9894: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9898:
    // 0x1e9898: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e9898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1e989c:
    // 0x1e989c: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_1e98a0:
    if (ctx->pc == 0x1E98A0u) {
        ctx->pc = 0x1E98A4u;
        goto label_1e98a4;
    }
    ctx->pc = 0x1E989Cu;
    {
        const bool branch_taken_0x1e989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e989c) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E98A4u;
label_1e98a4:
    // 0x1e98a4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e98a8:
    // 0x1e98a8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1e98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1e98ac:
    // 0x1e98ac: 0x8462005e  lh          $v0, 0x5E($v1)
    ctx->pc = 0x1e98acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
label_1e98b0:
    // 0x1e98b0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1e98b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_1e98b4:
    // 0x1e98b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e98b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1e98b8:
    // 0x1e98b8: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
label_1e98bc:
    if (ctx->pc == 0x1E98BCu) {
        ctx->pc = 0x1E98C0u;
        goto label_1e98c0;
    }
    ctx->pc = 0x1E98B8u;
    {
        const bool branch_taken_0x1e98b8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1e98b8) {
            ctx->pc = 0x1E98F4u;
            goto label_1e98f4;
        }
    }
    ctx->pc = 0x1E98C0u;
label_1e98c0:
    // 0x1e98c0: 0xc067694  jal         func_19DA50
label_1e98c4:
    if (ctx->pc == 0x1E98C4u) {
        ctx->pc = 0x1E98C8u;
        goto label_1e98c8;
    }
    ctx->pc = 0x1E98C0u;
    SET_GPR_U32(ctx, 31, 0x1E98C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E98C0u, 0x1E98C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98C8u;
label_1e98c8:
    // 0x1e98c8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e98c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e98cc:
    // 0x1e98cc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1e98ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1e98d0:
    // 0x1e98d0: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x1e98d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_1e98d4:
    // 0x1e98d4: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1e98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1e98d8:
    // 0x1e98d8: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x1e98d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_1e98dc:
    // 0x1e98dc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1e98dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1e98e0:
    // 0x1e98e0: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e98e4:
    // 0x1e98e4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e98e8:
    // 0x1e98e8: 0xa466005e  sh          $a2, 0x5E($v1)
    ctx->pc = 0x1e98e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 6));
label_1e98ec:
    // 0x1e98ec: 0x10000064  b           . + 4 + (0x64 << 2)
label_1e98f0:
    if (ctx->pc == 0x1E98F0u) {
        ctx->pc = 0x1E98F4u;
        goto label_1e98f4;
    }
    ctx->pc = 0x1E98ECu;
    {
        const bool branch_taken_0x1e98ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e98ec) {
            ctx->pc = 0x1E9A80u;
            goto label_1e9a80;
        }
    }
    ctx->pc = 0x1E98F4u;
label_1e98f4:
    // 0x1e98f4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e98f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e98f8:
    // 0x1e98f8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1e98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1e98fc:
    // 0x1e98fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e98fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1e9900:
    // 0x1e9900: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e9900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9904:
    // 0x1e9904: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1e9904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_1e9908:
    // 0x1e9908: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1e9908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1e990c:
    // 0x1e990c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e990cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9910:
    // 0x1e9910: 0xc067b18  jal         func_19EC60
label_1e9914:
    if (ctx->pc == 0x1E9914u) {
        ctx->pc = 0x1E9918u;
        goto label_1e9918;
    }
    ctx->pc = 0x1E9910u;
    SET_GPR_U32(ctx, 31, 0x1E9918u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E9910u, 0x1E9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9918u;
label_1e9918:
    // 0x1e9918: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e991c:
    // 0x1e991c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1e991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9920:
    // 0x1e9920: 0x8483005c  lh          $v1, 0x5C($a0)
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
label_1e9924:
    // 0x1e9924: 0x2465fffb  addiu       $a1, $v1, -0x5
    ctx->pc = 0x1e9924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1e9928:
    // 0x1e9928: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x1e9928u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
label_1e992c:
    // 0x1e992c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9930:
    // 0x1e9930: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1e9930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9934:
    // 0x1e9934: 0x8483005c  lh          $v1, 0x5C($a0)
    ctx->pc = 0x1e9934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
label_1e9938:
    // 0x1e9938: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1e9938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1e993c:
    // 0x1e993c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e993cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1e9940:
    // 0x1e9940: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1e9944:
    if (ctx->pc == 0x1E9944u) {
        ctx->pc = 0x1E9948u;
        goto label_1e9948;
    }
    ctx->pc = 0x1E9940u;
    {
        const bool branch_taken_0x1e9940 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1e9940) {
            ctx->pc = 0x1E9954u;
            goto label_1e9954;
        }
    }
    ctx->pc = 0x1E9948u;
label_1e9948:
    // 0x1e9948: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e994c:
    // 0x1e994c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1e994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9950:
    // 0x1e9950: 0xa440005c  sh          $zero, 0x5C($v0)
    ctx->pc = 0x1e9950u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
label_1e9954:
    // 0x1e9954: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e9954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1e9958:
    // 0x1e9958: 0xc040cbc  jal         func_1032F0
label_1e995c:
    if (ctx->pc == 0x1E995Cu) {
        ctx->pc = 0x1E9960u;
        goto label_1e9960;
    }
    ctx->pc = 0x1E9958u;
    SET_GPR_U32(ctx, 31, 0x1E9960u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E9960u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E9960u) { return; }
    ctx->pc = 0x1E9960u;
label_1e9960:
    // 0x1e9960: 0x8fb10198  lw          $s1, 0x198($sp)
    ctx->pc = 0x1e9960u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9964:
    // 0x1e9964: 0xc6211200  lwc1        $f1, 0x1200($s1)
    ctx->pc = 0x1e9964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9968:
    // 0x1e9968: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e996c:
    // 0x1e996c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1e996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9970:
    // 0x1e9970: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e9970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e9974:
    // 0x1e9974: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e9974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e9978:
    // 0x1e9978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e997c:
    // 0x1e997c: 0x0  nop
    ctx->pc = 0x1e997cu;
    // NOP
label_1e9980:
    // 0x1e9980: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e9980u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1e9984:
    // 0x1e9984: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9988:
    // 0x1e9988: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e9988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e998c:
    // 0x1e998c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e998cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e9990:
    // 0x1e9990: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1e9990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1e9994:
    // 0x1e9994: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9998:
    // 0x1e9998: 0xc4411204  lwc1        $f1, 0x1204($v0)
    ctx->pc = 0x1e9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e999c:
    // 0x1e999c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1e999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1e99a0:
    // 0x1e99a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e99a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e99a4:
    // 0x1e99a4: 0x0  nop
    ctx->pc = 0x1e99a4u;
    // NOP
label_1e99a8:
    // 0x1e99a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e99a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e99ac:
    // 0x1e99ac: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1e99acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1e99b0:
    // 0x1e99b0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e99b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e99b4:
    // 0x1e99b4: 0xc4611208  lwc1        $f1, 0x1208($v1)
    ctx->pc = 0x1e99b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e99b8:
    // 0x1e99b8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e99bc:
    // 0x1e99bc: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1e99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e99c0:
    // 0x1e99c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e99c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e99c4:
    // 0x1e99c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e99c8:
    // 0x1e99c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e99c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e99cc:
    // 0x1e99cc: 0x0  nop
    ctx->pc = 0x1e99ccu;
    // NOP
label_1e99d0:
    // 0x1e99d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e99d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1e99d4:
    // 0x1e99d4: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e99d8:
    // 0x1e99d8: 0xc4801208  lwc1        $f0, 0x1208($a0)
    ctx->pc = 0x1e99d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e99dc:
    // 0x1e99dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e99dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e99e0:
    // 0x1e99e0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1e99e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1e99e4:
    // 0x1e99e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1e99e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1e99e8:
    // 0x1e99e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e99e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e99ec:
    // 0x1e99ec: 0x0  nop
    ctx->pc = 0x1e99ecu;
    // NOP
label_1e99f0:
    // 0x1e99f0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e99f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1e99f4:
    // 0x1e99f4: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1e99f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_1e99f8:
    // 0x1e99f8: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x1e99f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1e99fc:
    // 0x1e99fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e99fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9a00:
    // 0x1e9a00: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1e9a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9a04:
    // 0x1e9a04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1e9a04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e9a08:
    // 0x1e9a08: 0xc058fec  jal         func_163FB0
label_1e9a0c:
    if (ctx->pc == 0x1E9A0Cu) {
        ctx->pc = 0x1E9A10u;
        goto label_1e9a10;
    }
    ctx->pc = 0x1E9A08u;
    SET_GPR_U32(ctx, 31, 0x1E9A10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9A08u, 0x1E9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A10u;
label_1e9a10:
    // 0x1e9a10: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e9a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e9a14:
    // 0x1e9a14: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9a18:
    // 0x1e9a18: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e9a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1e9a1c:
    // 0x1e9a1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e9a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1e9a20:
    // 0x1e9a20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e9a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1e9a24:
    // 0x1e9a24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e9a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1e9a28:
    // 0x1e9a28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e9a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1e9a2c:
    // 0x1e9a2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e9a30:
    // 0x1e9a30: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1e9a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1e9a34:
    // 0x1e9a34: 0x34820206  ori         $v0, $a0, 0x206
    ctx->pc = 0x1e9a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)518);
label_1e9a38:
    // 0x1e9a38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e9a38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9a3c:
    // 0x1e9a3c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1e9a40:
    // 0x1e9a40: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1e9a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e9a44:
    // 0x1e9a44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e9a44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9a48:
    // 0x1e9a48: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1e9a48u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9a4c:
    // 0x1e9a4c: 0xc06371c  jal         func_18DC70
label_1e9a50:
    if (ctx->pc == 0x1E9A50u) {
        ctx->pc = 0x1E9A54u;
        goto label_1e9a54;
    }
    ctx->pc = 0x1E9A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A54u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1E9A4Cu, 0x1E9A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A54u;
label_1e9a54:
    // 0x1e9a54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9a54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9a58:
    // 0x1e9a58: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1e9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_1e9a5c:
    // 0x1e9a5c: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1e9a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1e9a60:
    // 0x1e9a60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e9a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9a64:
    // 0x1e9a64: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1e9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9a68:
    // 0x1e9a68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1e9a68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e9a6c:
    // 0x1e9a6c: 0xc058fec  jal         func_163FB0
label_1e9a70:
    if (ctx->pc == 0x1E9A70u) {
        ctx->pc = 0x1E9A74u;
        goto label_1e9a74;
    }
    ctx->pc = 0x1E9A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9A6Cu, 0x1E9A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A74u;
label_1e9a74:
    // 0x1e9a74: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e9a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e9a78:
    // 0x1e9a78: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1e9a7c:
    if (ctx->pc == 0x1E9A7Cu) {
        ctx->pc = 0x1E9A80u;
        goto label_1e9a80;
    }
    ctx->pc = 0x1E9A78u;
    {
        const bool branch_taken_0x1e9a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a78) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E9A80u;
label_1e9a80:
    // 0x1e9a80: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9a84:
    // 0x1e9a84: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1e9a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_1e9a88:
    // 0x1e9a88: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e9a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e9a8c:
    // 0x1e9a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e9a90:
    // 0x1e9a90: 0x4600044  bltz        $v1, . + 4 + (0x44 << 2)
label_1e9a94:
    if (ctx->pc == 0x1E9A94u) {
        ctx->pc = 0x1E9A98u;
        goto label_1e9a98;
    }
    ctx->pc = 0x1E9A90u;
    {
        const bool branch_taken_0x1e9a90 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e9a90) {
            ctx->pc = 0x1E9BA4u;
            goto label_1e9ba4;
        }
    }
    ctx->pc = 0x1E9A98u;
label_1e9a98:
    // 0x1e9a98: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9a9c:
    // 0x1e9a9c: 0x94a311f6  lhu         $v1, 0x11F6($a1)
    ctx->pc = 0x1e9a9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4598)));
label_1e9aa0:
    // 0x1e9aa0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e9aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1e9aa4:
    // 0x1e9aa4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1e9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e9aa8:
    // 0x1e9aa8: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
label_1e9aac:
    if (ctx->pc == 0x1E9AACu) {
        ctx->pc = 0x1E9AB0u;
        goto label_1e9ab0;
    }
    ctx->pc = 0x1E9AA8u;
    {
        const bool branch_taken_0x1e9aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9aa8) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9AB0u;
label_1e9ab0:
    // 0x1e9ab0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1e9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1e9ab4:
    // 0x1e9ab4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
label_1e9ab8:
    if (ctx->pc == 0x1E9AB8u) {
        ctx->pc = 0x1E9ABCu;
        goto label_1e9abc;
    }
    ctx->pc = 0x1E9AB4u;
    {
        const bool branch_taken_0x1e9ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9ab4) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9ABCu;
label_1e9abc:
    // 0x1e9abc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1e9abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e9ac0:
    // 0x1e9ac0: 0x1086002b  beq         $a0, $a2, . + 4 + (0x2B << 2)
label_1e9ac4:
    if (ctx->pc == 0x1E9AC4u) {
        ctx->pc = 0x1E9AC8u;
        goto label_1e9ac8;
    }
    ctx->pc = 0x1E9AC0u;
    {
        const bool branch_taken_0x1e9ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e9ac0) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9AC8u;
label_1e9ac8:
    // 0x1e9ac8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e9acc:
    // 0x1e9acc: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_1e9ad0:
    if (ctx->pc == 0x1E9AD0u) {
        ctx->pc = 0x1E9AD4u;
        goto label_1e9ad4;
    }
    ctx->pc = 0x1E9ACCu;
    {
        const bool branch_taken_0x1e9acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9acc) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9AD4u;
label_1e9ad4:
    // 0x1e9ad4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e9ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e9ad8:
    // 0x1e9ad8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_1e9adc:
    if (ctx->pc == 0x1E9ADCu) {
        ctx->pc = 0x1E9AE0u;
        goto label_1e9ae0;
    }
    ctx->pc = 0x1E9AD8u;
    {
        const bool branch_taken_0x1e9ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9ad8) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9AE0u;
label_1e9ae0:
    // 0x1e9ae0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1e9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e9ae4:
    // 0x1e9ae4: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1e9ae8:
    if (ctx->pc == 0x1E9AE8u) {
        ctx->pc = 0x1E9AECu;
        goto label_1e9aec;
    }
    ctx->pc = 0x1E9AE4u;
    {
        const bool branch_taken_0x1e9ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9ae4) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9AECu;
label_1e9aec:
    // 0x1e9aec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1e9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e9af0:
    // 0x1e9af0: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_1e9af4:
    if (ctx->pc == 0x1E9AF4u) {
        ctx->pc = 0x1E9AF8u;
        goto label_1e9af8;
    }
    ctx->pc = 0x1E9AF0u;
    {
        const bool branch_taken_0x1e9af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9af0) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9AF8u;
label_1e9af8:
    // 0x1e9af8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1e9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e9afc:
    // 0x1e9afc: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_1e9b00:
    if (ctx->pc == 0x1E9B00u) {
        ctx->pc = 0x1E9B04u;
        goto label_1e9b04;
    }
    ctx->pc = 0x1E9AFCu;
    {
        const bool branch_taken_0x1e9afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9afc) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9B04u;
label_1e9b04:
    // 0x1e9b04: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e9b08:
    // 0x1e9b08: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_1e9b0c:
    if (ctx->pc == 0x1E9B0Cu) {
        ctx->pc = 0x1E9B10u;
        goto label_1e9b10;
    }
    ctx->pc = 0x1E9B08u;
    {
        const bool branch_taken_0x1e9b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9b08) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9B10u;
label_1e9b10:
    // 0x1e9b10: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e9b14:
    // 0x1e9b14: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_1e9b18:
    if (ctx->pc == 0x1E9B18u) {
        ctx->pc = 0x1E9B1Cu;
        goto label_1e9b1c;
    }
    ctx->pc = 0x1E9B14u;
    {
        const bool branch_taken_0x1e9b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9b14) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9B1Cu;
label_1e9b1c:
    // 0x1e9b1c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e9b20:
    // 0x1e9b20: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_1e9b24:
    if (ctx->pc == 0x1E9B24u) {
        ctx->pc = 0x1E9B28u;
        goto label_1e9b28;
    }
    ctx->pc = 0x1E9B20u;
    {
        const bool branch_taken_0x1e9b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9b20) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9B28u;
label_1e9b28:
    // 0x1e9b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9b2c:
    // 0x1e9b2c: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
label_1e9b30:
    if (ctx->pc == 0x1E9B30u) {
        ctx->pc = 0x1E9B34u;
        goto label_1e9b34;
    }
    ctx->pc = 0x1E9B2Cu;
    {
        const bool branch_taken_0x1e9b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e9b2c) {
            ctx->pc = 0x1E9B3Cu;
            goto label_1e9b3c;
        }
    }
    ctx->pc = 0x1E9B34u;
label_1e9b34:
    // 0x1e9b34: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e9b38:
    if (ctx->pc == 0x1E9B38u) {
        ctx->pc = 0x1E9B3Cu;
        goto label_1e9b3c;
    }
    ctx->pc = 0x1E9B34u;
    {
        const bool branch_taken_0x1e9b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b34) {
            ctx->pc = 0x1E9B3Cu;
            goto label_1e9b3c;
        }
    }
    ctx->pc = 0x1E9B3Cu;
label_1e9b3c:
    // 0x1e9b3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9b40:
    // 0x1e9b40: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b44:
    // 0x1e9b44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e9b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1e9b48:
    // 0x1e9b48: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b4c:
    // 0x1e9b4c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1e9b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e9b50:
    // 0x1e9b50: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b54:
    // 0x1e9b54: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1e9b54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e9b58:
    // 0x1e9b58: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b5c:
    // 0x1e9b5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e9b60:
    // 0x1e9b60: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b64:
    // 0x1e9b64: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e9b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1e9b68:
    // 0x1e9b68: 0x10000031  b           . + 4 + (0x31 << 2)
label_1e9b6c:
    if (ctx->pc == 0x1E9B6Cu) {
        ctx->pc = 0x1E9B70u;
        goto label_1e9b70;
    }
    ctx->pc = 0x1E9B68u;
    {
        const bool branch_taken_0x1e9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b68) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E9B70u;
label_1e9b70:
    // 0x1e9b70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e9b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9b74:
    // 0x1e9b74: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b78:
    // 0x1e9b78: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1e9b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_1e9b7c:
    // 0x1e9b7c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b80:
    // 0x1e9b80: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1e9b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e9b84:
    // 0x1e9b84: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b88:
    // 0x1e9b88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1e9b88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e9b8c:
    // 0x1e9b8c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b90:
    // 0x1e9b90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e9b94:
    // 0x1e9b94: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9b98:
    // 0x1e9b98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e9b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1e9b9c:
    // 0x1e9b9c: 0x10000024  b           . + 4 + (0x24 << 2)
label_1e9ba0:
    if (ctx->pc == 0x1E9BA0u) {
        ctx->pc = 0x1E9BA4u;
        goto label_1e9ba4;
    }
    ctx->pc = 0x1E9B9Cu;
    {
        const bool branch_taken_0x1e9b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b9c) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E9BA4u;
label_1e9ba4:
    // 0x1e9ba4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9ba8:
    // 0x1e9ba8: 0x946411f6  lhu         $a0, 0x11F6($v1)
    ctx->pc = 0x1e9ba8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1e9bac:
    // 0x1e9bac: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x1e9bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1e9bb0:
    // 0x1e9bb0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e9bb4:
    // 0x1e9bb4: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
label_1e9bb8:
    if (ctx->pc == 0x1E9BB8u) {
        ctx->pc = 0x1E9BBCu;
        goto label_1e9bbc;
    }
    ctx->pc = 0x1E9BB4u;
    {
        const bool branch_taken_0x1e9bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9bb4) {
            ctx->pc = 0x1E9C04u;
            goto label_1e9c04;
        }
    }
    ctx->pc = 0x1E9BBCu;
label_1e9bbc:
    // 0x1e9bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9bc0:
    // 0x1e9bc0: 0x10c40003  beq         $a2, $a0, . + 4 + (0x3 << 2)
label_1e9bc4:
    if (ctx->pc == 0x1E9BC4u) {
        ctx->pc = 0x1E9BC8u;
        goto label_1e9bc8;
    }
    ctx->pc = 0x1E9BC0u;
    {
        const bool branch_taken_0x1e9bc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e9bc0) {
            ctx->pc = 0x1E9BD0u;
            goto label_1e9bd0;
        }
    }
    ctx->pc = 0x1E9BC8u;
label_1e9bc8:
    // 0x1e9bc8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e9bcc:
    if (ctx->pc == 0x1E9BCCu) {
        ctx->pc = 0x1E9BD0u;
        goto label_1e9bd0;
    }
    ctx->pc = 0x1E9BC8u;
    {
        const bool branch_taken_0x1e9bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bc8) {
            ctx->pc = 0x1E9BD0u;
            goto label_1e9bd0;
        }
    }
    ctx->pc = 0x1E9BD0u;
label_1e9bd0:
    // 0x1e9bd0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1e9bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9bd4:
    // 0x1e9bd4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9bd8:
    // 0x1e9bd8: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1e9bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_1e9bdc:
    // 0x1e9bdc: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9be0:
    // 0x1e9be0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1e9be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e9be4:
    // 0x1e9be4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9be8:
    // 0x1e9be8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1e9be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e9bec:
    // 0x1e9bec: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9bf0:
    // 0x1e9bf0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e9bf4:
    // 0x1e9bf4: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9bf8:
    // 0x1e9bf8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1e9bfc:
    // 0x1e9bfc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e9c00:
    if (ctx->pc == 0x1E9C00u) {
        ctx->pc = 0x1E9C04u;
        goto label_1e9c04;
    }
    ctx->pc = 0x1E9BFCu;
    {
        const bool branch_taken_0x1e9bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bfc) {
            ctx->pc = 0x1E9C30u;
            goto label_1e9c30;
        }
    }
    ctx->pc = 0x1E9C04u;
label_1e9c04:
    // 0x1e9c04: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1e9c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9c08:
    // 0x1e9c08: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9c0c:
    // 0x1e9c0c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x1e9c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_1e9c10:
    // 0x1e9c10: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e9c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9c14:
    // 0x1e9c14: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x1e9c14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e9c18:
    // 0x1e9c18: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e9c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9c1c:
    // 0x1e9c1c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1e9c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e9c20:
    // 0x1e9c20: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9c24:
    // 0x1e9c24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9c24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1e9c28:
    // 0x1e9c28: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9c2c:
    // 0x1e9c2c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1e9c30:
    // 0x1e9c30: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1e9c30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9c34:
    // 0x1e9c34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9c38:
    // 0x1e9c38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9c3c:
    // 0x1e9c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9c40:
    // 0x1e9c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9c44:
    // 0x1e9c44: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x1e9c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1e9c48:
    // 0x1e9c48: 0x3e00008  jr          $ra
label_1e9c4c:
    if (ctx->pc == 0x1E9C4Cu) {
        ctx->pc = 0x1E9C50u;
        goto label_fallthrough_0x1e9c48;
    }
    ctx->pc = 0x1E9C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9c48:
    ctx->pc = 0x1E9C50u;
}
