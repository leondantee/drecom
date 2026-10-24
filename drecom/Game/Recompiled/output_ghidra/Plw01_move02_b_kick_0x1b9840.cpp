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

// Function: Plw01_move02_b_kick
// Address: 0x1b9840 - 0x1bad04
void Plw01_move02_b_kick_0x1b9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move02_b_kick_0x1b9840");
#endif

    switch (ctx->pc) {
        case 0x1b9840u: goto label_1b9840;
        case 0x1b9844u: goto label_1b9844;
        case 0x1b9848u: goto label_1b9848;
        case 0x1b984cu: goto label_1b984c;
        case 0x1b9850u: goto label_1b9850;
        case 0x1b9854u: goto label_1b9854;
        case 0x1b9858u: goto label_1b9858;
        case 0x1b985cu: goto label_1b985c;
        case 0x1b9860u: goto label_1b9860;
        case 0x1b9864u: goto label_1b9864;
        case 0x1b9868u: goto label_1b9868;
        case 0x1b986cu: goto label_1b986c;
        case 0x1b9870u: goto label_1b9870;
        case 0x1b9874u: goto label_1b9874;
        case 0x1b9878u: goto label_1b9878;
        case 0x1b987cu: goto label_1b987c;
        case 0x1b9880u: goto label_1b9880;
        case 0x1b9884u: goto label_1b9884;
        case 0x1b9888u: goto label_1b9888;
        case 0x1b988cu: goto label_1b988c;
        case 0x1b9890u: goto label_1b9890;
        case 0x1b9894u: goto label_1b9894;
        case 0x1b9898u: goto label_1b9898;
        case 0x1b989cu: goto label_1b989c;
        case 0x1b98a0u: goto label_1b98a0;
        case 0x1b98a4u: goto label_1b98a4;
        case 0x1b98a8u: goto label_1b98a8;
        case 0x1b98acu: goto label_1b98ac;
        case 0x1b98b0u: goto label_1b98b0;
        case 0x1b98b4u: goto label_1b98b4;
        case 0x1b98b8u: goto label_1b98b8;
        case 0x1b98bcu: goto label_1b98bc;
        case 0x1b98c0u: goto label_1b98c0;
        case 0x1b98c4u: goto label_1b98c4;
        case 0x1b98c8u: goto label_1b98c8;
        case 0x1b98ccu: goto label_1b98cc;
        case 0x1b98d0u: goto label_1b98d0;
        case 0x1b98d4u: goto label_1b98d4;
        case 0x1b98d8u: goto label_1b98d8;
        case 0x1b98dcu: goto label_1b98dc;
        case 0x1b98e0u: goto label_1b98e0;
        case 0x1b98e4u: goto label_1b98e4;
        case 0x1b98e8u: goto label_1b98e8;
        case 0x1b98ecu: goto label_1b98ec;
        case 0x1b98f0u: goto label_1b98f0;
        case 0x1b98f4u: goto label_1b98f4;
        case 0x1b98f8u: goto label_1b98f8;
        case 0x1b98fcu: goto label_1b98fc;
        case 0x1b9900u: goto label_1b9900;
        case 0x1b9904u: goto label_1b9904;
        case 0x1b9908u: goto label_1b9908;
        case 0x1b990cu: goto label_1b990c;
        case 0x1b9910u: goto label_1b9910;
        case 0x1b9914u: goto label_1b9914;
        case 0x1b9918u: goto label_1b9918;
        case 0x1b991cu: goto label_1b991c;
        case 0x1b9920u: goto label_1b9920;
        case 0x1b9924u: goto label_1b9924;
        case 0x1b9928u: goto label_1b9928;
        case 0x1b992cu: goto label_1b992c;
        case 0x1b9930u: goto label_1b9930;
        case 0x1b9934u: goto label_1b9934;
        case 0x1b9938u: goto label_1b9938;
        case 0x1b993cu: goto label_1b993c;
        case 0x1b9940u: goto label_1b9940;
        case 0x1b9944u: goto label_1b9944;
        case 0x1b9948u: goto label_1b9948;
        case 0x1b994cu: goto label_1b994c;
        case 0x1b9950u: goto label_1b9950;
        case 0x1b9954u: goto label_1b9954;
        case 0x1b9958u: goto label_1b9958;
        case 0x1b995cu: goto label_1b995c;
        case 0x1b9960u: goto label_1b9960;
        case 0x1b9964u: goto label_1b9964;
        case 0x1b9968u: goto label_1b9968;
        case 0x1b996cu: goto label_1b996c;
        case 0x1b9970u: goto label_1b9970;
        case 0x1b9974u: goto label_1b9974;
        case 0x1b9978u: goto label_1b9978;
        case 0x1b997cu: goto label_1b997c;
        case 0x1b9980u: goto label_1b9980;
        case 0x1b9984u: goto label_1b9984;
        case 0x1b9988u: goto label_1b9988;
        case 0x1b998cu: goto label_1b998c;
        case 0x1b9990u: goto label_1b9990;
        case 0x1b9994u: goto label_1b9994;
        case 0x1b9998u: goto label_1b9998;
        case 0x1b999cu: goto label_1b999c;
        case 0x1b99a0u: goto label_1b99a0;
        case 0x1b99a4u: goto label_1b99a4;
        case 0x1b99a8u: goto label_1b99a8;
        case 0x1b99acu: goto label_1b99ac;
        case 0x1b99b0u: goto label_1b99b0;
        case 0x1b99b4u: goto label_1b99b4;
        case 0x1b99b8u: goto label_1b99b8;
        case 0x1b99bcu: goto label_1b99bc;
        case 0x1b99c0u: goto label_1b99c0;
        case 0x1b99c4u: goto label_1b99c4;
        case 0x1b99c8u: goto label_1b99c8;
        case 0x1b99ccu: goto label_1b99cc;
        case 0x1b99d0u: goto label_1b99d0;
        case 0x1b99d4u: goto label_1b99d4;
        case 0x1b99d8u: goto label_1b99d8;
        case 0x1b99dcu: goto label_1b99dc;
        case 0x1b99e0u: goto label_1b99e0;
        case 0x1b99e4u: goto label_1b99e4;
        case 0x1b99e8u: goto label_1b99e8;
        case 0x1b99ecu: goto label_1b99ec;
        case 0x1b99f0u: goto label_1b99f0;
        case 0x1b99f4u: goto label_1b99f4;
        case 0x1b99f8u: goto label_1b99f8;
        case 0x1b99fcu: goto label_1b99fc;
        case 0x1b9a00u: goto label_1b9a00;
        case 0x1b9a04u: goto label_1b9a04;
        case 0x1b9a08u: goto label_1b9a08;
        case 0x1b9a0cu: goto label_1b9a0c;
        case 0x1b9a10u: goto label_1b9a10;
        case 0x1b9a14u: goto label_1b9a14;
        case 0x1b9a18u: goto label_1b9a18;
        case 0x1b9a1cu: goto label_1b9a1c;
        case 0x1b9a20u: goto label_1b9a20;
        case 0x1b9a24u: goto label_1b9a24;
        case 0x1b9a28u: goto label_1b9a28;
        case 0x1b9a2cu: goto label_1b9a2c;
        case 0x1b9a30u: goto label_1b9a30;
        case 0x1b9a34u: goto label_1b9a34;
        case 0x1b9a38u: goto label_1b9a38;
        case 0x1b9a3cu: goto label_1b9a3c;
        case 0x1b9a40u: goto label_1b9a40;
        case 0x1b9a44u: goto label_1b9a44;
        case 0x1b9a48u: goto label_1b9a48;
        case 0x1b9a4cu: goto label_1b9a4c;
        case 0x1b9a50u: goto label_1b9a50;
        case 0x1b9a54u: goto label_1b9a54;
        case 0x1b9a58u: goto label_1b9a58;
        case 0x1b9a5cu: goto label_1b9a5c;
        case 0x1b9a60u: goto label_1b9a60;
        case 0x1b9a64u: goto label_1b9a64;
        case 0x1b9a68u: goto label_1b9a68;
        case 0x1b9a6cu: goto label_1b9a6c;
        case 0x1b9a70u: goto label_1b9a70;
        case 0x1b9a74u: goto label_1b9a74;
        case 0x1b9a78u: goto label_1b9a78;
        case 0x1b9a7cu: goto label_1b9a7c;
        case 0x1b9a80u: goto label_1b9a80;
        case 0x1b9a84u: goto label_1b9a84;
        case 0x1b9a88u: goto label_1b9a88;
        case 0x1b9a8cu: goto label_1b9a8c;
        case 0x1b9a90u: goto label_1b9a90;
        case 0x1b9a94u: goto label_1b9a94;
        case 0x1b9a98u: goto label_1b9a98;
        case 0x1b9a9cu: goto label_1b9a9c;
        case 0x1b9aa0u: goto label_1b9aa0;
        case 0x1b9aa4u: goto label_1b9aa4;
        case 0x1b9aa8u: goto label_1b9aa8;
        case 0x1b9aacu: goto label_1b9aac;
        case 0x1b9ab0u: goto label_1b9ab0;
        case 0x1b9ab4u: goto label_1b9ab4;
        case 0x1b9ab8u: goto label_1b9ab8;
        case 0x1b9abcu: goto label_1b9abc;
        case 0x1b9ac0u: goto label_1b9ac0;
        case 0x1b9ac4u: goto label_1b9ac4;
        case 0x1b9ac8u: goto label_1b9ac8;
        case 0x1b9accu: goto label_1b9acc;
        case 0x1b9ad0u: goto label_1b9ad0;
        case 0x1b9ad4u: goto label_1b9ad4;
        case 0x1b9ad8u: goto label_1b9ad8;
        case 0x1b9adcu: goto label_1b9adc;
        case 0x1b9ae0u: goto label_1b9ae0;
        case 0x1b9ae4u: goto label_1b9ae4;
        case 0x1b9ae8u: goto label_1b9ae8;
        case 0x1b9aecu: goto label_1b9aec;
        case 0x1b9af0u: goto label_1b9af0;
        case 0x1b9af4u: goto label_1b9af4;
        case 0x1b9af8u: goto label_1b9af8;
        case 0x1b9afcu: goto label_1b9afc;
        case 0x1b9b00u: goto label_1b9b00;
        case 0x1b9b04u: goto label_1b9b04;
        case 0x1b9b08u: goto label_1b9b08;
        case 0x1b9b0cu: goto label_1b9b0c;
        case 0x1b9b10u: goto label_1b9b10;
        case 0x1b9b14u: goto label_1b9b14;
        case 0x1b9b18u: goto label_1b9b18;
        case 0x1b9b1cu: goto label_1b9b1c;
        case 0x1b9b20u: goto label_1b9b20;
        case 0x1b9b24u: goto label_1b9b24;
        case 0x1b9b28u: goto label_1b9b28;
        case 0x1b9b2cu: goto label_1b9b2c;
        case 0x1b9b30u: goto label_1b9b30;
        case 0x1b9b34u: goto label_1b9b34;
        case 0x1b9b38u: goto label_1b9b38;
        case 0x1b9b3cu: goto label_1b9b3c;
        case 0x1b9b40u: goto label_1b9b40;
        case 0x1b9b44u: goto label_1b9b44;
        case 0x1b9b48u: goto label_1b9b48;
        case 0x1b9b4cu: goto label_1b9b4c;
        case 0x1b9b50u: goto label_1b9b50;
        case 0x1b9b54u: goto label_1b9b54;
        case 0x1b9b58u: goto label_1b9b58;
        case 0x1b9b5cu: goto label_1b9b5c;
        case 0x1b9b60u: goto label_1b9b60;
        case 0x1b9b64u: goto label_1b9b64;
        case 0x1b9b68u: goto label_1b9b68;
        case 0x1b9b6cu: goto label_1b9b6c;
        case 0x1b9b70u: goto label_1b9b70;
        case 0x1b9b74u: goto label_1b9b74;
        case 0x1b9b78u: goto label_1b9b78;
        case 0x1b9b7cu: goto label_1b9b7c;
        case 0x1b9b80u: goto label_1b9b80;
        case 0x1b9b84u: goto label_1b9b84;
        case 0x1b9b88u: goto label_1b9b88;
        case 0x1b9b8cu: goto label_1b9b8c;
        case 0x1b9b90u: goto label_1b9b90;
        case 0x1b9b94u: goto label_1b9b94;
        case 0x1b9b98u: goto label_1b9b98;
        case 0x1b9b9cu: goto label_1b9b9c;
        case 0x1b9ba0u: goto label_1b9ba0;
        case 0x1b9ba4u: goto label_1b9ba4;
        case 0x1b9ba8u: goto label_1b9ba8;
        case 0x1b9bacu: goto label_1b9bac;
        case 0x1b9bb0u: goto label_1b9bb0;
        case 0x1b9bb4u: goto label_1b9bb4;
        case 0x1b9bb8u: goto label_1b9bb8;
        case 0x1b9bbcu: goto label_1b9bbc;
        case 0x1b9bc0u: goto label_1b9bc0;
        case 0x1b9bc4u: goto label_1b9bc4;
        case 0x1b9bc8u: goto label_1b9bc8;
        case 0x1b9bccu: goto label_1b9bcc;
        case 0x1b9bd0u: goto label_1b9bd0;
        case 0x1b9bd4u: goto label_1b9bd4;
        case 0x1b9bd8u: goto label_1b9bd8;
        case 0x1b9bdcu: goto label_1b9bdc;
        case 0x1b9be0u: goto label_1b9be0;
        case 0x1b9be4u: goto label_1b9be4;
        case 0x1b9be8u: goto label_1b9be8;
        case 0x1b9becu: goto label_1b9bec;
        case 0x1b9bf0u: goto label_1b9bf0;
        case 0x1b9bf4u: goto label_1b9bf4;
        case 0x1b9bf8u: goto label_1b9bf8;
        case 0x1b9bfcu: goto label_1b9bfc;
        case 0x1b9c00u: goto label_1b9c00;
        case 0x1b9c04u: goto label_1b9c04;
        case 0x1b9c08u: goto label_1b9c08;
        case 0x1b9c0cu: goto label_1b9c0c;
        case 0x1b9c10u: goto label_1b9c10;
        case 0x1b9c14u: goto label_1b9c14;
        case 0x1b9c18u: goto label_1b9c18;
        case 0x1b9c1cu: goto label_1b9c1c;
        case 0x1b9c20u: goto label_1b9c20;
        case 0x1b9c24u: goto label_1b9c24;
        case 0x1b9c28u: goto label_1b9c28;
        case 0x1b9c2cu: goto label_1b9c2c;
        case 0x1b9c30u: goto label_1b9c30;
        case 0x1b9c34u: goto label_1b9c34;
        case 0x1b9c38u: goto label_1b9c38;
        case 0x1b9c3cu: goto label_1b9c3c;
        case 0x1b9c40u: goto label_1b9c40;
        case 0x1b9c44u: goto label_1b9c44;
        case 0x1b9c48u: goto label_1b9c48;
        case 0x1b9c4cu: goto label_1b9c4c;
        case 0x1b9c50u: goto label_1b9c50;
        case 0x1b9c54u: goto label_1b9c54;
        case 0x1b9c58u: goto label_1b9c58;
        case 0x1b9c5cu: goto label_1b9c5c;
        case 0x1b9c60u: goto label_1b9c60;
        case 0x1b9c64u: goto label_1b9c64;
        case 0x1b9c68u: goto label_1b9c68;
        case 0x1b9c6cu: goto label_1b9c6c;
        case 0x1b9c70u: goto label_1b9c70;
        case 0x1b9c74u: goto label_1b9c74;
        case 0x1b9c78u: goto label_1b9c78;
        case 0x1b9c7cu: goto label_1b9c7c;
        case 0x1b9c80u: goto label_1b9c80;
        case 0x1b9c84u: goto label_1b9c84;
        case 0x1b9c88u: goto label_1b9c88;
        case 0x1b9c8cu: goto label_1b9c8c;
        case 0x1b9c90u: goto label_1b9c90;
        case 0x1b9c94u: goto label_1b9c94;
        case 0x1b9c98u: goto label_1b9c98;
        case 0x1b9c9cu: goto label_1b9c9c;
        case 0x1b9ca0u: goto label_1b9ca0;
        case 0x1b9ca4u: goto label_1b9ca4;
        case 0x1b9ca8u: goto label_1b9ca8;
        case 0x1b9cacu: goto label_1b9cac;
        case 0x1b9cb0u: goto label_1b9cb0;
        case 0x1b9cb4u: goto label_1b9cb4;
        case 0x1b9cb8u: goto label_1b9cb8;
        case 0x1b9cbcu: goto label_1b9cbc;
        case 0x1b9cc0u: goto label_1b9cc0;
        case 0x1b9cc4u: goto label_1b9cc4;
        case 0x1b9cc8u: goto label_1b9cc8;
        case 0x1b9cccu: goto label_1b9ccc;
        case 0x1b9cd0u: goto label_1b9cd0;
        case 0x1b9cd4u: goto label_1b9cd4;
        case 0x1b9cd8u: goto label_1b9cd8;
        case 0x1b9cdcu: goto label_1b9cdc;
        case 0x1b9ce0u: goto label_1b9ce0;
        case 0x1b9ce4u: goto label_1b9ce4;
        case 0x1b9ce8u: goto label_1b9ce8;
        case 0x1b9cecu: goto label_1b9cec;
        case 0x1b9cf0u: goto label_1b9cf0;
        case 0x1b9cf4u: goto label_1b9cf4;
        case 0x1b9cf8u: goto label_1b9cf8;
        case 0x1b9cfcu: goto label_1b9cfc;
        case 0x1b9d00u: goto label_1b9d00;
        case 0x1b9d04u: goto label_1b9d04;
        case 0x1b9d08u: goto label_1b9d08;
        case 0x1b9d0cu: goto label_1b9d0c;
        case 0x1b9d10u: goto label_1b9d10;
        case 0x1b9d14u: goto label_1b9d14;
        case 0x1b9d18u: goto label_1b9d18;
        case 0x1b9d1cu: goto label_1b9d1c;
        case 0x1b9d20u: goto label_1b9d20;
        case 0x1b9d24u: goto label_1b9d24;
        case 0x1b9d28u: goto label_1b9d28;
        case 0x1b9d2cu: goto label_1b9d2c;
        case 0x1b9d30u: goto label_1b9d30;
        case 0x1b9d34u: goto label_1b9d34;
        case 0x1b9d38u: goto label_1b9d38;
        case 0x1b9d3cu: goto label_1b9d3c;
        case 0x1b9d40u: goto label_1b9d40;
        case 0x1b9d44u: goto label_1b9d44;
        case 0x1b9d48u: goto label_1b9d48;
        case 0x1b9d4cu: goto label_1b9d4c;
        case 0x1b9d50u: goto label_1b9d50;
        case 0x1b9d54u: goto label_1b9d54;
        case 0x1b9d58u: goto label_1b9d58;
        case 0x1b9d5cu: goto label_1b9d5c;
        case 0x1b9d60u: goto label_1b9d60;
        case 0x1b9d64u: goto label_1b9d64;
        case 0x1b9d68u: goto label_1b9d68;
        case 0x1b9d6cu: goto label_1b9d6c;
        case 0x1b9d70u: goto label_1b9d70;
        case 0x1b9d74u: goto label_1b9d74;
        case 0x1b9d78u: goto label_1b9d78;
        case 0x1b9d7cu: goto label_1b9d7c;
        case 0x1b9d80u: goto label_1b9d80;
        case 0x1b9d84u: goto label_1b9d84;
        case 0x1b9d88u: goto label_1b9d88;
        case 0x1b9d8cu: goto label_1b9d8c;
        case 0x1b9d90u: goto label_1b9d90;
        case 0x1b9d94u: goto label_1b9d94;
        case 0x1b9d98u: goto label_1b9d98;
        case 0x1b9d9cu: goto label_1b9d9c;
        case 0x1b9da0u: goto label_1b9da0;
        case 0x1b9da4u: goto label_1b9da4;
        case 0x1b9da8u: goto label_1b9da8;
        case 0x1b9dacu: goto label_1b9dac;
        case 0x1b9db0u: goto label_1b9db0;
        case 0x1b9db4u: goto label_1b9db4;
        case 0x1b9db8u: goto label_1b9db8;
        case 0x1b9dbcu: goto label_1b9dbc;
        case 0x1b9dc0u: goto label_1b9dc0;
        case 0x1b9dc4u: goto label_1b9dc4;
        case 0x1b9dc8u: goto label_1b9dc8;
        case 0x1b9dccu: goto label_1b9dcc;
        case 0x1b9dd0u: goto label_1b9dd0;
        case 0x1b9dd4u: goto label_1b9dd4;
        case 0x1b9dd8u: goto label_1b9dd8;
        case 0x1b9ddcu: goto label_1b9ddc;
        case 0x1b9de0u: goto label_1b9de0;
        case 0x1b9de4u: goto label_1b9de4;
        case 0x1b9de8u: goto label_1b9de8;
        case 0x1b9decu: goto label_1b9dec;
        case 0x1b9df0u: goto label_1b9df0;
        case 0x1b9df4u: goto label_1b9df4;
        case 0x1b9df8u: goto label_1b9df8;
        case 0x1b9dfcu: goto label_1b9dfc;
        case 0x1b9e00u: goto label_1b9e00;
        case 0x1b9e04u: goto label_1b9e04;
        case 0x1b9e08u: goto label_1b9e08;
        case 0x1b9e0cu: goto label_1b9e0c;
        case 0x1b9e10u: goto label_1b9e10;
        case 0x1b9e14u: goto label_1b9e14;
        case 0x1b9e18u: goto label_1b9e18;
        case 0x1b9e1cu: goto label_1b9e1c;
        case 0x1b9e20u: goto label_1b9e20;
        case 0x1b9e24u: goto label_1b9e24;
        case 0x1b9e28u: goto label_1b9e28;
        case 0x1b9e2cu: goto label_1b9e2c;
        case 0x1b9e30u: goto label_1b9e30;
        case 0x1b9e34u: goto label_1b9e34;
        case 0x1b9e38u: goto label_1b9e38;
        case 0x1b9e3cu: goto label_1b9e3c;
        case 0x1b9e40u: goto label_1b9e40;
        case 0x1b9e44u: goto label_1b9e44;
        case 0x1b9e48u: goto label_1b9e48;
        case 0x1b9e4cu: goto label_1b9e4c;
        case 0x1b9e50u: goto label_1b9e50;
        case 0x1b9e54u: goto label_1b9e54;
        case 0x1b9e58u: goto label_1b9e58;
        case 0x1b9e5cu: goto label_1b9e5c;
        case 0x1b9e60u: goto label_1b9e60;
        case 0x1b9e64u: goto label_1b9e64;
        case 0x1b9e68u: goto label_1b9e68;
        case 0x1b9e6cu: goto label_1b9e6c;
        case 0x1b9e70u: goto label_1b9e70;
        case 0x1b9e74u: goto label_1b9e74;
        case 0x1b9e78u: goto label_1b9e78;
        case 0x1b9e7cu: goto label_1b9e7c;
        case 0x1b9e80u: goto label_1b9e80;
        case 0x1b9e84u: goto label_1b9e84;
        case 0x1b9e88u: goto label_1b9e88;
        case 0x1b9e8cu: goto label_1b9e8c;
        case 0x1b9e90u: goto label_1b9e90;
        case 0x1b9e94u: goto label_1b9e94;
        case 0x1b9e98u: goto label_1b9e98;
        case 0x1b9e9cu: goto label_1b9e9c;
        case 0x1b9ea0u: goto label_1b9ea0;
        case 0x1b9ea4u: goto label_1b9ea4;
        case 0x1b9ea8u: goto label_1b9ea8;
        case 0x1b9eacu: goto label_1b9eac;
        case 0x1b9eb0u: goto label_1b9eb0;
        case 0x1b9eb4u: goto label_1b9eb4;
        case 0x1b9eb8u: goto label_1b9eb8;
        case 0x1b9ebcu: goto label_1b9ebc;
        case 0x1b9ec0u: goto label_1b9ec0;
        case 0x1b9ec4u: goto label_1b9ec4;
        case 0x1b9ec8u: goto label_1b9ec8;
        case 0x1b9eccu: goto label_1b9ecc;
        case 0x1b9ed0u: goto label_1b9ed0;
        case 0x1b9ed4u: goto label_1b9ed4;
        case 0x1b9ed8u: goto label_1b9ed8;
        case 0x1b9edcu: goto label_1b9edc;
        case 0x1b9ee0u: goto label_1b9ee0;
        case 0x1b9ee4u: goto label_1b9ee4;
        case 0x1b9ee8u: goto label_1b9ee8;
        case 0x1b9eecu: goto label_1b9eec;
        case 0x1b9ef0u: goto label_1b9ef0;
        case 0x1b9ef4u: goto label_1b9ef4;
        case 0x1b9ef8u: goto label_1b9ef8;
        case 0x1b9efcu: goto label_1b9efc;
        case 0x1b9f00u: goto label_1b9f00;
        case 0x1b9f04u: goto label_1b9f04;
        case 0x1b9f08u: goto label_1b9f08;
        case 0x1b9f0cu: goto label_1b9f0c;
        case 0x1b9f10u: goto label_1b9f10;
        case 0x1b9f14u: goto label_1b9f14;
        case 0x1b9f18u: goto label_1b9f18;
        case 0x1b9f1cu: goto label_1b9f1c;
        case 0x1b9f20u: goto label_1b9f20;
        case 0x1b9f24u: goto label_1b9f24;
        case 0x1b9f28u: goto label_1b9f28;
        case 0x1b9f2cu: goto label_1b9f2c;
        case 0x1b9f30u: goto label_1b9f30;
        case 0x1b9f34u: goto label_1b9f34;
        case 0x1b9f38u: goto label_1b9f38;
        case 0x1b9f3cu: goto label_1b9f3c;
        case 0x1b9f40u: goto label_1b9f40;
        case 0x1b9f44u: goto label_1b9f44;
        case 0x1b9f48u: goto label_1b9f48;
        case 0x1b9f4cu: goto label_1b9f4c;
        case 0x1b9f50u: goto label_1b9f50;
        case 0x1b9f54u: goto label_1b9f54;
        case 0x1b9f58u: goto label_1b9f58;
        case 0x1b9f5cu: goto label_1b9f5c;
        case 0x1b9f60u: goto label_1b9f60;
        case 0x1b9f64u: goto label_1b9f64;
        case 0x1b9f68u: goto label_1b9f68;
        case 0x1b9f6cu: goto label_1b9f6c;
        case 0x1b9f70u: goto label_1b9f70;
        case 0x1b9f74u: goto label_1b9f74;
        case 0x1b9f78u: goto label_1b9f78;
        case 0x1b9f7cu: goto label_1b9f7c;
        case 0x1b9f80u: goto label_1b9f80;
        case 0x1b9f84u: goto label_1b9f84;
        case 0x1b9f88u: goto label_1b9f88;
        case 0x1b9f8cu: goto label_1b9f8c;
        case 0x1b9f90u: goto label_1b9f90;
        case 0x1b9f94u: goto label_1b9f94;
        case 0x1b9f98u: goto label_1b9f98;
        case 0x1b9f9cu: goto label_1b9f9c;
        case 0x1b9fa0u: goto label_1b9fa0;
        case 0x1b9fa4u: goto label_1b9fa4;
        case 0x1b9fa8u: goto label_1b9fa8;
        case 0x1b9facu: goto label_1b9fac;
        case 0x1b9fb0u: goto label_1b9fb0;
        case 0x1b9fb4u: goto label_1b9fb4;
        case 0x1b9fb8u: goto label_1b9fb8;
        case 0x1b9fbcu: goto label_1b9fbc;
        case 0x1b9fc0u: goto label_1b9fc0;
        case 0x1b9fc4u: goto label_1b9fc4;
        case 0x1b9fc8u: goto label_1b9fc8;
        case 0x1b9fccu: goto label_1b9fcc;
        case 0x1b9fd0u: goto label_1b9fd0;
        case 0x1b9fd4u: goto label_1b9fd4;
        case 0x1b9fd8u: goto label_1b9fd8;
        case 0x1b9fdcu: goto label_1b9fdc;
        case 0x1b9fe0u: goto label_1b9fe0;
        case 0x1b9fe4u: goto label_1b9fe4;
        case 0x1b9fe8u: goto label_1b9fe8;
        case 0x1b9fecu: goto label_1b9fec;
        case 0x1b9ff0u: goto label_1b9ff0;
        case 0x1b9ff4u: goto label_1b9ff4;
        case 0x1b9ff8u: goto label_1b9ff8;
        case 0x1b9ffcu: goto label_1b9ffc;
        case 0x1ba000u: goto label_1ba000;
        case 0x1ba004u: goto label_1ba004;
        case 0x1ba008u: goto label_1ba008;
        case 0x1ba00cu: goto label_1ba00c;
        case 0x1ba010u: goto label_1ba010;
        case 0x1ba014u: goto label_1ba014;
        case 0x1ba018u: goto label_1ba018;
        case 0x1ba01cu: goto label_1ba01c;
        case 0x1ba020u: goto label_1ba020;
        case 0x1ba024u: goto label_1ba024;
        case 0x1ba028u: goto label_1ba028;
        case 0x1ba02cu: goto label_1ba02c;
        case 0x1ba030u: goto label_1ba030;
        case 0x1ba034u: goto label_1ba034;
        case 0x1ba038u: goto label_1ba038;
        case 0x1ba03cu: goto label_1ba03c;
        case 0x1ba040u: goto label_1ba040;
        case 0x1ba044u: goto label_1ba044;
        case 0x1ba048u: goto label_1ba048;
        case 0x1ba04cu: goto label_1ba04c;
        case 0x1ba050u: goto label_1ba050;
        case 0x1ba054u: goto label_1ba054;
        case 0x1ba058u: goto label_1ba058;
        case 0x1ba05cu: goto label_1ba05c;
        case 0x1ba060u: goto label_1ba060;
        case 0x1ba064u: goto label_1ba064;
        case 0x1ba068u: goto label_1ba068;
        case 0x1ba06cu: goto label_1ba06c;
        case 0x1ba070u: goto label_1ba070;
        case 0x1ba074u: goto label_1ba074;
        case 0x1ba078u: goto label_1ba078;
        case 0x1ba07cu: goto label_1ba07c;
        case 0x1ba080u: goto label_1ba080;
        case 0x1ba084u: goto label_1ba084;
        case 0x1ba088u: goto label_1ba088;
        case 0x1ba08cu: goto label_1ba08c;
        case 0x1ba090u: goto label_1ba090;
        case 0x1ba094u: goto label_1ba094;
        case 0x1ba098u: goto label_1ba098;
        case 0x1ba09cu: goto label_1ba09c;
        case 0x1ba0a0u: goto label_1ba0a0;
        case 0x1ba0a4u: goto label_1ba0a4;
        case 0x1ba0a8u: goto label_1ba0a8;
        case 0x1ba0acu: goto label_1ba0ac;
        case 0x1ba0b0u: goto label_1ba0b0;
        case 0x1ba0b4u: goto label_1ba0b4;
        case 0x1ba0b8u: goto label_1ba0b8;
        case 0x1ba0bcu: goto label_1ba0bc;
        case 0x1ba0c0u: goto label_1ba0c0;
        case 0x1ba0c4u: goto label_1ba0c4;
        case 0x1ba0c8u: goto label_1ba0c8;
        case 0x1ba0ccu: goto label_1ba0cc;
        case 0x1ba0d0u: goto label_1ba0d0;
        case 0x1ba0d4u: goto label_1ba0d4;
        case 0x1ba0d8u: goto label_1ba0d8;
        case 0x1ba0dcu: goto label_1ba0dc;
        case 0x1ba0e0u: goto label_1ba0e0;
        case 0x1ba0e4u: goto label_1ba0e4;
        case 0x1ba0e8u: goto label_1ba0e8;
        case 0x1ba0ecu: goto label_1ba0ec;
        case 0x1ba0f0u: goto label_1ba0f0;
        case 0x1ba0f4u: goto label_1ba0f4;
        case 0x1ba0f8u: goto label_1ba0f8;
        case 0x1ba0fcu: goto label_1ba0fc;
        case 0x1ba100u: goto label_1ba100;
        case 0x1ba104u: goto label_1ba104;
        case 0x1ba108u: goto label_1ba108;
        case 0x1ba10cu: goto label_1ba10c;
        case 0x1ba110u: goto label_1ba110;
        case 0x1ba114u: goto label_1ba114;
        case 0x1ba118u: goto label_1ba118;
        case 0x1ba11cu: goto label_1ba11c;
        case 0x1ba120u: goto label_1ba120;
        case 0x1ba124u: goto label_1ba124;
        case 0x1ba128u: goto label_1ba128;
        case 0x1ba12cu: goto label_1ba12c;
        case 0x1ba130u: goto label_1ba130;
        case 0x1ba134u: goto label_1ba134;
        case 0x1ba138u: goto label_1ba138;
        case 0x1ba13cu: goto label_1ba13c;
        case 0x1ba140u: goto label_1ba140;
        case 0x1ba144u: goto label_1ba144;
        case 0x1ba148u: goto label_1ba148;
        case 0x1ba14cu: goto label_1ba14c;
        case 0x1ba150u: goto label_1ba150;
        case 0x1ba154u: goto label_1ba154;
        case 0x1ba158u: goto label_1ba158;
        case 0x1ba15cu: goto label_1ba15c;
        case 0x1ba160u: goto label_1ba160;
        case 0x1ba164u: goto label_1ba164;
        case 0x1ba168u: goto label_1ba168;
        case 0x1ba16cu: goto label_1ba16c;
        case 0x1ba170u: goto label_1ba170;
        case 0x1ba174u: goto label_1ba174;
        case 0x1ba178u: goto label_1ba178;
        case 0x1ba17cu: goto label_1ba17c;
        case 0x1ba180u: goto label_1ba180;
        case 0x1ba184u: goto label_1ba184;
        case 0x1ba188u: goto label_1ba188;
        case 0x1ba18cu: goto label_1ba18c;
        case 0x1ba190u: goto label_1ba190;
        case 0x1ba194u: goto label_1ba194;
        case 0x1ba198u: goto label_1ba198;
        case 0x1ba19cu: goto label_1ba19c;
        case 0x1ba1a0u: goto label_1ba1a0;
        case 0x1ba1a4u: goto label_1ba1a4;
        case 0x1ba1a8u: goto label_1ba1a8;
        case 0x1ba1acu: goto label_1ba1ac;
        case 0x1ba1b0u: goto label_1ba1b0;
        case 0x1ba1b4u: goto label_1ba1b4;
        case 0x1ba1b8u: goto label_1ba1b8;
        case 0x1ba1bcu: goto label_1ba1bc;
        case 0x1ba1c0u: goto label_1ba1c0;
        case 0x1ba1c4u: goto label_1ba1c4;
        case 0x1ba1c8u: goto label_1ba1c8;
        case 0x1ba1ccu: goto label_1ba1cc;
        case 0x1ba1d0u: goto label_1ba1d0;
        case 0x1ba1d4u: goto label_1ba1d4;
        case 0x1ba1d8u: goto label_1ba1d8;
        case 0x1ba1dcu: goto label_1ba1dc;
        case 0x1ba1e0u: goto label_1ba1e0;
        case 0x1ba1e4u: goto label_1ba1e4;
        case 0x1ba1e8u: goto label_1ba1e8;
        case 0x1ba1ecu: goto label_1ba1ec;
        case 0x1ba1f0u: goto label_1ba1f0;
        case 0x1ba1f4u: goto label_1ba1f4;
        case 0x1ba1f8u: goto label_1ba1f8;
        case 0x1ba1fcu: goto label_1ba1fc;
        case 0x1ba200u: goto label_1ba200;
        case 0x1ba204u: goto label_1ba204;
        case 0x1ba208u: goto label_1ba208;
        case 0x1ba20cu: goto label_1ba20c;
        case 0x1ba210u: goto label_1ba210;
        case 0x1ba214u: goto label_1ba214;
        case 0x1ba218u: goto label_1ba218;
        case 0x1ba21cu: goto label_1ba21c;
        case 0x1ba220u: goto label_1ba220;
        case 0x1ba224u: goto label_1ba224;
        case 0x1ba228u: goto label_1ba228;
        case 0x1ba22cu: goto label_1ba22c;
        case 0x1ba230u: goto label_1ba230;
        case 0x1ba234u: goto label_1ba234;
        case 0x1ba238u: goto label_1ba238;
        case 0x1ba23cu: goto label_1ba23c;
        case 0x1ba240u: goto label_1ba240;
        case 0x1ba244u: goto label_1ba244;
        case 0x1ba248u: goto label_1ba248;
        case 0x1ba24cu: goto label_1ba24c;
        case 0x1ba250u: goto label_1ba250;
        case 0x1ba254u: goto label_1ba254;
        case 0x1ba258u: goto label_1ba258;
        case 0x1ba25cu: goto label_1ba25c;
        case 0x1ba260u: goto label_1ba260;
        case 0x1ba264u: goto label_1ba264;
        case 0x1ba268u: goto label_1ba268;
        case 0x1ba26cu: goto label_1ba26c;
        case 0x1ba270u: goto label_1ba270;
        case 0x1ba274u: goto label_1ba274;
        case 0x1ba278u: goto label_1ba278;
        case 0x1ba27cu: goto label_1ba27c;
        case 0x1ba280u: goto label_1ba280;
        case 0x1ba284u: goto label_1ba284;
        case 0x1ba288u: goto label_1ba288;
        case 0x1ba28cu: goto label_1ba28c;
        case 0x1ba290u: goto label_1ba290;
        case 0x1ba294u: goto label_1ba294;
        case 0x1ba298u: goto label_1ba298;
        case 0x1ba29cu: goto label_1ba29c;
        case 0x1ba2a0u: goto label_1ba2a0;
        case 0x1ba2a4u: goto label_1ba2a4;
        case 0x1ba2a8u: goto label_1ba2a8;
        case 0x1ba2acu: goto label_1ba2ac;
        case 0x1ba2b0u: goto label_1ba2b0;
        case 0x1ba2b4u: goto label_1ba2b4;
        case 0x1ba2b8u: goto label_1ba2b8;
        case 0x1ba2bcu: goto label_1ba2bc;
        case 0x1ba2c0u: goto label_1ba2c0;
        case 0x1ba2c4u: goto label_1ba2c4;
        case 0x1ba2c8u: goto label_1ba2c8;
        case 0x1ba2ccu: goto label_1ba2cc;
        case 0x1ba2d0u: goto label_1ba2d0;
        case 0x1ba2d4u: goto label_1ba2d4;
        case 0x1ba2d8u: goto label_1ba2d8;
        case 0x1ba2dcu: goto label_1ba2dc;
        case 0x1ba2e0u: goto label_1ba2e0;
        case 0x1ba2e4u: goto label_1ba2e4;
        case 0x1ba2e8u: goto label_1ba2e8;
        case 0x1ba2ecu: goto label_1ba2ec;
        case 0x1ba2f0u: goto label_1ba2f0;
        case 0x1ba2f4u: goto label_1ba2f4;
        case 0x1ba2f8u: goto label_1ba2f8;
        case 0x1ba2fcu: goto label_1ba2fc;
        case 0x1ba300u: goto label_1ba300;
        case 0x1ba304u: goto label_1ba304;
        case 0x1ba308u: goto label_1ba308;
        case 0x1ba30cu: goto label_1ba30c;
        case 0x1ba310u: goto label_1ba310;
        case 0x1ba314u: goto label_1ba314;
        case 0x1ba318u: goto label_1ba318;
        case 0x1ba31cu: goto label_1ba31c;
        case 0x1ba320u: goto label_1ba320;
        case 0x1ba324u: goto label_1ba324;
        case 0x1ba328u: goto label_1ba328;
        case 0x1ba32cu: goto label_1ba32c;
        case 0x1ba330u: goto label_1ba330;
        case 0x1ba334u: goto label_1ba334;
        case 0x1ba338u: goto label_1ba338;
        case 0x1ba33cu: goto label_1ba33c;
        case 0x1ba340u: goto label_1ba340;
        case 0x1ba344u: goto label_1ba344;
        case 0x1ba348u: goto label_1ba348;
        case 0x1ba34cu: goto label_1ba34c;
        case 0x1ba350u: goto label_1ba350;
        case 0x1ba354u: goto label_1ba354;
        case 0x1ba358u: goto label_1ba358;
        case 0x1ba35cu: goto label_1ba35c;
        case 0x1ba360u: goto label_1ba360;
        case 0x1ba364u: goto label_1ba364;
        case 0x1ba368u: goto label_1ba368;
        case 0x1ba36cu: goto label_1ba36c;
        case 0x1ba370u: goto label_1ba370;
        case 0x1ba374u: goto label_1ba374;
        case 0x1ba378u: goto label_1ba378;
        case 0x1ba37cu: goto label_1ba37c;
        case 0x1ba380u: goto label_1ba380;
        case 0x1ba384u: goto label_1ba384;
        case 0x1ba388u: goto label_1ba388;
        case 0x1ba38cu: goto label_1ba38c;
        case 0x1ba390u: goto label_1ba390;
        case 0x1ba394u: goto label_1ba394;
        case 0x1ba398u: goto label_1ba398;
        case 0x1ba39cu: goto label_1ba39c;
        case 0x1ba3a0u: goto label_1ba3a0;
        case 0x1ba3a4u: goto label_1ba3a4;
        case 0x1ba3a8u: goto label_1ba3a8;
        case 0x1ba3acu: goto label_1ba3ac;
        case 0x1ba3b0u: goto label_1ba3b0;
        case 0x1ba3b4u: goto label_1ba3b4;
        case 0x1ba3b8u: goto label_1ba3b8;
        case 0x1ba3bcu: goto label_1ba3bc;
        case 0x1ba3c0u: goto label_1ba3c0;
        case 0x1ba3c4u: goto label_1ba3c4;
        case 0x1ba3c8u: goto label_1ba3c8;
        case 0x1ba3ccu: goto label_1ba3cc;
        case 0x1ba3d0u: goto label_1ba3d0;
        case 0x1ba3d4u: goto label_1ba3d4;
        case 0x1ba3d8u: goto label_1ba3d8;
        case 0x1ba3dcu: goto label_1ba3dc;
        case 0x1ba3e0u: goto label_1ba3e0;
        case 0x1ba3e4u: goto label_1ba3e4;
        case 0x1ba3e8u: goto label_1ba3e8;
        case 0x1ba3ecu: goto label_1ba3ec;
        case 0x1ba3f0u: goto label_1ba3f0;
        case 0x1ba3f4u: goto label_1ba3f4;
        case 0x1ba3f8u: goto label_1ba3f8;
        case 0x1ba3fcu: goto label_1ba3fc;
        case 0x1ba400u: goto label_1ba400;
        case 0x1ba404u: goto label_1ba404;
        case 0x1ba408u: goto label_1ba408;
        case 0x1ba40cu: goto label_1ba40c;
        case 0x1ba410u: goto label_1ba410;
        case 0x1ba414u: goto label_1ba414;
        case 0x1ba418u: goto label_1ba418;
        case 0x1ba41cu: goto label_1ba41c;
        case 0x1ba420u: goto label_1ba420;
        case 0x1ba424u: goto label_1ba424;
        case 0x1ba428u: goto label_1ba428;
        case 0x1ba42cu: goto label_1ba42c;
        case 0x1ba430u: goto label_1ba430;
        case 0x1ba434u: goto label_1ba434;
        case 0x1ba438u: goto label_1ba438;
        case 0x1ba43cu: goto label_1ba43c;
        case 0x1ba440u: goto label_1ba440;
        case 0x1ba444u: goto label_1ba444;
        case 0x1ba448u: goto label_1ba448;
        case 0x1ba44cu: goto label_1ba44c;
        case 0x1ba450u: goto label_1ba450;
        case 0x1ba454u: goto label_1ba454;
        case 0x1ba458u: goto label_1ba458;
        case 0x1ba45cu: goto label_1ba45c;
        case 0x1ba460u: goto label_1ba460;
        case 0x1ba464u: goto label_1ba464;
        case 0x1ba468u: goto label_1ba468;
        case 0x1ba46cu: goto label_1ba46c;
        case 0x1ba470u: goto label_1ba470;
        case 0x1ba474u: goto label_1ba474;
        case 0x1ba478u: goto label_1ba478;
        case 0x1ba47cu: goto label_1ba47c;
        case 0x1ba480u: goto label_1ba480;
        case 0x1ba484u: goto label_1ba484;
        case 0x1ba488u: goto label_1ba488;
        case 0x1ba48cu: goto label_1ba48c;
        case 0x1ba490u: goto label_1ba490;
        case 0x1ba494u: goto label_1ba494;
        case 0x1ba498u: goto label_1ba498;
        case 0x1ba49cu: goto label_1ba49c;
        case 0x1ba4a0u: goto label_1ba4a0;
        case 0x1ba4a4u: goto label_1ba4a4;
        case 0x1ba4a8u: goto label_1ba4a8;
        case 0x1ba4acu: goto label_1ba4ac;
        case 0x1ba4b0u: goto label_1ba4b0;
        case 0x1ba4b4u: goto label_1ba4b4;
        case 0x1ba4b8u: goto label_1ba4b8;
        case 0x1ba4bcu: goto label_1ba4bc;
        case 0x1ba4c0u: goto label_1ba4c0;
        case 0x1ba4c4u: goto label_1ba4c4;
        case 0x1ba4c8u: goto label_1ba4c8;
        case 0x1ba4ccu: goto label_1ba4cc;
        case 0x1ba4d0u: goto label_1ba4d0;
        case 0x1ba4d4u: goto label_1ba4d4;
        case 0x1ba4d8u: goto label_1ba4d8;
        case 0x1ba4dcu: goto label_1ba4dc;
        case 0x1ba4e0u: goto label_1ba4e0;
        case 0x1ba4e4u: goto label_1ba4e4;
        case 0x1ba4e8u: goto label_1ba4e8;
        case 0x1ba4ecu: goto label_1ba4ec;
        case 0x1ba4f0u: goto label_1ba4f0;
        case 0x1ba4f4u: goto label_1ba4f4;
        case 0x1ba4f8u: goto label_1ba4f8;
        case 0x1ba4fcu: goto label_1ba4fc;
        case 0x1ba500u: goto label_1ba500;
        case 0x1ba504u: goto label_1ba504;
        case 0x1ba508u: goto label_1ba508;
        case 0x1ba50cu: goto label_1ba50c;
        case 0x1ba510u: goto label_1ba510;
        case 0x1ba514u: goto label_1ba514;
        case 0x1ba518u: goto label_1ba518;
        case 0x1ba51cu: goto label_1ba51c;
        case 0x1ba520u: goto label_1ba520;
        case 0x1ba524u: goto label_1ba524;
        case 0x1ba528u: goto label_1ba528;
        case 0x1ba52cu: goto label_1ba52c;
        case 0x1ba530u: goto label_1ba530;
        case 0x1ba534u: goto label_1ba534;
        case 0x1ba538u: goto label_1ba538;
        case 0x1ba53cu: goto label_1ba53c;
        case 0x1ba540u: goto label_1ba540;
        case 0x1ba544u: goto label_1ba544;
        case 0x1ba548u: goto label_1ba548;
        case 0x1ba54cu: goto label_1ba54c;
        case 0x1ba550u: goto label_1ba550;
        case 0x1ba554u: goto label_1ba554;
        case 0x1ba558u: goto label_1ba558;
        case 0x1ba55cu: goto label_1ba55c;
        case 0x1ba560u: goto label_1ba560;
        case 0x1ba564u: goto label_1ba564;
        case 0x1ba568u: goto label_1ba568;
        case 0x1ba56cu: goto label_1ba56c;
        case 0x1ba570u: goto label_1ba570;
        case 0x1ba574u: goto label_1ba574;
        case 0x1ba578u: goto label_1ba578;
        case 0x1ba57cu: goto label_1ba57c;
        case 0x1ba580u: goto label_1ba580;
        case 0x1ba584u: goto label_1ba584;
        case 0x1ba588u: goto label_1ba588;
        case 0x1ba58cu: goto label_1ba58c;
        case 0x1ba590u: goto label_1ba590;
        case 0x1ba594u: goto label_1ba594;
        case 0x1ba598u: goto label_1ba598;
        case 0x1ba59cu: goto label_1ba59c;
        case 0x1ba5a0u: goto label_1ba5a0;
        case 0x1ba5a4u: goto label_1ba5a4;
        case 0x1ba5a8u: goto label_1ba5a8;
        case 0x1ba5acu: goto label_1ba5ac;
        case 0x1ba5b0u: goto label_1ba5b0;
        case 0x1ba5b4u: goto label_1ba5b4;
        case 0x1ba5b8u: goto label_1ba5b8;
        case 0x1ba5bcu: goto label_1ba5bc;
        case 0x1ba5c0u: goto label_1ba5c0;
        case 0x1ba5c4u: goto label_1ba5c4;
        case 0x1ba5c8u: goto label_1ba5c8;
        case 0x1ba5ccu: goto label_1ba5cc;
        case 0x1ba5d0u: goto label_1ba5d0;
        case 0x1ba5d4u: goto label_1ba5d4;
        case 0x1ba5d8u: goto label_1ba5d8;
        case 0x1ba5dcu: goto label_1ba5dc;
        case 0x1ba5e0u: goto label_1ba5e0;
        case 0x1ba5e4u: goto label_1ba5e4;
        case 0x1ba5e8u: goto label_1ba5e8;
        case 0x1ba5ecu: goto label_1ba5ec;
        case 0x1ba5f0u: goto label_1ba5f0;
        case 0x1ba5f4u: goto label_1ba5f4;
        case 0x1ba5f8u: goto label_1ba5f8;
        case 0x1ba5fcu: goto label_1ba5fc;
        case 0x1ba600u: goto label_1ba600;
        case 0x1ba604u: goto label_1ba604;
        case 0x1ba608u: goto label_1ba608;
        case 0x1ba60cu: goto label_1ba60c;
        case 0x1ba610u: goto label_1ba610;
        case 0x1ba614u: goto label_1ba614;
        case 0x1ba618u: goto label_1ba618;
        case 0x1ba61cu: goto label_1ba61c;
        case 0x1ba620u: goto label_1ba620;
        case 0x1ba624u: goto label_1ba624;
        case 0x1ba628u: goto label_1ba628;
        case 0x1ba62cu: goto label_1ba62c;
        case 0x1ba630u: goto label_1ba630;
        case 0x1ba634u: goto label_1ba634;
        case 0x1ba638u: goto label_1ba638;
        case 0x1ba63cu: goto label_1ba63c;
        case 0x1ba640u: goto label_1ba640;
        case 0x1ba644u: goto label_1ba644;
        case 0x1ba648u: goto label_1ba648;
        case 0x1ba64cu: goto label_1ba64c;
        case 0x1ba650u: goto label_1ba650;
        case 0x1ba654u: goto label_1ba654;
        case 0x1ba658u: goto label_1ba658;
        case 0x1ba65cu: goto label_1ba65c;
        case 0x1ba660u: goto label_1ba660;
        case 0x1ba664u: goto label_1ba664;
        case 0x1ba668u: goto label_1ba668;
        case 0x1ba66cu: goto label_1ba66c;
        case 0x1ba670u: goto label_1ba670;
        case 0x1ba674u: goto label_1ba674;
        case 0x1ba678u: goto label_1ba678;
        case 0x1ba67cu: goto label_1ba67c;
        case 0x1ba680u: goto label_1ba680;
        case 0x1ba684u: goto label_1ba684;
        case 0x1ba688u: goto label_1ba688;
        case 0x1ba68cu: goto label_1ba68c;
        case 0x1ba690u: goto label_1ba690;
        case 0x1ba694u: goto label_1ba694;
        case 0x1ba698u: goto label_1ba698;
        case 0x1ba69cu: goto label_1ba69c;
        case 0x1ba6a0u: goto label_1ba6a0;
        case 0x1ba6a4u: goto label_1ba6a4;
        case 0x1ba6a8u: goto label_1ba6a8;
        case 0x1ba6acu: goto label_1ba6ac;
        case 0x1ba6b0u: goto label_1ba6b0;
        case 0x1ba6b4u: goto label_1ba6b4;
        case 0x1ba6b8u: goto label_1ba6b8;
        case 0x1ba6bcu: goto label_1ba6bc;
        case 0x1ba6c0u: goto label_1ba6c0;
        case 0x1ba6c4u: goto label_1ba6c4;
        case 0x1ba6c8u: goto label_1ba6c8;
        case 0x1ba6ccu: goto label_1ba6cc;
        case 0x1ba6d0u: goto label_1ba6d0;
        case 0x1ba6d4u: goto label_1ba6d4;
        case 0x1ba6d8u: goto label_1ba6d8;
        case 0x1ba6dcu: goto label_1ba6dc;
        case 0x1ba6e0u: goto label_1ba6e0;
        case 0x1ba6e4u: goto label_1ba6e4;
        case 0x1ba6e8u: goto label_1ba6e8;
        case 0x1ba6ecu: goto label_1ba6ec;
        case 0x1ba6f0u: goto label_1ba6f0;
        case 0x1ba6f4u: goto label_1ba6f4;
        case 0x1ba6f8u: goto label_1ba6f8;
        case 0x1ba6fcu: goto label_1ba6fc;
        case 0x1ba700u: goto label_1ba700;
        case 0x1ba704u: goto label_1ba704;
        case 0x1ba708u: goto label_1ba708;
        case 0x1ba70cu: goto label_1ba70c;
        case 0x1ba710u: goto label_1ba710;
        case 0x1ba714u: goto label_1ba714;
        case 0x1ba718u: goto label_1ba718;
        case 0x1ba71cu: goto label_1ba71c;
        case 0x1ba720u: goto label_1ba720;
        case 0x1ba724u: goto label_1ba724;
        case 0x1ba728u: goto label_1ba728;
        case 0x1ba72cu: goto label_1ba72c;
        case 0x1ba730u: goto label_1ba730;
        case 0x1ba734u: goto label_1ba734;
        case 0x1ba738u: goto label_1ba738;
        case 0x1ba73cu: goto label_1ba73c;
        case 0x1ba740u: goto label_1ba740;
        case 0x1ba744u: goto label_1ba744;
        case 0x1ba748u: goto label_1ba748;
        case 0x1ba74cu: goto label_1ba74c;
        case 0x1ba750u: goto label_1ba750;
        case 0x1ba754u: goto label_1ba754;
        case 0x1ba758u: goto label_1ba758;
        case 0x1ba75cu: goto label_1ba75c;
        case 0x1ba760u: goto label_1ba760;
        case 0x1ba764u: goto label_1ba764;
        case 0x1ba768u: goto label_1ba768;
        case 0x1ba76cu: goto label_1ba76c;
        case 0x1ba770u: goto label_1ba770;
        case 0x1ba774u: goto label_1ba774;
        case 0x1ba778u: goto label_1ba778;
        case 0x1ba77cu: goto label_1ba77c;
        case 0x1ba780u: goto label_1ba780;
        case 0x1ba784u: goto label_1ba784;
        case 0x1ba788u: goto label_1ba788;
        case 0x1ba78cu: goto label_1ba78c;
        case 0x1ba790u: goto label_1ba790;
        case 0x1ba794u: goto label_1ba794;
        case 0x1ba798u: goto label_1ba798;
        case 0x1ba79cu: goto label_1ba79c;
        case 0x1ba7a0u: goto label_1ba7a0;
        case 0x1ba7a4u: goto label_1ba7a4;
        case 0x1ba7a8u: goto label_1ba7a8;
        case 0x1ba7acu: goto label_1ba7ac;
        case 0x1ba7b0u: goto label_1ba7b0;
        case 0x1ba7b4u: goto label_1ba7b4;
        case 0x1ba7b8u: goto label_1ba7b8;
        case 0x1ba7bcu: goto label_1ba7bc;
        case 0x1ba7c0u: goto label_1ba7c0;
        case 0x1ba7c4u: goto label_1ba7c4;
        case 0x1ba7c8u: goto label_1ba7c8;
        case 0x1ba7ccu: goto label_1ba7cc;
        case 0x1ba7d0u: goto label_1ba7d0;
        case 0x1ba7d4u: goto label_1ba7d4;
        case 0x1ba7d8u: goto label_1ba7d8;
        case 0x1ba7dcu: goto label_1ba7dc;
        case 0x1ba7e0u: goto label_1ba7e0;
        case 0x1ba7e4u: goto label_1ba7e4;
        case 0x1ba7e8u: goto label_1ba7e8;
        case 0x1ba7ecu: goto label_1ba7ec;
        case 0x1ba7f0u: goto label_1ba7f0;
        case 0x1ba7f4u: goto label_1ba7f4;
        case 0x1ba7f8u: goto label_1ba7f8;
        case 0x1ba7fcu: goto label_1ba7fc;
        case 0x1ba800u: goto label_1ba800;
        case 0x1ba804u: goto label_1ba804;
        case 0x1ba808u: goto label_1ba808;
        case 0x1ba80cu: goto label_1ba80c;
        case 0x1ba810u: goto label_1ba810;
        case 0x1ba814u: goto label_1ba814;
        case 0x1ba818u: goto label_1ba818;
        case 0x1ba81cu: goto label_1ba81c;
        case 0x1ba820u: goto label_1ba820;
        case 0x1ba824u: goto label_1ba824;
        case 0x1ba828u: goto label_1ba828;
        case 0x1ba82cu: goto label_1ba82c;
        case 0x1ba830u: goto label_1ba830;
        case 0x1ba834u: goto label_1ba834;
        case 0x1ba838u: goto label_1ba838;
        case 0x1ba83cu: goto label_1ba83c;
        case 0x1ba840u: goto label_1ba840;
        case 0x1ba844u: goto label_1ba844;
        case 0x1ba848u: goto label_1ba848;
        case 0x1ba84cu: goto label_1ba84c;
        case 0x1ba850u: goto label_1ba850;
        case 0x1ba854u: goto label_1ba854;
        case 0x1ba858u: goto label_1ba858;
        case 0x1ba85cu: goto label_1ba85c;
        case 0x1ba860u: goto label_1ba860;
        case 0x1ba864u: goto label_1ba864;
        case 0x1ba868u: goto label_1ba868;
        case 0x1ba86cu: goto label_1ba86c;
        case 0x1ba870u: goto label_1ba870;
        case 0x1ba874u: goto label_1ba874;
        case 0x1ba878u: goto label_1ba878;
        case 0x1ba87cu: goto label_1ba87c;
        case 0x1ba880u: goto label_1ba880;
        case 0x1ba884u: goto label_1ba884;
        case 0x1ba888u: goto label_1ba888;
        case 0x1ba88cu: goto label_1ba88c;
        case 0x1ba890u: goto label_1ba890;
        case 0x1ba894u: goto label_1ba894;
        case 0x1ba898u: goto label_1ba898;
        case 0x1ba89cu: goto label_1ba89c;
        case 0x1ba8a0u: goto label_1ba8a0;
        case 0x1ba8a4u: goto label_1ba8a4;
        case 0x1ba8a8u: goto label_1ba8a8;
        case 0x1ba8acu: goto label_1ba8ac;
        case 0x1ba8b0u: goto label_1ba8b0;
        case 0x1ba8b4u: goto label_1ba8b4;
        case 0x1ba8b8u: goto label_1ba8b8;
        case 0x1ba8bcu: goto label_1ba8bc;
        case 0x1ba8c0u: goto label_1ba8c0;
        case 0x1ba8c4u: goto label_1ba8c4;
        case 0x1ba8c8u: goto label_1ba8c8;
        case 0x1ba8ccu: goto label_1ba8cc;
        case 0x1ba8d0u: goto label_1ba8d0;
        case 0x1ba8d4u: goto label_1ba8d4;
        case 0x1ba8d8u: goto label_1ba8d8;
        case 0x1ba8dcu: goto label_1ba8dc;
        case 0x1ba8e0u: goto label_1ba8e0;
        case 0x1ba8e4u: goto label_1ba8e4;
        case 0x1ba8e8u: goto label_1ba8e8;
        case 0x1ba8ecu: goto label_1ba8ec;
        case 0x1ba8f0u: goto label_1ba8f0;
        case 0x1ba8f4u: goto label_1ba8f4;
        case 0x1ba8f8u: goto label_1ba8f8;
        case 0x1ba8fcu: goto label_1ba8fc;
        case 0x1ba900u: goto label_1ba900;
        case 0x1ba904u: goto label_1ba904;
        case 0x1ba908u: goto label_1ba908;
        case 0x1ba90cu: goto label_1ba90c;
        case 0x1ba910u: goto label_1ba910;
        case 0x1ba914u: goto label_1ba914;
        case 0x1ba918u: goto label_1ba918;
        case 0x1ba91cu: goto label_1ba91c;
        case 0x1ba920u: goto label_1ba920;
        case 0x1ba924u: goto label_1ba924;
        case 0x1ba928u: goto label_1ba928;
        case 0x1ba92cu: goto label_1ba92c;
        case 0x1ba930u: goto label_1ba930;
        case 0x1ba934u: goto label_1ba934;
        case 0x1ba938u: goto label_1ba938;
        case 0x1ba93cu: goto label_1ba93c;
        case 0x1ba940u: goto label_1ba940;
        case 0x1ba944u: goto label_1ba944;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba94cu: goto label_1ba94c;
        case 0x1ba950u: goto label_1ba950;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba958u: goto label_1ba958;
        case 0x1ba95cu: goto label_1ba95c;
        case 0x1ba960u: goto label_1ba960;
        case 0x1ba964u: goto label_1ba964;
        case 0x1ba968u: goto label_1ba968;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba970u: goto label_1ba970;
        case 0x1ba974u: goto label_1ba974;
        case 0x1ba978u: goto label_1ba978;
        case 0x1ba97cu: goto label_1ba97c;
        case 0x1ba980u: goto label_1ba980;
        case 0x1ba984u: goto label_1ba984;
        case 0x1ba988u: goto label_1ba988;
        case 0x1ba98cu: goto label_1ba98c;
        case 0x1ba990u: goto label_1ba990;
        case 0x1ba994u: goto label_1ba994;
        case 0x1ba998u: goto label_1ba998;
        case 0x1ba99cu: goto label_1ba99c;
        case 0x1ba9a0u: goto label_1ba9a0;
        case 0x1ba9a4u: goto label_1ba9a4;
        case 0x1ba9a8u: goto label_1ba9a8;
        case 0x1ba9acu: goto label_1ba9ac;
        case 0x1ba9b0u: goto label_1ba9b0;
        case 0x1ba9b4u: goto label_1ba9b4;
        case 0x1ba9b8u: goto label_1ba9b8;
        case 0x1ba9bcu: goto label_1ba9bc;
        case 0x1ba9c0u: goto label_1ba9c0;
        case 0x1ba9c4u: goto label_1ba9c4;
        case 0x1ba9c8u: goto label_1ba9c8;
        case 0x1ba9ccu: goto label_1ba9cc;
        case 0x1ba9d0u: goto label_1ba9d0;
        case 0x1ba9d4u: goto label_1ba9d4;
        case 0x1ba9d8u: goto label_1ba9d8;
        case 0x1ba9dcu: goto label_1ba9dc;
        case 0x1ba9e0u: goto label_1ba9e0;
        case 0x1ba9e4u: goto label_1ba9e4;
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1ba9ecu: goto label_1ba9ec;
        case 0x1ba9f0u: goto label_1ba9f0;
        case 0x1ba9f4u: goto label_1ba9f4;
        case 0x1ba9f8u: goto label_1ba9f8;
        case 0x1ba9fcu: goto label_1ba9fc;
        case 0x1baa00u: goto label_1baa00;
        case 0x1baa04u: goto label_1baa04;
        case 0x1baa08u: goto label_1baa08;
        case 0x1baa0cu: goto label_1baa0c;
        case 0x1baa10u: goto label_1baa10;
        case 0x1baa14u: goto label_1baa14;
        case 0x1baa18u: goto label_1baa18;
        case 0x1baa1cu: goto label_1baa1c;
        case 0x1baa20u: goto label_1baa20;
        case 0x1baa24u: goto label_1baa24;
        case 0x1baa28u: goto label_1baa28;
        case 0x1baa2cu: goto label_1baa2c;
        case 0x1baa30u: goto label_1baa30;
        case 0x1baa34u: goto label_1baa34;
        case 0x1baa38u: goto label_1baa38;
        case 0x1baa3cu: goto label_1baa3c;
        case 0x1baa40u: goto label_1baa40;
        case 0x1baa44u: goto label_1baa44;
        case 0x1baa48u: goto label_1baa48;
        case 0x1baa4cu: goto label_1baa4c;
        case 0x1baa50u: goto label_1baa50;
        case 0x1baa54u: goto label_1baa54;
        case 0x1baa58u: goto label_1baa58;
        case 0x1baa5cu: goto label_1baa5c;
        case 0x1baa60u: goto label_1baa60;
        case 0x1baa64u: goto label_1baa64;
        case 0x1baa68u: goto label_1baa68;
        case 0x1baa6cu: goto label_1baa6c;
        case 0x1baa70u: goto label_1baa70;
        case 0x1baa74u: goto label_1baa74;
        case 0x1baa78u: goto label_1baa78;
        case 0x1baa7cu: goto label_1baa7c;
        case 0x1baa80u: goto label_1baa80;
        case 0x1baa84u: goto label_1baa84;
        case 0x1baa88u: goto label_1baa88;
        case 0x1baa8cu: goto label_1baa8c;
        case 0x1baa90u: goto label_1baa90;
        case 0x1baa94u: goto label_1baa94;
        case 0x1baa98u: goto label_1baa98;
        case 0x1baa9cu: goto label_1baa9c;
        case 0x1baaa0u: goto label_1baaa0;
        case 0x1baaa4u: goto label_1baaa4;
        case 0x1baaa8u: goto label_1baaa8;
        case 0x1baaacu: goto label_1baaac;
        case 0x1baab0u: goto label_1baab0;
        case 0x1baab4u: goto label_1baab4;
        case 0x1baab8u: goto label_1baab8;
        case 0x1baabcu: goto label_1baabc;
        case 0x1baac0u: goto label_1baac0;
        case 0x1baac4u: goto label_1baac4;
        case 0x1baac8u: goto label_1baac8;
        case 0x1baaccu: goto label_1baacc;
        case 0x1baad0u: goto label_1baad0;
        case 0x1baad4u: goto label_1baad4;
        case 0x1baad8u: goto label_1baad8;
        case 0x1baadcu: goto label_1baadc;
        case 0x1baae0u: goto label_1baae0;
        case 0x1baae4u: goto label_1baae4;
        case 0x1baae8u: goto label_1baae8;
        case 0x1baaecu: goto label_1baaec;
        case 0x1baaf0u: goto label_1baaf0;
        case 0x1baaf4u: goto label_1baaf4;
        case 0x1baaf8u: goto label_1baaf8;
        case 0x1baafcu: goto label_1baafc;
        case 0x1bab00u: goto label_1bab00;
        case 0x1bab04u: goto label_1bab04;
        case 0x1bab08u: goto label_1bab08;
        case 0x1bab0cu: goto label_1bab0c;
        case 0x1bab10u: goto label_1bab10;
        case 0x1bab14u: goto label_1bab14;
        case 0x1bab18u: goto label_1bab18;
        case 0x1bab1cu: goto label_1bab1c;
        case 0x1bab20u: goto label_1bab20;
        case 0x1bab24u: goto label_1bab24;
        case 0x1bab28u: goto label_1bab28;
        case 0x1bab2cu: goto label_1bab2c;
        case 0x1bab30u: goto label_1bab30;
        case 0x1bab34u: goto label_1bab34;
        case 0x1bab38u: goto label_1bab38;
        case 0x1bab3cu: goto label_1bab3c;
        case 0x1bab40u: goto label_1bab40;
        case 0x1bab44u: goto label_1bab44;
        case 0x1bab48u: goto label_1bab48;
        case 0x1bab4cu: goto label_1bab4c;
        case 0x1bab50u: goto label_1bab50;
        case 0x1bab54u: goto label_1bab54;
        case 0x1bab58u: goto label_1bab58;
        case 0x1bab5cu: goto label_1bab5c;
        case 0x1bab60u: goto label_1bab60;
        case 0x1bab64u: goto label_1bab64;
        case 0x1bab68u: goto label_1bab68;
        case 0x1bab6cu: goto label_1bab6c;
        case 0x1bab70u: goto label_1bab70;
        case 0x1bab74u: goto label_1bab74;
        case 0x1bab78u: goto label_1bab78;
        case 0x1bab7cu: goto label_1bab7c;
        case 0x1bab80u: goto label_1bab80;
        case 0x1bab84u: goto label_1bab84;
        case 0x1bab88u: goto label_1bab88;
        case 0x1bab8cu: goto label_1bab8c;
        case 0x1bab90u: goto label_1bab90;
        case 0x1bab94u: goto label_1bab94;
        case 0x1bab98u: goto label_1bab98;
        case 0x1bab9cu: goto label_1bab9c;
        case 0x1baba0u: goto label_1baba0;
        case 0x1baba4u: goto label_1baba4;
        case 0x1baba8u: goto label_1baba8;
        case 0x1babacu: goto label_1babac;
        case 0x1babb0u: goto label_1babb0;
        case 0x1babb4u: goto label_1babb4;
        case 0x1babb8u: goto label_1babb8;
        case 0x1babbcu: goto label_1babbc;
        case 0x1babc0u: goto label_1babc0;
        case 0x1babc4u: goto label_1babc4;
        case 0x1babc8u: goto label_1babc8;
        case 0x1babccu: goto label_1babcc;
        case 0x1babd0u: goto label_1babd0;
        case 0x1babd4u: goto label_1babd4;
        case 0x1babd8u: goto label_1babd8;
        case 0x1babdcu: goto label_1babdc;
        case 0x1babe0u: goto label_1babe0;
        case 0x1babe4u: goto label_1babe4;
        case 0x1babe8u: goto label_1babe8;
        case 0x1babecu: goto label_1babec;
        case 0x1babf0u: goto label_1babf0;
        case 0x1babf4u: goto label_1babf4;
        case 0x1babf8u: goto label_1babf8;
        case 0x1babfcu: goto label_1babfc;
        case 0x1bac00u: goto label_1bac00;
        case 0x1bac04u: goto label_1bac04;
        case 0x1bac08u: goto label_1bac08;
        case 0x1bac0cu: goto label_1bac0c;
        case 0x1bac10u: goto label_1bac10;
        case 0x1bac14u: goto label_1bac14;
        case 0x1bac18u: goto label_1bac18;
        case 0x1bac1cu: goto label_1bac1c;
        case 0x1bac20u: goto label_1bac20;
        case 0x1bac24u: goto label_1bac24;
        case 0x1bac28u: goto label_1bac28;
        case 0x1bac2cu: goto label_1bac2c;
        case 0x1bac30u: goto label_1bac30;
        case 0x1bac34u: goto label_1bac34;
        case 0x1bac38u: goto label_1bac38;
        case 0x1bac3cu: goto label_1bac3c;
        case 0x1bac40u: goto label_1bac40;
        case 0x1bac44u: goto label_1bac44;
        case 0x1bac48u: goto label_1bac48;
        case 0x1bac4cu: goto label_1bac4c;
        case 0x1bac50u: goto label_1bac50;
        case 0x1bac54u: goto label_1bac54;
        case 0x1bac58u: goto label_1bac58;
        case 0x1bac5cu: goto label_1bac5c;
        case 0x1bac60u: goto label_1bac60;
        case 0x1bac64u: goto label_1bac64;
        case 0x1bac68u: goto label_1bac68;
        case 0x1bac6cu: goto label_1bac6c;
        case 0x1bac70u: goto label_1bac70;
        case 0x1bac74u: goto label_1bac74;
        case 0x1bac78u: goto label_1bac78;
        case 0x1bac7cu: goto label_1bac7c;
        case 0x1bac80u: goto label_1bac80;
        case 0x1bac84u: goto label_1bac84;
        case 0x1bac88u: goto label_1bac88;
        case 0x1bac8cu: goto label_1bac8c;
        case 0x1bac90u: goto label_1bac90;
        case 0x1bac94u: goto label_1bac94;
        case 0x1bac98u: goto label_1bac98;
        case 0x1bac9cu: goto label_1bac9c;
        case 0x1baca0u: goto label_1baca0;
        case 0x1baca4u: goto label_1baca4;
        case 0x1baca8u: goto label_1baca8;
        case 0x1bacacu: goto label_1bacac;
        case 0x1bacb0u: goto label_1bacb0;
        case 0x1bacb4u: goto label_1bacb4;
        case 0x1bacb8u: goto label_1bacb8;
        case 0x1bacbcu: goto label_1bacbc;
        case 0x1bacc0u: goto label_1bacc0;
        case 0x1bacc4u: goto label_1bacc4;
        case 0x1bacc8u: goto label_1bacc8;
        case 0x1bacccu: goto label_1baccc;
        case 0x1bacd0u: goto label_1bacd0;
        case 0x1bacd4u: goto label_1bacd4;
        case 0x1bacd8u: goto label_1bacd8;
        case 0x1bacdcu: goto label_1bacdc;
        case 0x1bace0u: goto label_1bace0;
        case 0x1bace4u: goto label_1bace4;
        case 0x1bace8u: goto label_1bace8;
        case 0x1bacecu: goto label_1bacec;
        case 0x1bacf0u: goto label_1bacf0;
        case 0x1bacf4u: goto label_1bacf4;
        case 0x1bacf8u: goto label_1bacf8;
        case 0x1bacfcu: goto label_1bacfc;
        case 0x1bad00u: goto label_1bad00;
        default: break;
    }

    ctx->pc = 0x1b9840u;

label_1b9840:
    // 0x1b9840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b9840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b9844:
    // 0x1b9844: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1b9844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_1b9848:
    // 0x1b9848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b9848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b984c:
    // 0x1b984c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b9850:
    // 0x1b9850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9854:
    // 0x1b9854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b9858:
    // 0x1b9858: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1b9858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1b985c:
    // 0x1b985c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1b985cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1b9860:
    // 0x1b9860: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x1b9860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1b9864:
    // 0x1b9864: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b9864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1b9868:
    // 0x1b9868: 0x2473ec70  addiu       $s3, $v1, -0x1390
    ctx->pc = 0x1b9868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_1b986c:
    // 0x1b986c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b986cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9870:
    // 0x1b9870: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b9870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b9874:
    // 0x1b9874: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x1b9874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
label_1b9878:
    // 0x1b9878: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1b9878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b987c:
    // 0x1b987c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1b987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1b9880:
    // 0x1b9880: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b9880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b9884:
    // 0x1b9884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b9884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9888:
    // 0x1b9888: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b988c:
    // 0x1b988c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1b988cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1b9890:
    // 0x1b9890: 0x8e0319e4  lw          $v1, 0x19E4($s0)
    ctx->pc = 0x1b9890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6628)));
label_1b9894:
    // 0x1b9894: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x1b9894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_1b9898:
    // 0x1b9898: 0xae0319e4  sw          $v1, 0x19E4($s0)
    ctx->pc = 0x1b9898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6628), GPR_U32(ctx, 3));
label_1b989c:
    // 0x1b989c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b98a0:
    // 0x1b98a0: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1b98a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b98a4:
    // 0x1b98a4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1b98a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b98a8:
    // 0x1b98a8: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x1b98a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_1b98ac:
    // 0x1b98ac: 0x102004e9  beqz        $at, . + 4 + (0x4E9 << 2)
label_1b98b0:
    if (ctx->pc == 0x1B98B0u) {
        ctx->pc = 0x1B98B4u;
        goto label_1b98b4;
    }
    ctx->pc = 0x1B98ACu;
    {
        const bool branch_taken_0x1b98ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b98ac) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1B98B4u;
label_1b98b4:
    // 0x1b98b4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1b98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_1b98b8:
    // 0x1b98b8: 0x2485f330  addiu       $a1, $a0, -0xCD0
    ctx->pc = 0x1b98b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964016));
label_1b98bc:
    // 0x1b98bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b98c0:
    // 0x1b98c0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1b98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b98c4:
    // 0x1b98c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b98c8:
    // 0x1b98c8: 0x600008  jr          $v1
label_1b98cc:
    if (ctx->pc == 0x1B98CCu) {
        ctx->pc = 0x1B98D0u;
        goto label_1b98d0;
    }
    ctx->pc = 0x1B98C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B98C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B98D0u;
label_1b98d0:
    // 0x1b98d0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b98d4:
    // 0x1b98d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b98d8:
    // 0x1b98d8: 0xa08210a8  sb          $v0, 0x10A8($a0)
    ctx->pc = 0x1b98d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 2));
label_1b98dc:
    // 0x1b98dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b98e0:
    // 0x1b98e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b98e4:
    // 0x1b98e4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1b98e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b98e8:
    // 0x1b98e8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1b98e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b98ec:
    // 0x1b98ec: 0xc058f20  jal         func_163C80
label_1b98f0:
    if (ctx->pc == 0x1B98F0u) {
        ctx->pc = 0x1B98F4u;
        goto label_1b98f4;
    }
    ctx->pc = 0x1B98ECu;
    SET_GPR_U32(ctx, 31, 0x1B98F4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B98ECu, 0x1B98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B98F4u;
label_1b98f4:
    // 0x1b98f4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b98f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b98f8:
    // 0x1b98f8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b98fc:
    // 0x1b98fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b98fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9900:
    // 0x1b9900: 0x0  nop
    ctx->pc = 0x1b9900u;
    // NOP
label_1b9904:
    // 0x1b9904: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9908:
    // 0x1b9908: 0x0  nop
    ctx->pc = 0x1b9908u;
    // NOP
label_1b990c:
    // 0x1b990c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1b9910:
    if (ctx->pc == 0x1B9910u) {
        ctx->pc = 0x1B9914u;
        goto label_1b9914;
    }
    ctx->pc = 0x1B990Cu;
    {
        const bool branch_taken_0x1b990c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b990c) {
            ctx->pc = 0x1B994Cu;
            goto label_1b994c;
        }
    }
    ctx->pc = 0x1B9914u;
label_1b9914:
    // 0x1b9914: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9918:
    // 0x1b9918: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b991c:
    // 0x1b991c: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x1b991cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_1b9920:
    // 0x1b9920: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x1b9920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1b9924:
    // 0x1b9924: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b9924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b9928:
    // 0x1b9928: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b992c:
    // 0x1b992c: 0xc0965d0  jal         func_259740
label_1b9930:
    if (ctx->pc == 0x1B9930u) {
        ctx->pc = 0x1B9934u;
        goto label_1b9934;
    }
    ctx->pc = 0x1B992Cu;
    SET_GPR_U32(ctx, 31, 0x1B9934u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B992Cu, 0x1B9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9934u;
label_1b9934:
    // 0x1b9934: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9934u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9938:
    // 0x1b9938: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b9938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b993c:
    // 0x1b993c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9940:
    // 0x1b9940: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b9940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1b9944:
    // 0x1b9944: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b9948:
    if (ctx->pc == 0x1B9948u) {
        ctx->pc = 0x1B994Cu;
        goto label_1b994c;
    }
    ctx->pc = 0x1B9944u;
    {
        const bool branch_taken_0x1b9944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9944) {
            ctx->pc = 0x1B9978u;
            goto label_1b9978;
        }
    }
    ctx->pc = 0x1B994Cu;
label_1b994c:
    // 0x1b994c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9950:
    // 0x1b9950: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9954:
    // 0x1b9954: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b9954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b9958:
    // 0x1b9958: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x1b9958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1b995c:
    // 0x1b995c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b995cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9960:
    // 0x1b9960: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b9964:
    // 0x1b9964: 0xc0965d0  jal         func_259740
label_1b9968:
    if (ctx->pc == 0x1B9968u) {
        ctx->pc = 0x1B996Cu;
        goto label_1b996c;
    }
    ctx->pc = 0x1B9964u;
    SET_GPR_U32(ctx, 31, 0x1B996Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9964u, 0x1B996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B996Cu;
label_1b996c:
    // 0x1b996c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b996cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9970:
    // 0x1b9970: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9974:
    // 0x1b9974: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1b9974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1b9978:
    // 0x1b9978: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1b9978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
label_1b997c:
    // 0x1b997c: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x1b997cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_1b9980:
    // 0x1b9980: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1b9980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_1b9984:
    // 0x1b9984: 0xc0684d8  jal         func_1A1360
label_1b9988:
    if (ctx->pc == 0x1B9988u) {
        ctx->pc = 0x1B998Cu;
        goto label_1b998c;
    }
    ctx->pc = 0x1B9984u;
    SET_GPR_U32(ctx, 31, 0x1B998Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1B9984u, 0x1B998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B998Cu;
label_1b998c:
    // 0x1b998c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b998cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9990:
    // 0x1b9990: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9994:
    // 0x1b9994: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x1b9994u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b9998:
    // 0x1b9998: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1b9998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b999c:
    // 0x1b999c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b999cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b99a0:
    // 0x1b99a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b99a4:
    // 0x1b99a4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b99a8:
    // 0x1b99a8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1b99ac:
    // 0x1b99ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b99acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b99b0:
    // 0x1b99b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1b99b4:
    // 0x1b99b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b99b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b99b8:
    // 0x1b99b8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b99bc:
    // 0x1b99bc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b99bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1b99c0:
    // 0x1b99c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b99c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b99c4:
    // 0x1b99c4: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1b99c8:
    // 0x1b99c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b99cc:
    // 0x1b99cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b99ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b99d0:
    // 0x1b99d0: 0xc096b40  jal         func_25AD00
label_1b99d4:
    if (ctx->pc == 0x1B99D4u) {
        ctx->pc = 0x1B99D8u;
        goto label_1b99d8;
    }
    ctx->pc = 0x1B99D0u;
    SET_GPR_U32(ctx, 31, 0x1B99D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B99D0u, 0x1B99D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99D8u;
label_1b99d8:
    // 0x1b99d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b99d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b99dc:
    // 0x1b99dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b99e0:
    // 0x1b99e0: 0xc05cd10  jal         func_173440
label_1b99e4:
    if (ctx->pc == 0x1B99E4u) {
        ctx->pc = 0x1B99E8u;
        goto label_1b99e8;
    }
    ctx->pc = 0x1B99E0u;
    SET_GPR_U32(ctx, 31, 0x1B99E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B99E0u, 0x1B99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99E8u;
label_1b99e8:
    // 0x1b99e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b99e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b99ec:
    // 0x1b99ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b99ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b99f0:
    // 0x1b99f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b99f4:
    // 0x1b99f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b99f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b99f8:
    // 0x1b99f8: 0xc057480  jal         func_15D200
label_1b99fc:
    if (ctx->pc == 0x1B99FCu) {
        ctx->pc = 0x1B9A00u;
        goto label_1b9a00;
    }
    ctx->pc = 0x1B99F8u;
    SET_GPR_U32(ctx, 31, 0x1B9A00u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B99F8u, 0x1B9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A00u;
label_1b9a00:
    // 0x1b9a00: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b9a00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b9a04:
    // 0x1b9a04: 0xc097530  jal         func_25D4C0
label_1b9a08:
    if (ctx->pc == 0x1B9A08u) {
        ctx->pc = 0x1B9A0Cu;
        goto label_1b9a0c;
    }
    ctx->pc = 0x1B9A04u;
    SET_GPR_U32(ctx, 31, 0x1B9A0Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B9A04u, 0x1B9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A0Cu;
label_1b9a0c:
    // 0x1b9a0c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b9a0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9a10:
    // 0x1b9a10: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9a14:
    // 0x1b9a14: 0x90c709e7  lbu         $a3, 0x9E7($a2)
    ctx->pc = 0x1b9a14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_1b9a18:
    // 0x1b9a18: 0x10e0048e  beqz        $a3, . + 4 + (0x48E << 2)
label_1b9a1c:
    if (ctx->pc == 0x1B9A1Cu) {
        ctx->pc = 0x1B9A20u;
        goto label_1b9a20;
    }
    ctx->pc = 0x1B9A18u;
    {
        const bool branch_taken_0x1b9a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a18) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1B9A20u;
label_1b9a20:
    // 0x1b9a20: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b9a20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9a24:
    // 0x1b9a24: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x1b9a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_1b9a28:
    // 0x1b9a28: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b9a2c:
    // 0x1b9a2c: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x1b9a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b9a30:
    // 0x1b9a30: 0x10000488  b           . + 4 + (0x488 << 2)
label_1b9a34:
    if (ctx->pc == 0x1B9A34u) {
        ctx->pc = 0x1B9A38u;
        goto label_1b9a38;
    }
    ctx->pc = 0x1B9A30u;
    {
        const bool branch_taken_0x1b9a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a30) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1B9A38u;
label_1b9a38:
    // 0x1b9a38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9a3c:
    // 0x1b9a3c: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x1b9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
label_1b9a40:
    // 0x1b9a40: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1b9a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1b9a44:
    // 0x1b9a44: 0x30a60020  andi        $a2, $a1, 0x20
    ctx->pc = 0x1b9a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_1b9a48:
    // 0x1b9a48: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_1b9a4c:
    if (ctx->pc == 0x1B9A4Cu) {
        ctx->pc = 0x1B9A50u;
        goto label_1b9a50;
    }
    ctx->pc = 0x1B9A48u;
    {
        const bool branch_taken_0x1b9a48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a48) {
            ctx->pc = 0x1B9A5Cu;
            goto label_1b9a5c;
        }
    }
    ctx->pc = 0x1B9A50u;
label_1b9a50:
    // 0x1b9a50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9a54:
    // 0x1b9a54: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b9a54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9a58:
    // 0x1b9a58: 0xad071b64  sw          $a3, 0x1B64($t0)
    ctx->pc = 0x1b9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7012), GPR_U32(ctx, 7));
label_1b9a5c:
    // 0x1b9a5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9a60:
    // 0x1b9a60: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1b9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1b9a64:
    // 0x1b9a64: 0xc0675a4  jal         func_19D690
label_1b9a68:
    if (ctx->pc == 0x1B9A68u) {
        ctx->pc = 0x1B9A6Cu;
        goto label_1b9a6c;
    }
    ctx->pc = 0x1B9A64u;
    SET_GPR_U32(ctx, 31, 0x1B9A6Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1B9A64u, 0x1B9A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A6Cu;
label_1b9a6c:
    // 0x1b9a6c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9a70:
    // 0x1b9a70: 0x8ca41b64  lw          $a0, 0x1B64($a1)
    ctx->pc = 0x1b9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7012)));
label_1b9a74:
    // 0x1b9a74: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1b9a78:
    if (ctx->pc == 0x1B9A78u) {
        ctx->pc = 0x1B9A7Cu;
        goto label_1b9a7c;
    }
    ctx->pc = 0x1B9A74u;
    {
        const bool branch_taken_0x1b9a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a74) {
            ctx->pc = 0x1B9AB4u;
            goto label_1b9ab4;
        }
    }
    ctx->pc = 0x1B9A7Cu;
label_1b9a7c:
    // 0x1b9a7c: 0x3c0342a2  lui         $v1, 0x42A2
    ctx->pc = 0x1b9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17058 << 16));
label_1b9a80:
    // 0x1b9a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9a84:
    // 0x1b9a84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9a88:
    // 0x1b9a88: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1b9a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1b9a8c:
    // 0x1b9a8c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b9a90:
    // 0x1b9a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9a94:
    // 0x1b9a94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9a98:
    // 0x1b9a98: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b9a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1b9a9c:
    // 0x1b9a9c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1b9aa0:
    // 0x1b9aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9aa4:
    // 0x1b9aa4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9aa8:
    // 0x1b9aa8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1b9aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1b9aac:
    // 0x1b9aac: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b9ab0:
    if (ctx->pc == 0x1B9AB0u) {
        ctx->pc = 0x1B9AB4u;
        goto label_1b9ab4;
    }
    ctx->pc = 0x1B9AACu;
    {
        const bool branch_taken_0x1b9aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9aac) {
            ctx->pc = 0x1B9AECu;
            goto label_1b9aec;
        }
    }
    ctx->pc = 0x1B9AB4u;
label_1b9ab4:
    // 0x1b9ab4: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x1b9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
label_1b9ab8:
    // 0x1b9ab8: 0x3442b333  ori         $v0, $v0, 0xB333
    ctx->pc = 0x1b9ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45875);
label_1b9abc:
    // 0x1b9abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9ac0:
    // 0x1b9ac0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ac4:
    // 0x1b9ac4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1b9ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1b9ac8:
    // 0x1b9ac8: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
label_1b9acc:
    // 0x1b9acc: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1b9accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
label_1b9ad0:
    // 0x1b9ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9ad4:
    // 0x1b9ad4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ad8:
    // 0x1b9ad8: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x1b9ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
label_1b9adc:
    // 0x1b9adc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1b9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_1b9ae0:
    // 0x1b9ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9ae4:
    // 0x1b9ae4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ae8:
    // 0x1b9ae8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1b9ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1b9aec:
    // 0x1b9aec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9af0:
    // 0x1b9af0: 0x8c431b60  lw          $v1, 0x1B60($v0)
    ctx->pc = 0x1b9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1b9af4:
    // 0x1b9af4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1b9af8:
    if (ctx->pc == 0x1B9AF8u) {
        ctx->pc = 0x1B9AFCu;
        goto label_1b9afc;
    }
    ctx->pc = 0x1B9AF4u;
    {
        const bool branch_taken_0x1b9af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9af4) {
            ctx->pc = 0x1B9B24u;
            goto label_1b9b24;
        }
    }
    ctx->pc = 0x1B9AFCu;
label_1b9afc:
    // 0x1b9afc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9b00:
    // 0x1b9b00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9b04:
    // 0x1b9b04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b9b08:
    // 0x1b9b08: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x1b9b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_1b9b0c:
    // 0x1b9b0c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b9b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b9b10:
    // 0x1b9b10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b9b14:
    // 0x1b9b14: 0xc0965d0  jal         func_259740
label_1b9b18:
    if (ctx->pc == 0x1B9B18u) {
        ctx->pc = 0x1B9B1Cu;
        goto label_1b9b1c;
    }
    ctx->pc = 0x1B9B14u;
    SET_GPR_U32(ctx, 31, 0x1B9B1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9B14u, 0x1B9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B1Cu;
label_1b9b1c:
    // 0x1b9b1c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b9b20:
    if (ctx->pc == 0x1B9B20u) {
        ctx->pc = 0x1B9B24u;
        goto label_1b9b24;
    }
    ctx->pc = 0x1B9B1Cu;
    {
        const bool branch_taken_0x1b9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b1c) {
            ctx->pc = 0x1B9B44u;
            goto label_1b9b44;
        }
    }
    ctx->pc = 0x1B9B24u;
label_1b9b24:
    // 0x1b9b24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9b28:
    // 0x1b9b28: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9b2c:
    // 0x1b9b2c: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x1b9b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_1b9b30:
    // 0x1b9b30: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x1b9b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_1b9b34:
    // 0x1b9b34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9b38:
    // 0x1b9b38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b9b3c:
    // 0x1b9b3c: 0xc0965d0  jal         func_259740
label_1b9b40:
    if (ctx->pc == 0x1B9B40u) {
        ctx->pc = 0x1B9B44u;
        goto label_1b9b44;
    }
    ctx->pc = 0x1B9B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9B3Cu, 0x1B9B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B44u;
label_1b9b44:
    // 0x1b9b44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b9b48:
    // 0x1b9b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9b4c:
    // 0x1b9b4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9b50:
    // 0x1b9b50: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b9b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b9b54:
    // 0x1b9b54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b9b58:
    // 0x1b9b58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9b5c:
    // 0x1b9b5c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1b9b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1b9b60:
    // 0x1b9b60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9b64:
    // 0x1b9b64: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1b9b64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1b9b68:
    // 0x1b9b68: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1b9b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b9b6c:
    // 0x1b9b6c: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1b9b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1b9b70:
    // 0x1b9b70: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9b74:
    // 0x1b9b74: 0x90c209da  lbu         $v0, 0x9DA($a2)
    ctx->pc = 0x1b9b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2522)));
label_1b9b78:
    // 0x1b9b78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b9b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b9b7c:
    // 0x1b9b7c: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x1b9b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1b9b80:
    // 0x1b9b80: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1b9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1b9b84:
    // 0x1b9b84: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_1b9b88:
    if (ctx->pc == 0x1B9B88u) {
        ctx->pc = 0x1B9B8Cu;
        goto label_1b9b8c;
    }
    ctx->pc = 0x1B9B84u;
    {
        const bool branch_taken_0x1b9b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9b84) {
            ctx->pc = 0x1B9BE0u;
            goto label_1b9be0;
        }
    }
    ctx->pc = 0x1B9B8Cu;
label_1b9b8c:
    // 0x1b9b8c: 0xc067694  jal         func_19DA50
label_1b9b90:
    if (ctx->pc == 0x1B9B90u) {
        ctx->pc = 0x1B9B94u;
        goto label_1b9b94;
    }
    ctx->pc = 0x1B9B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B94u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1B9B8Cu, 0x1B9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B94u;
label_1b9b94:
    // 0x1b9b94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9b94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9b98:
    // 0x1b9b98: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b9b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b9b9c:
    // 0x1b9b9c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b9b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1b9ba0:
    // 0x1b9ba0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1b9ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b9ba4:
    // 0x1b9ba4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1b9ba8:
    // 0x1b9ba8: 0x246352d8  addiu       $v1, $v1, 0x52D8
    ctx->pc = 0x1b9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21208));
label_1b9bac:
    // 0x1b9bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b9bb0:
    // 0x1b9bb0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1b9bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1b9bb4:
    // 0x1b9bb4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x1b9bb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1b9bb8:
    // 0x1b9bb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9bbc:
    // 0x1b9bbc: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x1b9bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1b9bc0:
    // 0x1b9bc0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1b9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1b9bc4:
    // 0x1b9bc4: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x1b9bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1b9bc8:
    // 0x1b9bc8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1b9bc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b9bcc:
    // 0x1b9bcc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b9bccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1b9bd0:
    // 0x1b9bd0: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x1b9bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_1b9bd4:
    // 0x1b9bd4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b9bd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b9bd8:
    // 0x1b9bd8: 0xc067b18  jal         func_19EC60
label_1b9bdc:
    if (ctx->pc == 0x1B9BDCu) {
        ctx->pc = 0x1B9BE0u;
        goto label_1b9be0;
    }
    ctx->pc = 0x1B9BD8u;
    SET_GPR_U32(ctx, 31, 0x1B9BE0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1B9BD8u, 0x1B9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9BE0u;
label_1b9be0:
    // 0x1b9be0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b9be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b9be4:
    // 0x1b9be4: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x1b9be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b9be8:
    // 0x1b9be8: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x1b9be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_1b9bec:
    // 0x1b9bec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b9becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b9bf0:
    // 0x1b9bf0: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b9bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1b9bf4:
    // 0x1b9bf4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9bf8:
    // 0x1b9bf8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b9bfc:
    // 0x1b9bfc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1b9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1b9c00:
    // 0x1b9c00: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b9c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b9c04:
    // 0x1b9c04: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1b9c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_1b9c08:
    // 0x1b9c08: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9c0c:
    // 0x1b9c0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9c10:
    // 0x1b9c10: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1b9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
label_1b9c14:
    // 0x1b9c14: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1b9c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1b9c18:
    // 0x1b9c18: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x1b9c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b9c1c:
    // 0x1b9c1c: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1b9c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9c20:
    // 0x1b9c20: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x1b9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b9c24:
    // 0x1b9c24: 0xc058f50  jal         func_163D40
label_1b9c28:
    if (ctx->pc == 0x1B9C28u) {
        ctx->pc = 0x1B9C2Cu;
        goto label_1b9c2c;
    }
    ctx->pc = 0x1B9C24u;
    SET_GPR_U32(ctx, 31, 0x1B9C2Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B9C24u, 0x1B9C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C2Cu;
label_1b9c2c:
    // 0x1b9c2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9c30:
    // 0x1b9c30: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b9c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1b9c34:
    // 0x1b9c34: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9c38:
    // 0x1b9c38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b9c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b9c3c:
    // 0x1b9c3c: 0xc096b40  jal         func_25AD00
label_1b9c40:
    if (ctx->pc == 0x1B9C40u) {
        ctx->pc = 0x1B9C44u;
        goto label_1b9c44;
    }
    ctx->pc = 0x1B9C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B9C3Cu, 0x1B9C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C44u;
label_1b9c44:
    // 0x1b9c44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9c44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9c48:
    // 0x1b9c48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9c4c:
    // 0x1b9c4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9c50:
    // 0x1b9c50: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9c54:
    // 0x1b9c54: 0xc05cd58  jal         func_173560
label_1b9c58:
    if (ctx->pc == 0x1B9C58u) {
        ctx->pc = 0x1B9C5Cu;
        goto label_1b9c5c;
    }
    ctx->pc = 0x1B9C54u;
    SET_GPR_U32(ctx, 31, 0x1B9C5Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B9C54u, 0x1B9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C5Cu;
label_1b9c5c:
    // 0x1b9c5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9c5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9c60:
    // 0x1b9c60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b9c64:
    // 0x1b9c64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9c68:
    // 0x1b9c68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b9c68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b9c6c:
    // 0x1b9c6c: 0xc057480  jal         func_15D200
label_1b9c70:
    if (ctx->pc == 0x1B9C70u) {
        ctx->pc = 0x1B9C74u;
        goto label_1b9c74;
    }
    ctx->pc = 0x1B9C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C74u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B9C6Cu, 0x1B9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C74u;
label_1b9c74:
    // 0x1b9c74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9c74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9c78:
    // 0x1b9c78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9c7c:
    // 0x1b9c7c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1b9c80:
    // 0x1b9c80: 0xc057a80  jal         func_15EA00
label_1b9c84:
    if (ctx->pc == 0x1B9C84u) {
        ctx->pc = 0x1B9C88u;
        goto label_1b9c88;
    }
    ctx->pc = 0x1B9C80u;
    SET_GPR_U32(ctx, 31, 0x1B9C88u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B9C80u, 0x1B9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C88u;
label_1b9c88:
    // 0x1b9c88: 0x3c044467  lui         $a0, 0x4467
    ctx->pc = 0x1b9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17511 << 16));
label_1b9c8c:
    // 0x1b9c8c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1b9c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1b9c90:
    // 0x1b9c90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b9c94:
    // 0x1b9c94: 0x0  nop
    ctx->pc = 0x1b9c94u;
    // NOP
label_1b9c98:
    // 0x1b9c98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b9c9c:
    // 0x1b9c9c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1b9ca0:
    // 0x1b9ca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ca4:
    // 0x1b9ca4: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b9ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9ca8:
    // 0x1b9ca8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9cac:
    // 0x1b9cac: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9cb0:
    // 0x1b9cb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b9cb4:
    // 0x1b9cb4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b9cb8:
    // 0x1b9cb8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9cbc:
    // 0x1b9cbc: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1b9cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9cc0:
    // 0x1b9cc0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9cc4:
    // 0x1b9cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9cc8:
    // 0x1b9cc8: 0x0  nop
    ctx->pc = 0x1b9cc8u;
    // NOP
label_1b9ccc:
    // 0x1b9ccc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b9cd0:
    if (ctx->pc == 0x1B9CD0u) {
        ctx->pc = 0x1B9CD4u;
        goto label_1b9cd4;
    }
    ctx->pc = 0x1B9CCCu;
    {
        const bool branch_taken_0x1b9ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9ccc) {
            ctx->pc = 0x1B9CE0u;
            goto label_1b9ce0;
        }
    }
    ctx->pc = 0x1B9CD4u;
label_1b9cd4:
    // 0x1b9cd4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9cd8:
    // 0x1b9cd8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9cdc:
    // 0x1b9cdc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b9cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1b9ce0:
    // 0x1b9ce0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ce4:
    // 0x1b9ce4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1b9ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9ce8:
    // 0x1b9ce8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9cec:
    // 0x1b9cec: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b9cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9cf0:
    // 0x1b9cf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b9cf4:
    // 0x1b9cf4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b9cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b9cf8:
    // 0x1b9cf8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b9cf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b9cfc:
    // 0x1b9cfc: 0xc097530  jal         func_25D4C0
label_1b9d00:
    if (ctx->pc == 0x1B9D00u) {
        ctx->pc = 0x1B9D04u;
        goto label_1b9d04;
    }
    ctx->pc = 0x1B9CFCu;
    SET_GPR_U32(ctx, 31, 0x1B9D04u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B9CFCu, 0x1B9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D04u;
label_1b9d04:
    // 0x1b9d04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9d04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9d08:
    // 0x1b9d08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9d0c:
    // 0x1b9d0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b9d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b9d10:
    // 0x1b9d10: 0x106003d0  beqz        $v1, . + 4 + (0x3D0 << 2)
label_1b9d14:
    if (ctx->pc == 0x1B9D14u) {
        ctx->pc = 0x1B9D18u;
        goto label_1b9d18;
    }
    ctx->pc = 0x1B9D10u;
    {
        const bool branch_taken_0x1b9d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9d10) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1B9D18u;
label_1b9d18:
    // 0x1b9d18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9d1c:
    // 0x1b9d1c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b9d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b9d20:
    // 0x1b9d20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b9d24:
    // 0x1b9d24: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b9d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b9d28:
    // 0x1b9d28: 0x100003ca  b           . + 4 + (0x3CA << 2)
label_1b9d2c:
    if (ctx->pc == 0x1B9D2Cu) {
        ctx->pc = 0x1B9D30u;
        goto label_1b9d30;
    }
    ctx->pc = 0x1B9D28u;
    {
        const bool branch_taken_0x1b9d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9d28) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1B9D30u;
label_1b9d30:
    // 0x1b9d30: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b9d34:
    // 0x1b9d34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9d38:
    // 0x1b9d38: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1b9d38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1b9d3c:
    // 0x1b9d3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9d40:
    // 0x1b9d40: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1b9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
label_1b9d44:
    // 0x1b9d44: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9d48:
    // 0x1b9d48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9d4c:
    // 0x1b9d4c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b9d50:
    // 0x1b9d50: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x1b9d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1b9d54:
    // 0x1b9d54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9d58:
    // 0x1b9d58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b9d5c:
    // 0x1b9d5c: 0xc0965d0  jal         func_259740
label_1b9d60:
    if (ctx->pc == 0x1B9D60u) {
        ctx->pc = 0x1B9D64u;
        goto label_1b9d64;
    }
    ctx->pc = 0x1B9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9D5Cu, 0x1B9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D64u;
label_1b9d64:
    // 0x1b9d64: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9d68:
    // 0x1b9d68: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x1b9d68u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_1b9d6c:
    // 0x1b9d6c: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x1b9d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1b9d70:
    // 0x1b9d70: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x1b9d70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
label_1b9d74:
    // 0x1b9d74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b9d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b9d78:
    // 0x1b9d78: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b9d7c:
    // 0x1b9d7c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1b9d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1b9d80:
    // 0x1b9d80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b9d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b9d84:
    // 0x1b9d84: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b9d84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_1b9d88:
    // 0x1b9d88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9d8c:
    // 0x1b9d8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b9d90:
    // 0x1b9d90: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1b9d94:
    // 0x1b9d94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b9d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b9d98:
    // 0x1b9d98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b9d9c:
    // 0x1b9d9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9da0:
    // 0x1b9da0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b9da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b9da4:
    // 0x1b9da4: 0xc096b40  jal         func_25AD00
label_1b9da8:
    if (ctx->pc == 0x1B9DA8u) {
        ctx->pc = 0x1B9DACu;
        goto label_1b9dac;
    }
    ctx->pc = 0x1B9DA4u;
    SET_GPR_U32(ctx, 31, 0x1B9DACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B9DA4u, 0x1B9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DACu;
label_1b9dac:
    // 0x1b9dac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9db0:
    // 0x1b9db0: 0x8c621b64  lw          $v0, 0x1B64($v1)
    ctx->pc = 0x1b9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1b9db4:
    // 0x1b9db4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b9db8:
    if (ctx->pc == 0x1B9DB8u) {
        ctx->pc = 0x1B9DBCu;
        goto label_1b9dbc;
    }
    ctx->pc = 0x1B9DB4u;
    {
        const bool branch_taken_0x1b9db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9db4) {
            ctx->pc = 0x1B9DE4u;
            goto label_1b9de4;
        }
    }
    ctx->pc = 0x1B9DBCu;
label_1b9dbc:
    // 0x1b9dbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9dc0:
    // 0x1b9dc0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9dc4:
    // 0x1b9dc4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_1b9dc8:
    // 0x1b9dc8: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x1b9dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1b9dcc:
    // 0x1b9dcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b9dd0:
    // 0x1b9dd0: 0x24820180  addiu       $v0, $a0, 0x180
    ctx->pc = 0x1b9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b9dd4:
    // 0x1b9dd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9dd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9dd8:
    // 0x1b9dd8: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b9dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b9ddc:
    // 0x1b9ddc: 0xc040ed8  jal         func_103B60
label_1b9de0:
    if (ctx->pc == 0x1B9DE0u) {
        ctx->pc = 0x1B9DE4u;
        goto label_1b9de4;
    }
    ctx->pc = 0x1B9DDCu;
    SET_GPR_U32(ctx, 31, 0x1B9DE4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B9DE4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B9DE4u) { return; }
    ctx->pc = 0x1B9DE4u;
label_1b9de4:
    // 0x1b9de4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9de8:
    // 0x1b9de8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9dec:
    // 0x1b9dec: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1b9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9df0:
    // 0x1b9df0: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1b9df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b9df4:
    // 0x1b9df4: 0xc058f20  jal         func_163C80
label_1b9df8:
    if (ctx->pc == 0x1B9DF8u) {
        ctx->pc = 0x1B9DFCu;
        goto label_1b9dfc;
    }
    ctx->pc = 0x1B9DF4u;
    SET_GPR_U32(ctx, 31, 0x1B9DFCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B9DF4u, 0x1B9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DFCu;
label_1b9dfc:
    // 0x1b9dfc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b9e00:
    // 0x1b9e00: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b9e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9e04:
    // 0x1b9e04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9e08:
    // 0x1b9e08: 0x0  nop
    ctx->pc = 0x1b9e08u;
    // NOP
label_1b9e0c:
    // 0x1b9e0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9e10:
    // 0x1b9e10: 0x0  nop
    ctx->pc = 0x1b9e10u;
    // NOP
label_1b9e14:
    // 0x1b9e14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b9e18:
    if (ctx->pc == 0x1B9E18u) {
        ctx->pc = 0x1B9E1Cu;
        goto label_1b9e1c;
    }
    ctx->pc = 0x1B9E14u;
    {
        const bool branch_taken_0x1b9e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9e14) {
            ctx->pc = 0x1B9E30u;
            goto label_1b9e30;
        }
    }
    ctx->pc = 0x1B9E1Cu;
label_1b9e1c:
    // 0x1b9e1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b9e20:
    // 0x1b9e20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b9e24:
    // 0x1b9e24: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9e28:
    // 0x1b9e28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b9e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b9e2c:
    // 0x1b9e2c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b9e30:
    // 0x1b9e30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9e34:
    // 0x1b9e34: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1b9e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9e38:
    // 0x1b9e38: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b9e3c:
    // 0x1b9e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9e40:
    // 0x1b9e40: 0x0  nop
    ctx->pc = 0x1b9e40u;
    // NOP
label_1b9e44:
    // 0x1b9e44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9e48:
    // 0x1b9e48: 0x0  nop
    ctx->pc = 0x1b9e48u;
    // NOP
label_1b9e4c:
    // 0x1b9e4c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b9e50:
    if (ctx->pc == 0x1B9E50u) {
        ctx->pc = 0x1B9E54u;
        goto label_1b9e54;
    }
    ctx->pc = 0x1B9E4Cu;
    {
        const bool branch_taken_0x1b9e4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9e4c) {
            ctx->pc = 0x1B9F30u;
            goto label_1b9f30;
        }
    }
    ctx->pc = 0x1B9E54u;
label_1b9e54:
    // 0x1b9e54: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b9e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9e58:
    // 0x1b9e58: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1b9e5c:
    // 0x1b9e5c: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1b9e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1b9e60:
    // 0x1b9e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9e64:
    // 0x1b9e64: 0x0  nop
    ctx->pc = 0x1b9e64u;
    // NOP
label_1b9e68:
    // 0x1b9e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9e6c:
    // 0x1b9e6c: 0x0  nop
    ctx->pc = 0x1b9e6cu;
    // NOP
label_1b9e70:
    // 0x1b9e70: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b9e74:
    if (ctx->pc == 0x1B9E74u) {
        ctx->pc = 0x1B9E78u;
        goto label_1b9e78;
    }
    ctx->pc = 0x1B9E70u;
    {
        const bool branch_taken_0x1b9e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9e70) {
            ctx->pc = 0x1B9ED4u;
            goto label_1b9ed4;
        }
    }
    ctx->pc = 0x1B9E78u;
label_1b9e78:
    // 0x1b9e78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9e7c:
    // 0x1b9e7c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b9e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9e80:
    // 0x1b9e80: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b9e84:
    // 0x1b9e84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b9e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b9e88:
    // 0x1b9e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9e8c:
    // 0x1b9e8c: 0x0  nop
    ctx->pc = 0x1b9e8cu;
    // NOP
label_1b9e90:
    // 0x1b9e90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b9e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b9e94:
    // 0x1b9e94: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b9e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b9e98:
    // 0x1b9e98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9e9c:
    // 0x1b9e9c: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9ea0:
    // 0x1b9ea0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1b9ea4:
    // 0x1b9ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9ea8:
    // 0x1b9ea8: 0x0  nop
    ctx->pc = 0x1b9ea8u;
    // NOP
label_1b9eac:
    // 0x1b9eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9eb0:
    // 0x1b9eb0: 0x0  nop
    ctx->pc = 0x1b9eb0u;
    // NOP
label_1b9eb4:
    // 0x1b9eb4: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b9eb8:
    if (ctx->pc == 0x1B9EB8u) {
        ctx->pc = 0x1B9EBCu;
        goto label_1b9ebc;
    }
    ctx->pc = 0x1B9EB4u;
    {
        const bool branch_taken_0x1b9eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9eb4) {
            ctx->pc = 0x1B9F30u;
            goto label_1b9f30;
        }
    }
    ctx->pc = 0x1B9EBCu;
label_1b9ebc:
    // 0x1b9ebc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b9ec0:
    // 0x1b9ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9ec4:
    // 0x1b9ec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ec8:
    // 0x1b9ec8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b9ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b9ecc:
    // 0x1b9ecc: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b9ed0:
    if (ctx->pc == 0x1B9ED0u) {
        ctx->pc = 0x1B9ED4u;
        goto label_1b9ed4;
    }
    ctx->pc = 0x1B9ECCu;
    {
        const bool branch_taken_0x1b9ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ecc) {
            ctx->pc = 0x1B9F30u;
            goto label_1b9f30;
        }
    }
    ctx->pc = 0x1B9ED4u;
label_1b9ed4:
    // 0x1b9ed4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ed8:
    // 0x1b9ed8: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9edc:
    // 0x1b9edc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b9ee0:
    // 0x1b9ee0: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x1b9ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b9ee4:
    // 0x1b9ee4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b9ee4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9ee8:
    // 0x1b9ee8: 0x0  nop
    ctx->pc = 0x1b9ee8u;
    // NOP
label_1b9eec:
    // 0x1b9eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b9ef0:
    // 0x1b9ef0: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b9ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b9ef4:
    // 0x1b9ef4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ef8:
    // 0x1b9ef8: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9efc:
    // 0x1b9efc: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_1b9f00:
    // 0x1b9f00: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b9f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1b9f04:
    // 0x1b9f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9f08:
    // 0x1b9f08: 0x0  nop
    ctx->pc = 0x1b9f08u;
    // NOP
label_1b9f0c:
    // 0x1b9f0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9f10:
    // 0x1b9f10: 0x0  nop
    ctx->pc = 0x1b9f10u;
    // NOP
label_1b9f14:
    // 0x1b9f14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b9f18:
    if (ctx->pc == 0x1B9F18u) {
        ctx->pc = 0x1B9F1Cu;
        goto label_1b9f1c;
    }
    ctx->pc = 0x1B9F14u;
    {
        const bool branch_taken_0x1b9f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9f14) {
            ctx->pc = 0x1B9F30u;
            goto label_1b9f30;
        }
    }
    ctx->pc = 0x1B9F1Cu;
label_1b9f1c:
    // 0x1b9f1c: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_1b9f20:
    // 0x1b9f20: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1b9f24:
    // 0x1b9f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9f28:
    // 0x1b9f28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9f2c:
    // 0x1b9f2c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b9f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b9f30:
    // 0x1b9f30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9f34:
    // 0x1b9f34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9f38:
    // 0x1b9f38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9f3c:
    // 0x1b9f3c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b9f40:
    // 0x1b9f40: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b9f44:
    // 0x1b9f44: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1b9f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9f48:
    // 0x1b9f48: 0xc040ed8  jal         func_103B60
label_1b9f4c:
    if (ctx->pc == 0x1B9F4Cu) {
        ctx->pc = 0x1B9F50u;
        goto label_1b9f50;
    }
    ctx->pc = 0x1B9F48u;
    SET_GPR_U32(ctx, 31, 0x1B9F50u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B9F50u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B9F50u) { return; }
    ctx->pc = 0x1B9F50u;
label_1b9f50:
    // 0x1b9f50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9f54:
    // 0x1b9f54: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9f58:
    // 0x1b9f58: 0xc60c1290  lwc1        $f12, 0x1290($s0)
    ctx->pc = 0x1b9f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9f5c:
    // 0x1b9f5c: 0xc05cd58  jal         func_173560
label_1b9f60:
    if (ctx->pc == 0x1B9F60u) {
        ctx->pc = 0x1B9F64u;
        goto label_1b9f64;
    }
    ctx->pc = 0x1B9F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F64u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B9F5Cu, 0x1B9F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F64u;
label_1b9f64:
    // 0x1b9f64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9f64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9f68:
    // 0x1b9f68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b9f6c:
    // 0x1b9f6c: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b9f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9f70:
    // 0x1b9f70: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1b9f70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1b9f74:
    // 0x1b9f74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b9f74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b9f78:
    // 0x1b9f78: 0xc057480  jal         func_15D200
label_1b9f7c:
    if (ctx->pc == 0x1B9F7Cu) {
        ctx->pc = 0x1B9F80u;
        goto label_1b9f80;
    }
    ctx->pc = 0x1B9F78u;
    SET_GPR_U32(ctx, 31, 0x1B9F80u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B9F78u, 0x1B9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F80u;
label_1b9f80:
    // 0x1b9f80: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b9f80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9f84:
    // 0x1b9f84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9f88:
    // 0x1b9f88: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1b9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1b9f8c:
    // 0x1b9f8c: 0xc057a80  jal         func_15EA00
label_1b9f90:
    if (ctx->pc == 0x1B9F90u) {
        ctx->pc = 0x1B9F94u;
        goto label_1b9f94;
    }
    ctx->pc = 0x1B9F8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F94u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B9F8Cu, 0x1B9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F94u;
label_1b9f94:
    // 0x1b9f94: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x1b9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
label_1b9f98:
    // 0x1b9f98: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1b9f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1b9f9c:
    // 0x1b9f9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b9fa0:
    // 0x1b9fa0: 0x0  nop
    ctx->pc = 0x1b9fa0u;
    // NOP
label_1b9fa4:
    // 0x1b9fa4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b9fa8:
    // 0x1b9fa8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1b9fac:
    // 0x1b9fac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9fb0:
    // 0x1b9fb0: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1b9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9fb4:
    // 0x1b9fb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9fb8:
    // 0x1b9fb8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9fbc:
    // 0x1b9fbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b9fc0:
    // 0x1b9fc0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b9fc4:
    // 0x1b9fc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9fc8:
    // 0x1b9fc8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b9fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9fcc:
    // 0x1b9fcc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9fd0:
    // 0x1b9fd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9fd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9fd4:
    // 0x1b9fd4: 0x0  nop
    ctx->pc = 0x1b9fd4u;
    // NOP
label_1b9fd8:
    // 0x1b9fd8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b9fdc:
    if (ctx->pc == 0x1B9FDCu) {
        ctx->pc = 0x1B9FE0u;
        goto label_1b9fe0;
    }
    ctx->pc = 0x1B9FD8u;
    {
        const bool branch_taken_0x1b9fd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9fd8) {
            ctx->pc = 0x1B9FECu;
            goto label_1b9fec;
        }
    }
    ctx->pc = 0x1B9FE0u;
label_1b9fe0:
    // 0x1b9fe0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9fe4:
    // 0x1b9fe4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9fe8:
    // 0x1b9fe8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b9fec:
    // 0x1b9fec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ff0:
    // 0x1b9ff0: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1b9ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9ff4:
    // 0x1b9ff4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9ff8:
    // 0x1b9ff8: 0xc4a01284  lwc1        $f0, 0x1284($a1)
    ctx->pc = 0x1b9ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9ffc:
    // 0x1b9ffc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ba000:
    // 0x1ba000: 0xe4a01284  swc1        $f0, 0x1284($a1)
    ctx->pc = 0x1ba000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4740), bits); }
label_1ba004:
    // 0x1ba004: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ba004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ba008:
    // 0x1ba008: 0xc097530  jal         func_25D4C0
label_1ba00c:
    if (ctx->pc == 0x1BA00Cu) {
        ctx->pc = 0x1BA010u;
        goto label_1ba010;
    }
    ctx->pc = 0x1BA008u;
    SET_GPR_U32(ctx, 31, 0x1BA010u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BA008u, 0x1BA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA010u;
label_1ba010:
    // 0x1ba010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba014:
    // 0x1ba014: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba018:
    // 0x1ba018: 0x908509df  lbu         $a1, 0x9DF($a0)
    ctx->pc = 0x1ba018u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
label_1ba01c:
    // 0x1ba01c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ba01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1ba020:
    // 0x1ba020: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x1ba020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1ba024:
    // 0x1ba024: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
label_1ba028:
    if (ctx->pc == 0x1BA028u) {
        ctx->pc = 0x1BA02Cu;
        goto label_1ba02c;
    }
    ctx->pc = 0x1BA024u;
    {
        const bool branch_taken_0x1ba024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba024) {
            ctx->pc = 0x1BA0CCu;
            goto label_1ba0cc;
        }
    }
    ctx->pc = 0x1BA02Cu;
label_1ba02c:
    // 0x1ba02c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba030:
    // 0x1ba030: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x1ba030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
label_1ba034:
    // 0x1ba034: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x1ba034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1ba038:
    // 0x1ba038: 0xc0587a8  jal         func_161EA0
label_1ba03c:
    if (ctx->pc == 0x1BA03Cu) {
        ctx->pc = 0x1BA040u;
        goto label_1ba040;
    }
    ctx->pc = 0x1BA038u;
    SET_GPR_U32(ctx, 31, 0x1BA040u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BA038u, 0x1BA040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA040u;
label_1ba040:
    // 0x1ba040: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_1ba044:
    if (ctx->pc == 0x1BA044u) {
        ctx->pc = 0x1BA048u;
        goto label_1ba048;
    }
    ctx->pc = 0x1BA040u;
    {
        const bool branch_taken_0x1ba040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba040) {
            ctx->pc = 0x1BA184u;
            goto label_1ba184;
        }
    }
    ctx->pc = 0x1BA048u;
label_1ba048:
    // 0x1ba048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba04c:
    // 0x1ba04c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ba04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ba050:
    // 0x1ba050: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1ba050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_1ba054:
    // 0x1ba054: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x1ba054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1ba058:
    // 0x1ba058: 0x10a002fe  beqz        $a1, . + 4 + (0x2FE << 2)
label_1ba05c:
    if (ctx->pc == 0x1BA05Cu) {
        ctx->pc = 0x1BA060u;
        goto label_1ba060;
    }
    ctx->pc = 0x1BA058u;
    {
        const bool branch_taken_0x1ba058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba058) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA060u;
label_1ba060:
    // 0x1ba060: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba064:
    // 0x1ba064: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1ba064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ba068:
    // 0x1ba068: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1ba068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1ba06c:
    // 0x1ba06c: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1ba06cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1ba070:
    // 0x1ba070: 0xe82024  and         $a0, $a3, $t0
    ctx->pc = 0x1ba070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_1ba074:
    // 0x1ba074: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1ba074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1ba078:
    // 0x1ba078: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba07c:
    // 0x1ba07c: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1ba07cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1ba080:
    // 0x1ba080: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ba080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ba084:
    // 0x1ba084: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ba084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ba088:
    // 0x1ba088: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
label_1ba08c:
    if (ctx->pc == 0x1BA08Cu) {
        ctx->pc = 0x1BA090u;
        goto label_1ba090;
    }
    ctx->pc = 0x1BA088u;
    {
        const bool branch_taken_0x1ba088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ba088) {
            ctx->pc = 0x1BA0B8u;
            goto label_1ba0b8;
        }
    }
    ctx->pc = 0x1BA090u;
label_1ba090:
    // 0x1ba090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ba090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba094:
    // 0x1ba094: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
label_1ba098:
    if (ctx->pc == 0x1BA098u) {
        ctx->pc = 0x1BA09Cu;
        goto label_1ba09c;
    }
    ctx->pc = 0x1BA094u;
    {
        const bool branch_taken_0x1ba094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1ba094) {
            ctx->pc = 0x1BA0B8u;
            goto label_1ba0b8;
        }
    }
    ctx->pc = 0x1BA09Cu;
label_1ba09c:
    // 0x1ba09c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ba09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba0a0:
    // 0x1ba0a0: 0x106702ec  beq         $v1, $a3, . + 4 + (0x2EC << 2)
label_1ba0a4:
    if (ctx->pc == 0x1BA0A4u) {
        ctx->pc = 0x1BA0A8u;
        goto label_1ba0a8;
    }
    ctx->pc = 0x1BA0A0u;
    {
        const bool branch_taken_0x1ba0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1ba0a0) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA0A8u;
label_1ba0a8:
    // 0x1ba0a8: 0x106002ea  beqz        $v1, . + 4 + (0x2EA << 2)
label_1ba0ac:
    if (ctx->pc == 0x1BA0ACu) {
        ctx->pc = 0x1BA0B0u;
        goto label_1ba0b0;
    }
    ctx->pc = 0x1BA0A8u;
    {
        const bool branch_taken_0x1ba0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0a8) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA0B0u;
label_1ba0b0:
    // 0x1ba0b0: 0x100002e8  b           . + 4 + (0x2E8 << 2)
label_1ba0b4:
    if (ctx->pc == 0x1BA0B4u) {
        ctx->pc = 0x1BA0B8u;
        goto label_1ba0b8;
    }
    ctx->pc = 0x1BA0B0u;
    {
        const bool branch_taken_0x1ba0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0b0) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA0B8u;
label_1ba0b8:
    // 0x1ba0b8: 0xc0c5238  jal         func_3148E0
label_1ba0bc:
    if (ctx->pc == 0x1BA0BCu) {
        ctx->pc = 0x1BA0C0u;
        goto label_1ba0c0;
    }
    ctx->pc = 0x1BA0B8u;
    SET_GPR_U32(ctx, 31, 0x1BA0C0u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BA0B8u, 0x1BA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0C0u;
label_1ba0c0:
    // 0x1ba0c0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1ba0c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba0c4:
    // 0x1ba0c4: 0x100002e3  b           . + 4 + (0x2E3 << 2)
label_1ba0c8:
    if (ctx->pc == 0x1BA0C8u) {
        ctx->pc = 0x1BA0CCu;
        goto label_1ba0cc;
    }
    ctx->pc = 0x1BA0C4u;
    {
        const bool branch_taken_0x1ba0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0c4) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA0CCu;
label_1ba0cc:
    // 0x1ba0cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ba0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ba0d0:
    // 0x1ba0d0: 0xc0587a8  jal         func_161EA0
label_1ba0d4:
    if (ctx->pc == 0x1BA0D4u) {
        ctx->pc = 0x1BA0D8u;
        goto label_1ba0d8;
    }
    ctx->pc = 0x1BA0D0u;
    SET_GPR_U32(ctx, 31, 0x1BA0D8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BA0D0u, 0x1BA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0D8u;
label_1ba0d8:
    // 0x1ba0d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1ba0d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba0dc:
    // 0x1ba0dc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1ba0e0:
    if (ctx->pc == 0x1BA0E0u) {
        ctx->pc = 0x1BA0E4u;
        goto label_1ba0e4;
    }
    ctx->pc = 0x1BA0DCu;
    {
        const bool branch_taken_0x1ba0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0dc) {
            ctx->pc = 0x1BA184u;
            goto label_1ba184;
        }
    }
    ctx->pc = 0x1BA0E4u;
label_1ba0e4:
    // 0x1ba0e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ba0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba0e8:
    // 0x1ba0e8: 0x16240006  bne         $s1, $a0, . + 4 + (0x6 << 2)
label_1ba0ec:
    if (ctx->pc == 0x1BA0ECu) {
        ctx->pc = 0x1BA0F0u;
        goto label_1ba0f0;
    }
    ctx->pc = 0x1BA0E8u;
    {
        const bool branch_taken_0x1ba0e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ba0e8) {
            ctx->pc = 0x1BA104u;
            goto label_1ba104;
        }
    }
    ctx->pc = 0x1BA0F0u;
label_1ba0f0:
    // 0x1ba0f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba0f4:
    // 0x1ba0f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba0f8:
    // 0x1ba0f8: 0xaca31b68  sw          $v1, 0x1B68($a1)
    ctx->pc = 0x1ba0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 3));
label_1ba0fc:
    // 0x1ba0fc: 0x10000021  b           . + 4 + (0x21 << 2)
label_1ba100:
    if (ctx->pc == 0x1BA100u) {
        ctx->pc = 0x1BA104u;
        goto label_1ba104;
    }
    ctx->pc = 0x1BA0FCu;
    {
        const bool branch_taken_0x1ba0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0fc) {
            ctx->pc = 0x1BA184u;
            goto label_1ba184;
        }
    }
    ctx->pc = 0x1BA104u;
label_1ba104:
    // 0x1ba104: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba108:
    // 0x1ba108: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ba108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ba10c:
    // 0x1ba10c: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1ba10cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
label_1ba110:
    // 0x1ba110: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x1ba110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_1ba114:
    // 0x1ba114: 0x106002cf  beqz        $v1, . + 4 + (0x2CF << 2)
label_1ba118:
    if (ctx->pc == 0x1BA118u) {
        ctx->pc = 0x1BA11Cu;
        goto label_1ba11c;
    }
    ctx->pc = 0x1BA114u;
    {
        const bool branch_taken_0x1ba114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba114) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA11Cu;
label_1ba11c:
    // 0x1ba11c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba120:
    // 0x1ba120: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ba124:
    // 0x1ba124: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1ba124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1ba128:
    // 0x1ba128: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ba128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1ba12c:
    // 0x1ba12c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ba12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1ba130:
    // 0x1ba130: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1ba130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1ba134:
    // 0x1ba134: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba138:
    // 0x1ba138: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1ba138u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1ba13c:
    // 0x1ba13c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1ba13cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ba140:
    // 0x1ba140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ba140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ba144:
    // 0x1ba144: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
label_1ba148:
    if (ctx->pc == 0x1BA148u) {
        ctx->pc = 0x1BA14Cu;
        goto label_1ba14c;
    }
    ctx->pc = 0x1BA144u;
    {
        const bool branch_taken_0x1ba144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ba144) {
            ctx->pc = 0x1BA174u;
            goto label_1ba174;
        }
    }
    ctx->pc = 0x1BA14Cu;
label_1ba14c:
    // 0x1ba14c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba150:
    // 0x1ba150: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1ba154:
    if (ctx->pc == 0x1BA154u) {
        ctx->pc = 0x1BA158u;
        goto label_1ba158;
    }
    ctx->pc = 0x1BA150u;
    {
        const bool branch_taken_0x1ba150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba150) {
            ctx->pc = 0x1BA174u;
            goto label_1ba174;
        }
    }
    ctx->pc = 0x1BA158u;
label_1ba158:
    // 0x1ba158: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ba158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba15c:
    // 0x1ba15c: 0x10a402bd  beq         $a1, $a0, . + 4 + (0x2BD << 2)
label_1ba160:
    if (ctx->pc == 0x1BA160u) {
        ctx->pc = 0x1BA164u;
        goto label_1ba164;
    }
    ctx->pc = 0x1BA15Cu;
    {
        const bool branch_taken_0x1ba15c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ba15c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA164u;
label_1ba164:
    // 0x1ba164: 0x10a002bb  beqz        $a1, . + 4 + (0x2BB << 2)
label_1ba168:
    if (ctx->pc == 0x1BA168u) {
        ctx->pc = 0x1BA16Cu;
        goto label_1ba16c;
    }
    ctx->pc = 0x1BA164u;
    {
        const bool branch_taken_0x1ba164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba164) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA16Cu;
label_1ba16c:
    // 0x1ba16c: 0x100002b9  b           . + 4 + (0x2B9 << 2)
label_1ba170:
    if (ctx->pc == 0x1BA170u) {
        ctx->pc = 0x1BA174u;
        goto label_1ba174;
    }
    ctx->pc = 0x1BA16Cu;
    {
        const bool branch_taken_0x1ba16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba16c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA174u;
label_1ba174:
    // 0x1ba174: 0xc0c5238  jal         func_3148E0
label_1ba178:
    if (ctx->pc == 0x1BA178u) {
        ctx->pc = 0x1BA17Cu;
        goto label_1ba17c;
    }
    ctx->pc = 0x1BA174u;
    SET_GPR_U32(ctx, 31, 0x1BA17Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BA174u, 0x1BA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA17Cu;
label_1ba17c:
    // 0x1ba17c: 0x100002b5  b           . + 4 + (0x2B5 << 2)
label_1ba180:
    if (ctx->pc == 0x1BA180u) {
        ctx->pc = 0x1BA184u;
        goto label_1ba184;
    }
    ctx->pc = 0x1BA17Cu;
    {
        const bool branch_taken_0x1ba17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba17c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA184u;
label_1ba184:
    // 0x1ba184: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba188:
    // 0x1ba188: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x1ba188u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_1ba18c:
    // 0x1ba18c: 0x10c002b1  beqz        $a2, . + 4 + (0x2B1 << 2)
label_1ba190:
    if (ctx->pc == 0x1BA190u) {
        ctx->pc = 0x1BA194u;
        goto label_1ba194;
    }
    ctx->pc = 0x1BA18Cu;
    {
        const bool branch_taken_0x1ba18c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba18c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA194u;
label_1ba194:
    // 0x1ba194: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba198:
    // 0x1ba198: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x1ba198u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_1ba19c:
    // 0x1ba19c: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x1ba19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ba1a0:
    // 0x1ba1a0: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x1ba1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
label_1ba1a4:
    // 0x1ba1a4: 0x100002ab  b           . + 4 + (0x2AB << 2)
label_1ba1a8:
    if (ctx->pc == 0x1BA1A8u) {
        ctx->pc = 0x1BA1ACu;
        goto label_1ba1ac;
    }
    ctx->pc = 0x1BA1A4u;
    {
        const bool branch_taken_0x1ba1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1a4) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA1ACu;
label_1ba1ac:
    // 0x1ba1ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba1b0:
    // 0x1ba1b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba1b4:
    // 0x1ba1b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ba1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1ba1b8:
    // 0x1ba1b8: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1ba1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1ba1bc:
    // 0x1ba1bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ba1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba1c0:
    // 0x1ba1c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ba1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ba1c4:
    // 0x1ba1c4: 0xc0965d0  jal         func_259740
label_1ba1c8:
    if (ctx->pc == 0x1BA1C8u) {
        ctx->pc = 0x1BA1CCu;
        goto label_1ba1cc;
    }
    ctx->pc = 0x1BA1C4u;
    SET_GPR_U32(ctx, 31, 0x1BA1CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BA1C4u, 0x1BA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1CCu;
label_1ba1cc:
    // 0x1ba1cc: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
label_1ba1d0:
    // 0x1ba1d0: 0x34443334  ori         $a0, $v0, 0x3334
    ctx->pc = 0x1ba1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
label_1ba1d4:
    // 0x1ba1d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ba1d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba1d8:
    // 0x1ba1d8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba1dc:
    // 0x1ba1dc: 0xe4a01280  swc1        $f0, 0x1280($a1)
    ctx->pc = 0x1ba1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4736), bits); }
label_1ba1e0:
    // 0x1ba1e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba1e4:
    // 0x1ba1e4: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1ba1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_1ba1e8:
    // 0x1ba1e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba1ec:
    // 0x1ba1ec: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1ba1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1ba1f0:
    // 0x1ba1f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ba1f4:
    // 0x1ba1f4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1ba1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1ba1f8:
    // 0x1ba1f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba1fc:
    // 0x1ba1fc: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1ba1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1ba200:
    // 0x1ba200: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ba204:
    if (ctx->pc == 0x1BA204u) {
        ctx->pc = 0x1BA208u;
        goto label_1ba208;
    }
    ctx->pc = 0x1BA200u;
    {
        const bool branch_taken_0x1ba200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba200) {
            ctx->pc = 0x1BA224u;
            goto label_1ba224;
        }
    }
    ctx->pc = 0x1BA208u;
label_1ba208:
    // 0x1ba208: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ba208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ba20c:
    // 0x1ba20c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1ba20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1ba210:
    // 0x1ba210: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1ba210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1ba214:
    // 0x1ba214: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ba214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ba218:
    // 0x1ba218: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ba218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ba21c:
    // 0x1ba21c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ba21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ba220:
    // 0x1ba220: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1ba220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1ba224:
    // 0x1ba224: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ba224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ba228:
    // 0x1ba228: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1ba228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1ba22c:
    // 0x1ba22c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1ba22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1ba230:
    // 0x1ba230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ba230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ba234:
    // 0x1ba234: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1ba234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_1ba238:
    // 0x1ba238: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba23c:
    // 0x1ba23c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ba23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ba240:
    // 0x1ba240: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ba240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1ba244:
    // 0x1ba244: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ba244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ba248:
    // 0x1ba248: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ba248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1ba24c:
    // 0x1ba24c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba250:
    // 0x1ba250: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1ba250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1ba254:
    // 0x1ba254: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ba254u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ba258:
    // 0x1ba258: 0xc096b40  jal         func_25AD00
label_1ba25c:
    if (ctx->pc == 0x1BA25Cu) {
        ctx->pc = 0x1BA260u;
        goto label_1ba260;
    }
    ctx->pc = 0x1BA258u;
    SET_GPR_U32(ctx, 31, 0x1BA260u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BA258u, 0x1BA260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA260u;
label_1ba260:
    // 0x1ba260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba264:
    // 0x1ba264: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba268:
    // 0x1ba268: 0x8c451b64  lw          $a1, 0x1B64($v0)
    ctx->pc = 0x1ba268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1ba26c:
    // 0x1ba26c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1ba270:
    if (ctx->pc == 0x1BA270u) {
        ctx->pc = 0x1BA274u;
        goto label_1ba274;
    }
    ctx->pc = 0x1BA26Cu;
    {
        const bool branch_taken_0x1ba26c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba26c) {
            ctx->pc = 0x1BA29Cu;
            goto label_1ba29c;
        }
    }
    ctx->pc = 0x1BA274u;
label_1ba274:
    // 0x1ba274: 0x3c073f19  lui         $a3, 0x3F19
    ctx->pc = 0x1ba274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16153 << 16));
label_1ba278:
    // 0x1ba278: 0x34e6999a  ori         $a2, $a3, 0x999A
    ctx->pc = 0x1ba278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
label_1ba27c:
    // 0x1ba27c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1ba27cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ba280:
    // 0x1ba280: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1ba280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba284:
    // 0x1ba284: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba288:
    // 0x1ba288: 0x25040180  addiu       $a0, $t0, 0x180
    ctx->pc = 0x1ba288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
label_1ba28c:
    // 0x1ba28c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1ba28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1ba290:
    // 0x1ba290: 0xc040ed8  jal         func_103B60
label_1ba294:
    if (ctx->pc == 0x1BA294u) {
        ctx->pc = 0x1BA298u;
        goto label_1ba298;
    }
    ctx->pc = 0x1BA290u;
    SET_GPR_U32(ctx, 31, 0x1BA298u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BA298u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA298u) { return; }
    ctx->pc = 0x1BA298u;
label_1ba298:
    // 0x1ba298: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ba298u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba29c:
    // 0x1ba29c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba2a0:
    // 0x1ba2a0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba2a4:
    // 0x1ba2a4: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1ba2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ba2a8:
    // 0x1ba2a8: 0xc4ed1380  lwc1        $f13, 0x1380($a3)
    ctx->pc = 0x1ba2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ba2ac:
    // 0x1ba2ac: 0xc058f20  jal         func_163C80
label_1ba2b0:
    if (ctx->pc == 0x1BA2B0u) {
        ctx->pc = 0x1BA2B4u;
        goto label_1ba2b4;
    }
    ctx->pc = 0x1BA2ACu;
    SET_GPR_U32(ctx, 31, 0x1BA2B4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BA2ACu, 0x1BA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2B4u;
label_1ba2b4:
    // 0x1ba2b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1ba2b8:
    // 0x1ba2b8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ba2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba2bc:
    // 0x1ba2bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ba2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba2c0:
    // 0x1ba2c0: 0x0  nop
    ctx->pc = 0x1ba2c0u;
    // NOP
label_1ba2c4:
    // 0x1ba2c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba2c8:
    // 0x1ba2c8: 0x0  nop
    ctx->pc = 0x1ba2c8u;
    // NOP
label_1ba2cc:
    // 0x1ba2cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1ba2d0:
    if (ctx->pc == 0x1BA2D0u) {
        ctx->pc = 0x1BA2D4u;
        goto label_1ba2d4;
    }
    ctx->pc = 0x1BA2CCu;
    {
        const bool branch_taken_0x1ba2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba2cc) {
            ctx->pc = 0x1BA2E8u;
            goto label_1ba2e8;
        }
    }
    ctx->pc = 0x1BA2D4u;
label_1ba2d4:
    // 0x1ba2d4: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x1ba2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_1ba2d8:
    // 0x1ba2d8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1ba2d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba2dc:
    // 0x1ba2dc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba2e0:
    // 0x1ba2e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ba2e4:
    // 0x1ba2e4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1ba2e8:
    // 0x1ba2e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba2ec:
    // 0x1ba2ec: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1ba2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba2f0:
    // 0x1ba2f0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1ba2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1ba2f4:
    // 0x1ba2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba2f8:
    // 0x1ba2f8: 0x0  nop
    ctx->pc = 0x1ba2f8u;
    // NOP
label_1ba2fc:
    // 0x1ba2fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba2fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba300:
    // 0x1ba300: 0x0  nop
    ctx->pc = 0x1ba300u;
    // NOP
label_1ba304:
    // 0x1ba304: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1ba308:
    if (ctx->pc == 0x1BA308u) {
        ctx->pc = 0x1BA30Cu;
        goto label_1ba30c;
    }
    ctx->pc = 0x1BA304u;
    {
        const bool branch_taken_0x1ba304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba304) {
            ctx->pc = 0x1BA3E8u;
            goto label_1ba3e8;
        }
    }
    ctx->pc = 0x1BA30Cu;
label_1ba30c:
    // 0x1ba30c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ba30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba310:
    // 0x1ba310: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1ba310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1ba314:
    // 0x1ba314: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1ba314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1ba318:
    // 0x1ba318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba31c:
    // 0x1ba31c: 0x0  nop
    ctx->pc = 0x1ba31cu;
    // NOP
label_1ba320:
    // 0x1ba320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba324:
    // 0x1ba324: 0x0  nop
    ctx->pc = 0x1ba324u;
    // NOP
label_1ba328:
    // 0x1ba328: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1ba32c:
    if (ctx->pc == 0x1BA32Cu) {
        ctx->pc = 0x1BA330u;
        goto label_1ba330;
    }
    ctx->pc = 0x1BA328u;
    {
        const bool branch_taken_0x1ba328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba328) {
            ctx->pc = 0x1BA38Cu;
            goto label_1ba38c;
        }
    }
    ctx->pc = 0x1BA330u;
label_1ba330:
    // 0x1ba330: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba334:
    // 0x1ba334: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1ba334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba338:
    // 0x1ba338: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1ba33c:
    // 0x1ba33c: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x1ba33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1ba340:
    // 0x1ba340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba344:
    // 0x1ba344: 0x0  nop
    ctx->pc = 0x1ba344u;
    // NOP
label_1ba348:
    // 0x1ba348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ba348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ba34c:
    // 0x1ba34c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1ba350:
    // 0x1ba350: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba354:
    // 0x1ba354: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1ba354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba358:
    // 0x1ba358: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x1ba358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_1ba35c:
    // 0x1ba35c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba35cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba360:
    // 0x1ba360: 0x0  nop
    ctx->pc = 0x1ba360u;
    // NOP
label_1ba364:
    // 0x1ba364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba368:
    // 0x1ba368: 0x0  nop
    ctx->pc = 0x1ba368u;
    // NOP
label_1ba36c:
    // 0x1ba36c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1ba370:
    if (ctx->pc == 0x1BA370u) {
        ctx->pc = 0x1BA374u;
        goto label_1ba374;
    }
    ctx->pc = 0x1BA36Cu;
    {
        const bool branch_taken_0x1ba36c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba36c) {
            ctx->pc = 0x1BA3E8u;
            goto label_1ba3e8;
        }
    }
    ctx->pc = 0x1BA374u;
label_1ba374:
    // 0x1ba374: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ba374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ba378:
    // 0x1ba378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba37c:
    // 0x1ba37c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba380:
    // 0x1ba380: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1ba384:
    // 0x1ba384: 0x10000018  b           . + 4 + (0x18 << 2)
label_1ba388:
    if (ctx->pc == 0x1BA388u) {
        ctx->pc = 0x1BA38Cu;
        goto label_1ba38c;
    }
    ctx->pc = 0x1BA384u;
    {
        const bool branch_taken_0x1ba384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba384) {
            ctx->pc = 0x1BA3E8u;
            goto label_1ba3e8;
        }
    }
    ctx->pc = 0x1BA38Cu;
label_1ba38c:
    // 0x1ba38c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba390:
    // 0x1ba390: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1ba390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba394:
    // 0x1ba394: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1ba394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1ba398:
    // 0x1ba398: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x1ba398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1ba39c:
    // 0x1ba39c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba39cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba3a0:
    // 0x1ba3a0: 0x0  nop
    ctx->pc = 0x1ba3a0u;
    // NOP
label_1ba3a4:
    // 0x1ba3a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ba3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ba3a8:
    // 0x1ba3a8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1ba3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1ba3ac:
    // 0x1ba3ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba3b0:
    // 0x1ba3b0: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1ba3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba3b4:
    // 0x1ba3b4: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1ba3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
label_1ba3b8:
    // 0x1ba3b8: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x1ba3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_1ba3bc:
    // 0x1ba3bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba3c0:
    // 0x1ba3c0: 0x0  nop
    ctx->pc = 0x1ba3c0u;
    // NOP
label_1ba3c4:
    // 0x1ba3c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba3c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba3c8:
    // 0x1ba3c8: 0x0  nop
    ctx->pc = 0x1ba3c8u;
    // NOP
label_1ba3cc:
    // 0x1ba3cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1ba3d0:
    if (ctx->pc == 0x1BA3D0u) {
        ctx->pc = 0x1BA3D4u;
        goto label_1ba3d4;
    }
    ctx->pc = 0x1BA3CCu;
    {
        const bool branch_taken_0x1ba3cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba3cc) {
            ctx->pc = 0x1BA3E8u;
            goto label_1ba3e8;
        }
    }
    ctx->pc = 0x1BA3D4u;
label_1ba3d4:
    // 0x1ba3d4: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1ba3d8:
    // 0x1ba3d8: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1ba3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1ba3dc:
    // 0x1ba3dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba3e0:
    // 0x1ba3e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba3e4:
    // 0x1ba3e4: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1ba3e8:
    // 0x1ba3e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba3ec:
    // 0x1ba3ec: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba3f0:
    // 0x1ba3f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba3f4:
    // 0x1ba3f4: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1ba3f8:
    // 0x1ba3f8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1ba3f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1ba3fc:
    // 0x1ba3fc: 0x26450180  addiu       $a1, $s2, 0x180
    ctx->pc = 0x1ba3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_1ba400:
    // 0x1ba400: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1ba400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ba404:
    // 0x1ba404: 0xc040ed8  jal         func_103B60
label_1ba408:
    if (ctx->pc == 0x1BA408u) {
        ctx->pc = 0x1BA40Cu;
        goto label_1ba40c;
    }
    ctx->pc = 0x1BA404u;
    SET_GPR_U32(ctx, 31, 0x1BA40Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BA40Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA40Cu) { return; }
    ctx->pc = 0x1BA40Cu;
label_1ba40c:
    // 0x1ba40c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba40cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba410:
    // 0x1ba410: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba414:
    // 0x1ba414: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ba414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1ba418:
    // 0x1ba418: 0xc05cd10  jal         func_173440
label_1ba41c:
    if (ctx->pc == 0x1BA41Cu) {
        ctx->pc = 0x1BA420u;
        goto label_1ba420;
    }
    ctx->pc = 0x1BA418u;
    SET_GPR_U32(ctx, 31, 0x1BA420u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BA418u, 0x1BA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA420u;
label_1ba420:
    // 0x1ba420: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ba420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ba424:
    // 0x1ba424: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba428:
    // 0x1ba428: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ba428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ba42c:
    // 0x1ba42c: 0xc057480  jal         func_15D200
label_1ba430:
    if (ctx->pc == 0x1BA430u) {
        ctx->pc = 0x1BA434u;
        goto label_1ba434;
    }
    ctx->pc = 0x1BA42Cu;
    SET_GPR_U32(ctx, 31, 0x1BA434u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BA42Cu, 0x1BA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA434u;
label_1ba434:
    // 0x1ba434: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba434u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba438:
    // 0x1ba438: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba43c:
    // 0x1ba43c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba440:
    // 0x1ba440: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_1ba444:
    // 0x1ba444: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1ba444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1ba448:
    // 0x1ba448: 0xc05cf7c  jal         func_173DF0
label_1ba44c:
    if (ctx->pc == 0x1BA44Cu) {
        ctx->pc = 0x1BA450u;
        goto label_1ba450;
    }
    ctx->pc = 0x1BA448u;
    SET_GPR_U32(ctx, 31, 0x1BA450u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BA448u, 0x1BA450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA450u;
label_1ba450:
    // 0x1ba450: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1ba454:
    // 0x1ba454: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba458:
    // 0x1ba458: 0xc4c11284  lwc1        $f1, 0x1284($a2)
    ctx->pc = 0x1ba458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba45c:
    // 0x1ba45c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba460:
    // 0x1ba460: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x1ba460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba464:
    // 0x1ba464: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ba468:
    // 0x1ba468: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1ba468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
label_1ba46c:
    // 0x1ba46c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba470:
    // 0x1ba470: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1ba470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba474:
    // 0x1ba474: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba478:
    // 0x1ba478: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1ba478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba47c:
    // 0x1ba47c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ba480:
    // 0x1ba480: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1ba480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1ba484:
    // 0x1ba484: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba488:
    // 0x1ba488: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ba488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba48c:
    // 0x1ba48c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba490:
    // 0x1ba490: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba494:
    // 0x1ba494: 0x0  nop
    ctx->pc = 0x1ba494u;
    // NOP
label_1ba498:
    // 0x1ba498: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ba49c:
    if (ctx->pc == 0x1BA49Cu) {
        ctx->pc = 0x1BA4A0u;
        goto label_1ba4a0;
    }
    ctx->pc = 0x1BA498u;
    {
        const bool branch_taken_0x1ba498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba498) {
            ctx->pc = 0x1BA4B8u;
            goto label_1ba4b8;
        }
    }
    ctx->pc = 0x1BA4A0u;
label_1ba4a0:
    // 0x1ba4a0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba4a4:
    // 0x1ba4a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba4a8:
    // 0x1ba4a8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1ba4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1ba4ac:
    // 0x1ba4ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba4b0:
    // 0x1ba4b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba4b4:
    // 0x1ba4b4: 0xac651b60  sw          $a1, 0x1B60($v1)
    ctx->pc = 0x1ba4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 5));
label_1ba4b8:
    // 0x1ba4b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ba4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ba4bc:
    // 0x1ba4bc: 0xc097530  jal         func_25D4C0
label_1ba4c0:
    if (ctx->pc == 0x1BA4C0u) {
        ctx->pc = 0x1BA4C4u;
        goto label_1ba4c4;
    }
    ctx->pc = 0x1BA4BCu;
    SET_GPR_U32(ctx, 31, 0x1BA4C4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BA4BCu, 0x1BA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4C4u;
label_1ba4c4:
    // 0x1ba4c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba4c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba4c8:
    // 0x1ba4c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba4cc:
    // 0x1ba4cc: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ba4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1ba4d0:
    // 0x1ba4d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1ba4d4:
    if (ctx->pc == 0x1BA4D4u) {
        ctx->pc = 0x1BA4D8u;
        goto label_1ba4d8;
    }
    ctx->pc = 0x1BA4D0u;
    {
        const bool branch_taken_0x1ba4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4d0) {
            ctx->pc = 0x1BA4ECu;
            goto label_1ba4ec;
        }
    }
    ctx->pc = 0x1BA4D8u;
label_1ba4d8:
    // 0x1ba4d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ba4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ba4dc:
    // 0x1ba4dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba4e0:
    // 0x1ba4e0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1ba4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1ba4e4:
    // 0x1ba4e4: 0x100001db  b           . + 4 + (0x1DB << 2)
label_1ba4e8:
    if (ctx->pc == 0x1BA4E8u) {
        ctx->pc = 0x1BA4ECu;
        goto label_1ba4ec;
    }
    ctx->pc = 0x1BA4E4u;
    {
        const bool branch_taken_0x1ba4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4e4) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA4ECu;
label_1ba4ec:
    // 0x1ba4ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba4f0:
    // 0x1ba4f0: 0xc0587a8  jal         func_161EA0
label_1ba4f4:
    if (ctx->pc == 0x1BA4F4u) {
        ctx->pc = 0x1BA4F8u;
        goto label_1ba4f8;
    }
    ctx->pc = 0x1BA4F0u;
    SET_GPR_U32(ctx, 31, 0x1BA4F8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BA4F0u, 0x1BA4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4F8u;
label_1ba4f8:
    // 0x1ba4f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba4f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba4fc:
    // 0x1ba4fc: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1ba500:
    if (ctx->pc == 0x1BA500u) {
        ctx->pc = 0x1BA504u;
        goto label_1ba504;
    }
    ctx->pc = 0x1BA4FCu;
    {
        const bool branch_taken_0x1ba4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4fc) {
            ctx->pc = 0x1BA584u;
            goto label_1ba584;
        }
    }
    ctx->pc = 0x1BA504u;
label_1ba504:
    // 0x1ba504: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba508:
    // 0x1ba508: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ba508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ba50c:
    // 0x1ba50c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1ba50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1ba510:
    // 0x1ba510: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ba510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1ba514:
    // 0x1ba514: 0x106001cf  beqz        $v1, . + 4 + (0x1CF << 2)
label_1ba518:
    if (ctx->pc == 0x1BA518u) {
        ctx->pc = 0x1BA51Cu;
        goto label_1ba51c;
    }
    ctx->pc = 0x1BA514u;
    {
        const bool branch_taken_0x1ba514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba514) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA51Cu;
label_1ba51c:
    // 0x1ba51c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba520:
    // 0x1ba520: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ba524:
    // 0x1ba524: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1ba524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1ba528:
    // 0x1ba528: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ba528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1ba52c:
    // 0x1ba52c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ba52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1ba530:
    // 0x1ba530: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1ba530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1ba534:
    // 0x1ba534: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba538:
    // 0x1ba538: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1ba538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1ba53c:
    // 0x1ba53c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ba53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ba540:
    // 0x1ba540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ba540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ba544:
    // 0x1ba544: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1ba548:
    if (ctx->pc == 0x1BA548u) {
        ctx->pc = 0x1BA54Cu;
        goto label_1ba54c;
    }
    ctx->pc = 0x1BA544u;
    {
        const bool branch_taken_0x1ba544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba544) {
            ctx->pc = 0x1BA574u;
            goto label_1ba574;
        }
    }
    ctx->pc = 0x1BA54Cu;
label_1ba54c:
    // 0x1ba54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba550:
    // 0x1ba550: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1ba554:
    if (ctx->pc == 0x1BA554u) {
        ctx->pc = 0x1BA558u;
        goto label_1ba558;
    }
    ctx->pc = 0x1BA550u;
    {
        const bool branch_taken_0x1ba550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba550) {
            ctx->pc = 0x1BA574u;
            goto label_1ba574;
        }
    }
    ctx->pc = 0x1BA558u;
label_1ba558:
    // 0x1ba558: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba55c:
    // 0x1ba55c: 0x108301bd  beq         $a0, $v1, . + 4 + (0x1BD << 2)
label_1ba560:
    if (ctx->pc == 0x1BA560u) {
        ctx->pc = 0x1BA564u;
        goto label_1ba564;
    }
    ctx->pc = 0x1BA55Cu;
    {
        const bool branch_taken_0x1ba55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba55c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA564u;
label_1ba564:
    // 0x1ba564: 0x108001bb  beqz        $a0, . + 4 + (0x1BB << 2)
label_1ba568:
    if (ctx->pc == 0x1BA568u) {
        ctx->pc = 0x1BA56Cu;
        goto label_1ba56c;
    }
    ctx->pc = 0x1BA564u;
    {
        const bool branch_taken_0x1ba564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba564) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA56Cu;
label_1ba56c:
    // 0x1ba56c: 0x100001b9  b           . + 4 + (0x1B9 << 2)
label_1ba570:
    if (ctx->pc == 0x1BA570u) {
        ctx->pc = 0x1BA574u;
        goto label_1ba574;
    }
    ctx->pc = 0x1BA56Cu;
    {
        const bool branch_taken_0x1ba56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba56c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA574u;
label_1ba574:
    // 0x1ba574: 0xc0c5238  jal         func_3148E0
label_1ba578:
    if (ctx->pc == 0x1BA578u) {
        ctx->pc = 0x1BA57Cu;
        goto label_1ba57c;
    }
    ctx->pc = 0x1BA574u;
    SET_GPR_U32(ctx, 31, 0x1BA57Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BA574u, 0x1BA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA57Cu;
label_1ba57c:
    // 0x1ba57c: 0x100001b5  b           . + 4 + (0x1B5 << 2)
label_1ba580:
    if (ctx->pc == 0x1BA580u) {
        ctx->pc = 0x1BA584u;
        goto label_1ba584;
    }
    ctx->pc = 0x1BA57Cu;
    {
        const bool branch_taken_0x1ba57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba57c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA584u;
label_1ba584:
    // 0x1ba584: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba588:
    // 0x1ba588: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1ba588u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1ba58c:
    // 0x1ba58c: 0x108001b1  beqz        $a0, . + 4 + (0x1B1 << 2)
label_1ba590:
    if (ctx->pc == 0x1BA590u) {
        ctx->pc = 0x1BA594u;
        goto label_1ba594;
    }
    ctx->pc = 0x1BA58Cu;
    {
        const bool branch_taken_0x1ba58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba58c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA594u;
label_1ba594:
    // 0x1ba594: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba598:
    // 0x1ba598: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x1ba598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1ba59c:
    // 0x1ba59c: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1ba59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ba5a0:
    // 0x1ba5a0: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x1ba5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
label_1ba5a4:
    // 0x1ba5a4: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_1ba5a8:
    if (ctx->pc == 0x1BA5A8u) {
        ctx->pc = 0x1BA5ACu;
        goto label_1ba5ac;
    }
    ctx->pc = 0x1BA5A4u;
    {
        const bool branch_taken_0x1ba5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5a4) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA5ACu;
label_1ba5ac:
    // 0x1ba5ac: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba5acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba5b0:
    // 0x1ba5b0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1ba5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba5b4:
    // 0x1ba5b4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1ba5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1ba5b8:
    // 0x1ba5b8: 0x8d020368  lw          $v0, 0x368($t0)
    ctx->pc = 0x1ba5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
label_1ba5bc:
    // 0x1ba5bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ba5bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba5c0:
    // 0x1ba5c0: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1ba5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1ba5c4:
    // 0x1ba5c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ba5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba5c8:
    // 0x1ba5c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ba5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ba5cc:
    // 0x1ba5cc: 0xc0965d0  jal         func_259740
label_1ba5d0:
    if (ctx->pc == 0x1BA5D0u) {
        ctx->pc = 0x1BA5D4u;
        goto label_1ba5d4;
    }
    ctx->pc = 0x1BA5CCu;
    SET_GPR_U32(ctx, 31, 0x1BA5D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BA5CCu, 0x1BA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5D4u;
label_1ba5d4:
    // 0x1ba5d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba5d8:
    // 0x1ba5d8: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1ba5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1ba5dc:
    // 0x1ba5dc: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1ba5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_1ba5e0:
    // 0x1ba5e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ba5e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba5e4:
    // 0x1ba5e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba5e8:
    // 0x1ba5e8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1ba5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1ba5ec:
    // 0x1ba5ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba5f0:
    // 0x1ba5f0: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1ba5f4:
    // 0x1ba5f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ba5f8:
    if (ctx->pc == 0x1BA5F8u) {
        ctx->pc = 0x1BA5FCu;
        goto label_1ba5fc;
    }
    ctx->pc = 0x1BA5F4u;
    {
        const bool branch_taken_0x1ba5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5f4) {
            ctx->pc = 0x1BA620u;
            goto label_1ba620;
        }
    }
    ctx->pc = 0x1BA5FCu;
label_1ba5fc:
    // 0x1ba5fc: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ba5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1ba600:
    // 0x1ba600: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x1ba600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1ba604:
    // 0x1ba604: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1ba604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ba608:
    // 0x1ba608: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba60c:
    // 0x1ba60c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba610:
    // 0x1ba610: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1ba614:
    // 0x1ba614: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1ba614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1ba618:
    // 0x1ba618: 0xc040ed8  jal         func_103B60
label_1ba61c:
    if (ctx->pc == 0x1BA61Cu) {
        ctx->pc = 0x1BA620u;
        goto label_1ba620;
    }
    ctx->pc = 0x1BA618u;
    SET_GPR_U32(ctx, 31, 0x1BA620u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BA620u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA620u) { return; }
    ctx->pc = 0x1BA620u;
label_1ba620:
    // 0x1ba620: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba624:
    // 0x1ba624: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba628:
    // 0x1ba628: 0x24651b40  addiu       $a1, $v1, 0x1B40
    ctx->pc = 0x1ba628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_1ba62c:
    // 0x1ba62c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ba62cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1ba630:
    // 0x1ba630: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x1ba630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1ba634:
    // 0x1ba634: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ba634u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba638:
    // 0x1ba638: 0xc040c9e  jal         func_103278
label_1ba63c:
    if (ctx->pc == 0x1BA63Cu) {
        ctx->pc = 0x1BA640u;
        goto label_1ba640;
    }
    ctx->pc = 0x1BA638u;
    SET_GPR_U32(ctx, 31, 0x1BA640u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1BA640u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA640u) { return; }
    ctx->pc = 0x1BA640u;
label_1ba640:
    // 0x1ba640: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba644:
    // 0x1ba644: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1ba644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1ba648:
    // 0x1ba648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ba64c:
    // 0x1ba64c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1ba64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1ba650:
    // 0x1ba650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba654:
    // 0x1ba654: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1ba654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1ba658:
    // 0x1ba658: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ba65c:
    if (ctx->pc == 0x1BA65Cu) {
        ctx->pc = 0x1BA660u;
        goto label_1ba660;
    }
    ctx->pc = 0x1BA658u;
    {
        const bool branch_taken_0x1ba658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba658) {
            ctx->pc = 0x1BA67Cu;
            goto label_1ba67c;
        }
    }
    ctx->pc = 0x1BA660u;
label_1ba660:
    // 0x1ba660: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ba660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ba664:
    // 0x1ba664: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1ba664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1ba668:
    // 0x1ba668: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1ba668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1ba66c:
    // 0x1ba66c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1ba66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ba670:
    // 0x1ba670: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1ba670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1ba674:
    // 0x1ba674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ba674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ba678:
    // 0x1ba678: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1ba678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1ba67c:
    // 0x1ba67c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba680:
    // 0x1ba680: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ba684:
    // 0x1ba684: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ba684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1ba688:
    // 0x1ba688: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ba688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ba68c:
    // 0x1ba68c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ba68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1ba690:
    // 0x1ba690: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba694:
    // 0x1ba694: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ba694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ba698:
    // 0x1ba698: 0xc096b40  jal         func_25AD00
label_1ba69c:
    if (ctx->pc == 0x1BA69Cu) {
        ctx->pc = 0x1BA6A0u;
        goto label_1ba6a0;
    }
    ctx->pc = 0x1BA698u;
    SET_GPR_U32(ctx, 31, 0x1BA6A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BA698u, 0x1BA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6A0u;
label_1ba6a0:
    // 0x1ba6a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba6a4:
    // 0x1ba6a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba6a8:
    // 0x1ba6a8: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1ba6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ba6ac:
    // 0x1ba6ac: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1ba6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ba6b0:
    // 0x1ba6b0: 0xc058f20  jal         func_163C80
label_1ba6b4:
    if (ctx->pc == 0x1BA6B4u) {
        ctx->pc = 0x1BA6B8u;
        goto label_1ba6b8;
    }
    ctx->pc = 0x1BA6B0u;
    SET_GPR_U32(ctx, 31, 0x1BA6B8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BA6B0u, 0x1BA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6B8u;
label_1ba6b8:
    // 0x1ba6b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1ba6bc:
    // 0x1ba6bc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ba6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba6c0:
    // 0x1ba6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ba6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba6c4:
    // 0x1ba6c4: 0x0  nop
    ctx->pc = 0x1ba6c4u;
    // NOP
label_1ba6c8:
    // 0x1ba6c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba6cc:
    // 0x1ba6cc: 0x0  nop
    ctx->pc = 0x1ba6ccu;
    // NOP
label_1ba6d0:
    // 0x1ba6d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1ba6d4:
    if (ctx->pc == 0x1BA6D4u) {
        ctx->pc = 0x1BA6D8u;
        goto label_1ba6d8;
    }
    ctx->pc = 0x1BA6D0u;
    {
        const bool branch_taken_0x1ba6d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba6d0) {
            ctx->pc = 0x1BA6ECu;
            goto label_1ba6ec;
        }
    }
    ctx->pc = 0x1BA6D8u;
label_1ba6d8:
    // 0x1ba6d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ba6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ba6dc:
    // 0x1ba6dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba6e0:
    // 0x1ba6e0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba6e4:
    // 0x1ba6e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ba6e8:
    // 0x1ba6e8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1ba6ec:
    // 0x1ba6ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba6f0:
    // 0x1ba6f0: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1ba6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba6f4:
    // 0x1ba6f4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1ba6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1ba6f8:
    // 0x1ba6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba6fc:
    // 0x1ba6fc: 0x0  nop
    ctx->pc = 0x1ba6fcu;
    // NOP
label_1ba700:
    // 0x1ba700: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba704:
    // 0x1ba704: 0x0  nop
    ctx->pc = 0x1ba704u;
    // NOP
label_1ba708:
    // 0x1ba708: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1ba70c:
    if (ctx->pc == 0x1BA70Cu) {
        ctx->pc = 0x1BA710u;
        goto label_1ba710;
    }
    ctx->pc = 0x1BA708u;
    {
        const bool branch_taken_0x1ba708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba708) {
            ctx->pc = 0x1BA7ECu;
            goto label_1ba7ec;
        }
    }
    ctx->pc = 0x1BA710u;
label_1ba710:
    // 0x1ba710: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ba710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba714:
    // 0x1ba714: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1ba714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1ba718:
    // 0x1ba718: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1ba718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1ba71c:
    // 0x1ba71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba720:
    // 0x1ba720: 0x0  nop
    ctx->pc = 0x1ba720u;
    // NOP
label_1ba724:
    // 0x1ba724: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba728:
    // 0x1ba728: 0x0  nop
    ctx->pc = 0x1ba728u;
    // NOP
label_1ba72c:
    // 0x1ba72c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1ba730:
    if (ctx->pc == 0x1BA730u) {
        ctx->pc = 0x1BA734u;
        goto label_1ba734;
    }
    ctx->pc = 0x1BA72Cu;
    {
        const bool branch_taken_0x1ba72c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba72c) {
            ctx->pc = 0x1BA790u;
            goto label_1ba790;
        }
    }
    ctx->pc = 0x1BA734u;
label_1ba734:
    // 0x1ba734: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba738:
    // 0x1ba738: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1ba738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba73c:
    // 0x1ba73c: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1ba73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1ba740:
    // 0x1ba740: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x1ba740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1ba744:
    // 0x1ba744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba748:
    // 0x1ba748: 0x0  nop
    ctx->pc = 0x1ba748u;
    // NOP
label_1ba74c:
    // 0x1ba74c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ba74cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ba750:
    // 0x1ba750: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1ba754:
    // 0x1ba754: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba758:
    // 0x1ba758: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1ba758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba75c:
    // 0x1ba75c: 0x3c103f00  lui         $s0, 0x3F00
    ctx->pc = 0x1ba75cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16128 << 16));
label_1ba760:
    // 0x1ba760: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ba760u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba764:
    // 0x1ba764: 0x0  nop
    ctx->pc = 0x1ba764u;
    // NOP
label_1ba768:
    // 0x1ba768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba76c:
    // 0x1ba76c: 0x0  nop
    ctx->pc = 0x1ba76cu;
    // NOP
label_1ba770:
    // 0x1ba770: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1ba774:
    if (ctx->pc == 0x1BA774u) {
        ctx->pc = 0x1BA778u;
        goto label_1ba778;
    }
    ctx->pc = 0x1BA770u;
    {
        const bool branch_taken_0x1ba770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba770) {
            ctx->pc = 0x1BA7ECu;
            goto label_1ba7ec;
        }
    }
    ctx->pc = 0x1BA778u;
label_1ba778:
    // 0x1ba778: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1ba77c:
    // 0x1ba77c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba780:
    // 0x1ba780: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1ba780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba784:
    // 0x1ba784: 0xe6601b50  swc1        $f0, 0x1B50($s3)
    ctx->pc = 0x1ba784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 6992), bits); }
label_1ba788:
    // 0x1ba788: 0x10000018  b           . + 4 + (0x18 << 2)
label_1ba78c:
    if (ctx->pc == 0x1BA78Cu) {
        ctx->pc = 0x1BA790u;
        goto label_1ba790;
    }
    ctx->pc = 0x1BA788u;
    {
        const bool branch_taken_0x1ba788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba788) {
            ctx->pc = 0x1BA7ECu;
            goto label_1ba7ec;
        }
    }
    ctx->pc = 0x1BA790u;
label_1ba790:
    // 0x1ba790: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba794:
    // 0x1ba794: 0xc4c11b50  lwc1        $f1, 0x1B50($a2)
    ctx->pc = 0x1ba794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba798:
    // 0x1ba798: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1ba798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1ba79c:
    // 0x1ba79c: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1ba79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1ba7a0:
    // 0x1ba7a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ba7a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba7a4:
    // 0x1ba7a4: 0x0  nop
    ctx->pc = 0x1ba7a4u;
    // NOP
label_1ba7a8:
    // 0x1ba7a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ba7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ba7ac:
    // 0x1ba7ac: 0xe4c01b50  swc1        $f0, 0x1B50($a2)
    ctx->pc = 0x1ba7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 6992), bits); }
label_1ba7b0:
    // 0x1ba7b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba7b4:
    // 0x1ba7b4: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1ba7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba7b8:
    // 0x1ba7b8: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1ba7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
label_1ba7bc:
    // 0x1ba7bc: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x1ba7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_1ba7c0:
    // 0x1ba7c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba7c4:
    // 0x1ba7c4: 0x0  nop
    ctx->pc = 0x1ba7c4u;
    // NOP
label_1ba7c8:
    // 0x1ba7c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba7cc:
    // 0x1ba7cc: 0x0  nop
    ctx->pc = 0x1ba7ccu;
    // NOP
label_1ba7d0:
    // 0x1ba7d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1ba7d4:
    if (ctx->pc == 0x1BA7D4u) {
        ctx->pc = 0x1BA7D8u;
        goto label_1ba7d8;
    }
    ctx->pc = 0x1BA7D0u;
    {
        const bool branch_taken_0x1ba7d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba7d0) {
            ctx->pc = 0x1BA7ECu;
            goto label_1ba7ec;
        }
    }
    ctx->pc = 0x1BA7D8u;
label_1ba7d8:
    // 0x1ba7d8: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1ba7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1ba7dc:
    // 0x1ba7dc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1ba7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1ba7e0:
    // 0x1ba7e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba7e4:
    // 0x1ba7e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba7e8:
    // 0x1ba7e8: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1ba7ec:
    // 0x1ba7ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba7f0:
    // 0x1ba7f0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba7f4:
    // 0x1ba7f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba7f8:
    // 0x1ba7f8: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1ba7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1ba7fc:
    // 0x1ba7fc: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x1ba7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
label_1ba800:
    // 0x1ba800: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1ba800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ba804:
    // 0x1ba804: 0xc040ed8  jal         func_103B60
label_1ba808:
    if (ctx->pc == 0x1BA808u) {
        ctx->pc = 0x1BA80Cu;
        goto label_1ba80c;
    }
    ctx->pc = 0x1BA804u;
    SET_GPR_U32(ctx, 31, 0x1BA80Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BA80Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA80Cu) { return; }
    ctx->pc = 0x1BA80Cu;
label_1ba80c:
    // 0x1ba80c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba80cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba810:
    // 0x1ba810: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba814:
    // 0x1ba814: 0xc05cd10  jal         func_173440
label_1ba818:
    if (ctx->pc == 0x1BA818u) {
        ctx->pc = 0x1BA81Cu;
        goto label_1ba81c;
    }
    ctx->pc = 0x1BA814u;
    SET_GPR_U32(ctx, 31, 0x1BA81Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BA814u, 0x1BA81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA81Cu;
label_1ba81c:
    // 0x1ba81c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba81cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba820:
    // 0x1ba820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ba820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ba824:
    // 0x1ba824: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba828:
    // 0x1ba828: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba82c:
    // 0x1ba82c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ba82cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ba830:
    // 0x1ba830: 0xc057480  jal         func_15D200
label_1ba834:
    if (ctx->pc == 0x1BA834u) {
        ctx->pc = 0x1BA838u;
        goto label_1ba838;
    }
    ctx->pc = 0x1BA830u;
    SET_GPR_U32(ctx, 31, 0x1BA838u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BA830u, 0x1BA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA838u;
label_1ba838:
    // 0x1ba838: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba83c:
    // 0x1ba83c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba840:
    // 0x1ba840: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba844:
    // 0x1ba844: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1ba844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1ba848:
    // 0x1ba848: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1ba848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1ba84c:
    // 0x1ba84c: 0xc05cf7c  jal         func_173DF0
label_1ba850:
    if (ctx->pc == 0x1BA850u) {
        ctx->pc = 0x1BA854u;
        goto label_1ba854;
    }
    ctx->pc = 0x1BA84Cu;
    SET_GPR_U32(ctx, 31, 0x1BA854u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BA84Cu, 0x1BA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA854u;
label_1ba854:
    // 0x1ba854: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1ba858:
    // 0x1ba858: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba85c:
    // 0x1ba85c: 0xc4a11284  lwc1        $f1, 0x1284($a1)
    ctx->pc = 0x1ba85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba860:
    // 0x1ba860: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba864:
    // 0x1ba864: 0xc4c00124  lwc1        $f0, 0x124($a2)
    ctx->pc = 0x1ba864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba868:
    // 0x1ba868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ba86c:
    // 0x1ba86c: 0xe4c00124  swc1        $f0, 0x124($a2)
    ctx->pc = 0x1ba86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
label_1ba870:
    // 0x1ba870: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba874:
    // 0x1ba874: 0xc4e11280  lwc1        $f1, 0x1280($a3)
    ctx->pc = 0x1ba874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba878:
    // 0x1ba878: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1ba878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba87c:
    // 0x1ba87c: 0xc5001284  lwc1        $f0, 0x1284($t0)
    ctx->pc = 0x1ba87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba880:
    // 0x1ba880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ba884:
    // 0x1ba884: 0xe5001284  swc1        $f0, 0x1284($t0)
    ctx->pc = 0x1ba884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4740), bits); }
label_1ba888:
    // 0x1ba888: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba88c:
    // 0x1ba88c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ba88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba890:
    // 0x1ba890: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba894:
    // 0x1ba894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba898:
    // 0x1ba898: 0x0  nop
    ctx->pc = 0x1ba898u;
    // NOP
label_1ba89c:
    // 0x1ba89c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ba8a0:
    if (ctx->pc == 0x1BA8A0u) {
        ctx->pc = 0x1BA8A4u;
        goto label_1ba8a4;
    }
    ctx->pc = 0x1BA89Cu;
    {
        const bool branch_taken_0x1ba89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba89c) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA8A4u;
label_1ba8a4:
    // 0x1ba8a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba8a8:
    // 0x1ba8a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba8ac:
    // 0x1ba8ac: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1ba8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1ba8b0:
    // 0x1ba8b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba8b4:
    // 0x1ba8b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba8b8:
    // 0x1ba8b8: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x1ba8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
label_1ba8bc:
    // 0x1ba8bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ba8bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ba8c0:
    // 0x1ba8c0: 0xc097530  jal         func_25D4C0
label_1ba8c4:
    if (ctx->pc == 0x1BA8C4u) {
        ctx->pc = 0x1BA8C8u;
        goto label_1ba8c8;
    }
    ctx->pc = 0x1BA8C0u;
    SET_GPR_U32(ctx, 31, 0x1BA8C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BA8C0u, 0x1BA8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8C8u;
label_1ba8c8:
    // 0x1ba8c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba8c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba8cc:
    // 0x1ba8cc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba8d0:
    // 0x1ba8d0: 0x8ca61b60  lw          $a2, 0x1B60($a1)
    ctx->pc = 0x1ba8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7008)));
label_1ba8d4:
    // 0x1ba8d4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1ba8d8:
    if (ctx->pc == 0x1BA8D8u) {
        ctx->pc = 0x1BA8DCu;
        goto label_1ba8dc;
    }
    ctx->pc = 0x1BA8D4u;
    {
        const bool branch_taken_0x1ba8d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8d4) {
            ctx->pc = 0x1BA8F4u;
            goto label_1ba8f4;
        }
    }
    ctx->pc = 0x1BA8DCu;
label_1ba8dc:
    // 0x1ba8dc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba8e0:
    // 0x1ba8e0: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x1ba8e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_1ba8e4:
    // 0x1ba8e4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ba8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ba8e8:
    // 0x1ba8e8: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x1ba8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_1ba8ec:
    // 0x1ba8ec: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_1ba8f0:
    if (ctx->pc == 0x1BA8F0u) {
        ctx->pc = 0x1BA8F4u;
        goto label_1ba8f4;
    }
    ctx->pc = 0x1BA8ECu;
    {
        const bool branch_taken_0x1ba8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8ec) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA8F4u;
label_1ba8f4:
    // 0x1ba8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba8f8:
    // 0x1ba8f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba8f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba8fc:
    // 0x1ba8fc: 0xc0587a8  jal         func_161EA0
label_1ba900:
    if (ctx->pc == 0x1BA900u) {
        ctx->pc = 0x1BA904u;
        goto label_1ba904;
    }
    ctx->pc = 0x1BA8FCu;
    SET_GPR_U32(ctx, 31, 0x1BA904u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BA8FCu, 0x1BA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA904u;
label_1ba904:
    // 0x1ba904: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba904u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba908:
    // 0x1ba908: 0x108000d2  beqz        $a0, . + 4 + (0xD2 << 2)
label_1ba90c:
    if (ctx->pc == 0x1BA90Cu) {
        ctx->pc = 0x1BA910u;
        goto label_1ba910;
    }
    ctx->pc = 0x1BA908u;
    {
        const bool branch_taken_0x1ba908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba908) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA910u;
label_1ba910:
    // 0x1ba910: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba914:
    // 0x1ba914: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1ba914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ba918:
    // 0x1ba918: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1ba918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1ba91c:
    // 0x1ba91c: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x1ba91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1ba920:
    // 0x1ba920: 0x108000cc  beqz        $a0, . + 4 + (0xCC << 2)
label_1ba924:
    if (ctx->pc == 0x1BA924u) {
        ctx->pc = 0x1BA928u;
        goto label_1ba928;
    }
    ctx->pc = 0x1BA920u;
    {
        const bool branch_taken_0x1ba920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba920) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA928u;
label_1ba928:
    // 0x1ba928: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba92c:
    // 0x1ba92c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ba92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ba930:
    // 0x1ba930: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1ba930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
label_1ba934:
    // 0x1ba934: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1ba934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1ba938:
    // 0x1ba938: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ba938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1ba93c:
    // 0x1ba93c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ba93cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1ba940:
    // 0x1ba940: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba944:
    // 0x1ba944: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1ba944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1ba948:
    // 0x1ba948: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ba94c:
    // 0x1ba94c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ba94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ba950:
    // 0x1ba950: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_1ba954:
    if (ctx->pc == 0x1BA954u) {
        ctx->pc = 0x1BA958u;
        goto label_1ba958;
    }
    ctx->pc = 0x1BA950u;
    {
        const bool branch_taken_0x1ba950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ba950) {
            ctx->pc = 0x1BA980u;
            goto label_1ba980;
        }
    }
    ctx->pc = 0x1BA958u;
label_1ba958:
    // 0x1ba958: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba95c:
    // 0x1ba95c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_1ba960:
    if (ctx->pc == 0x1BA960u) {
        ctx->pc = 0x1BA964u;
        goto label_1ba964;
    }
    ctx->pc = 0x1BA95Cu;
    {
        const bool branch_taken_0x1ba95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ba95c) {
            ctx->pc = 0x1BA980u;
            goto label_1ba980;
        }
    }
    ctx->pc = 0x1BA964u;
label_1ba964:
    // 0x1ba964: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ba964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba968:
    // 0x1ba968: 0x106400ba  beq         $v1, $a0, . + 4 + (0xBA << 2)
label_1ba96c:
    if (ctx->pc == 0x1BA96Cu) {
        ctx->pc = 0x1BA970u;
        goto label_1ba970;
    }
    ctx->pc = 0x1BA968u;
    {
        const bool branch_taken_0x1ba968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ba968) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA970u;
label_1ba970:
    // 0x1ba970: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
label_1ba974:
    if (ctx->pc == 0x1BA974u) {
        ctx->pc = 0x1BA978u;
        goto label_1ba978;
    }
    ctx->pc = 0x1BA970u;
    {
        const bool branch_taken_0x1ba970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba970) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA978u;
label_1ba978:
    // 0x1ba978: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_1ba97c:
    if (ctx->pc == 0x1BA97Cu) {
        ctx->pc = 0x1BA980u;
        goto label_1ba980;
    }
    ctx->pc = 0x1BA978u;
    {
        const bool branch_taken_0x1ba978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba978) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA980u;
label_1ba980:
    // 0x1ba980: 0xc0c5238  jal         func_3148E0
label_1ba984:
    if (ctx->pc == 0x1BA984u) {
        ctx->pc = 0x1BA988u;
        goto label_1ba988;
    }
    ctx->pc = 0x1BA980u;
    SET_GPR_U32(ctx, 31, 0x1BA988u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BA980u, 0x1BA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA988u;
label_1ba988:
    // 0x1ba988: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba988u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba98c:
    // 0x1ba98c: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1ba990:
    if (ctx->pc == 0x1BA990u) {
        ctx->pc = 0x1BA994u;
        goto label_1ba994;
    }
    ctx->pc = 0x1BA98Cu;
    {
        const bool branch_taken_0x1ba98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba98c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BA994u;
label_1ba994:
    // 0x1ba994: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba998:
    // 0x1ba998: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba99c:
    // 0x1ba99c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ba99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1ba9a0:
    // 0x1ba9a0: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1ba9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1ba9a4:
    // 0x1ba9a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ba9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba9a8:
    // 0x1ba9a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ba9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ba9ac:
    // 0x1ba9ac: 0xc0965d0  jal         func_259740
label_1ba9b0:
    if (ctx->pc == 0x1BA9B0u) {
        ctx->pc = 0x1BA9B4u;
        goto label_1ba9b4;
    }
    ctx->pc = 0x1BA9ACu;
    SET_GPR_U32(ctx, 31, 0x1BA9B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BA9ACu, 0x1BA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9B4u;
label_1ba9b4:
    // 0x1ba9b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba9b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba9b8:
    // 0x1ba9b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba9bc:
    // 0x1ba9bc: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1ba9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba9c0:
    // 0x1ba9c0: 0x3c05c332  lui         $a1, 0xC332
    ctx->pc = 0x1ba9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49970 << 16));
label_1ba9c4:
    // 0x1ba9c4: 0x34a28000  ori         $v0, $a1, 0x8000
    ctx->pc = 0x1ba9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_1ba9c8:
    // 0x1ba9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba9cc:
    // 0x1ba9cc: 0x0  nop
    ctx->pc = 0x1ba9ccu;
    // NOP
label_1ba9d0:
    // 0x1ba9d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba9d4:
    // 0x1ba9d4: 0x0  nop
    ctx->pc = 0x1ba9d4u;
    // NOP
label_1ba9d8:
    // 0x1ba9d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1ba9dc:
    if (ctx->pc == 0x1BA9DCu) {
        ctx->pc = 0x1BA9E0u;
        goto label_1ba9e0;
    }
    ctx->pc = 0x1BA9D8u;
    {
        const bool branch_taken_0x1ba9d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba9d8) {
            ctx->pc = 0x1BA9ECu;
            goto label_1ba9ec;
        }
    }
    ctx->pc = 0x1BA9E0u;
label_1ba9e0:
    // 0x1ba9e0: 0xc05772c  jal         func_15DCB0
label_1ba9e4:
    if (ctx->pc == 0x1BA9E4u) {
        ctx->pc = 0x1BA9E8u;
        goto label_1ba9e8;
    }
    ctx->pc = 0x1BA9E0u;
    SET_GPR_U32(ctx, 31, 0x1BA9E8u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1BA9E0u, 0x1BA9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9E8u;
label_1ba9e8:
    // 0x1ba9e8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ba9e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ba9ec:
    // 0x1ba9ec: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba9f0:
    // 0x1ba9f0: 0xace01b60  sw          $zero, 0x1B60($a3)
    ctx->pc = 0x1ba9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7008), GPR_U32(ctx, 0));
label_1ba9f4:
    // 0x1ba9f4: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1ba9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ba9f8:
    // 0x1ba9f8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1ba9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1ba9fc:
    // 0x1ba9fc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1ba9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1baa00:
    // 0x1baa00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1baa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1baa04:
    // 0x1baa04: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1baa08:
    if (ctx->pc == 0x1BAA08u) {
        ctx->pc = 0x1BAA0Cu;
        goto label_1baa0c;
    }
    ctx->pc = 0x1BAA04u;
    {
        const bool branch_taken_0x1baa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa04) {
            ctx->pc = 0x1BAA6Cu;
            goto label_1baa6c;
        }
    }
    ctx->pc = 0x1BAA0Cu;
label_1baa0c:
    // 0x1baa0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1baa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baa10:
    // 0x1baa10: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1baa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1baa14:
    // 0x1baa14: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1baa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_1baa18:
    // 0x1baa18: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1baa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1baa1c:
    // 0x1baa1c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1baa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1baa20:
    // 0x1baa20: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1baa20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1baa24:
    // 0x1baa24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1baa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baa28:
    // 0x1baa28: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x1baa28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
label_1baa2c:
    // 0x1baa2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1baa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1baa30:
    // 0x1baa30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1baa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1baa34:
    // 0x1baa34: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1baa38:
    if (ctx->pc == 0x1BAA38u) {
        ctx->pc = 0x1BAA3Cu;
        goto label_1baa3c;
    }
    ctx->pc = 0x1BAA34u;
    {
        const bool branch_taken_0x1baa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1baa34) {
            ctx->pc = 0x1BAA64u;
            goto label_1baa64;
        }
    }
    ctx->pc = 0x1BAA3Cu;
label_1baa3c:
    // 0x1baa3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1baa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1baa40:
    // 0x1baa40: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1baa44:
    if (ctx->pc == 0x1BAA44u) {
        ctx->pc = 0x1BAA48u;
        goto label_1baa48;
    }
    ctx->pc = 0x1BAA40u;
    {
        const bool branch_taken_0x1baa40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1baa40) {
            ctx->pc = 0x1BAA64u;
            goto label_1baa64;
        }
    }
    ctx->pc = 0x1BAA48u;
label_1baa48:
    // 0x1baa48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1baa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1baa4c:
    // 0x1baa4c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1baa50:
    if (ctx->pc == 0x1BAA50u) {
        ctx->pc = 0x1BAA54u;
        goto label_1baa54;
    }
    ctx->pc = 0x1BAA4Cu;
    {
        const bool branch_taken_0x1baa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1baa4c) {
            ctx->pc = 0x1BAA6Cu;
            goto label_1baa6c;
        }
    }
    ctx->pc = 0x1BAA54u;
label_1baa54:
    // 0x1baa54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1baa58:
    if (ctx->pc == 0x1BAA58u) {
        ctx->pc = 0x1BAA5Cu;
        goto label_1baa5c;
    }
    ctx->pc = 0x1BAA54u;
    {
        const bool branch_taken_0x1baa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa54) {
            ctx->pc = 0x1BAA6Cu;
            goto label_1baa6c;
        }
    }
    ctx->pc = 0x1BAA5Cu;
label_1baa5c:
    // 0x1baa5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1baa60:
    if (ctx->pc == 0x1BAA60u) {
        ctx->pc = 0x1BAA64u;
        goto label_1baa64;
    }
    ctx->pc = 0x1BAA5Cu;
    {
        const bool branch_taken_0x1baa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa5c) {
            ctx->pc = 0x1BAA6Cu;
            goto label_1baa6c;
        }
    }
    ctx->pc = 0x1BAA64u;
label_1baa64:
    // 0x1baa64: 0xc0c5238  jal         func_3148E0
label_1baa68:
    if (ctx->pc == 0x1BAA68u) {
        ctx->pc = 0x1BAA6Cu;
        goto label_1baa6c;
    }
    ctx->pc = 0x1BAA64u;
    SET_GPR_U32(ctx, 31, 0x1BAA6Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BAA64u, 0x1BAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA6Cu;
label_1baa6c:
    // 0x1baa6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1baa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baa70:
    // 0x1baa70: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1baa70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1baa74:
    // 0x1baa74: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1baa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1baa78:
    // 0x1baa78: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1baa78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1baa7c:
    // 0x1baa7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baa80:
    // 0x1baa80: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1baa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1baa84:
    // 0x1baa84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1baa88:
    if (ctx->pc == 0x1BAA88u) {
        ctx->pc = 0x1BAA8Cu;
        goto label_1baa8c;
    }
    ctx->pc = 0x1BAA84u;
    {
        const bool branch_taken_0x1baa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa84) {
            ctx->pc = 0x1BAAA8u;
            goto label_1baaa8;
        }
    }
    ctx->pc = 0x1BAA8Cu;
label_1baa8c:
    // 0x1baa8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1baa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1baa90:
    // 0x1baa90: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1baa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1baa94:
    // 0x1baa94: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1baa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1baa98:
    // 0x1baa98: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1baa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1baa9c:
    // 0x1baa9c: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x1baa9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1baaa0:
    // 0x1baaa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1baaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1baaa4:
    // 0x1baaa4: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1baaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 5));
label_1baaa8:
    // 0x1baaa8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1baaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baaac:
    // 0x1baaac: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1baaacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1baab0:
    // 0x1baab0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1baab0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1baab4:
    // 0x1baab4: 0xc096b40  jal         func_25AD00
label_1baab8:
    if (ctx->pc == 0x1BAAB8u) {
        ctx->pc = 0x1BAABCu;
        goto label_1baabc;
    }
    ctx->pc = 0x1BAAB4u;
    SET_GPR_U32(ctx, 31, 0x1BAABCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BAAB4u, 0x1BAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAABCu;
label_1baabc:
    // 0x1baabc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1baabcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1baac0:
    // 0x1baac0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1baac0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baac4:
    // 0x1baac4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1baac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1baac8:
    // 0x1baac8: 0xc05cd10  jal         func_173440
label_1baacc:
    if (ctx->pc == 0x1BAACCu) {
        ctx->pc = 0x1BAAD0u;
        goto label_1baad0;
    }
    ctx->pc = 0x1BAAC8u;
    SET_GPR_U32(ctx, 31, 0x1BAAD0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BAAC8u, 0x1BAAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAD0u;
label_1baad0:
    // 0x1baad0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1baad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1baad4:
    // 0x1baad4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1baad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baad8:
    // 0x1baad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1baad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1baadc:
    // 0x1baadc: 0xc0573d8  jal         func_15CF60
label_1baae0:
    if (ctx->pc == 0x1BAAE0u) {
        ctx->pc = 0x1BAAE4u;
        goto label_1baae4;
    }
    ctx->pc = 0x1BAADCu;
    SET_GPR_U32(ctx, 31, 0x1BAAE4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BAADCu, 0x1BAAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAE4u;
label_1baae4:
    // 0x1baae4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1baae4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1baae8:
    // 0x1baae8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1baae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1baaec:
    // 0x1baaec: 0xc097530  jal         func_25D4C0
label_1baaf0:
    if (ctx->pc == 0x1BAAF0u) {
        ctx->pc = 0x1BAAF4u;
        goto label_1baaf4;
    }
    ctx->pc = 0x1BAAECu;
    SET_GPR_U32(ctx, 31, 0x1BAAF4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BAAECu, 0x1BAAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAF4u;
label_1baaf4:
    // 0x1baaf4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1baaf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1baaf8:
    // 0x1baaf8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1baaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baafc:
    // 0x1baafc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1baafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab00:
    // 0x1bab00: 0x24c80120  addiu       $t0, $a2, 0x120
    ctx->pc = 0x1bab00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_1bab04:
    // 0x1bab04: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1bab04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1bab08:
    // 0x1bab08: 0x24e212c0  addiu       $v0, $a3, 0x12C0
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4800));
label_1bab0c:
    // 0x1bab0c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bab0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bab10:
    // 0x1bab10: 0xc05cf7c  jal         func_173DF0
label_1bab14:
    if (ctx->pc == 0x1BAB14u) {
        ctx->pc = 0x1BAB18u;
        goto label_1bab18;
    }
    ctx->pc = 0x1BAB10u;
    SET_GPR_U32(ctx, 31, 0x1BAB18u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BAB10u, 0x1BAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB18u;
label_1bab18:
    // 0x1bab18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bab18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bab1c:
    // 0x1bab1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab20:
    // 0x1bab20: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bab24:
    // 0x1bab24: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1bab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1bab28:
    // 0x1bab28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bab2c:
    // 0x1bab2c: 0x0  nop
    ctx->pc = 0x1bab2cu;
    // NOP
label_1bab30:
    // 0x1bab30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bab30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bab34:
    // 0x1bab34: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bab38:
    // 0x1bab38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bab38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bab3c:
    // 0x1bab3c: 0x0  nop
    ctx->pc = 0x1bab3cu;
    // NOP
label_1bab40:
    // 0x1bab40: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_1bab44:
    if (ctx->pc == 0x1BAB44u) {
        ctx->pc = 0x1BAB48u;
        goto label_1bab48;
    }
    ctx->pc = 0x1BAB40u;
    {
        const bool branch_taken_0x1bab40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bab40) {
            ctx->pc = 0x1BABC0u;
            goto label_1babc0;
        }
    }
    ctx->pc = 0x1BAB48u;
label_1bab48:
    // 0x1bab48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bab48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab4c:
    // 0x1bab4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab50:
    // 0x1bab50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab54:
    // 0x1bab54: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1bab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
label_1bab58:
    // 0x1bab58: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1bab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1bab5c:
    // 0x1bab5c: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1bab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1bab60:
    // 0x1bab60: 0xc0675b0  jal         func_19D6C0
label_1bab64:
    if (ctx->pc == 0x1BAB64u) {
        ctx->pc = 0x1BAB68u;
        goto label_1bab68;
    }
    ctx->pc = 0x1BAB60u;
    SET_GPR_U32(ctx, 31, 0x1BAB68u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BAB60u, 0x1BAB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB68u;
label_1bab68:
    // 0x1bab68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab6c:
    // 0x1bab6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab70:
    // 0x1bab70: 0xc46c1b40  lwc1        $f12, 0x1B40($v1)
    ctx->pc = 0x1bab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bab74:
    // 0x1bab74: 0xc44d1b48  lwc1        $f13, 0x1B48($v0)
    ctx->pc = 0x1bab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bab78:
    // 0x1bab78: 0xc0455e6  jal         func_115798
label_1bab7c:
    if (ctx->pc == 0x1BAB7Cu) {
        ctx->pc = 0x1BAB80u;
        goto label_1bab80;
    }
    ctx->pc = 0x1BAB78u;
    SET_GPR_U32(ctx, 31, 0x1BAB80u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1BAB78u, 0x1BAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB80u;
label_1bab80:
    // 0x1bab80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab84:
    // 0x1bab84: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1bab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1bab88:
    // 0x1bab88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bab8c:
    // 0x1bab8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab90:
    // 0x1bab90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bab90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1bab94:
    // 0x1bab94: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1bab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1bab98:
    // 0x1bab98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab9c:
    // 0x1bab9c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1bab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1baba0:
    // 0x1baba0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1baba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1baba4:
    // 0x1baba4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1baba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1baba8:
    // 0x1baba8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1baba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1babac:
    // 0x1babac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1babacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1babb0:
    // 0x1babb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1babb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1babb4:
    // 0x1babb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1babb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1babb8:
    // 0x1babb8: 0x10000026  b           . + 4 + (0x26 << 2)
label_1babbc:
    if (ctx->pc == 0x1BABBCu) {
        ctx->pc = 0x1BABC0u;
        goto label_1babc0;
    }
    ctx->pc = 0x1BABB8u;
    {
        const bool branch_taken_0x1babb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babb8) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BABC0u;
label_1babc0:
    // 0x1babc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1babc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1babc4:
    // 0x1babc4: 0x247212c0  addiu       $s2, $v1, 0x12C0
    ctx->pc = 0x1babc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1babc8:
    // 0x1babc8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1babc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1babcc:
    // 0x1babcc: 0xc057b54  jal         func_15ED50
label_1babd0:
    if (ctx->pc == 0x1BABD0u) {
        ctx->pc = 0x1BABD4u;
        goto label_1babd4;
    }
    ctx->pc = 0x1BABCCu;
    SET_GPR_U32(ctx, 31, 0x1BABD4u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1BABCCu, 0x1BABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABD4u;
label_1babd4:
    // 0x1babd4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1babd8:
    if (ctx->pc == 0x1BABD8u) {
        ctx->pc = 0x1BABDCu;
        goto label_1babdc;
    }
    ctx->pc = 0x1BABD4u;
    {
        const bool branch_taken_0x1babd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1babd4) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BABDCu;
label_1babdc:
    // 0x1babdc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1babdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1babe0:
    // 0x1babe0: 0x90c509db  lbu         $a1, 0x9DB($a2)
    ctx->pc = 0x1babe0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2523)));
label_1babe4:
    // 0x1babe4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1babe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1babe8:
    // 0x1babe8: 0x30650010  andi        $a1, $v1, 0x10
    ctx->pc = 0x1babe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1babec:
    // 0x1babec: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1babf0:
    if (ctx->pc == 0x1BABF0u) {
        ctx->pc = 0x1BABF4u;
        goto label_1babf4;
    }
    ctx->pc = 0x1BABECu;
    {
        const bool branch_taken_0x1babec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babec) {
            ctx->pc = 0x1BAC14u;
            goto label_1bac14;
        }
    }
    ctx->pc = 0x1BABF4u;
label_1babf4:
    // 0x1babf4: 0xc0585dc  jal         func_161770
label_1babf8:
    if (ctx->pc == 0x1BABF8u) {
        ctx->pc = 0x1BABFCu;
        goto label_1babfc;
    }
    ctx->pc = 0x1BABF4u;
    SET_GPR_U32(ctx, 31, 0x1BABFCu);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BABF4u, 0x1BABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABFCu;
label_1babfc:
    // 0x1babfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bac00:
    if (ctx->pc == 0x1BAC00u) {
        ctx->pc = 0x1BAC04u;
        goto label_1bac04;
    }
    ctx->pc = 0x1BABFCu;
    {
        const bool branch_taken_0x1babfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babfc) {
            ctx->pc = 0x1BAC14u;
            goto label_1bac14;
        }
    }
    ctx->pc = 0x1BAC04u;
label_1bac04:
    // 0x1bac04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac08:
    // 0x1bac08: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1bac08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1bac0c:
    // 0x1bac0c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bac10:
    if (ctx->pc == 0x1BAC10u) {
        ctx->pc = 0x1BAC14u;
        goto label_1bac14;
    }
    ctx->pc = 0x1BAC0Cu;
    {
        const bool branch_taken_0x1bac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac0c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BAC14u;
label_1bac14:
    // 0x1bac14: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac18:
    // 0x1bac18: 0x906609e7  lbu         $a2, 0x9E7($v1)
    ctx->pc = 0x1bac18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1bac1c:
    // 0x1bac1c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_1bac20:
    if (ctx->pc == 0x1BAC20u) {
        ctx->pc = 0x1BAC24u;
        goto label_1bac24;
    }
    ctx->pc = 0x1BAC1Cu;
    {
        const bool branch_taken_0x1bac1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac1c) {
            ctx->pc = 0x1BAC54u;
            goto label_1bac54;
        }
    }
    ctx->pc = 0x1BAC24u;
label_1bac24:
    // 0x1bac24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bac28:
    // 0x1bac28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bac28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac2c:
    // 0x1bac2c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1bac2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1bac30:
    // 0x1bac30: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bac30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac34:
    // 0x1bac34: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1bac34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_1bac38:
    // 0x1bac38: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bac38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac3c:
    // 0x1bac3c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1bac3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_1bac40:
    // 0x1bac40: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bac40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac44:
    // 0x1bac44: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1bac44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bac48:
    // 0x1bac48: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1bac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1bac4c:
    // 0x1bac4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac50:
    // 0x1bac50: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bac50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1bac54:
    // 0x1bac54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac58:
    // 0x1bac58: 0x8c641b6c  lw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1bac58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1bac5c:
    // 0x1bac5c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1bac60:
    if (ctx->pc == 0x1BAC60u) {
        ctx->pc = 0x1BAC64u;
        goto label_1bac64;
    }
    ctx->pc = 0x1BAC5Cu;
    {
        const bool branch_taken_0x1bac5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac5c) {
            ctx->pc = 0x1BAC80u;
            goto label_1bac80;
        }
    }
    ctx->pc = 0x1BAC64u;
label_1bac64:
    // 0x1bac64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bac64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bac68:
    // 0x1bac68: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bac68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bac6c:
    // 0x1bac6c: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_1bac70:
    // 0x1bac70: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1bac70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bac74:
    // 0x1bac74: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bac74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1bac78:
    // 0x1bac78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bac78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bac7c:
    // 0x1bac7c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1bac80:
    // 0x1bac80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac84:
    // 0x1bac84: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bac88:
    // 0x1bac88: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bac88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1bac8c:
    // 0x1bac8c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1bac8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bac90:
    // 0x1bac90: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_1bac94:
    if (ctx->pc == 0x1BAC94u) {
        ctx->pc = 0x1BAC98u;
        goto label_1bac98;
    }
    ctx->pc = 0x1BAC90u;
    {
        const bool branch_taken_0x1bac90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac90) {
            ctx->pc = 0x1BACE4u;
            goto label_1bace4;
        }
    }
    ctx->pc = 0x1BAC98u;
label_1bac98:
    // 0x1bac98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bac9c:
    // 0x1bac9c: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bac9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
label_1baca0:
    // 0x1baca0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1baca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1baca4:
    // 0x1baca4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1baca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1baca8:
    // 0x1baca8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1bacac:
    if (ctx->pc == 0x1BACACu) {
        ctx->pc = 0x1BACB0u;
        goto label_1bacb0;
    }
    ctx->pc = 0x1BACA8u;
    {
        const bool branch_taken_0x1baca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1baca8) {
            ctx->pc = 0x1BACD8u;
            goto label_1bacd8;
        }
    }
    ctx->pc = 0x1BACB0u;
label_1bacb0:
    // 0x1bacb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bacb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bacb4:
    // 0x1bacb4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1bacb8:
    if (ctx->pc == 0x1BACB8u) {
        ctx->pc = 0x1BACBCu;
        goto label_1bacbc;
    }
    ctx->pc = 0x1BACB4u;
    {
        const bool branch_taken_0x1bacb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bacb4) {
            ctx->pc = 0x1BACD8u;
            goto label_1bacd8;
        }
    }
    ctx->pc = 0x1BACBCu;
label_1bacbc:
    // 0x1bacbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bacbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bacc0:
    // 0x1bacc0: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
label_1bacc4:
    if (ctx->pc == 0x1BACC4u) {
        ctx->pc = 0x1BACC8u;
        goto label_1bacc8;
    }
    ctx->pc = 0x1BACC0u;
    {
        const bool branch_taken_0x1bacc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bacc0) {
            ctx->pc = 0x1BACE4u;
            goto label_1bace4;
        }
    }
    ctx->pc = 0x1BACC8u;
label_1bacc8:
    // 0x1bacc8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1baccc:
    if (ctx->pc == 0x1BACCCu) {
        ctx->pc = 0x1BACD0u;
        goto label_1bacd0;
    }
    ctx->pc = 0x1BACC8u;
    {
        const bool branch_taken_0x1bacc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bacc8) {
            ctx->pc = 0x1BACE4u;
            goto label_1bace4;
        }
    }
    ctx->pc = 0x1BACD0u;
label_1bacd0:
    // 0x1bacd0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bacd4:
    if (ctx->pc == 0x1BACD4u) {
        ctx->pc = 0x1BACD8u;
        goto label_1bacd8;
    }
    ctx->pc = 0x1BACD0u;
    {
        const bool branch_taken_0x1bacd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bacd0) {
            ctx->pc = 0x1BACE4u;
            goto label_1bace4;
        }
    }
    ctx->pc = 0x1BACD8u;
label_1bacd8:
    // 0x1bacd8: 0xc0c5244  jal         func_314910
label_1bacdc:
    if (ctx->pc == 0x1BACDCu) {
        ctx->pc = 0x1BACE0u;
        goto label_1bace0;
    }
    ctx->pc = 0x1BACD8u;
    SET_GPR_U32(ctx, 31, 0x1BACE0u);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1BACD8u, 0x1BACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACE0u;
label_1bace0:
    // 0x1bace0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bace0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bace4:
    // 0x1bace4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1bace4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bace8:
    // 0x1bace8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bace8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bacec:
    // 0x1bacec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bacecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bacf0:
    // 0x1bacf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bacf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bacf4:
    // 0x1bacf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bacf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bacf8:
    // 0x1bacf8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1bacf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1bacfc:
    // 0x1bacfc: 0x3e00008  jr          $ra
label_1bad00:
    if (ctx->pc == 0x1BAD00u) {
        ctx->pc = 0x1BAD04u;
        goto label_fallthrough_0x1bacfc;
    }
    ctx->pc = 0x1BACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BACFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bacfc:
    ctx->pc = 0x1BAD04u;
}
