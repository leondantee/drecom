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

// Function: Pl_r1_sword
// Address: 0x1c69e0 - 0x1c837c
void Pl_r1_sword_0x1c69e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_sword_0x1c69e0");
#endif

    switch (ctx->pc) {
        case 0x1c69e0u: goto label_1c69e0;
        case 0x1c69e4u: goto label_1c69e4;
        case 0x1c69e8u: goto label_1c69e8;
        case 0x1c69ecu: goto label_1c69ec;
        case 0x1c69f0u: goto label_1c69f0;
        case 0x1c69f4u: goto label_1c69f4;
        case 0x1c69f8u: goto label_1c69f8;
        case 0x1c69fcu: goto label_1c69fc;
        case 0x1c6a00u: goto label_1c6a00;
        case 0x1c6a04u: goto label_1c6a04;
        case 0x1c6a08u: goto label_1c6a08;
        case 0x1c6a0cu: goto label_1c6a0c;
        case 0x1c6a10u: goto label_1c6a10;
        case 0x1c6a14u: goto label_1c6a14;
        case 0x1c6a18u: goto label_1c6a18;
        case 0x1c6a1cu: goto label_1c6a1c;
        case 0x1c6a20u: goto label_1c6a20;
        case 0x1c6a24u: goto label_1c6a24;
        case 0x1c6a28u: goto label_1c6a28;
        case 0x1c6a2cu: goto label_1c6a2c;
        case 0x1c6a30u: goto label_1c6a30;
        case 0x1c6a34u: goto label_1c6a34;
        case 0x1c6a38u: goto label_1c6a38;
        case 0x1c6a3cu: goto label_1c6a3c;
        case 0x1c6a40u: goto label_1c6a40;
        case 0x1c6a44u: goto label_1c6a44;
        case 0x1c6a48u: goto label_1c6a48;
        case 0x1c6a4cu: goto label_1c6a4c;
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a54u: goto label_1c6a54;
        case 0x1c6a58u: goto label_1c6a58;
        case 0x1c6a5cu: goto label_1c6a5c;
        case 0x1c6a60u: goto label_1c6a60;
        case 0x1c6a64u: goto label_1c6a64;
        case 0x1c6a68u: goto label_1c6a68;
        case 0x1c6a6cu: goto label_1c6a6c;
        case 0x1c6a70u: goto label_1c6a70;
        case 0x1c6a74u: goto label_1c6a74;
        case 0x1c6a78u: goto label_1c6a78;
        case 0x1c6a7cu: goto label_1c6a7c;
        case 0x1c6a80u: goto label_1c6a80;
        case 0x1c6a84u: goto label_1c6a84;
        case 0x1c6a88u: goto label_1c6a88;
        case 0x1c6a8cu: goto label_1c6a8c;
        case 0x1c6a90u: goto label_1c6a90;
        case 0x1c6a94u: goto label_1c6a94;
        case 0x1c6a98u: goto label_1c6a98;
        case 0x1c6a9cu: goto label_1c6a9c;
        case 0x1c6aa0u: goto label_1c6aa0;
        case 0x1c6aa4u: goto label_1c6aa4;
        case 0x1c6aa8u: goto label_1c6aa8;
        case 0x1c6aacu: goto label_1c6aac;
        case 0x1c6ab0u: goto label_1c6ab0;
        case 0x1c6ab4u: goto label_1c6ab4;
        case 0x1c6ab8u: goto label_1c6ab8;
        case 0x1c6abcu: goto label_1c6abc;
        case 0x1c6ac0u: goto label_1c6ac0;
        case 0x1c6ac4u: goto label_1c6ac4;
        case 0x1c6ac8u: goto label_1c6ac8;
        case 0x1c6accu: goto label_1c6acc;
        case 0x1c6ad0u: goto label_1c6ad0;
        case 0x1c6ad4u: goto label_1c6ad4;
        case 0x1c6ad8u: goto label_1c6ad8;
        case 0x1c6adcu: goto label_1c6adc;
        case 0x1c6ae0u: goto label_1c6ae0;
        case 0x1c6ae4u: goto label_1c6ae4;
        case 0x1c6ae8u: goto label_1c6ae8;
        case 0x1c6aecu: goto label_1c6aec;
        case 0x1c6af0u: goto label_1c6af0;
        case 0x1c6af4u: goto label_1c6af4;
        case 0x1c6af8u: goto label_1c6af8;
        case 0x1c6afcu: goto label_1c6afc;
        case 0x1c6b00u: goto label_1c6b00;
        case 0x1c6b04u: goto label_1c6b04;
        case 0x1c6b08u: goto label_1c6b08;
        case 0x1c6b0cu: goto label_1c6b0c;
        case 0x1c6b10u: goto label_1c6b10;
        case 0x1c6b14u: goto label_1c6b14;
        case 0x1c6b18u: goto label_1c6b18;
        case 0x1c6b1cu: goto label_1c6b1c;
        case 0x1c6b20u: goto label_1c6b20;
        case 0x1c6b24u: goto label_1c6b24;
        case 0x1c6b28u: goto label_1c6b28;
        case 0x1c6b2cu: goto label_1c6b2c;
        case 0x1c6b30u: goto label_1c6b30;
        case 0x1c6b34u: goto label_1c6b34;
        case 0x1c6b38u: goto label_1c6b38;
        case 0x1c6b3cu: goto label_1c6b3c;
        case 0x1c6b40u: goto label_1c6b40;
        case 0x1c6b44u: goto label_1c6b44;
        case 0x1c6b48u: goto label_1c6b48;
        case 0x1c6b4cu: goto label_1c6b4c;
        case 0x1c6b50u: goto label_1c6b50;
        case 0x1c6b54u: goto label_1c6b54;
        case 0x1c6b58u: goto label_1c6b58;
        case 0x1c6b5cu: goto label_1c6b5c;
        case 0x1c6b60u: goto label_1c6b60;
        case 0x1c6b64u: goto label_1c6b64;
        case 0x1c6b68u: goto label_1c6b68;
        case 0x1c6b6cu: goto label_1c6b6c;
        case 0x1c6b70u: goto label_1c6b70;
        case 0x1c6b74u: goto label_1c6b74;
        case 0x1c6b78u: goto label_1c6b78;
        case 0x1c6b7cu: goto label_1c6b7c;
        case 0x1c6b80u: goto label_1c6b80;
        case 0x1c6b84u: goto label_1c6b84;
        case 0x1c6b88u: goto label_1c6b88;
        case 0x1c6b8cu: goto label_1c6b8c;
        case 0x1c6b90u: goto label_1c6b90;
        case 0x1c6b94u: goto label_1c6b94;
        case 0x1c6b98u: goto label_1c6b98;
        case 0x1c6b9cu: goto label_1c6b9c;
        case 0x1c6ba0u: goto label_1c6ba0;
        case 0x1c6ba4u: goto label_1c6ba4;
        case 0x1c6ba8u: goto label_1c6ba8;
        case 0x1c6bacu: goto label_1c6bac;
        case 0x1c6bb0u: goto label_1c6bb0;
        case 0x1c6bb4u: goto label_1c6bb4;
        case 0x1c6bb8u: goto label_1c6bb8;
        case 0x1c6bbcu: goto label_1c6bbc;
        case 0x1c6bc0u: goto label_1c6bc0;
        case 0x1c6bc4u: goto label_1c6bc4;
        case 0x1c6bc8u: goto label_1c6bc8;
        case 0x1c6bccu: goto label_1c6bcc;
        case 0x1c6bd0u: goto label_1c6bd0;
        case 0x1c6bd4u: goto label_1c6bd4;
        case 0x1c6bd8u: goto label_1c6bd8;
        case 0x1c6bdcu: goto label_1c6bdc;
        case 0x1c6be0u: goto label_1c6be0;
        case 0x1c6be4u: goto label_1c6be4;
        case 0x1c6be8u: goto label_1c6be8;
        case 0x1c6becu: goto label_1c6bec;
        case 0x1c6bf0u: goto label_1c6bf0;
        case 0x1c6bf4u: goto label_1c6bf4;
        case 0x1c6bf8u: goto label_1c6bf8;
        case 0x1c6bfcu: goto label_1c6bfc;
        case 0x1c6c00u: goto label_1c6c00;
        case 0x1c6c04u: goto label_1c6c04;
        case 0x1c6c08u: goto label_1c6c08;
        case 0x1c6c0cu: goto label_1c6c0c;
        case 0x1c6c10u: goto label_1c6c10;
        case 0x1c6c14u: goto label_1c6c14;
        case 0x1c6c18u: goto label_1c6c18;
        case 0x1c6c1cu: goto label_1c6c1c;
        case 0x1c6c20u: goto label_1c6c20;
        case 0x1c6c24u: goto label_1c6c24;
        case 0x1c6c28u: goto label_1c6c28;
        case 0x1c6c2cu: goto label_1c6c2c;
        case 0x1c6c30u: goto label_1c6c30;
        case 0x1c6c34u: goto label_1c6c34;
        case 0x1c6c38u: goto label_1c6c38;
        case 0x1c6c3cu: goto label_1c6c3c;
        case 0x1c6c40u: goto label_1c6c40;
        case 0x1c6c44u: goto label_1c6c44;
        case 0x1c6c48u: goto label_1c6c48;
        case 0x1c6c4cu: goto label_1c6c4c;
        case 0x1c6c50u: goto label_1c6c50;
        case 0x1c6c54u: goto label_1c6c54;
        case 0x1c6c58u: goto label_1c6c58;
        case 0x1c6c5cu: goto label_1c6c5c;
        case 0x1c6c60u: goto label_1c6c60;
        case 0x1c6c64u: goto label_1c6c64;
        case 0x1c6c68u: goto label_1c6c68;
        case 0x1c6c6cu: goto label_1c6c6c;
        case 0x1c6c70u: goto label_1c6c70;
        case 0x1c6c74u: goto label_1c6c74;
        case 0x1c6c78u: goto label_1c6c78;
        case 0x1c6c7cu: goto label_1c6c7c;
        case 0x1c6c80u: goto label_1c6c80;
        case 0x1c6c84u: goto label_1c6c84;
        case 0x1c6c88u: goto label_1c6c88;
        case 0x1c6c8cu: goto label_1c6c8c;
        case 0x1c6c90u: goto label_1c6c90;
        case 0x1c6c94u: goto label_1c6c94;
        case 0x1c6c98u: goto label_1c6c98;
        case 0x1c6c9cu: goto label_1c6c9c;
        case 0x1c6ca0u: goto label_1c6ca0;
        case 0x1c6ca4u: goto label_1c6ca4;
        case 0x1c6ca8u: goto label_1c6ca8;
        case 0x1c6cacu: goto label_1c6cac;
        case 0x1c6cb0u: goto label_1c6cb0;
        case 0x1c6cb4u: goto label_1c6cb4;
        case 0x1c6cb8u: goto label_1c6cb8;
        case 0x1c6cbcu: goto label_1c6cbc;
        case 0x1c6cc0u: goto label_1c6cc0;
        case 0x1c6cc4u: goto label_1c6cc4;
        case 0x1c6cc8u: goto label_1c6cc8;
        case 0x1c6cccu: goto label_1c6ccc;
        case 0x1c6cd0u: goto label_1c6cd0;
        case 0x1c6cd4u: goto label_1c6cd4;
        case 0x1c6cd8u: goto label_1c6cd8;
        case 0x1c6cdcu: goto label_1c6cdc;
        case 0x1c6ce0u: goto label_1c6ce0;
        case 0x1c6ce4u: goto label_1c6ce4;
        case 0x1c6ce8u: goto label_1c6ce8;
        case 0x1c6cecu: goto label_1c6cec;
        case 0x1c6cf0u: goto label_1c6cf0;
        case 0x1c6cf4u: goto label_1c6cf4;
        case 0x1c6cf8u: goto label_1c6cf8;
        case 0x1c6cfcu: goto label_1c6cfc;
        case 0x1c6d00u: goto label_1c6d00;
        case 0x1c6d04u: goto label_1c6d04;
        case 0x1c6d08u: goto label_1c6d08;
        case 0x1c6d0cu: goto label_1c6d0c;
        case 0x1c6d10u: goto label_1c6d10;
        case 0x1c6d14u: goto label_1c6d14;
        case 0x1c6d18u: goto label_1c6d18;
        case 0x1c6d1cu: goto label_1c6d1c;
        case 0x1c6d20u: goto label_1c6d20;
        case 0x1c6d24u: goto label_1c6d24;
        case 0x1c6d28u: goto label_1c6d28;
        case 0x1c6d2cu: goto label_1c6d2c;
        case 0x1c6d30u: goto label_1c6d30;
        case 0x1c6d34u: goto label_1c6d34;
        case 0x1c6d38u: goto label_1c6d38;
        case 0x1c6d3cu: goto label_1c6d3c;
        case 0x1c6d40u: goto label_1c6d40;
        case 0x1c6d44u: goto label_1c6d44;
        case 0x1c6d48u: goto label_1c6d48;
        case 0x1c6d4cu: goto label_1c6d4c;
        case 0x1c6d50u: goto label_1c6d50;
        case 0x1c6d54u: goto label_1c6d54;
        case 0x1c6d58u: goto label_1c6d58;
        case 0x1c6d5cu: goto label_1c6d5c;
        case 0x1c6d60u: goto label_1c6d60;
        case 0x1c6d64u: goto label_1c6d64;
        case 0x1c6d68u: goto label_1c6d68;
        case 0x1c6d6cu: goto label_1c6d6c;
        case 0x1c6d70u: goto label_1c6d70;
        case 0x1c6d74u: goto label_1c6d74;
        case 0x1c6d78u: goto label_1c6d78;
        case 0x1c6d7cu: goto label_1c6d7c;
        case 0x1c6d80u: goto label_1c6d80;
        case 0x1c6d84u: goto label_1c6d84;
        case 0x1c6d88u: goto label_1c6d88;
        case 0x1c6d8cu: goto label_1c6d8c;
        case 0x1c6d90u: goto label_1c6d90;
        case 0x1c6d94u: goto label_1c6d94;
        case 0x1c6d98u: goto label_1c6d98;
        case 0x1c6d9cu: goto label_1c6d9c;
        case 0x1c6da0u: goto label_1c6da0;
        case 0x1c6da4u: goto label_1c6da4;
        case 0x1c6da8u: goto label_1c6da8;
        case 0x1c6dacu: goto label_1c6dac;
        case 0x1c6db0u: goto label_1c6db0;
        case 0x1c6db4u: goto label_1c6db4;
        case 0x1c6db8u: goto label_1c6db8;
        case 0x1c6dbcu: goto label_1c6dbc;
        case 0x1c6dc0u: goto label_1c6dc0;
        case 0x1c6dc4u: goto label_1c6dc4;
        case 0x1c6dc8u: goto label_1c6dc8;
        case 0x1c6dccu: goto label_1c6dcc;
        case 0x1c6dd0u: goto label_1c6dd0;
        case 0x1c6dd4u: goto label_1c6dd4;
        case 0x1c6dd8u: goto label_1c6dd8;
        case 0x1c6ddcu: goto label_1c6ddc;
        case 0x1c6de0u: goto label_1c6de0;
        case 0x1c6de4u: goto label_1c6de4;
        case 0x1c6de8u: goto label_1c6de8;
        case 0x1c6decu: goto label_1c6dec;
        case 0x1c6df0u: goto label_1c6df0;
        case 0x1c6df4u: goto label_1c6df4;
        case 0x1c6df8u: goto label_1c6df8;
        case 0x1c6dfcu: goto label_1c6dfc;
        case 0x1c6e00u: goto label_1c6e00;
        case 0x1c6e04u: goto label_1c6e04;
        case 0x1c6e08u: goto label_1c6e08;
        case 0x1c6e0cu: goto label_1c6e0c;
        case 0x1c6e10u: goto label_1c6e10;
        case 0x1c6e14u: goto label_1c6e14;
        case 0x1c6e18u: goto label_1c6e18;
        case 0x1c6e1cu: goto label_1c6e1c;
        case 0x1c6e20u: goto label_1c6e20;
        case 0x1c6e24u: goto label_1c6e24;
        case 0x1c6e28u: goto label_1c6e28;
        case 0x1c6e2cu: goto label_1c6e2c;
        case 0x1c6e30u: goto label_1c6e30;
        case 0x1c6e34u: goto label_1c6e34;
        case 0x1c6e38u: goto label_1c6e38;
        case 0x1c6e3cu: goto label_1c6e3c;
        case 0x1c6e40u: goto label_1c6e40;
        case 0x1c6e44u: goto label_1c6e44;
        case 0x1c6e48u: goto label_1c6e48;
        case 0x1c6e4cu: goto label_1c6e4c;
        case 0x1c6e50u: goto label_1c6e50;
        case 0x1c6e54u: goto label_1c6e54;
        case 0x1c6e58u: goto label_1c6e58;
        case 0x1c6e5cu: goto label_1c6e5c;
        case 0x1c6e60u: goto label_1c6e60;
        case 0x1c6e64u: goto label_1c6e64;
        case 0x1c6e68u: goto label_1c6e68;
        case 0x1c6e6cu: goto label_1c6e6c;
        case 0x1c6e70u: goto label_1c6e70;
        case 0x1c6e74u: goto label_1c6e74;
        case 0x1c6e78u: goto label_1c6e78;
        case 0x1c6e7cu: goto label_1c6e7c;
        case 0x1c6e80u: goto label_1c6e80;
        case 0x1c6e84u: goto label_1c6e84;
        case 0x1c6e88u: goto label_1c6e88;
        case 0x1c6e8cu: goto label_1c6e8c;
        case 0x1c6e90u: goto label_1c6e90;
        case 0x1c6e94u: goto label_1c6e94;
        case 0x1c6e98u: goto label_1c6e98;
        case 0x1c6e9cu: goto label_1c6e9c;
        case 0x1c6ea0u: goto label_1c6ea0;
        case 0x1c6ea4u: goto label_1c6ea4;
        case 0x1c6ea8u: goto label_1c6ea8;
        case 0x1c6eacu: goto label_1c6eac;
        case 0x1c6eb0u: goto label_1c6eb0;
        case 0x1c6eb4u: goto label_1c6eb4;
        case 0x1c6eb8u: goto label_1c6eb8;
        case 0x1c6ebcu: goto label_1c6ebc;
        case 0x1c6ec0u: goto label_1c6ec0;
        case 0x1c6ec4u: goto label_1c6ec4;
        case 0x1c6ec8u: goto label_1c6ec8;
        case 0x1c6eccu: goto label_1c6ecc;
        case 0x1c6ed0u: goto label_1c6ed0;
        case 0x1c6ed4u: goto label_1c6ed4;
        case 0x1c6ed8u: goto label_1c6ed8;
        case 0x1c6edcu: goto label_1c6edc;
        case 0x1c6ee0u: goto label_1c6ee0;
        case 0x1c6ee4u: goto label_1c6ee4;
        case 0x1c6ee8u: goto label_1c6ee8;
        case 0x1c6eecu: goto label_1c6eec;
        case 0x1c6ef0u: goto label_1c6ef0;
        case 0x1c6ef4u: goto label_1c6ef4;
        case 0x1c6ef8u: goto label_1c6ef8;
        case 0x1c6efcu: goto label_1c6efc;
        case 0x1c6f00u: goto label_1c6f00;
        case 0x1c6f04u: goto label_1c6f04;
        case 0x1c6f08u: goto label_1c6f08;
        case 0x1c6f0cu: goto label_1c6f0c;
        case 0x1c6f10u: goto label_1c6f10;
        case 0x1c6f14u: goto label_1c6f14;
        case 0x1c6f18u: goto label_1c6f18;
        case 0x1c6f1cu: goto label_1c6f1c;
        case 0x1c6f20u: goto label_1c6f20;
        case 0x1c6f24u: goto label_1c6f24;
        case 0x1c6f28u: goto label_1c6f28;
        case 0x1c6f2cu: goto label_1c6f2c;
        case 0x1c6f30u: goto label_1c6f30;
        case 0x1c6f34u: goto label_1c6f34;
        case 0x1c6f38u: goto label_1c6f38;
        case 0x1c6f3cu: goto label_1c6f3c;
        case 0x1c6f40u: goto label_1c6f40;
        case 0x1c6f44u: goto label_1c6f44;
        case 0x1c6f48u: goto label_1c6f48;
        case 0x1c6f4cu: goto label_1c6f4c;
        case 0x1c6f50u: goto label_1c6f50;
        case 0x1c6f54u: goto label_1c6f54;
        case 0x1c6f58u: goto label_1c6f58;
        case 0x1c6f5cu: goto label_1c6f5c;
        case 0x1c6f60u: goto label_1c6f60;
        case 0x1c6f64u: goto label_1c6f64;
        case 0x1c6f68u: goto label_1c6f68;
        case 0x1c6f6cu: goto label_1c6f6c;
        case 0x1c6f70u: goto label_1c6f70;
        case 0x1c6f74u: goto label_1c6f74;
        case 0x1c6f78u: goto label_1c6f78;
        case 0x1c6f7cu: goto label_1c6f7c;
        case 0x1c6f80u: goto label_1c6f80;
        case 0x1c6f84u: goto label_1c6f84;
        case 0x1c6f88u: goto label_1c6f88;
        case 0x1c6f8cu: goto label_1c6f8c;
        case 0x1c6f90u: goto label_1c6f90;
        case 0x1c6f94u: goto label_1c6f94;
        case 0x1c6f98u: goto label_1c6f98;
        case 0x1c6f9cu: goto label_1c6f9c;
        case 0x1c6fa0u: goto label_1c6fa0;
        case 0x1c6fa4u: goto label_1c6fa4;
        case 0x1c6fa8u: goto label_1c6fa8;
        case 0x1c6facu: goto label_1c6fac;
        case 0x1c6fb0u: goto label_1c6fb0;
        case 0x1c6fb4u: goto label_1c6fb4;
        case 0x1c6fb8u: goto label_1c6fb8;
        case 0x1c6fbcu: goto label_1c6fbc;
        case 0x1c6fc0u: goto label_1c6fc0;
        case 0x1c6fc4u: goto label_1c6fc4;
        case 0x1c6fc8u: goto label_1c6fc8;
        case 0x1c6fccu: goto label_1c6fcc;
        case 0x1c6fd0u: goto label_1c6fd0;
        case 0x1c6fd4u: goto label_1c6fd4;
        case 0x1c6fd8u: goto label_1c6fd8;
        case 0x1c6fdcu: goto label_1c6fdc;
        case 0x1c6fe0u: goto label_1c6fe0;
        case 0x1c6fe4u: goto label_1c6fe4;
        case 0x1c6fe8u: goto label_1c6fe8;
        case 0x1c6fecu: goto label_1c6fec;
        case 0x1c6ff0u: goto label_1c6ff0;
        case 0x1c6ff4u: goto label_1c6ff4;
        case 0x1c6ff8u: goto label_1c6ff8;
        case 0x1c6ffcu: goto label_1c6ffc;
        case 0x1c7000u: goto label_1c7000;
        case 0x1c7004u: goto label_1c7004;
        case 0x1c7008u: goto label_1c7008;
        case 0x1c700cu: goto label_1c700c;
        case 0x1c7010u: goto label_1c7010;
        case 0x1c7014u: goto label_1c7014;
        case 0x1c7018u: goto label_1c7018;
        case 0x1c701cu: goto label_1c701c;
        case 0x1c7020u: goto label_1c7020;
        case 0x1c7024u: goto label_1c7024;
        case 0x1c7028u: goto label_1c7028;
        case 0x1c702cu: goto label_1c702c;
        case 0x1c7030u: goto label_1c7030;
        case 0x1c7034u: goto label_1c7034;
        case 0x1c7038u: goto label_1c7038;
        case 0x1c703cu: goto label_1c703c;
        case 0x1c7040u: goto label_1c7040;
        case 0x1c7044u: goto label_1c7044;
        case 0x1c7048u: goto label_1c7048;
        case 0x1c704cu: goto label_1c704c;
        case 0x1c7050u: goto label_1c7050;
        case 0x1c7054u: goto label_1c7054;
        case 0x1c7058u: goto label_1c7058;
        case 0x1c705cu: goto label_1c705c;
        case 0x1c7060u: goto label_1c7060;
        case 0x1c7064u: goto label_1c7064;
        case 0x1c7068u: goto label_1c7068;
        case 0x1c706cu: goto label_1c706c;
        case 0x1c7070u: goto label_1c7070;
        case 0x1c7074u: goto label_1c7074;
        case 0x1c7078u: goto label_1c7078;
        case 0x1c707cu: goto label_1c707c;
        case 0x1c7080u: goto label_1c7080;
        case 0x1c7084u: goto label_1c7084;
        case 0x1c7088u: goto label_1c7088;
        case 0x1c708cu: goto label_1c708c;
        case 0x1c7090u: goto label_1c7090;
        case 0x1c7094u: goto label_1c7094;
        case 0x1c7098u: goto label_1c7098;
        case 0x1c709cu: goto label_1c709c;
        case 0x1c70a0u: goto label_1c70a0;
        case 0x1c70a4u: goto label_1c70a4;
        case 0x1c70a8u: goto label_1c70a8;
        case 0x1c70acu: goto label_1c70ac;
        case 0x1c70b0u: goto label_1c70b0;
        case 0x1c70b4u: goto label_1c70b4;
        case 0x1c70b8u: goto label_1c70b8;
        case 0x1c70bcu: goto label_1c70bc;
        case 0x1c70c0u: goto label_1c70c0;
        case 0x1c70c4u: goto label_1c70c4;
        case 0x1c70c8u: goto label_1c70c8;
        case 0x1c70ccu: goto label_1c70cc;
        case 0x1c70d0u: goto label_1c70d0;
        case 0x1c70d4u: goto label_1c70d4;
        case 0x1c70d8u: goto label_1c70d8;
        case 0x1c70dcu: goto label_1c70dc;
        case 0x1c70e0u: goto label_1c70e0;
        case 0x1c70e4u: goto label_1c70e4;
        case 0x1c70e8u: goto label_1c70e8;
        case 0x1c70ecu: goto label_1c70ec;
        case 0x1c70f0u: goto label_1c70f0;
        case 0x1c70f4u: goto label_1c70f4;
        case 0x1c70f8u: goto label_1c70f8;
        case 0x1c70fcu: goto label_1c70fc;
        case 0x1c7100u: goto label_1c7100;
        case 0x1c7104u: goto label_1c7104;
        case 0x1c7108u: goto label_1c7108;
        case 0x1c710cu: goto label_1c710c;
        case 0x1c7110u: goto label_1c7110;
        case 0x1c7114u: goto label_1c7114;
        case 0x1c7118u: goto label_1c7118;
        case 0x1c711cu: goto label_1c711c;
        case 0x1c7120u: goto label_1c7120;
        case 0x1c7124u: goto label_1c7124;
        case 0x1c7128u: goto label_1c7128;
        case 0x1c712cu: goto label_1c712c;
        case 0x1c7130u: goto label_1c7130;
        case 0x1c7134u: goto label_1c7134;
        case 0x1c7138u: goto label_1c7138;
        case 0x1c713cu: goto label_1c713c;
        case 0x1c7140u: goto label_1c7140;
        case 0x1c7144u: goto label_1c7144;
        case 0x1c7148u: goto label_1c7148;
        case 0x1c714cu: goto label_1c714c;
        case 0x1c7150u: goto label_1c7150;
        case 0x1c7154u: goto label_1c7154;
        case 0x1c7158u: goto label_1c7158;
        case 0x1c715cu: goto label_1c715c;
        case 0x1c7160u: goto label_1c7160;
        case 0x1c7164u: goto label_1c7164;
        case 0x1c7168u: goto label_1c7168;
        case 0x1c716cu: goto label_1c716c;
        case 0x1c7170u: goto label_1c7170;
        case 0x1c7174u: goto label_1c7174;
        case 0x1c7178u: goto label_1c7178;
        case 0x1c717cu: goto label_1c717c;
        case 0x1c7180u: goto label_1c7180;
        case 0x1c7184u: goto label_1c7184;
        case 0x1c7188u: goto label_1c7188;
        case 0x1c718cu: goto label_1c718c;
        case 0x1c7190u: goto label_1c7190;
        case 0x1c7194u: goto label_1c7194;
        case 0x1c7198u: goto label_1c7198;
        case 0x1c719cu: goto label_1c719c;
        case 0x1c71a0u: goto label_1c71a0;
        case 0x1c71a4u: goto label_1c71a4;
        case 0x1c71a8u: goto label_1c71a8;
        case 0x1c71acu: goto label_1c71ac;
        case 0x1c71b0u: goto label_1c71b0;
        case 0x1c71b4u: goto label_1c71b4;
        case 0x1c71b8u: goto label_1c71b8;
        case 0x1c71bcu: goto label_1c71bc;
        case 0x1c71c0u: goto label_1c71c0;
        case 0x1c71c4u: goto label_1c71c4;
        case 0x1c71c8u: goto label_1c71c8;
        case 0x1c71ccu: goto label_1c71cc;
        case 0x1c71d0u: goto label_1c71d0;
        case 0x1c71d4u: goto label_1c71d4;
        case 0x1c71d8u: goto label_1c71d8;
        case 0x1c71dcu: goto label_1c71dc;
        case 0x1c71e0u: goto label_1c71e0;
        case 0x1c71e4u: goto label_1c71e4;
        case 0x1c71e8u: goto label_1c71e8;
        case 0x1c71ecu: goto label_1c71ec;
        case 0x1c71f0u: goto label_1c71f0;
        case 0x1c71f4u: goto label_1c71f4;
        case 0x1c71f8u: goto label_1c71f8;
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c7200u: goto label_1c7200;
        case 0x1c7204u: goto label_1c7204;
        case 0x1c7208u: goto label_1c7208;
        case 0x1c720cu: goto label_1c720c;
        case 0x1c7210u: goto label_1c7210;
        case 0x1c7214u: goto label_1c7214;
        case 0x1c7218u: goto label_1c7218;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c7220u: goto label_1c7220;
        case 0x1c7224u: goto label_1c7224;
        case 0x1c7228u: goto label_1c7228;
        case 0x1c722cu: goto label_1c722c;
        case 0x1c7230u: goto label_1c7230;
        case 0x1c7234u: goto label_1c7234;
        case 0x1c7238u: goto label_1c7238;
        case 0x1c723cu: goto label_1c723c;
        case 0x1c7240u: goto label_1c7240;
        case 0x1c7244u: goto label_1c7244;
        case 0x1c7248u: goto label_1c7248;
        case 0x1c724cu: goto label_1c724c;
        case 0x1c7250u: goto label_1c7250;
        case 0x1c7254u: goto label_1c7254;
        case 0x1c7258u: goto label_1c7258;
        case 0x1c725cu: goto label_1c725c;
        case 0x1c7260u: goto label_1c7260;
        case 0x1c7264u: goto label_1c7264;
        case 0x1c7268u: goto label_1c7268;
        case 0x1c726cu: goto label_1c726c;
        case 0x1c7270u: goto label_1c7270;
        case 0x1c7274u: goto label_1c7274;
        case 0x1c7278u: goto label_1c7278;
        case 0x1c727cu: goto label_1c727c;
        case 0x1c7280u: goto label_1c7280;
        case 0x1c7284u: goto label_1c7284;
        case 0x1c7288u: goto label_1c7288;
        case 0x1c728cu: goto label_1c728c;
        case 0x1c7290u: goto label_1c7290;
        case 0x1c7294u: goto label_1c7294;
        case 0x1c7298u: goto label_1c7298;
        case 0x1c729cu: goto label_1c729c;
        case 0x1c72a0u: goto label_1c72a0;
        case 0x1c72a4u: goto label_1c72a4;
        case 0x1c72a8u: goto label_1c72a8;
        case 0x1c72acu: goto label_1c72ac;
        case 0x1c72b0u: goto label_1c72b0;
        case 0x1c72b4u: goto label_1c72b4;
        case 0x1c72b8u: goto label_1c72b8;
        case 0x1c72bcu: goto label_1c72bc;
        case 0x1c72c0u: goto label_1c72c0;
        case 0x1c72c4u: goto label_1c72c4;
        case 0x1c72c8u: goto label_1c72c8;
        case 0x1c72ccu: goto label_1c72cc;
        case 0x1c72d0u: goto label_1c72d0;
        case 0x1c72d4u: goto label_1c72d4;
        case 0x1c72d8u: goto label_1c72d8;
        case 0x1c72dcu: goto label_1c72dc;
        case 0x1c72e0u: goto label_1c72e0;
        case 0x1c72e4u: goto label_1c72e4;
        case 0x1c72e8u: goto label_1c72e8;
        case 0x1c72ecu: goto label_1c72ec;
        case 0x1c72f0u: goto label_1c72f0;
        case 0x1c72f4u: goto label_1c72f4;
        case 0x1c72f8u: goto label_1c72f8;
        case 0x1c72fcu: goto label_1c72fc;
        case 0x1c7300u: goto label_1c7300;
        case 0x1c7304u: goto label_1c7304;
        case 0x1c7308u: goto label_1c7308;
        case 0x1c730cu: goto label_1c730c;
        case 0x1c7310u: goto label_1c7310;
        case 0x1c7314u: goto label_1c7314;
        case 0x1c7318u: goto label_1c7318;
        case 0x1c731cu: goto label_1c731c;
        case 0x1c7320u: goto label_1c7320;
        case 0x1c7324u: goto label_1c7324;
        case 0x1c7328u: goto label_1c7328;
        case 0x1c732cu: goto label_1c732c;
        case 0x1c7330u: goto label_1c7330;
        case 0x1c7334u: goto label_1c7334;
        case 0x1c7338u: goto label_1c7338;
        case 0x1c733cu: goto label_1c733c;
        case 0x1c7340u: goto label_1c7340;
        case 0x1c7344u: goto label_1c7344;
        case 0x1c7348u: goto label_1c7348;
        case 0x1c734cu: goto label_1c734c;
        case 0x1c7350u: goto label_1c7350;
        case 0x1c7354u: goto label_1c7354;
        case 0x1c7358u: goto label_1c7358;
        case 0x1c735cu: goto label_1c735c;
        case 0x1c7360u: goto label_1c7360;
        case 0x1c7364u: goto label_1c7364;
        case 0x1c7368u: goto label_1c7368;
        case 0x1c736cu: goto label_1c736c;
        case 0x1c7370u: goto label_1c7370;
        case 0x1c7374u: goto label_1c7374;
        case 0x1c7378u: goto label_1c7378;
        case 0x1c737cu: goto label_1c737c;
        case 0x1c7380u: goto label_1c7380;
        case 0x1c7384u: goto label_1c7384;
        case 0x1c7388u: goto label_1c7388;
        case 0x1c738cu: goto label_1c738c;
        case 0x1c7390u: goto label_1c7390;
        case 0x1c7394u: goto label_1c7394;
        case 0x1c7398u: goto label_1c7398;
        case 0x1c739cu: goto label_1c739c;
        case 0x1c73a0u: goto label_1c73a0;
        case 0x1c73a4u: goto label_1c73a4;
        case 0x1c73a8u: goto label_1c73a8;
        case 0x1c73acu: goto label_1c73ac;
        case 0x1c73b0u: goto label_1c73b0;
        case 0x1c73b4u: goto label_1c73b4;
        case 0x1c73b8u: goto label_1c73b8;
        case 0x1c73bcu: goto label_1c73bc;
        case 0x1c73c0u: goto label_1c73c0;
        case 0x1c73c4u: goto label_1c73c4;
        case 0x1c73c8u: goto label_1c73c8;
        case 0x1c73ccu: goto label_1c73cc;
        case 0x1c73d0u: goto label_1c73d0;
        case 0x1c73d4u: goto label_1c73d4;
        case 0x1c73d8u: goto label_1c73d8;
        case 0x1c73dcu: goto label_1c73dc;
        case 0x1c73e0u: goto label_1c73e0;
        case 0x1c73e4u: goto label_1c73e4;
        case 0x1c73e8u: goto label_1c73e8;
        case 0x1c73ecu: goto label_1c73ec;
        case 0x1c73f0u: goto label_1c73f0;
        case 0x1c73f4u: goto label_1c73f4;
        case 0x1c73f8u: goto label_1c73f8;
        case 0x1c73fcu: goto label_1c73fc;
        case 0x1c7400u: goto label_1c7400;
        case 0x1c7404u: goto label_1c7404;
        case 0x1c7408u: goto label_1c7408;
        case 0x1c740cu: goto label_1c740c;
        case 0x1c7410u: goto label_1c7410;
        case 0x1c7414u: goto label_1c7414;
        case 0x1c7418u: goto label_1c7418;
        case 0x1c741cu: goto label_1c741c;
        case 0x1c7420u: goto label_1c7420;
        case 0x1c7424u: goto label_1c7424;
        case 0x1c7428u: goto label_1c7428;
        case 0x1c742cu: goto label_1c742c;
        case 0x1c7430u: goto label_1c7430;
        case 0x1c7434u: goto label_1c7434;
        case 0x1c7438u: goto label_1c7438;
        case 0x1c743cu: goto label_1c743c;
        case 0x1c7440u: goto label_1c7440;
        case 0x1c7444u: goto label_1c7444;
        case 0x1c7448u: goto label_1c7448;
        case 0x1c744cu: goto label_1c744c;
        case 0x1c7450u: goto label_1c7450;
        case 0x1c7454u: goto label_1c7454;
        case 0x1c7458u: goto label_1c7458;
        case 0x1c745cu: goto label_1c745c;
        case 0x1c7460u: goto label_1c7460;
        case 0x1c7464u: goto label_1c7464;
        case 0x1c7468u: goto label_1c7468;
        case 0x1c746cu: goto label_1c746c;
        case 0x1c7470u: goto label_1c7470;
        case 0x1c7474u: goto label_1c7474;
        case 0x1c7478u: goto label_1c7478;
        case 0x1c747cu: goto label_1c747c;
        case 0x1c7480u: goto label_1c7480;
        case 0x1c7484u: goto label_1c7484;
        case 0x1c7488u: goto label_1c7488;
        case 0x1c748cu: goto label_1c748c;
        case 0x1c7490u: goto label_1c7490;
        case 0x1c7494u: goto label_1c7494;
        case 0x1c7498u: goto label_1c7498;
        case 0x1c749cu: goto label_1c749c;
        case 0x1c74a0u: goto label_1c74a0;
        case 0x1c74a4u: goto label_1c74a4;
        case 0x1c74a8u: goto label_1c74a8;
        case 0x1c74acu: goto label_1c74ac;
        case 0x1c74b0u: goto label_1c74b0;
        case 0x1c74b4u: goto label_1c74b4;
        case 0x1c74b8u: goto label_1c74b8;
        case 0x1c74bcu: goto label_1c74bc;
        case 0x1c74c0u: goto label_1c74c0;
        case 0x1c74c4u: goto label_1c74c4;
        case 0x1c74c8u: goto label_1c74c8;
        case 0x1c74ccu: goto label_1c74cc;
        case 0x1c74d0u: goto label_1c74d0;
        case 0x1c74d4u: goto label_1c74d4;
        case 0x1c74d8u: goto label_1c74d8;
        case 0x1c74dcu: goto label_1c74dc;
        case 0x1c74e0u: goto label_1c74e0;
        case 0x1c74e4u: goto label_1c74e4;
        case 0x1c74e8u: goto label_1c74e8;
        case 0x1c74ecu: goto label_1c74ec;
        case 0x1c74f0u: goto label_1c74f0;
        case 0x1c74f4u: goto label_1c74f4;
        case 0x1c74f8u: goto label_1c74f8;
        case 0x1c74fcu: goto label_1c74fc;
        case 0x1c7500u: goto label_1c7500;
        case 0x1c7504u: goto label_1c7504;
        case 0x1c7508u: goto label_1c7508;
        case 0x1c750cu: goto label_1c750c;
        case 0x1c7510u: goto label_1c7510;
        case 0x1c7514u: goto label_1c7514;
        case 0x1c7518u: goto label_1c7518;
        case 0x1c751cu: goto label_1c751c;
        case 0x1c7520u: goto label_1c7520;
        case 0x1c7524u: goto label_1c7524;
        case 0x1c7528u: goto label_1c7528;
        case 0x1c752cu: goto label_1c752c;
        case 0x1c7530u: goto label_1c7530;
        case 0x1c7534u: goto label_1c7534;
        case 0x1c7538u: goto label_1c7538;
        case 0x1c753cu: goto label_1c753c;
        case 0x1c7540u: goto label_1c7540;
        case 0x1c7544u: goto label_1c7544;
        case 0x1c7548u: goto label_1c7548;
        case 0x1c754cu: goto label_1c754c;
        case 0x1c7550u: goto label_1c7550;
        case 0x1c7554u: goto label_1c7554;
        case 0x1c7558u: goto label_1c7558;
        case 0x1c755cu: goto label_1c755c;
        case 0x1c7560u: goto label_1c7560;
        case 0x1c7564u: goto label_1c7564;
        case 0x1c7568u: goto label_1c7568;
        case 0x1c756cu: goto label_1c756c;
        case 0x1c7570u: goto label_1c7570;
        case 0x1c7574u: goto label_1c7574;
        case 0x1c7578u: goto label_1c7578;
        case 0x1c757cu: goto label_1c757c;
        case 0x1c7580u: goto label_1c7580;
        case 0x1c7584u: goto label_1c7584;
        case 0x1c7588u: goto label_1c7588;
        case 0x1c758cu: goto label_1c758c;
        case 0x1c7590u: goto label_1c7590;
        case 0x1c7594u: goto label_1c7594;
        case 0x1c7598u: goto label_1c7598;
        case 0x1c759cu: goto label_1c759c;
        case 0x1c75a0u: goto label_1c75a0;
        case 0x1c75a4u: goto label_1c75a4;
        case 0x1c75a8u: goto label_1c75a8;
        case 0x1c75acu: goto label_1c75ac;
        case 0x1c75b0u: goto label_1c75b0;
        case 0x1c75b4u: goto label_1c75b4;
        case 0x1c75b8u: goto label_1c75b8;
        case 0x1c75bcu: goto label_1c75bc;
        case 0x1c75c0u: goto label_1c75c0;
        case 0x1c75c4u: goto label_1c75c4;
        case 0x1c75c8u: goto label_1c75c8;
        case 0x1c75ccu: goto label_1c75cc;
        case 0x1c75d0u: goto label_1c75d0;
        case 0x1c75d4u: goto label_1c75d4;
        case 0x1c75d8u: goto label_1c75d8;
        case 0x1c75dcu: goto label_1c75dc;
        case 0x1c75e0u: goto label_1c75e0;
        case 0x1c75e4u: goto label_1c75e4;
        case 0x1c75e8u: goto label_1c75e8;
        case 0x1c75ecu: goto label_1c75ec;
        case 0x1c75f0u: goto label_1c75f0;
        case 0x1c75f4u: goto label_1c75f4;
        case 0x1c75f8u: goto label_1c75f8;
        case 0x1c75fcu: goto label_1c75fc;
        case 0x1c7600u: goto label_1c7600;
        case 0x1c7604u: goto label_1c7604;
        case 0x1c7608u: goto label_1c7608;
        case 0x1c760cu: goto label_1c760c;
        case 0x1c7610u: goto label_1c7610;
        case 0x1c7614u: goto label_1c7614;
        case 0x1c7618u: goto label_1c7618;
        case 0x1c761cu: goto label_1c761c;
        case 0x1c7620u: goto label_1c7620;
        case 0x1c7624u: goto label_1c7624;
        case 0x1c7628u: goto label_1c7628;
        case 0x1c762cu: goto label_1c762c;
        case 0x1c7630u: goto label_1c7630;
        case 0x1c7634u: goto label_1c7634;
        case 0x1c7638u: goto label_1c7638;
        case 0x1c763cu: goto label_1c763c;
        case 0x1c7640u: goto label_1c7640;
        case 0x1c7644u: goto label_1c7644;
        case 0x1c7648u: goto label_1c7648;
        case 0x1c764cu: goto label_1c764c;
        case 0x1c7650u: goto label_1c7650;
        case 0x1c7654u: goto label_1c7654;
        case 0x1c7658u: goto label_1c7658;
        case 0x1c765cu: goto label_1c765c;
        case 0x1c7660u: goto label_1c7660;
        case 0x1c7664u: goto label_1c7664;
        case 0x1c7668u: goto label_1c7668;
        case 0x1c766cu: goto label_1c766c;
        case 0x1c7670u: goto label_1c7670;
        case 0x1c7674u: goto label_1c7674;
        case 0x1c7678u: goto label_1c7678;
        case 0x1c767cu: goto label_1c767c;
        case 0x1c7680u: goto label_1c7680;
        case 0x1c7684u: goto label_1c7684;
        case 0x1c7688u: goto label_1c7688;
        case 0x1c768cu: goto label_1c768c;
        case 0x1c7690u: goto label_1c7690;
        case 0x1c7694u: goto label_1c7694;
        case 0x1c7698u: goto label_1c7698;
        case 0x1c769cu: goto label_1c769c;
        case 0x1c76a0u: goto label_1c76a0;
        case 0x1c76a4u: goto label_1c76a4;
        case 0x1c76a8u: goto label_1c76a8;
        case 0x1c76acu: goto label_1c76ac;
        case 0x1c76b0u: goto label_1c76b0;
        case 0x1c76b4u: goto label_1c76b4;
        case 0x1c76b8u: goto label_1c76b8;
        case 0x1c76bcu: goto label_1c76bc;
        case 0x1c76c0u: goto label_1c76c0;
        case 0x1c76c4u: goto label_1c76c4;
        case 0x1c76c8u: goto label_1c76c8;
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76d0u: goto label_1c76d0;
        case 0x1c76d4u: goto label_1c76d4;
        case 0x1c76d8u: goto label_1c76d8;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76e0u: goto label_1c76e0;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c76e8u: goto label_1c76e8;
        case 0x1c76ecu: goto label_1c76ec;
        case 0x1c76f0u: goto label_1c76f0;
        case 0x1c76f4u: goto label_1c76f4;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c76fcu: goto label_1c76fc;
        case 0x1c7700u: goto label_1c7700;
        case 0x1c7704u: goto label_1c7704;
        case 0x1c7708u: goto label_1c7708;
        case 0x1c770cu: goto label_1c770c;
        case 0x1c7710u: goto label_1c7710;
        case 0x1c7714u: goto label_1c7714;
        case 0x1c7718u: goto label_1c7718;
        case 0x1c771cu: goto label_1c771c;
        case 0x1c7720u: goto label_1c7720;
        case 0x1c7724u: goto label_1c7724;
        case 0x1c7728u: goto label_1c7728;
        case 0x1c772cu: goto label_1c772c;
        case 0x1c7730u: goto label_1c7730;
        case 0x1c7734u: goto label_1c7734;
        case 0x1c7738u: goto label_1c7738;
        case 0x1c773cu: goto label_1c773c;
        case 0x1c7740u: goto label_1c7740;
        case 0x1c7744u: goto label_1c7744;
        case 0x1c7748u: goto label_1c7748;
        case 0x1c774cu: goto label_1c774c;
        case 0x1c7750u: goto label_1c7750;
        case 0x1c7754u: goto label_1c7754;
        case 0x1c7758u: goto label_1c7758;
        case 0x1c775cu: goto label_1c775c;
        case 0x1c7760u: goto label_1c7760;
        case 0x1c7764u: goto label_1c7764;
        case 0x1c7768u: goto label_1c7768;
        case 0x1c776cu: goto label_1c776c;
        case 0x1c7770u: goto label_1c7770;
        case 0x1c7774u: goto label_1c7774;
        case 0x1c7778u: goto label_1c7778;
        case 0x1c777cu: goto label_1c777c;
        case 0x1c7780u: goto label_1c7780;
        case 0x1c7784u: goto label_1c7784;
        case 0x1c7788u: goto label_1c7788;
        case 0x1c778cu: goto label_1c778c;
        case 0x1c7790u: goto label_1c7790;
        case 0x1c7794u: goto label_1c7794;
        case 0x1c7798u: goto label_1c7798;
        case 0x1c779cu: goto label_1c779c;
        case 0x1c77a0u: goto label_1c77a0;
        case 0x1c77a4u: goto label_1c77a4;
        case 0x1c77a8u: goto label_1c77a8;
        case 0x1c77acu: goto label_1c77ac;
        case 0x1c77b0u: goto label_1c77b0;
        case 0x1c77b4u: goto label_1c77b4;
        case 0x1c77b8u: goto label_1c77b8;
        case 0x1c77bcu: goto label_1c77bc;
        case 0x1c77c0u: goto label_1c77c0;
        case 0x1c77c4u: goto label_1c77c4;
        case 0x1c77c8u: goto label_1c77c8;
        case 0x1c77ccu: goto label_1c77cc;
        case 0x1c77d0u: goto label_1c77d0;
        case 0x1c77d4u: goto label_1c77d4;
        case 0x1c77d8u: goto label_1c77d8;
        case 0x1c77dcu: goto label_1c77dc;
        case 0x1c77e0u: goto label_1c77e0;
        case 0x1c77e4u: goto label_1c77e4;
        case 0x1c77e8u: goto label_1c77e8;
        case 0x1c77ecu: goto label_1c77ec;
        case 0x1c77f0u: goto label_1c77f0;
        case 0x1c77f4u: goto label_1c77f4;
        case 0x1c77f8u: goto label_1c77f8;
        case 0x1c77fcu: goto label_1c77fc;
        case 0x1c7800u: goto label_1c7800;
        case 0x1c7804u: goto label_1c7804;
        case 0x1c7808u: goto label_1c7808;
        case 0x1c780cu: goto label_1c780c;
        case 0x1c7810u: goto label_1c7810;
        case 0x1c7814u: goto label_1c7814;
        case 0x1c7818u: goto label_1c7818;
        case 0x1c781cu: goto label_1c781c;
        case 0x1c7820u: goto label_1c7820;
        case 0x1c7824u: goto label_1c7824;
        case 0x1c7828u: goto label_1c7828;
        case 0x1c782cu: goto label_1c782c;
        case 0x1c7830u: goto label_1c7830;
        case 0x1c7834u: goto label_1c7834;
        case 0x1c7838u: goto label_1c7838;
        case 0x1c783cu: goto label_1c783c;
        case 0x1c7840u: goto label_1c7840;
        case 0x1c7844u: goto label_1c7844;
        case 0x1c7848u: goto label_1c7848;
        case 0x1c784cu: goto label_1c784c;
        case 0x1c7850u: goto label_1c7850;
        case 0x1c7854u: goto label_1c7854;
        case 0x1c7858u: goto label_1c7858;
        case 0x1c785cu: goto label_1c785c;
        case 0x1c7860u: goto label_1c7860;
        case 0x1c7864u: goto label_1c7864;
        case 0x1c7868u: goto label_1c7868;
        case 0x1c786cu: goto label_1c786c;
        case 0x1c7870u: goto label_1c7870;
        case 0x1c7874u: goto label_1c7874;
        case 0x1c7878u: goto label_1c7878;
        case 0x1c787cu: goto label_1c787c;
        case 0x1c7880u: goto label_1c7880;
        case 0x1c7884u: goto label_1c7884;
        case 0x1c7888u: goto label_1c7888;
        case 0x1c788cu: goto label_1c788c;
        case 0x1c7890u: goto label_1c7890;
        case 0x1c7894u: goto label_1c7894;
        case 0x1c7898u: goto label_1c7898;
        case 0x1c789cu: goto label_1c789c;
        case 0x1c78a0u: goto label_1c78a0;
        case 0x1c78a4u: goto label_1c78a4;
        case 0x1c78a8u: goto label_1c78a8;
        case 0x1c78acu: goto label_1c78ac;
        case 0x1c78b0u: goto label_1c78b0;
        case 0x1c78b4u: goto label_1c78b4;
        case 0x1c78b8u: goto label_1c78b8;
        case 0x1c78bcu: goto label_1c78bc;
        case 0x1c78c0u: goto label_1c78c0;
        case 0x1c78c4u: goto label_1c78c4;
        case 0x1c78c8u: goto label_1c78c8;
        case 0x1c78ccu: goto label_1c78cc;
        case 0x1c78d0u: goto label_1c78d0;
        case 0x1c78d4u: goto label_1c78d4;
        case 0x1c78d8u: goto label_1c78d8;
        case 0x1c78dcu: goto label_1c78dc;
        case 0x1c78e0u: goto label_1c78e0;
        case 0x1c78e4u: goto label_1c78e4;
        case 0x1c78e8u: goto label_1c78e8;
        case 0x1c78ecu: goto label_1c78ec;
        case 0x1c78f0u: goto label_1c78f0;
        case 0x1c78f4u: goto label_1c78f4;
        case 0x1c78f8u: goto label_1c78f8;
        case 0x1c78fcu: goto label_1c78fc;
        case 0x1c7900u: goto label_1c7900;
        case 0x1c7904u: goto label_1c7904;
        case 0x1c7908u: goto label_1c7908;
        case 0x1c790cu: goto label_1c790c;
        case 0x1c7910u: goto label_1c7910;
        case 0x1c7914u: goto label_1c7914;
        case 0x1c7918u: goto label_1c7918;
        case 0x1c791cu: goto label_1c791c;
        case 0x1c7920u: goto label_1c7920;
        case 0x1c7924u: goto label_1c7924;
        case 0x1c7928u: goto label_1c7928;
        case 0x1c792cu: goto label_1c792c;
        case 0x1c7930u: goto label_1c7930;
        case 0x1c7934u: goto label_1c7934;
        case 0x1c7938u: goto label_1c7938;
        case 0x1c793cu: goto label_1c793c;
        case 0x1c7940u: goto label_1c7940;
        case 0x1c7944u: goto label_1c7944;
        case 0x1c7948u: goto label_1c7948;
        case 0x1c794cu: goto label_1c794c;
        case 0x1c7950u: goto label_1c7950;
        case 0x1c7954u: goto label_1c7954;
        case 0x1c7958u: goto label_1c7958;
        case 0x1c795cu: goto label_1c795c;
        case 0x1c7960u: goto label_1c7960;
        case 0x1c7964u: goto label_1c7964;
        case 0x1c7968u: goto label_1c7968;
        case 0x1c796cu: goto label_1c796c;
        case 0x1c7970u: goto label_1c7970;
        case 0x1c7974u: goto label_1c7974;
        case 0x1c7978u: goto label_1c7978;
        case 0x1c797cu: goto label_1c797c;
        case 0x1c7980u: goto label_1c7980;
        case 0x1c7984u: goto label_1c7984;
        case 0x1c7988u: goto label_1c7988;
        case 0x1c798cu: goto label_1c798c;
        case 0x1c7990u: goto label_1c7990;
        case 0x1c7994u: goto label_1c7994;
        case 0x1c7998u: goto label_1c7998;
        case 0x1c799cu: goto label_1c799c;
        case 0x1c79a0u: goto label_1c79a0;
        case 0x1c79a4u: goto label_1c79a4;
        case 0x1c79a8u: goto label_1c79a8;
        case 0x1c79acu: goto label_1c79ac;
        case 0x1c79b0u: goto label_1c79b0;
        case 0x1c79b4u: goto label_1c79b4;
        case 0x1c79b8u: goto label_1c79b8;
        case 0x1c79bcu: goto label_1c79bc;
        case 0x1c79c0u: goto label_1c79c0;
        case 0x1c79c4u: goto label_1c79c4;
        case 0x1c79c8u: goto label_1c79c8;
        case 0x1c79ccu: goto label_1c79cc;
        case 0x1c79d0u: goto label_1c79d0;
        case 0x1c79d4u: goto label_1c79d4;
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79dcu: goto label_1c79dc;
        case 0x1c79e0u: goto label_1c79e0;
        case 0x1c79e4u: goto label_1c79e4;
        case 0x1c79e8u: goto label_1c79e8;
        case 0x1c79ecu: goto label_1c79ec;
        case 0x1c79f0u: goto label_1c79f0;
        case 0x1c79f4u: goto label_1c79f4;
        case 0x1c79f8u: goto label_1c79f8;
        case 0x1c79fcu: goto label_1c79fc;
        case 0x1c7a00u: goto label_1c7a00;
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a08u: goto label_1c7a08;
        case 0x1c7a0cu: goto label_1c7a0c;
        case 0x1c7a10u: goto label_1c7a10;
        case 0x1c7a14u: goto label_1c7a14;
        case 0x1c7a18u: goto label_1c7a18;
        case 0x1c7a1cu: goto label_1c7a1c;
        case 0x1c7a20u: goto label_1c7a20;
        case 0x1c7a24u: goto label_1c7a24;
        case 0x1c7a28u: goto label_1c7a28;
        case 0x1c7a2cu: goto label_1c7a2c;
        case 0x1c7a30u: goto label_1c7a30;
        case 0x1c7a34u: goto label_1c7a34;
        case 0x1c7a38u: goto label_1c7a38;
        case 0x1c7a3cu: goto label_1c7a3c;
        case 0x1c7a40u: goto label_1c7a40;
        case 0x1c7a44u: goto label_1c7a44;
        case 0x1c7a48u: goto label_1c7a48;
        case 0x1c7a4cu: goto label_1c7a4c;
        case 0x1c7a50u: goto label_1c7a50;
        case 0x1c7a54u: goto label_1c7a54;
        case 0x1c7a58u: goto label_1c7a58;
        case 0x1c7a5cu: goto label_1c7a5c;
        case 0x1c7a60u: goto label_1c7a60;
        case 0x1c7a64u: goto label_1c7a64;
        case 0x1c7a68u: goto label_1c7a68;
        case 0x1c7a6cu: goto label_1c7a6c;
        case 0x1c7a70u: goto label_1c7a70;
        case 0x1c7a74u: goto label_1c7a74;
        case 0x1c7a78u: goto label_1c7a78;
        case 0x1c7a7cu: goto label_1c7a7c;
        case 0x1c7a80u: goto label_1c7a80;
        case 0x1c7a84u: goto label_1c7a84;
        case 0x1c7a88u: goto label_1c7a88;
        case 0x1c7a8cu: goto label_1c7a8c;
        case 0x1c7a90u: goto label_1c7a90;
        case 0x1c7a94u: goto label_1c7a94;
        case 0x1c7a98u: goto label_1c7a98;
        case 0x1c7a9cu: goto label_1c7a9c;
        case 0x1c7aa0u: goto label_1c7aa0;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7aa8u: goto label_1c7aa8;
        case 0x1c7aacu: goto label_1c7aac;
        case 0x1c7ab0u: goto label_1c7ab0;
        case 0x1c7ab4u: goto label_1c7ab4;
        case 0x1c7ab8u: goto label_1c7ab8;
        case 0x1c7abcu: goto label_1c7abc;
        case 0x1c7ac0u: goto label_1c7ac0;
        case 0x1c7ac4u: goto label_1c7ac4;
        case 0x1c7ac8u: goto label_1c7ac8;
        case 0x1c7accu: goto label_1c7acc;
        case 0x1c7ad0u: goto label_1c7ad0;
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7ad8u: goto label_1c7ad8;
        case 0x1c7adcu: goto label_1c7adc;
        case 0x1c7ae0u: goto label_1c7ae0;
        case 0x1c7ae4u: goto label_1c7ae4;
        case 0x1c7ae8u: goto label_1c7ae8;
        case 0x1c7aecu: goto label_1c7aec;
        case 0x1c7af0u: goto label_1c7af0;
        case 0x1c7af4u: goto label_1c7af4;
        case 0x1c7af8u: goto label_1c7af8;
        case 0x1c7afcu: goto label_1c7afc;
        case 0x1c7b00u: goto label_1c7b00;
        case 0x1c7b04u: goto label_1c7b04;
        case 0x1c7b08u: goto label_1c7b08;
        case 0x1c7b0cu: goto label_1c7b0c;
        case 0x1c7b10u: goto label_1c7b10;
        case 0x1c7b14u: goto label_1c7b14;
        case 0x1c7b18u: goto label_1c7b18;
        case 0x1c7b1cu: goto label_1c7b1c;
        case 0x1c7b20u: goto label_1c7b20;
        case 0x1c7b24u: goto label_1c7b24;
        case 0x1c7b28u: goto label_1c7b28;
        case 0x1c7b2cu: goto label_1c7b2c;
        case 0x1c7b30u: goto label_1c7b30;
        case 0x1c7b34u: goto label_1c7b34;
        case 0x1c7b38u: goto label_1c7b38;
        case 0x1c7b3cu: goto label_1c7b3c;
        case 0x1c7b40u: goto label_1c7b40;
        case 0x1c7b44u: goto label_1c7b44;
        case 0x1c7b48u: goto label_1c7b48;
        case 0x1c7b4cu: goto label_1c7b4c;
        case 0x1c7b50u: goto label_1c7b50;
        case 0x1c7b54u: goto label_1c7b54;
        case 0x1c7b58u: goto label_1c7b58;
        case 0x1c7b5cu: goto label_1c7b5c;
        case 0x1c7b60u: goto label_1c7b60;
        case 0x1c7b64u: goto label_1c7b64;
        case 0x1c7b68u: goto label_1c7b68;
        case 0x1c7b6cu: goto label_1c7b6c;
        case 0x1c7b70u: goto label_1c7b70;
        case 0x1c7b74u: goto label_1c7b74;
        case 0x1c7b78u: goto label_1c7b78;
        case 0x1c7b7cu: goto label_1c7b7c;
        case 0x1c7b80u: goto label_1c7b80;
        case 0x1c7b84u: goto label_1c7b84;
        case 0x1c7b88u: goto label_1c7b88;
        case 0x1c7b8cu: goto label_1c7b8c;
        case 0x1c7b90u: goto label_1c7b90;
        case 0x1c7b94u: goto label_1c7b94;
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7b9cu: goto label_1c7b9c;
        case 0x1c7ba0u: goto label_1c7ba0;
        case 0x1c7ba4u: goto label_1c7ba4;
        case 0x1c7ba8u: goto label_1c7ba8;
        case 0x1c7bacu: goto label_1c7bac;
        case 0x1c7bb0u: goto label_1c7bb0;
        case 0x1c7bb4u: goto label_1c7bb4;
        case 0x1c7bb8u: goto label_1c7bb8;
        case 0x1c7bbcu: goto label_1c7bbc;
        case 0x1c7bc0u: goto label_1c7bc0;
        case 0x1c7bc4u: goto label_1c7bc4;
        case 0x1c7bc8u: goto label_1c7bc8;
        case 0x1c7bccu: goto label_1c7bcc;
        case 0x1c7bd0u: goto label_1c7bd0;
        case 0x1c7bd4u: goto label_1c7bd4;
        case 0x1c7bd8u: goto label_1c7bd8;
        case 0x1c7bdcu: goto label_1c7bdc;
        case 0x1c7be0u: goto label_1c7be0;
        case 0x1c7be4u: goto label_1c7be4;
        case 0x1c7be8u: goto label_1c7be8;
        case 0x1c7becu: goto label_1c7bec;
        case 0x1c7bf0u: goto label_1c7bf0;
        case 0x1c7bf4u: goto label_1c7bf4;
        case 0x1c7bf8u: goto label_1c7bf8;
        case 0x1c7bfcu: goto label_1c7bfc;
        case 0x1c7c00u: goto label_1c7c00;
        case 0x1c7c04u: goto label_1c7c04;
        case 0x1c7c08u: goto label_1c7c08;
        case 0x1c7c0cu: goto label_1c7c0c;
        case 0x1c7c10u: goto label_1c7c10;
        case 0x1c7c14u: goto label_1c7c14;
        case 0x1c7c18u: goto label_1c7c18;
        case 0x1c7c1cu: goto label_1c7c1c;
        case 0x1c7c20u: goto label_1c7c20;
        case 0x1c7c24u: goto label_1c7c24;
        case 0x1c7c28u: goto label_1c7c28;
        case 0x1c7c2cu: goto label_1c7c2c;
        case 0x1c7c30u: goto label_1c7c30;
        case 0x1c7c34u: goto label_1c7c34;
        case 0x1c7c38u: goto label_1c7c38;
        case 0x1c7c3cu: goto label_1c7c3c;
        case 0x1c7c40u: goto label_1c7c40;
        case 0x1c7c44u: goto label_1c7c44;
        case 0x1c7c48u: goto label_1c7c48;
        case 0x1c7c4cu: goto label_1c7c4c;
        case 0x1c7c50u: goto label_1c7c50;
        case 0x1c7c54u: goto label_1c7c54;
        case 0x1c7c58u: goto label_1c7c58;
        case 0x1c7c5cu: goto label_1c7c5c;
        case 0x1c7c60u: goto label_1c7c60;
        case 0x1c7c64u: goto label_1c7c64;
        case 0x1c7c68u: goto label_1c7c68;
        case 0x1c7c6cu: goto label_1c7c6c;
        case 0x1c7c70u: goto label_1c7c70;
        case 0x1c7c74u: goto label_1c7c74;
        case 0x1c7c78u: goto label_1c7c78;
        case 0x1c7c7cu: goto label_1c7c7c;
        case 0x1c7c80u: goto label_1c7c80;
        case 0x1c7c84u: goto label_1c7c84;
        case 0x1c7c88u: goto label_1c7c88;
        case 0x1c7c8cu: goto label_1c7c8c;
        case 0x1c7c90u: goto label_1c7c90;
        case 0x1c7c94u: goto label_1c7c94;
        case 0x1c7c98u: goto label_1c7c98;
        case 0x1c7c9cu: goto label_1c7c9c;
        case 0x1c7ca0u: goto label_1c7ca0;
        case 0x1c7ca4u: goto label_1c7ca4;
        case 0x1c7ca8u: goto label_1c7ca8;
        case 0x1c7cacu: goto label_1c7cac;
        case 0x1c7cb0u: goto label_1c7cb0;
        case 0x1c7cb4u: goto label_1c7cb4;
        case 0x1c7cb8u: goto label_1c7cb8;
        case 0x1c7cbcu: goto label_1c7cbc;
        case 0x1c7cc0u: goto label_1c7cc0;
        case 0x1c7cc4u: goto label_1c7cc4;
        case 0x1c7cc8u: goto label_1c7cc8;
        case 0x1c7cccu: goto label_1c7ccc;
        case 0x1c7cd0u: goto label_1c7cd0;
        case 0x1c7cd4u: goto label_1c7cd4;
        case 0x1c7cd8u: goto label_1c7cd8;
        case 0x1c7cdcu: goto label_1c7cdc;
        case 0x1c7ce0u: goto label_1c7ce0;
        case 0x1c7ce4u: goto label_1c7ce4;
        case 0x1c7ce8u: goto label_1c7ce8;
        case 0x1c7cecu: goto label_1c7cec;
        case 0x1c7cf0u: goto label_1c7cf0;
        case 0x1c7cf4u: goto label_1c7cf4;
        case 0x1c7cf8u: goto label_1c7cf8;
        case 0x1c7cfcu: goto label_1c7cfc;
        case 0x1c7d00u: goto label_1c7d00;
        case 0x1c7d04u: goto label_1c7d04;
        case 0x1c7d08u: goto label_1c7d08;
        case 0x1c7d0cu: goto label_1c7d0c;
        case 0x1c7d10u: goto label_1c7d10;
        case 0x1c7d14u: goto label_1c7d14;
        case 0x1c7d18u: goto label_1c7d18;
        case 0x1c7d1cu: goto label_1c7d1c;
        case 0x1c7d20u: goto label_1c7d20;
        case 0x1c7d24u: goto label_1c7d24;
        case 0x1c7d28u: goto label_1c7d28;
        case 0x1c7d2cu: goto label_1c7d2c;
        case 0x1c7d30u: goto label_1c7d30;
        case 0x1c7d34u: goto label_1c7d34;
        case 0x1c7d38u: goto label_1c7d38;
        case 0x1c7d3cu: goto label_1c7d3c;
        case 0x1c7d40u: goto label_1c7d40;
        case 0x1c7d44u: goto label_1c7d44;
        case 0x1c7d48u: goto label_1c7d48;
        case 0x1c7d4cu: goto label_1c7d4c;
        case 0x1c7d50u: goto label_1c7d50;
        case 0x1c7d54u: goto label_1c7d54;
        case 0x1c7d58u: goto label_1c7d58;
        case 0x1c7d5cu: goto label_1c7d5c;
        case 0x1c7d60u: goto label_1c7d60;
        case 0x1c7d64u: goto label_1c7d64;
        case 0x1c7d68u: goto label_1c7d68;
        case 0x1c7d6cu: goto label_1c7d6c;
        case 0x1c7d70u: goto label_1c7d70;
        case 0x1c7d74u: goto label_1c7d74;
        case 0x1c7d78u: goto label_1c7d78;
        case 0x1c7d7cu: goto label_1c7d7c;
        case 0x1c7d80u: goto label_1c7d80;
        case 0x1c7d84u: goto label_1c7d84;
        case 0x1c7d88u: goto label_1c7d88;
        case 0x1c7d8cu: goto label_1c7d8c;
        case 0x1c7d90u: goto label_1c7d90;
        case 0x1c7d94u: goto label_1c7d94;
        case 0x1c7d98u: goto label_1c7d98;
        case 0x1c7d9cu: goto label_1c7d9c;
        case 0x1c7da0u: goto label_1c7da0;
        case 0x1c7da4u: goto label_1c7da4;
        case 0x1c7da8u: goto label_1c7da8;
        case 0x1c7dacu: goto label_1c7dac;
        case 0x1c7db0u: goto label_1c7db0;
        case 0x1c7db4u: goto label_1c7db4;
        case 0x1c7db8u: goto label_1c7db8;
        case 0x1c7dbcu: goto label_1c7dbc;
        case 0x1c7dc0u: goto label_1c7dc0;
        case 0x1c7dc4u: goto label_1c7dc4;
        case 0x1c7dc8u: goto label_1c7dc8;
        case 0x1c7dccu: goto label_1c7dcc;
        case 0x1c7dd0u: goto label_1c7dd0;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7dd8u: goto label_1c7dd8;
        case 0x1c7ddcu: goto label_1c7ddc;
        case 0x1c7de0u: goto label_1c7de0;
        case 0x1c7de4u: goto label_1c7de4;
        case 0x1c7de8u: goto label_1c7de8;
        case 0x1c7decu: goto label_1c7dec;
        case 0x1c7df0u: goto label_1c7df0;
        case 0x1c7df4u: goto label_1c7df4;
        case 0x1c7df8u: goto label_1c7df8;
        case 0x1c7dfcu: goto label_1c7dfc;
        case 0x1c7e00u: goto label_1c7e00;
        case 0x1c7e04u: goto label_1c7e04;
        case 0x1c7e08u: goto label_1c7e08;
        case 0x1c7e0cu: goto label_1c7e0c;
        case 0x1c7e10u: goto label_1c7e10;
        case 0x1c7e14u: goto label_1c7e14;
        case 0x1c7e18u: goto label_1c7e18;
        case 0x1c7e1cu: goto label_1c7e1c;
        case 0x1c7e20u: goto label_1c7e20;
        case 0x1c7e24u: goto label_1c7e24;
        case 0x1c7e28u: goto label_1c7e28;
        case 0x1c7e2cu: goto label_1c7e2c;
        case 0x1c7e30u: goto label_1c7e30;
        case 0x1c7e34u: goto label_1c7e34;
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7e3cu: goto label_1c7e3c;
        case 0x1c7e40u: goto label_1c7e40;
        case 0x1c7e44u: goto label_1c7e44;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e4cu: goto label_1c7e4c;
        case 0x1c7e50u: goto label_1c7e50;
        case 0x1c7e54u: goto label_1c7e54;
        case 0x1c7e58u: goto label_1c7e58;
        case 0x1c7e5cu: goto label_1c7e5c;
        case 0x1c7e60u: goto label_1c7e60;
        case 0x1c7e64u: goto label_1c7e64;
        case 0x1c7e68u: goto label_1c7e68;
        case 0x1c7e6cu: goto label_1c7e6c;
        case 0x1c7e70u: goto label_1c7e70;
        case 0x1c7e74u: goto label_1c7e74;
        case 0x1c7e78u: goto label_1c7e78;
        case 0x1c7e7cu: goto label_1c7e7c;
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e84u: goto label_1c7e84;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e8cu: goto label_1c7e8c;
        case 0x1c7e90u: goto label_1c7e90;
        case 0x1c7e94u: goto label_1c7e94;
        case 0x1c7e98u: goto label_1c7e98;
        case 0x1c7e9cu: goto label_1c7e9c;
        case 0x1c7ea0u: goto label_1c7ea0;
        case 0x1c7ea4u: goto label_1c7ea4;
        case 0x1c7ea8u: goto label_1c7ea8;
        case 0x1c7eacu: goto label_1c7eac;
        case 0x1c7eb0u: goto label_1c7eb0;
        case 0x1c7eb4u: goto label_1c7eb4;
        case 0x1c7eb8u: goto label_1c7eb8;
        case 0x1c7ebcu: goto label_1c7ebc;
        case 0x1c7ec0u: goto label_1c7ec0;
        case 0x1c7ec4u: goto label_1c7ec4;
        case 0x1c7ec8u: goto label_1c7ec8;
        case 0x1c7eccu: goto label_1c7ecc;
        case 0x1c7ed0u: goto label_1c7ed0;
        case 0x1c7ed4u: goto label_1c7ed4;
        case 0x1c7ed8u: goto label_1c7ed8;
        case 0x1c7edcu: goto label_1c7edc;
        case 0x1c7ee0u: goto label_1c7ee0;
        case 0x1c7ee4u: goto label_1c7ee4;
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7eecu: goto label_1c7eec;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7ef4u: goto label_1c7ef4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f00u: goto label_1c7f00;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f08u: goto label_1c7f08;
        case 0x1c7f0cu: goto label_1c7f0c;
        case 0x1c7f10u: goto label_1c7f10;
        case 0x1c7f14u: goto label_1c7f14;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f1cu: goto label_1c7f1c;
        case 0x1c7f20u: goto label_1c7f20;
        case 0x1c7f24u: goto label_1c7f24;
        case 0x1c7f28u: goto label_1c7f28;
        case 0x1c7f2cu: goto label_1c7f2c;
        case 0x1c7f30u: goto label_1c7f30;
        case 0x1c7f34u: goto label_1c7f34;
        case 0x1c7f38u: goto label_1c7f38;
        case 0x1c7f3cu: goto label_1c7f3c;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f44u: goto label_1c7f44;
        case 0x1c7f48u: goto label_1c7f48;
        case 0x1c7f4cu: goto label_1c7f4c;
        case 0x1c7f50u: goto label_1c7f50;
        case 0x1c7f54u: goto label_1c7f54;
        case 0x1c7f58u: goto label_1c7f58;
        case 0x1c7f5cu: goto label_1c7f5c;
        case 0x1c7f60u: goto label_1c7f60;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f68u: goto label_1c7f68;
        case 0x1c7f6cu: goto label_1c7f6c;
        case 0x1c7f70u: goto label_1c7f70;
        case 0x1c7f74u: goto label_1c7f74;
        case 0x1c7f78u: goto label_1c7f78;
        case 0x1c7f7cu: goto label_1c7f7c;
        case 0x1c7f80u: goto label_1c7f80;
        case 0x1c7f84u: goto label_1c7f84;
        case 0x1c7f88u: goto label_1c7f88;
        case 0x1c7f8cu: goto label_1c7f8c;
        case 0x1c7f90u: goto label_1c7f90;
        case 0x1c7f94u: goto label_1c7f94;
        case 0x1c7f98u: goto label_1c7f98;
        case 0x1c7f9cu: goto label_1c7f9c;
        case 0x1c7fa0u: goto label_1c7fa0;
        case 0x1c7fa4u: goto label_1c7fa4;
        case 0x1c7fa8u: goto label_1c7fa8;
        case 0x1c7facu: goto label_1c7fac;
        case 0x1c7fb0u: goto label_1c7fb0;
        case 0x1c7fb4u: goto label_1c7fb4;
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fbcu: goto label_1c7fbc;
        case 0x1c7fc0u: goto label_1c7fc0;
        case 0x1c7fc4u: goto label_1c7fc4;
        case 0x1c7fc8u: goto label_1c7fc8;
        case 0x1c7fccu: goto label_1c7fcc;
        case 0x1c7fd0u: goto label_1c7fd0;
        case 0x1c7fd4u: goto label_1c7fd4;
        case 0x1c7fd8u: goto label_1c7fd8;
        case 0x1c7fdcu: goto label_1c7fdc;
        case 0x1c7fe0u: goto label_1c7fe0;
        case 0x1c7fe4u: goto label_1c7fe4;
        case 0x1c7fe8u: goto label_1c7fe8;
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c7ff0u: goto label_1c7ff0;
        case 0x1c7ff4u: goto label_1c7ff4;
        case 0x1c7ff8u: goto label_1c7ff8;
        case 0x1c7ffcu: goto label_1c7ffc;
        case 0x1c8000u: goto label_1c8000;
        case 0x1c8004u: goto label_1c8004;
        case 0x1c8008u: goto label_1c8008;
        case 0x1c800cu: goto label_1c800c;
        case 0x1c8010u: goto label_1c8010;
        case 0x1c8014u: goto label_1c8014;
        case 0x1c8018u: goto label_1c8018;
        case 0x1c801cu: goto label_1c801c;
        case 0x1c8020u: goto label_1c8020;
        case 0x1c8024u: goto label_1c8024;
        case 0x1c8028u: goto label_1c8028;
        case 0x1c802cu: goto label_1c802c;
        case 0x1c8030u: goto label_1c8030;
        case 0x1c8034u: goto label_1c8034;
        case 0x1c8038u: goto label_1c8038;
        case 0x1c803cu: goto label_1c803c;
        case 0x1c8040u: goto label_1c8040;
        case 0x1c8044u: goto label_1c8044;
        case 0x1c8048u: goto label_1c8048;
        case 0x1c804cu: goto label_1c804c;
        case 0x1c8050u: goto label_1c8050;
        case 0x1c8054u: goto label_1c8054;
        case 0x1c8058u: goto label_1c8058;
        case 0x1c805cu: goto label_1c805c;
        case 0x1c8060u: goto label_1c8060;
        case 0x1c8064u: goto label_1c8064;
        case 0x1c8068u: goto label_1c8068;
        case 0x1c806cu: goto label_1c806c;
        case 0x1c8070u: goto label_1c8070;
        case 0x1c8074u: goto label_1c8074;
        case 0x1c8078u: goto label_1c8078;
        case 0x1c807cu: goto label_1c807c;
        case 0x1c8080u: goto label_1c8080;
        case 0x1c8084u: goto label_1c8084;
        case 0x1c8088u: goto label_1c8088;
        case 0x1c808cu: goto label_1c808c;
        case 0x1c8090u: goto label_1c8090;
        case 0x1c8094u: goto label_1c8094;
        case 0x1c8098u: goto label_1c8098;
        case 0x1c809cu: goto label_1c809c;
        case 0x1c80a0u: goto label_1c80a0;
        case 0x1c80a4u: goto label_1c80a4;
        case 0x1c80a8u: goto label_1c80a8;
        case 0x1c80acu: goto label_1c80ac;
        case 0x1c80b0u: goto label_1c80b0;
        case 0x1c80b4u: goto label_1c80b4;
        case 0x1c80b8u: goto label_1c80b8;
        case 0x1c80bcu: goto label_1c80bc;
        case 0x1c80c0u: goto label_1c80c0;
        case 0x1c80c4u: goto label_1c80c4;
        case 0x1c80c8u: goto label_1c80c8;
        case 0x1c80ccu: goto label_1c80cc;
        case 0x1c80d0u: goto label_1c80d0;
        case 0x1c80d4u: goto label_1c80d4;
        case 0x1c80d8u: goto label_1c80d8;
        case 0x1c80dcu: goto label_1c80dc;
        case 0x1c80e0u: goto label_1c80e0;
        case 0x1c80e4u: goto label_1c80e4;
        case 0x1c80e8u: goto label_1c80e8;
        case 0x1c80ecu: goto label_1c80ec;
        case 0x1c80f0u: goto label_1c80f0;
        case 0x1c80f4u: goto label_1c80f4;
        case 0x1c80f8u: goto label_1c80f8;
        case 0x1c80fcu: goto label_1c80fc;
        case 0x1c8100u: goto label_1c8100;
        case 0x1c8104u: goto label_1c8104;
        case 0x1c8108u: goto label_1c8108;
        case 0x1c810cu: goto label_1c810c;
        case 0x1c8110u: goto label_1c8110;
        case 0x1c8114u: goto label_1c8114;
        case 0x1c8118u: goto label_1c8118;
        case 0x1c811cu: goto label_1c811c;
        case 0x1c8120u: goto label_1c8120;
        case 0x1c8124u: goto label_1c8124;
        case 0x1c8128u: goto label_1c8128;
        case 0x1c812cu: goto label_1c812c;
        case 0x1c8130u: goto label_1c8130;
        case 0x1c8134u: goto label_1c8134;
        case 0x1c8138u: goto label_1c8138;
        case 0x1c813cu: goto label_1c813c;
        case 0x1c8140u: goto label_1c8140;
        case 0x1c8144u: goto label_1c8144;
        case 0x1c8148u: goto label_1c8148;
        case 0x1c814cu: goto label_1c814c;
        case 0x1c8150u: goto label_1c8150;
        case 0x1c8154u: goto label_1c8154;
        case 0x1c8158u: goto label_1c8158;
        case 0x1c815cu: goto label_1c815c;
        case 0x1c8160u: goto label_1c8160;
        case 0x1c8164u: goto label_1c8164;
        case 0x1c8168u: goto label_1c8168;
        case 0x1c816cu: goto label_1c816c;
        case 0x1c8170u: goto label_1c8170;
        case 0x1c8174u: goto label_1c8174;
        case 0x1c8178u: goto label_1c8178;
        case 0x1c817cu: goto label_1c817c;
        case 0x1c8180u: goto label_1c8180;
        case 0x1c8184u: goto label_1c8184;
        case 0x1c8188u: goto label_1c8188;
        case 0x1c818cu: goto label_1c818c;
        case 0x1c8190u: goto label_1c8190;
        case 0x1c8194u: goto label_1c8194;
        case 0x1c8198u: goto label_1c8198;
        case 0x1c819cu: goto label_1c819c;
        case 0x1c81a0u: goto label_1c81a0;
        case 0x1c81a4u: goto label_1c81a4;
        case 0x1c81a8u: goto label_1c81a8;
        case 0x1c81acu: goto label_1c81ac;
        case 0x1c81b0u: goto label_1c81b0;
        case 0x1c81b4u: goto label_1c81b4;
        case 0x1c81b8u: goto label_1c81b8;
        case 0x1c81bcu: goto label_1c81bc;
        case 0x1c81c0u: goto label_1c81c0;
        case 0x1c81c4u: goto label_1c81c4;
        case 0x1c81c8u: goto label_1c81c8;
        case 0x1c81ccu: goto label_1c81cc;
        case 0x1c81d0u: goto label_1c81d0;
        case 0x1c81d4u: goto label_1c81d4;
        case 0x1c81d8u: goto label_1c81d8;
        case 0x1c81dcu: goto label_1c81dc;
        case 0x1c81e0u: goto label_1c81e0;
        case 0x1c81e4u: goto label_1c81e4;
        case 0x1c81e8u: goto label_1c81e8;
        case 0x1c81ecu: goto label_1c81ec;
        case 0x1c81f0u: goto label_1c81f0;
        case 0x1c81f4u: goto label_1c81f4;
        case 0x1c81f8u: goto label_1c81f8;
        case 0x1c81fcu: goto label_1c81fc;
        case 0x1c8200u: goto label_1c8200;
        case 0x1c8204u: goto label_1c8204;
        case 0x1c8208u: goto label_1c8208;
        case 0x1c820cu: goto label_1c820c;
        case 0x1c8210u: goto label_1c8210;
        case 0x1c8214u: goto label_1c8214;
        case 0x1c8218u: goto label_1c8218;
        case 0x1c821cu: goto label_1c821c;
        case 0x1c8220u: goto label_1c8220;
        case 0x1c8224u: goto label_1c8224;
        case 0x1c8228u: goto label_1c8228;
        case 0x1c822cu: goto label_1c822c;
        case 0x1c8230u: goto label_1c8230;
        case 0x1c8234u: goto label_1c8234;
        case 0x1c8238u: goto label_1c8238;
        case 0x1c823cu: goto label_1c823c;
        case 0x1c8240u: goto label_1c8240;
        case 0x1c8244u: goto label_1c8244;
        case 0x1c8248u: goto label_1c8248;
        case 0x1c824cu: goto label_1c824c;
        case 0x1c8250u: goto label_1c8250;
        case 0x1c8254u: goto label_1c8254;
        case 0x1c8258u: goto label_1c8258;
        case 0x1c825cu: goto label_1c825c;
        case 0x1c8260u: goto label_1c8260;
        case 0x1c8264u: goto label_1c8264;
        case 0x1c8268u: goto label_1c8268;
        case 0x1c826cu: goto label_1c826c;
        case 0x1c8270u: goto label_1c8270;
        case 0x1c8274u: goto label_1c8274;
        case 0x1c8278u: goto label_1c8278;
        case 0x1c827cu: goto label_1c827c;
        case 0x1c8280u: goto label_1c8280;
        case 0x1c8284u: goto label_1c8284;
        case 0x1c8288u: goto label_1c8288;
        case 0x1c828cu: goto label_1c828c;
        case 0x1c8290u: goto label_1c8290;
        case 0x1c8294u: goto label_1c8294;
        case 0x1c8298u: goto label_1c8298;
        case 0x1c829cu: goto label_1c829c;
        case 0x1c82a0u: goto label_1c82a0;
        case 0x1c82a4u: goto label_1c82a4;
        case 0x1c82a8u: goto label_1c82a8;
        case 0x1c82acu: goto label_1c82ac;
        case 0x1c82b0u: goto label_1c82b0;
        case 0x1c82b4u: goto label_1c82b4;
        case 0x1c82b8u: goto label_1c82b8;
        case 0x1c82bcu: goto label_1c82bc;
        case 0x1c82c0u: goto label_1c82c0;
        case 0x1c82c4u: goto label_1c82c4;
        case 0x1c82c8u: goto label_1c82c8;
        case 0x1c82ccu: goto label_1c82cc;
        case 0x1c82d0u: goto label_1c82d0;
        case 0x1c82d4u: goto label_1c82d4;
        case 0x1c82d8u: goto label_1c82d8;
        case 0x1c82dcu: goto label_1c82dc;
        case 0x1c82e0u: goto label_1c82e0;
        case 0x1c82e4u: goto label_1c82e4;
        case 0x1c82e8u: goto label_1c82e8;
        case 0x1c82ecu: goto label_1c82ec;
        case 0x1c82f0u: goto label_1c82f0;
        case 0x1c82f4u: goto label_1c82f4;
        case 0x1c82f8u: goto label_1c82f8;
        case 0x1c82fcu: goto label_1c82fc;
        case 0x1c8300u: goto label_1c8300;
        case 0x1c8304u: goto label_1c8304;
        case 0x1c8308u: goto label_1c8308;
        case 0x1c830cu: goto label_1c830c;
        case 0x1c8310u: goto label_1c8310;
        case 0x1c8314u: goto label_1c8314;
        case 0x1c8318u: goto label_1c8318;
        case 0x1c831cu: goto label_1c831c;
        case 0x1c8320u: goto label_1c8320;
        case 0x1c8324u: goto label_1c8324;
        case 0x1c8328u: goto label_1c8328;
        case 0x1c832cu: goto label_1c832c;
        case 0x1c8330u: goto label_1c8330;
        case 0x1c8334u: goto label_1c8334;
        case 0x1c8338u: goto label_1c8338;
        case 0x1c833cu: goto label_1c833c;
        case 0x1c8340u: goto label_1c8340;
        case 0x1c8344u: goto label_1c8344;
        case 0x1c8348u: goto label_1c8348;
        case 0x1c834cu: goto label_1c834c;
        case 0x1c8350u: goto label_1c8350;
        case 0x1c8354u: goto label_1c8354;
        case 0x1c8358u: goto label_1c8358;
        case 0x1c835cu: goto label_1c835c;
        case 0x1c8360u: goto label_1c8360;
        case 0x1c8364u: goto label_1c8364;
        case 0x1c8368u: goto label_1c8368;
        case 0x1c836cu: goto label_1c836c;
        case 0x1c8370u: goto label_1c8370;
        case 0x1c8374u: goto label_1c8374;
        case 0x1c8378u: goto label_1c8378;
        default: break;
    }

    ctx->pc = 0x1c69e0u;

label_1c69e0:
    // 0x1c69e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c69e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c69e4:
    // 0x1c69e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1c69e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1c69e8:
    // 0x1c69e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c69e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c69ec:
    // 0x1c69ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c69ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c69f0:
    // 0x1c69f0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1c69f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1c69f4:
    // 0x1c69f4: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1c69f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_1c69f8:
    // 0x1c69f8: 0x24a40080  addiu       $a0, $a1, 0x80
    ctx->pc = 0x1c69f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c69fc:
    // 0x1c69fc: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1c69fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1c6a00:
    // 0x1c6a00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c6a04:
    // 0x1c6a04: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1c6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1c6a08:
    // 0x1c6a08: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x1c6a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1c6a0c:
    // 0x1c6a0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c6a10:
    // 0x1c6a10: 0xac241a64  sw          $a0, 0x1A64($at)
    ctx->pc = 0x1c6a10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 4));
label_1c6a14:
    // 0x1c6a14: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6a18:
    // 0x1c6a18: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1c6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
label_1c6a1c:
    // 0x1c6a1c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1c6a20:
    if (ctx->pc == 0x1C6A20u) {
        ctx->pc = 0x1C6A24u;
        goto label_1c6a24;
    }
    ctx->pc = 0x1C6A1Cu;
    {
        const bool branch_taken_0x1c6a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a1c) {
            ctx->pc = 0x1C6A44u;
            goto label_1c6a44;
        }
    }
    ctx->pc = 0x1C6A24u;
label_1c6a24:
    // 0x1c6a24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c6a28:
    // 0x1c6a28: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1c6a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c6a2c:
    // 0x1c6a2c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1c6a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_1c6a30:
    // 0x1c6a30: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c6a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c6a34:
    // 0x1c6a34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c6a38:
    // 0x1c6a38: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1c6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 5));
label_1c6a3c:
    // 0x1c6a3c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6a40:
    // 0x1c6a40: 0xa0c01921  sb          $zero, 0x1921($a2)
    ctx->pc = 0x1c6a40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6433), (uint8_t)GPR_U32(ctx, 0));
label_1c6a44:
    // 0x1c6a44: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c6a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6a48:
    // 0x1c6a48: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x1c6a48u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1c6a4c:
    // 0x1c6a4c: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x1c6a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1c6a50:
    // 0x1c6a50: 0x2c610012  sltiu       $at, $v1, 0x12
    ctx->pc = 0x1c6a50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_1c6a54:
    // 0x1c6a54: 0x10200643  beqz        $at, . + 4 + (0x643 << 2)
label_1c6a58:
    if (ctx->pc == 0x1C6A58u) {
        ctx->pc = 0x1C6A5Cu;
        goto label_1c6a5c;
    }
    ctx->pc = 0x1C6A54u;
    {
        const bool branch_taken_0x1c6a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a54) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6A5Cu;
label_1c6a5c:
    // 0x1c6a5c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1c6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_1c6a60:
    // 0x1c6a60: 0x24a4f3f0  addiu       $a0, $a1, -0xC10
    ctx->pc = 0x1c6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964208));
label_1c6a64:
    // 0x1c6a64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c6a68:
    // 0x1c6a68: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c6a6c:
    // 0x1c6a6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c6a70:
    // 0x1c6a70: 0x600008  jr          $v1
label_1c6a74:
    if (ctx->pc == 0x1C6A74u) {
        ctx->pc = 0x1C6A78u;
        goto label_1c6a78;
    }
    ctx->pc = 0x1C6A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C6A78u;
label_1c6a78:
    // 0x1c6a78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6a7c:
    // 0x1c6a7c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1c6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c6a80:
    // 0x1c6a80: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1c6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_1c6a84:
    // 0x1c6a84: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1c6a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c6a88:
    // 0x1c6a88: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1c6a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1c6a8c:
    // 0x1c6a8c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1c6a90:
    // 0x1c6a90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6a94:
    // 0x1c6a94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6a98:
    // 0x1c6a98: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c6a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c6a9c:
    // 0x1c6a9c: 0x24060a32  addiu       $a2, $zero, 0xA32
    ctx->pc = 0x1c6a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2610));
label_1c6aa0:
    // 0x1c6aa0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c6aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c6aa4:
    // 0x1c6aa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c6aa8:
    // 0x1c6aa8: 0xc0965d0  jal         func_259740
label_1c6aac:
    if (ctx->pc == 0x1C6AACu) {
        ctx->pc = 0x1C6AB0u;
        goto label_1c6ab0;
    }
    ctx->pc = 0x1C6AA8u;
    SET_GPR_U32(ctx, 31, 0x1C6AB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C6AA8u, 0x1C6AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AB0u;
label_1c6ab0:
    // 0x1c6ab0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c6ab0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c6ab4:
    // 0x1c6ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ab8:
    // 0x1c6ab8: 0xa0601576  sb          $zero, 0x1576($v1)
    ctx->pc = 0x1c6ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 0));
label_1c6abc:
    // 0x1c6abc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c6ac0:
    // 0x1c6ac0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ac4:
    // 0x1c6ac4: 0xa0641577  sb          $a0, 0x1577($v1)
    ctx->pc = 0x1c6ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5495), (uint8_t)GPR_U32(ctx, 4));
label_1c6ac8:
    // 0x1c6ac8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c6ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c6acc:
    // 0x1c6acc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ad0:
    // 0x1c6ad0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c6ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1c6ad4:
    // 0x1c6ad4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ad8:
    // 0x1c6ad8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1c6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_1c6adc:
    // 0x1c6adc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ae0:
    // 0x1c6ae0: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1c6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
label_1c6ae4:
    // 0x1c6ae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ae8:
    // 0x1c6ae8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c6ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c6aec:
    // 0x1c6aec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c6af0:
    // 0x1c6af0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c6af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c6af4:
    // 0x1c6af4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6af8:
    // 0x1c6af8: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x1c6af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1c6afc:
    // 0x1c6afc: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_1c6b00:
    if (ctx->pc == 0x1C6B00u) {
        ctx->pc = 0x1C6B04u;
        goto label_1c6b04;
    }
    ctx->pc = 0x1C6AFCu;
    {
        const bool branch_taken_0x1c6afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6afc) {
            ctx->pc = 0x1C6B74u;
            goto label_1c6b74;
        }
    }
    ctx->pc = 0x1C6B04u;
label_1c6b04:
    // 0x1c6b04: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b08:
    // 0x1c6b08: 0x84c51278  lh          $a1, 0x1278($a2)
    ctx->pc = 0x1c6b08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_1c6b0c:
    // 0x1c6b0c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1c6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1c6b10:
    // 0x1c6b10: 0xa4c31278  sh          $v1, 0x1278($a2)
    ctx->pc = 0x1c6b10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1c6b14:
    // 0x1c6b14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b18:
    // 0x1c6b18: 0x8c7013e8  lw          $s0, 0x13E8($v1)
    ctx->pc = 0x1c6b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c6b1c:
    // 0x1c6b1c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1c6b20:
    if (ctx->pc == 0x1C6B20u) {
        ctx->pc = 0x1C6B24u;
        goto label_1c6b24;
    }
    ctx->pc = 0x1C6B1Cu;
    {
        const bool branch_taken_0x1c6b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b1c) {
            ctx->pc = 0x1C6B74u;
            goto label_1c6b74;
        }
    }
    ctx->pc = 0x1C6B24u;
label_1c6b24:
    // 0x1c6b24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b28:
    // 0x1c6b28: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b2c:
    // 0x1c6b2c: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1c6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
label_1c6b30:
    // 0x1c6b30: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1c6b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1c6b34:
    // 0x1c6b34: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c6b38:
    // 0x1c6b38: 0xc05ccfc  jal         func_1733F0
label_1c6b3c:
    if (ctx->pc == 0x1C6B3Cu) {
        ctx->pc = 0x1C6B40u;
        goto label_1c6b40;
    }
    ctx->pc = 0x1C6B38u;
    SET_GPR_U32(ctx, 31, 0x1C6B40u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C6B38u, 0x1C6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B40u;
label_1c6b40:
    // 0x1c6b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b44:
    // 0x1c6b44: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c6b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1c6b48:
    // 0x1c6b48: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1c6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
label_1c6b4c:
    // 0x1c6b4c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1c6b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1c6b50:
    // 0x1c6b50: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x1c6b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c6b54:
    // 0x1c6b54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b58:
    // 0x1c6b58: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b5c:
    // 0x1c6b5c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1c6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6b60:
    // 0x1c6b60: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x1c6b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c6b64:
    // 0x1c6b64: 0xc058f50  jal         func_163D40
label_1c6b68:
    if (ctx->pc == 0x1C6B68u) {
        ctx->pc = 0x1C6B6Cu;
        goto label_1c6b6c;
    }
    ctx->pc = 0x1C6B64u;
    SET_GPR_U32(ctx, 31, 0x1C6B6Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C6B64u, 0x1C6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B6Cu;
label_1c6b6c:
    // 0x1c6b6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b70:
    // 0x1c6b70: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c6b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1c6b74:
    // 0x1c6b74: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b78:
    // 0x1c6b78: 0x90a609db  lbu         $a2, 0x9DB($a1)
    ctx->pc = 0x1c6b78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
label_1c6b7c:
    // 0x1c6b7c: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1c6b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1c6b80:
    // 0x1c6b80: 0x30e80020  andi        $t0, $a3, 0x20
    ctx->pc = 0x1c6b80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
label_1c6b84:
    // 0x1c6b84: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_1c6b88:
    if (ctx->pc == 0x1C6B88u) {
        ctx->pc = 0x1C6B8Cu;
        goto label_1c6b8c;
    }
    ctx->pc = 0x1C6B84u;
    {
        const bool branch_taken_0x1c6b84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b84) {
            ctx->pc = 0x1C6B98u;
            goto label_1c6b98;
        }
    }
    ctx->pc = 0x1C6B8Cu;
label_1c6b8c:
    // 0x1c6b8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6b90:
    // 0x1c6b90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b94:
    // 0x1c6b94: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1c6b94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1c6b98:
    // 0x1c6b98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6b9c:
    // 0x1c6b9c: 0x908309da  lbu         $v1, 0x9DA($a0)
    ctx->pc = 0x1c6b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
label_1c6ba0:
    // 0x1c6ba0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1c6ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c6ba4:
    // 0x1c6ba4: 0x30a6003f  andi        $a2, $a1, 0x3F
    ctx->pc = 0x1c6ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_1c6ba8:
    // 0x1c6ba8: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x1c6ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1c6bac:
    // 0x1c6bac: 0x14c70015  bne         $a2, $a3, . + 4 + (0x15 << 2)
label_1c6bb0:
    if (ctx->pc == 0x1C6BB0u) {
        ctx->pc = 0x1C6BB4u;
        goto label_1c6bb4;
    }
    ctx->pc = 0x1C6BACu;
    {
        const bool branch_taken_0x1c6bac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x1c6bac) {
            ctx->pc = 0x1C6C04u;
            goto label_1c6c04;
        }
    }
    ctx->pc = 0x1C6BB4u;
label_1c6bb4:
    // 0x1c6bb4: 0xc067694  jal         func_19DA50
label_1c6bb8:
    if (ctx->pc == 0x1C6BB8u) {
        ctx->pc = 0x1C6BBCu;
        goto label_1c6bbc;
    }
    ctx->pc = 0x1C6BB4u;
    SET_GPR_U32(ctx, 31, 0x1C6BBCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C6BB4u, 0x1C6BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BBCu;
label_1c6bbc:
    // 0x1c6bbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c6bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c6bc0:
    // 0x1c6bc0: 0x30500003  andi        $s0, $v0, 0x3
    ctx->pc = 0x1c6bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1c6bc4:
    // 0x1c6bc4: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c6bc8:
    // 0x1c6bc8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1c6bcc:
    // 0x1c6bcc: 0x24649228  addiu       $a0, $v1, -0x6DD8
    ctx->pc = 0x1c6bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939176));
label_1c6bd0:
    // 0x1c6bd0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1c6bd4:
    // 0x1c6bd4: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x1c6bd4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1c6bd8:
    // 0x1c6bd8: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x1c6bd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1c6bdc:
    // 0x1c6bdc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6be0:
    // 0x1c6be0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1c6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1c6be4:
    // 0x1c6be4: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1c6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1c6be8:
    // 0x1c6be8: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1c6be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1c6bec:
    // 0x1c6bec: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1c6becu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c6bf0:
    // 0x1c6bf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c6bf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1c6bf4:
    // 0x1c6bf4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c6bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1c6bf8:
    // 0x1c6bf8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c6bf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c6bfc:
    // 0x1c6bfc: 0xc067b18  jal         func_19EC60
label_1c6c00:
    if (ctx->pc == 0x1C6C00u) {
        ctx->pc = 0x1C6C04u;
        goto label_1c6c04;
    }
    ctx->pc = 0x1C6BFCu;
    SET_GPR_U32(ctx, 31, 0x1C6C04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C6BFCu, 0x1C6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C04u;
label_1c6c04:
    // 0x1c6c04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6c08:
    // 0x1c6c08: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1c6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_1c6c0c:
    // 0x1c6c0c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1c6c10:
    if (ctx->pc == 0x1C6C10u) {
        ctx->pc = 0x1C6C14u;
        goto label_1c6c14;
    }
    ctx->pc = 0x1C6C0Cu;
    {
        const bool branch_taken_0x1c6c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c0c) {
            ctx->pc = 0x1C6C60u;
            goto label_1c6c60;
        }
    }
    ctx->pc = 0x1C6C14u;
label_1c6c14:
    // 0x1c6c14: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6c18:
    // 0x1c6c18: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1c6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c6c1c:
    // 0x1c6c1c: 0x3c058040  lui         $a1, 0x8040
    ctx->pc = 0x1c6c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32832 << 16));
label_1c6c20:
    // 0x1c6c20: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x1c6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1c6c24:
    // 0x1c6c24: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1c6c28:
    // 0x1c6c28: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6c2c:
    // 0x1c6c2c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1c6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c6c30:
    // 0x1c6c30: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x1c6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
label_1c6c34:
    // 0x1c6c34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c6c38:
    // 0x1c6c38: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c6c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c6c3c:
    // 0x1c6c3c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1c6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1c6c40:
    // 0x1c6c40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c6c44:
    // 0x1c6c44: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c6c48:
    // 0x1c6c48: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x1c6c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1c6c4c:
    // 0x1c6c4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c6c50:
    if (ctx->pc == 0x1C6C50u) {
        ctx->pc = 0x1C6C54u;
        goto label_1c6c54;
    }
    ctx->pc = 0x1C6C4Cu;
    {
        const bool branch_taken_0x1c6c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c4c) {
            ctx->pc = 0x1C6C60u;
            goto label_1c6c60;
        }
    }
    ctx->pc = 0x1C6C54u;
label_1c6c54:
    // 0x1c6c54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c6c58:
    // 0x1c6c58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6c5c:
    // 0x1c6c5c: 0xa08313a7  sb          $v1, 0x13A7($a0)
    ctx->pc = 0x1c6c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5031), (uint8_t)GPR_U32(ctx, 3));
label_1c6c60:
    // 0x1c6c60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6c64:
    // 0x1c6c64: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1c6c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1c6c68:
    // 0x1c6c68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c6c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c6c6c:
    // 0x1c6c6c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1c6c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_1c6c70:
    // 0x1c6c70: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1c6c74:
    if (ctx->pc == 0x1C6C74u) {
        ctx->pc = 0x1C6C78u;
        goto label_1c6c78;
    }
    ctx->pc = 0x1C6C70u;
    {
        const bool branch_taken_0x1c6c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c70) {
            ctx->pc = 0x1C6CF8u;
            goto label_1c6cf8;
        }
    }
    ctx->pc = 0x1C6C78u;
label_1c6c78:
    // 0x1c6c78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c6c7c:
    // 0x1c6c7c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c6c80:
    // 0x1c6c80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1c6c84:
    // 0x1c6c84: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1c6c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c6c88:
    // 0x1c6c88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c6c8c:
    // 0x1c6c8c: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1c6c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 5));
label_1c6c90:
    // 0x1c6c90: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1c6c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c6c94:
    // 0x1c6c94: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c6c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6c98:
    // 0x1c6c98: 0xa0e6157d  sb          $a2, 0x157D($a3)
    ctx->pc = 0x1c6c98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5501), (uint8_t)GPR_U32(ctx, 6));
label_1c6c9c:
    // 0x1c6c9c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c6c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ca0:
    // 0x1c6ca0: 0x8d031b6c  lw          $v1, 0x1B6C($t0)
    ctx->pc = 0x1c6ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7020)));
label_1c6ca4:
    // 0x1c6ca4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1c6ca8:
    if (ctx->pc == 0x1C6CA8u) {
        ctx->pc = 0x1C6CACu;
        goto label_1c6cac;
    }
    ctx->pc = 0x1C6CA4u;
    {
        const bool branch_taken_0x1c6ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ca4) {
            ctx->pc = 0x1C6CF8u;
            goto label_1c6cf8;
        }
    }
    ctx->pc = 0x1C6CACu;
label_1c6cac:
    // 0x1c6cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6cb0:
    // 0x1c6cb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6cb4:
    // 0x1c6cb4: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1c6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
label_1c6cb8:
    // 0x1c6cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6cbc:
    // 0x1c6cbc: 0x846415ec  lh          $a0, 0x15EC($v1)
    ctx->pc = 0x1c6cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c6cc0:
    // 0x1c6cc0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1c6cc4:
    if (ctx->pc == 0x1C6CC4u) {
        ctx->pc = 0x1C6CC8u;
        goto label_1c6cc8;
    }
    ctx->pc = 0x1C6CC0u;
    {
        const bool branch_taken_0x1c6cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cc0) {
            ctx->pc = 0x1C6CF8u;
            goto label_1c6cf8;
        }
    }
    ctx->pc = 0x1C6CC8u;
label_1c6cc8:
    // 0x1c6cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ccc:
    // 0x1c6ccc: 0x846515ec  lh          $a1, 0x15EC($v1)
    ctx->pc = 0x1c6cccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c6cd0:
    // 0x1c6cd0: 0x24a4ff6a  addiu       $a0, $a1, -0x96
    ctx->pc = 0x1c6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967146));
label_1c6cd4:
    // 0x1c6cd4: 0xa46415ec  sh          $a0, 0x15EC($v1)
    ctx->pc = 0x1c6cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 4));
label_1c6cd8:
    // 0x1c6cd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6cdc:
    // 0x1c6cdc: 0x847015ec  lh          $s0, 0x15EC($v1)
    ctx->pc = 0x1c6cdcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c6ce0:
    // 0x1c6ce0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1c6ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_1c6ce4:
    // 0x1c6ce4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1c6ce4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1c6ce8:
    // 0x1c6ce8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c6cec:
    if (ctx->pc == 0x1C6CECu) {
        ctx->pc = 0x1C6CF0u;
        goto label_1c6cf0;
    }
    ctx->pc = 0x1C6CE8u;
    {
        const bool branch_taken_0x1c6ce8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c6ce8) {
            ctx->pc = 0x1C6CF8u;
            goto label_1c6cf8;
        }
    }
    ctx->pc = 0x1C6CF0u;
label_1c6cf0:
    // 0x1c6cf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6cf4:
    // 0x1c6cf4: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1c6cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1c6cf8:
    // 0x1c6cf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6cfc:
    // 0x1c6cfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6cfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c6d00:
    // 0x1c6d00: 0xc096b40  jal         func_25AD00
label_1c6d04:
    if (ctx->pc == 0x1C6D04u) {
        ctx->pc = 0x1C6D08u;
        goto label_1c6d08;
    }
    ctx->pc = 0x1C6D00u;
    SET_GPR_U32(ctx, 31, 0x1C6D08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C6D00u, 0x1C6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D08u;
label_1c6d08:
    // 0x1c6d08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c6d08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c6d0c:
    // 0x1c6d0c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6d10:
    // 0x1c6d10: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c6d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1c6d14:
    // 0x1c6d14: 0xc05cd10  jal         func_173440
label_1c6d18:
    if (ctx->pc == 0x1C6D18u) {
        ctx->pc = 0x1C6D1Cu;
        goto label_1c6d1c;
    }
    ctx->pc = 0x1C6D14u;
    SET_GPR_U32(ctx, 31, 0x1C6D1Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6D14u, 0x1C6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D1Cu;
label_1c6d1c:
    // 0x1c6d1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c6d1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c6d20:
    // 0x1c6d20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c6d24:
    // 0x1c6d24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6d28:
    // 0x1c6d28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6d28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c6d2c:
    // 0x1c6d2c: 0xc0573d8  jal         func_15CF60
label_1c6d30:
    if (ctx->pc == 0x1C6D30u) {
        ctx->pc = 0x1C6D34u;
        goto label_1c6d34;
    }
    ctx->pc = 0x1C6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D34u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C6D2Cu, 0x1C6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D34u;
label_1c6d34:
    // 0x1c6d34: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c6d34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c6d38:
    // 0x1c6d38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c6d38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c6d3c:
    // 0x1c6d3c: 0xc097530  jal         func_25D4C0
label_1c6d40:
    if (ctx->pc == 0x1C6D40u) {
        ctx->pc = 0x1C6D44u;
        goto label_1c6d44;
    }
    ctx->pc = 0x1C6D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D44u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C6D3Cu, 0x1C6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D44u;
label_1c6d44:
    // 0x1c6d44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6d48:
    // 0x1c6d48: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x1c6d48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c6d4c:
    // 0x1c6d4c: 0x10a00079  beqz        $a1, . + 4 + (0x79 << 2)
label_1c6d50:
    if (ctx->pc == 0x1C6D50u) {
        ctx->pc = 0x1C6D54u;
        goto label_1c6d54;
    }
    ctx->pc = 0x1C6D4Cu;
    {
        const bool branch_taken_0x1c6d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d4c) {
            ctx->pc = 0x1C6F34u;
            goto label_1c6f34;
        }
    }
    ctx->pc = 0x1C6D54u;
label_1c6d54:
    // 0x1c6d54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6d58:
    // 0x1c6d58: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c6d5c:
    // 0x1c6d5c: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x1c6d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
label_1c6d60:
    // 0x1c6d60: 0xe83024  and         $a2, $a3, $t0
    ctx->pc = 0x1c6d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_1c6d64:
    // 0x1c6d64: 0x10c0006e  beqz        $a2, . + 4 + (0x6E << 2)
label_1c6d68:
    if (ctx->pc == 0x1C6D68u) {
        ctx->pc = 0x1C6D6Cu;
        goto label_1c6d6c;
    }
    ctx->pc = 0x1C6D64u;
    {
        const bool branch_taken_0x1c6d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d64) {
            ctx->pc = 0x1C6F20u;
            goto label_1c6f20;
        }
    }
    ctx->pc = 0x1C6D6Cu;
label_1c6d6c:
    // 0x1c6d6c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c6d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6d70:
    // 0x1c6d70: 0xc4e11388  lwc1        $f1, 0x1388($a3)
    ctx->pc = 0x1c6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6d74:
    // 0x1c6d74: 0x3c084240  lui         $t0, 0x4240
    ctx->pc = 0x1c6d74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16960 << 16));
label_1c6d78:
    // 0x1c6d78: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c6d78u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6d7c:
    // 0x1c6d7c: 0x0  nop
    ctx->pc = 0x1c6d7cu;
    // NOP
label_1c6d80:
    // 0x1c6d80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6d84:
    // 0x1c6d84: 0x0  nop
    ctx->pc = 0x1c6d84u;
    // NOP
label_1c6d88:
    // 0x1c6d88: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
label_1c6d8c:
    if (ctx->pc == 0x1C6D8Cu) {
        ctx->pc = 0x1C6D90u;
        goto label_1c6d90;
    }
    ctx->pc = 0x1C6D88u;
    {
        const bool branch_taken_0x1c6d88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6d88) {
            ctx->pc = 0x1C6F08u;
            goto label_1c6f08;
        }
    }
    ctx->pc = 0x1C6D90u;
label_1c6d90:
    // 0x1c6d90: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1c6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1c6d94:
    // 0x1c6d94: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1c6d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c6d98:
    // 0x1c6d98: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
label_1c6d9c:
    if (ctx->pc == 0x1C6D9Cu) {
        ctx->pc = 0x1C6DA0u;
        goto label_1c6da0;
    }
    ctx->pc = 0x1C6D98u;
    {
        const bool branch_taken_0x1c6d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d98) {
            ctx->pc = 0x1C6E4Cu;
            goto label_1c6e4c;
        }
    }
    ctx->pc = 0x1C6DA0u;
label_1c6da0:
    // 0x1c6da0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6da4:
    // 0x1c6da4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6da8:
    // 0x1c6da8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1c6da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6dac:
    // 0x1c6dac: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1c6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c6db0:
    // 0x1c6db0: 0xc058f20  jal         func_163C80
label_1c6db4:
    if (ctx->pc == 0x1C6DB4u) {
        ctx->pc = 0x1C6DB8u;
        goto label_1c6db8;
    }
    ctx->pc = 0x1C6DB0u;
    SET_GPR_U32(ctx, 31, 0x1C6DB8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C6DB0u, 0x1C6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DB8u;
label_1c6db8:
    // 0x1c6db8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c6dbc:
    // 0x1c6dbc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c6dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6dc0:
    // 0x1c6dc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6dc4:
    // 0x1c6dc4: 0x0  nop
    ctx->pc = 0x1c6dc4u;
    // NOP
label_1c6dc8:
    // 0x1c6dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6dcc:
    // 0x1c6dcc: 0x0  nop
    ctx->pc = 0x1c6dccu;
    // NOP
label_1c6dd0:
    // 0x1c6dd0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1c6dd4:
    if (ctx->pc == 0x1C6DD4u) {
        ctx->pc = 0x1C6DD8u;
        goto label_1c6dd8;
    }
    ctx->pc = 0x1C6DD0u;
    {
        const bool branch_taken_0x1c6dd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6dd0) {
            ctx->pc = 0x1C6DECu;
            goto label_1c6dec;
        }
    }
    ctx->pc = 0x1C6DD8u;
label_1c6dd8:
    // 0x1c6dd8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1c6ddc:
    // 0x1c6ddc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6de0:
    // 0x1c6de0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6de4:
    // 0x1c6de4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c6de8:
    // 0x1c6de8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c6dec:
    // 0x1c6dec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c6decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6df0:
    // 0x1c6df0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x1c6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_1c6df4:
    // 0x1c6df4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1c6df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1c6df8:
    // 0x1c6df8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c6df8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6dfc:
    // 0x1c6dfc: 0x0  nop
    ctx->pc = 0x1c6dfcu;
    // NOP
label_1c6e00:
    // 0x1c6e00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6e04:
    // 0x1c6e04: 0x0  nop
    ctx->pc = 0x1c6e04u;
    // NOP
label_1c6e08:
    // 0x1c6e08: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_1c6e0c:
    if (ctx->pc == 0x1C6E0Cu) {
        ctx->pc = 0x1C6E10u;
        goto label_1c6e10;
    }
    ctx->pc = 0x1C6E08u;
    {
        const bool branch_taken_0x1c6e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e08) {
            ctx->pc = 0x1C6F08u;
            goto label_1c6f08;
        }
    }
    ctx->pc = 0x1C6E10u;
label_1c6e10:
    // 0x1c6e10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6e14:
    // 0x1c6e14: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6e18:
    // 0x1c6e18: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1c6e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c6e1c:
    // 0x1c6e1c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1c6e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1c6e20:
    // 0x1c6e20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6e24:
    // 0x1c6e24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c6e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1c6e28:
    // 0x1c6e28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6e2c:
    // 0x1c6e2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c6e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c6e30:
    // 0x1c6e30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6e34:
    // 0x1c6e34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c6e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c6e38:
    // 0x1c6e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6e3c:
    // 0x1c6e3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6e40:
    // 0x1c6e40: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c6e44:
    // 0x1c6e44: 0x10000547  b           . + 4 + (0x547 << 2)
label_1c6e48:
    if (ctx->pc == 0x1C6E48u) {
        ctx->pc = 0x1C6E4Cu;
        goto label_1c6e4c;
    }
    ctx->pc = 0x1C6E44u;
    {
        const bool branch_taken_0x1c6e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e44) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6E4Cu;
label_1c6e4c:
    // 0x1c6e4c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6e50:
    // 0x1c6e50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6e54:
    // 0x1c6e54: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1c6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6e58:
    // 0x1c6e58: 0xc48d1380  lwc1        $f13, 0x1380($a0)
    ctx->pc = 0x1c6e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c6e5c:
    // 0x1c6e5c: 0xc058f20  jal         func_163C80
label_1c6e60:
    if (ctx->pc == 0x1C6E60u) {
        ctx->pc = 0x1C6E64u;
        goto label_1c6e64;
    }
    ctx->pc = 0x1C6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E64u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C6E5Cu, 0x1C6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E64u;
label_1c6e64:
    // 0x1c6e64: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c6e68:
    // 0x1c6e68: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c6e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6e6c:
    // 0x1c6e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6e70:
    // 0x1c6e70: 0x0  nop
    ctx->pc = 0x1c6e70u;
    // NOP
label_1c6e74:
    // 0x1c6e74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6e78:
    // 0x1c6e78: 0x0  nop
    ctx->pc = 0x1c6e78u;
    // NOP
label_1c6e7c:
    // 0x1c6e7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1c6e80:
    if (ctx->pc == 0x1C6E80u) {
        ctx->pc = 0x1C6E84u;
        goto label_1c6e84;
    }
    ctx->pc = 0x1C6E7Cu;
    {
        const bool branch_taken_0x1c6e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e7c) {
            ctx->pc = 0x1C6E98u;
            goto label_1c6e98;
        }
    }
    ctx->pc = 0x1C6E84u;
label_1c6e84:
    // 0x1c6e84: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1c6e88:
    // 0x1c6e88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6e8c:
    // 0x1c6e8c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6e90:
    // 0x1c6e90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c6e94:
    // 0x1c6e94: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c6e98:
    // 0x1c6e98: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c6e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6e9c:
    // 0x1c6e9c: 0x3c064016  lui         $a2, 0x4016
    ctx->pc = 0x1c6e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16406 << 16));
label_1c6ea0:
    // 0x1c6ea0: 0x34c3cbe4  ori         $v1, $a2, 0xCBE4
    ctx->pc = 0x1c6ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52196);
label_1c6ea4:
    // 0x1c6ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6ea8:
    // 0x1c6ea8: 0x0  nop
    ctx->pc = 0x1c6ea8u;
    // NOP
label_1c6eac:
    // 0x1c6eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6eb0:
    // 0x1c6eb0: 0x0  nop
    ctx->pc = 0x1c6eb0u;
    // NOP
label_1c6eb4:
    // 0x1c6eb4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1c6eb8:
    if (ctx->pc == 0x1C6EB8u) {
        ctx->pc = 0x1C6EBCu;
        goto label_1c6ebc;
    }
    ctx->pc = 0x1C6EB4u;
    {
        const bool branch_taken_0x1c6eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6eb4) {
            ctx->pc = 0x1C6F08u;
            goto label_1c6f08;
        }
    }
    ctx->pc = 0x1C6EBCu;
label_1c6ebc:
    // 0x1c6ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6ec0:
    // 0x1c6ec0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ec4:
    // 0x1c6ec4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1c6ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c6ec8:
    // 0x1c6ec8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1c6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c6ecc:
    // 0x1c6ecc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ed0:
    // 0x1c6ed0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c6ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1c6ed4:
    // 0x1c6ed4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ed8:
    // 0x1c6ed8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c6ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c6edc:
    // 0x1c6edc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ee0:
    // 0x1c6ee0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c6ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c6ee4:
    // 0x1c6ee4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c6ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c6ee8:
    // 0x1c6ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6eec:
    // 0x1c6eec: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1c6eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_1c6ef0:
    // 0x1c6ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ef4:
    // 0x1c6ef4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6ef8:
    // 0x1c6ef8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6efc:
    // 0x1c6efc: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x1c6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
label_1c6f00:
    // 0x1c6f00: 0x10000518  b           . + 4 + (0x518 << 2)
label_1c6f04:
    if (ctx->pc == 0x1C6F04u) {
        ctx->pc = 0x1C6F08u;
        goto label_1c6f08;
    }
    ctx->pc = 0x1C6F00u;
    {
        const bool branch_taken_0x1c6f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f00) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6F08u;
label_1c6f08:
    // 0x1c6f08: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6f0c:
    // 0x1c6f0c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c6f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c6f10:
    // 0x1c6f10: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1c6f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c6f14:
    // 0x1c6f14: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1c6f14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
label_1c6f18:
    // 0x1c6f18: 0x10000512  b           . + 4 + (0x512 << 2)
label_1c6f1c:
    if (ctx->pc == 0x1C6F1Cu) {
        ctx->pc = 0x1C6F20u;
        goto label_1c6f20;
    }
    ctx->pc = 0x1C6F18u;
    {
        const bool branch_taken_0x1c6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f18) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6F20u;
label_1c6f20:
    // 0x1c6f20: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1c6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c6f24:
    // 0x1c6f24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6f28:
    // 0x1c6f28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c6f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c6f2c:
    // 0x1c6f2c: 0x1000050d  b           . + 4 + (0x50D << 2)
label_1c6f30:
    if (ctx->pc == 0x1C6F30u) {
        ctx->pc = 0x1C6F34u;
        goto label_1c6f34;
    }
    ctx->pc = 0x1C6F2Cu;
    {
        const bool branch_taken_0x1c6f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f2c) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6F34u;
label_1c6f34:
    // 0x1c6f34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6f38:
    // 0x1c6f38: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c6f3c:
    // 0x1c6f3c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1c6f40:
    // 0x1c6f40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c6f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c6f44:
    // 0x1c6f44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1c6f48:
    if (ctx->pc == 0x1C6F48u) {
        ctx->pc = 0x1C6F4Cu;
        goto label_1c6f4c;
    }
    ctx->pc = 0x1C6F44u;
    {
        const bool branch_taken_0x1c6f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f44) {
            ctx->pc = 0x1C6F60u;
            goto label_1c6f60;
        }
    }
    ctx->pc = 0x1C6F4Cu;
label_1c6f4c:
    // 0x1c6f4c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c6f50:
    // 0x1c6f50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6f54:
    // 0x1c6f54: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c6f54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c6f58:
    // 0x1c6f58: 0x10000502  b           . + 4 + (0x502 << 2)
label_1c6f5c:
    if (ctx->pc == 0x1C6F5Cu) {
        ctx->pc = 0x1C6F60u;
        goto label_1c6f60;
    }
    ctx->pc = 0x1C6F58u;
    {
        const bool branch_taken_0x1c6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f58) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6F60u;
label_1c6f60:
    // 0x1c6f60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6f64:
    // 0x1c6f64: 0x94640a00  lhu         $a0, 0xA00($v1)
    ctx->pc = 0x1c6f64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
label_1c6f68:
    // 0x1c6f68: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1c6f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1c6f6c:
    // 0x1c6f6c: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x1c6f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_1c6f70:
    // 0x1c6f70: 0x146004fc  bnez        $v1, . + 4 + (0x4FC << 2)
label_1c6f74:
    if (ctx->pc == 0x1C6F74u) {
        ctx->pc = 0x1C6F78u;
        goto label_1c6f78;
    }
    ctx->pc = 0x1C6F70u;
    {
        const bool branch_taken_0x1c6f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f70) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6F78u;
label_1c6f78:
    // 0x1c6f78: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1c6f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1c6f7c:
    // 0x1c6f7c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1c6f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1c6f80:
    // 0x1c6f80: 0x106004f8  beqz        $v1, . + 4 + (0x4F8 << 2)
label_1c6f84:
    if (ctx->pc == 0x1C6F84u) {
        ctx->pc = 0x1C6F88u;
        goto label_1c6f88;
    }
    ctx->pc = 0x1C6F80u;
    {
        const bool branch_taken_0x1c6f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f80) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6F88u;
label_1c6f88:
    // 0x1c6f88: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6f8c:
    // 0x1c6f8c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c6f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c6f90:
    // 0x1c6f90: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1c6f94:
    // 0x1c6f94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c6f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c6f98:
    // 0x1c6f98: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c6f9c:
    // 0x1c6f9c: 0x100004f1  b           . + 4 + (0x4F1 << 2)
label_1c6fa0:
    if (ctx->pc == 0x1C6FA0u) {
        ctx->pc = 0x1C6FA4u;
        goto label_1c6fa4;
    }
    ctx->pc = 0x1C6F9Cu;
    {
        const bool branch_taken_0x1c6f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f9c) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C6FA4u;
label_1c6fa4:
    // 0x1c6fa4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6fa8:
    // 0x1c6fa8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1c6fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c6fac:
    // 0x1c6fac: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1c6facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
label_1c6fb0:
    // 0x1c6fb0: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1c6fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1c6fb4:
    // 0x1c6fb4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1c6fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1c6fb8:
    // 0x1c6fb8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1c6fbc:
    // 0x1c6fbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6fc0:
    // 0x1c6fc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6fc4:
    // 0x1c6fc4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c6fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c6fc8:
    // 0x1c6fc8: 0x24060537  addiu       $a2, $zero, 0x537
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
label_1c6fcc:
    // 0x1c6fcc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c6fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c6fd0:
    // 0x1c6fd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c6fd4:
    // 0x1c6fd4: 0xc0965d0  jal         func_259740
label_1c6fd8:
    if (ctx->pc == 0x1C6FD8u) {
        ctx->pc = 0x1C6FDCu;
        goto label_1c6fdc;
    }
    ctx->pc = 0x1C6FD4u;
    SET_GPR_U32(ctx, 31, 0x1C6FDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C6FD4u, 0x1C6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FDCu;
label_1c6fdc:
    // 0x1c6fdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c6fdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c6fe0:
    // 0x1c6fe0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c6fe4:
    // 0x1c6fe4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6fe8:
    // 0x1c6fe8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c6fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1c6fec:
    // 0x1c6fec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6ff0:
    // 0x1c6ff0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6ff4:
    // 0x1c6ff4: 0xa0441576  sb          $a0, 0x1576($v0)
    ctx->pc = 0x1c6ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 4));
label_1c6ff8:
    // 0x1c6ff8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c6ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c6ffc:
    // 0x1c6ffc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7000:
    // 0x1c7000: 0xa0c51577  sb          $a1, 0x1577($a2)
    ctx->pc = 0x1c7000u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5495), (uint8_t)GPR_U32(ctx, 5));
label_1c7004:
    // 0x1c7004: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7008:
    // 0x1c7008: 0xace01b60  sw          $zero, 0x1B60($a3)
    ctx->pc = 0x1c7008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7008), GPR_U32(ctx, 0));
label_1c700c:
    // 0x1c700c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c700cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7010:
    // 0x1c7010: 0xad001b6c  sw          $zero, 0x1B6C($t0)
    ctx->pc = 0x1c7010u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7020), GPR_U32(ctx, 0));
label_1c7014:
    // 0x1c7014: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7018:
    // 0x1c7018: 0x90500002  lbu         $s0, 0x2($v0)
    ctx->pc = 0x1c7018u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c701c:
    // 0x1c701c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1c701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c7020:
    // 0x1c7020: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c7020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c7024:
    // 0x1c7024: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c7024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c7028:
    // 0x1c7028: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c7028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c702c:
    // 0x1c702c: 0x30430200  andi        $v1, $v0, 0x200
    ctx->pc = 0x1c702cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1c7030:
    // 0x1c7030: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c7034:
    if (ctx->pc == 0x1C7034u) {
        ctx->pc = 0x1C7038u;
        goto label_1c7038;
    }
    ctx->pc = 0x1C7030u;
    {
        const bool branch_taken_0x1c7030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7030) {
            ctx->pc = 0x1C7044u;
            goto label_1c7044;
        }
    }
    ctx->pc = 0x1C7038u;
label_1c7038:
    // 0x1c7038: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c703c:
    // 0x1c703c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c703cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7040:
    // 0x1c7040: 0xa0a213a7  sb          $v0, 0x13A7($a1)
    ctx->pc = 0x1c7040u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5031), (uint8_t)GPR_U32(ctx, 2));
label_1c7044:
    // 0x1c7044: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7048:
    // 0x1c7048: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c7048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c704c:
    // 0x1c704c: 0x3c108040  lui         $s0, 0x8040
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32832 << 16));
label_1c7050:
    // 0x1c7050: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x1c7050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_1c7054:
    // 0x1c7054: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1c7054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_1c7058:
    // 0x1c7058: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c705c:
    // 0x1c705c: 0x84441278  lh          $a0, 0x1278($v0)
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_1c7060:
    // 0x1c7060: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_1c7064:
    if (ctx->pc == 0x1C7064u) {
        ctx->pc = 0x1C7068u;
        goto label_1c7068;
    }
    ctx->pc = 0x1C7060u;
    {
        const bool branch_taken_0x1c7060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7060) {
            ctx->pc = 0x1C70D8u;
            goto label_1c70d8;
        }
    }
    ctx->pc = 0x1C7068u;
label_1c7068:
    // 0x1c7068: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c706c:
    // 0x1c706c: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x1c706cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_1c7070:
    // 0x1c7070: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1c7070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c7074:
    // 0x1c7074: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1c7074u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1c7078:
    // 0x1c7078: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c707c:
    // 0x1c707c: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1c707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c7080:
    // 0x1c7080: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_1c7084:
    if (ctx->pc == 0x1C7084u) {
        ctx->pc = 0x1C7088u;
        goto label_1c7088;
    }
    ctx->pc = 0x1C7080u;
    {
        const bool branch_taken_0x1c7080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7080) {
            ctx->pc = 0x1C70D8u;
            goto label_1c70d8;
        }
    }
    ctx->pc = 0x1C7088u;
label_1c7088:
    // 0x1c7088: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c708c:
    // 0x1c708c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7090:
    // 0x1c7090: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c7090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1c7094:
    // 0x1c7094: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1c7094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1c7098:
    // 0x1c7098: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c7098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c709c:
    // 0x1c709c: 0xc05ccfc  jal         func_1733F0
label_1c70a0:
    if (ctx->pc == 0x1C70A0u) {
        ctx->pc = 0x1C70A4u;
        goto label_1c70a4;
    }
    ctx->pc = 0x1C709Cu;
    SET_GPR_U32(ctx, 31, 0x1C70A4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C709Cu, 0x1C70A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70A4u;
label_1c70a4:
    // 0x1c70a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c70a8:
    // 0x1c70a8: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c70a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1c70ac:
    // 0x1c70ac: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1c70acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
label_1c70b0:
    // 0x1c70b0: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1c70b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1c70b4:
    // 0x1c70b4: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1c70b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c70b8:
    // 0x1c70b8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c70bc:
    // 0x1c70bc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c70bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c70c0:
    // 0x1c70c0: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1c70c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c70c4:
    // 0x1c70c4: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1c70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c70c8:
    // 0x1c70c8: 0xc058f50  jal         func_163D40
label_1c70cc:
    if (ctx->pc == 0x1C70CCu) {
        ctx->pc = 0x1C70D0u;
        goto label_1c70d0;
    }
    ctx->pc = 0x1C70C8u;
    SET_GPR_U32(ctx, 31, 0x1C70D0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C70C8u, 0x1C70D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70D0u;
label_1c70d0:
    // 0x1c70d0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c70d4:
    // 0x1c70d4: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x1c70d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
label_1c70d8:
    // 0x1c70d8: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c70d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c70dc:
    // 0x1c70dc: 0x910309db  lbu         $v1, 0x9DB($t0)
    ctx->pc = 0x1c70dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2523)));
label_1c70e0:
    // 0x1c70e0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1c70e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c70e4:
    // 0x1c70e4: 0x30a40080  andi        $a0, $a1, 0x80
    ctx->pc = 0x1c70e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_1c70e8:
    // 0x1c70e8: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1c70ec:
    if (ctx->pc == 0x1C70ECu) {
        ctx->pc = 0x1C70F0u;
        goto label_1c70f0;
    }
    ctx->pc = 0x1C70E8u;
    {
        const bool branch_taken_0x1c70e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c70e8) {
            ctx->pc = 0x1C7170u;
            goto label_1c7170;
        }
    }
    ctx->pc = 0x1C70F0u;
label_1c70f0:
    // 0x1c70f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c70f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c70f4:
    // 0x1c70f4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c70f8:
    // 0x1c70f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1c70f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_1c70fc:
    // 0x1c70fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c70fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c7100:
    // 0x1c7100: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c7100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c7104:
    // 0x1c7104: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1c7104u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1c7108:
    // 0x1c7108: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c710c:
    // 0x1c710c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c710cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7110:
    // 0x1c7110: 0xa0a2157d  sb          $v0, 0x157D($a1)
    ctx->pc = 0x1c7110u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5501), (uint8_t)GPR_U32(ctx, 2));
label_1c7114:
    // 0x1c7114: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7118:
    // 0x1c7118: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1c7118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_1c711c:
    // 0x1c711c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1c7120:
    if (ctx->pc == 0x1C7120u) {
        ctx->pc = 0x1C7124u;
        goto label_1c7124;
    }
    ctx->pc = 0x1C711Cu;
    {
        const bool branch_taken_0x1c711c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c711c) {
            ctx->pc = 0x1C7170u;
            goto label_1c7170;
        }
    }
    ctx->pc = 0x1C7124u;
label_1c7124:
    // 0x1c7124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7128:
    // 0x1c7128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c712c:
    // 0x1c712c: 0xac831b6c  sw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1c712cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 3));
label_1c7130:
    // 0x1c7130: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7134:
    // 0x1c7134: 0x846515ec  lh          $a1, 0x15EC($v1)
    ctx->pc = 0x1c7134u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c7138:
    // 0x1c7138: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_1c713c:
    if (ctx->pc == 0x1C713Cu) {
        ctx->pc = 0x1C7140u;
        goto label_1c7140;
    }
    ctx->pc = 0x1C7138u;
    {
        const bool branch_taken_0x1c7138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7138) {
            ctx->pc = 0x1C7170u;
            goto label_1c7170;
        }
    }
    ctx->pc = 0x1C7140u;
label_1c7140:
    // 0x1c7140: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7144:
    // 0x1c7144: 0x84c715ec  lh          $a3, 0x15EC($a2)
    ctx->pc = 0x1c7144u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 5612)));
label_1c7148:
    // 0x1c7148: 0x24e8ff6a  addiu       $t0, $a3, -0x96
    ctx->pc = 0x1c7148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967146));
label_1c714c:
    // 0x1c714c: 0xa4c815ec  sh          $t0, 0x15EC($a2)
    ctx->pc = 0x1c714cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5612), (uint16_t)GPR_U32(ctx, 8));
label_1c7150:
    // 0x1c7150: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7154:
    // 0x1c7154: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1c7154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c7158:
    // 0x1c7158: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1c7158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1c715c:
    // 0x1c715c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1c715cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1c7160:
    // 0x1c7160: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1c7164:
    if (ctx->pc == 0x1C7164u) {
        ctx->pc = 0x1C7168u;
        goto label_1c7168;
    }
    ctx->pc = 0x1C7160u;
    {
        const bool branch_taken_0x1c7160 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1c7160) {
            ctx->pc = 0x1C7170u;
            goto label_1c7170;
        }
    }
    ctx->pc = 0x1C7168u;
label_1c7168:
    // 0x1c7168: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c716c:
    // 0x1c716c: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1c716cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1c7170:
    // 0x1c7170: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7174:
    // 0x1c7174: 0x908309da  lbu         $v1, 0x9DA($a0)
    ctx->pc = 0x1c7174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
label_1c7178:
    // 0x1c7178: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c7178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c717c:
    // 0x1c717c: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x1c717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_1c7180:
    // 0x1c7180: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1c7180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1c7184:
    // 0x1c7184: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
label_1c7188:
    if (ctx->pc == 0x1C7188u) {
        ctx->pc = 0x1C718Cu;
        goto label_1c718c;
    }
    ctx->pc = 0x1C7184u;
    {
        const bool branch_taken_0x1c7184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c7184) {
            ctx->pc = 0x1C71E4u;
            goto label_1c71e4;
        }
    }
    ctx->pc = 0x1C718Cu;
label_1c718c:
    // 0x1c718c: 0xc067694  jal         func_19DA50
label_1c7190:
    if (ctx->pc == 0x1C7190u) {
        ctx->pc = 0x1C7194u;
        goto label_1c7194;
    }
    ctx->pc = 0x1C718Cu;
    SET_GPR_U32(ctx, 31, 0x1C7194u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C718Cu, 0x1C7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7194u;
label_1c7194:
    // 0x1c7194: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7194u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7198:
    // 0x1c7198: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c7198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c719c:
    // 0x1c719c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1c719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1c71a0:
    // 0x1c71a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1c71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c71a4:
    // 0x1c71a4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1c71a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1c71a8:
    // 0x1c71a8: 0x24c59228  addiu       $a1, $a2, -0x6DD8
    ctx->pc = 0x1c71a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939176));
label_1c71ac:
    // 0x1c71ac: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1c71acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1c71b0:
    // 0x1c71b0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1c71b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1c71b4:
    // 0x1c71b4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1c71b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1c71b8:
    // 0x1c71b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c71b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c71bc:
    // 0x1c71bc: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1c71bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1c71c0:
    // 0x1c71c0: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1c71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_1c71c4:
    // 0x1c71c4: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1c71c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1c71c8:
    // 0x1c71c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c71c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c71cc:
    // 0x1c71cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c71ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1c71d0:
    // 0x1c71d0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1c71d4:
    // 0x1c71d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c71d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c71d8:
    // 0x1c71d8: 0xc067b18  jal         func_19EC60
label_1c71dc:
    if (ctx->pc == 0x1C71DCu) {
        ctx->pc = 0x1C71E0u;
        goto label_1c71e0;
    }
    ctx->pc = 0x1C71D8u;
    SET_GPR_U32(ctx, 31, 0x1C71E0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C71D8u, 0x1C71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71E0u;
label_1c71e0:
    // 0x1c71e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c71e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c71e4:
    // 0x1c71e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c71e8:
    // 0x1c71e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c71e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c71ec:
    // 0x1c71ec: 0xc096b40  jal         func_25AD00
label_1c71f0:
    if (ctx->pc == 0x1C71F0u) {
        ctx->pc = 0x1C71F4u;
        goto label_1c71f4;
    }
    ctx->pc = 0x1C71ECu;
    SET_GPR_U32(ctx, 31, 0x1C71F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C71ECu, 0x1C71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71F4u;
label_1c71f4:
    // 0x1c71f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c71f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c71f8:
    // 0x1c71f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c71fc:
    // 0x1c71fc: 0xc05cd10  jal         func_173440
label_1c7200:
    if (ctx->pc == 0x1C7200u) {
        ctx->pc = 0x1C7204u;
        goto label_1c7204;
    }
    ctx->pc = 0x1C71FCu;
    SET_GPR_U32(ctx, 31, 0x1C7204u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C71FCu, 0x1C7204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7204u;
label_1c7204:
    // 0x1c7204: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7208:
    // 0x1c7208: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c720c:
    // 0x1c720c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7210:
    // 0x1c7210: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c7210u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1c7214:
    // 0x1c7214: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7218:
    // 0x1c7218: 0xc0573d8  jal         func_15CF60
label_1c721c:
    if (ctx->pc == 0x1C721Cu) {
        ctx->pc = 0x1C7220u;
        goto label_1c7220;
    }
    ctx->pc = 0x1C7218u;
    SET_GPR_U32(ctx, 31, 0x1C7220u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C7218u, 0x1C7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7220u;
label_1c7220:
    // 0x1c7220: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7224:
    // 0x1c7224: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7228:
    // 0x1c7228: 0xc097530  jal         func_25D4C0
label_1c722c:
    if (ctx->pc == 0x1C722Cu) {
        ctx->pc = 0x1C7230u;
        goto label_1c7230;
    }
    ctx->pc = 0x1C7228u;
    SET_GPR_U32(ctx, 31, 0x1C7230u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C7228u, 0x1C7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7230u;
label_1c7230:
    // 0x1c7230: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c7230u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7234:
    // 0x1c7234: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7238:
    // 0x1c7238: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x1c7238u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
label_1c723c:
    // 0x1c723c: 0x11000079  beqz        $t0, . + 4 + (0x79 << 2)
label_1c7240:
    if (ctx->pc == 0x1C7240u) {
        ctx->pc = 0x1C7244u;
        goto label_1c7244;
    }
    ctx->pc = 0x1C723Cu;
    {
        const bool branch_taken_0x1c723c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c723c) {
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7244u;
label_1c7244:
    // 0x1c7244: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7248:
    // 0x1c7248: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c7248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c724c:
    // 0x1c724c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1c724cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_1c7250:
    // 0x1c7250: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c7250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1c7254:
    // 0x1c7254: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
label_1c7258:
    if (ctx->pc == 0x1C7258u) {
        ctx->pc = 0x1C725Cu;
        goto label_1c725c;
    }
    ctx->pc = 0x1C7254u;
    {
        const bool branch_taken_0x1c7254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7254) {
            ctx->pc = 0x1C7410u;
            goto label_1c7410;
        }
    }
    ctx->pc = 0x1C725Cu;
label_1c725c:
    // 0x1c725c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c725cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7260:
    // 0x1c7260: 0xc4a11388  lwc1        $f1, 0x1388($a1)
    ctx->pc = 0x1c7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7264:
    // 0x1c7264: 0x3c064240  lui         $a2, 0x4240
    ctx->pc = 0x1c7264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16960 << 16));
label_1c7268:
    // 0x1c7268: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c7268u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c726c:
    // 0x1c726c: 0x0  nop
    ctx->pc = 0x1c726cu;
    // NOP
label_1c7270:
    // 0x1c7270: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7274:
    // 0x1c7274: 0x0  nop
    ctx->pc = 0x1c7274u;
    // NOP
label_1c7278:
    // 0x1c7278: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
label_1c727c:
    if (ctx->pc == 0x1C727Cu) {
        ctx->pc = 0x1C7280u;
        goto label_1c7280;
    }
    ctx->pc = 0x1C7278u;
    {
        const bool branch_taken_0x1c7278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7278) {
            ctx->pc = 0x1C73F8u;
            goto label_1c73f8;
        }
    }
    ctx->pc = 0x1C7280u;
label_1c7280:
    // 0x1c7280: 0x8e270090  lw          $a3, 0x90($s1)
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1c7284:
    // 0x1c7284: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1c7284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1c7288:
    // 0x1c7288: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1c728c:
    if (ctx->pc == 0x1C728Cu) {
        ctx->pc = 0x1C7290u;
        goto label_1c7290;
    }
    ctx->pc = 0x1C7288u;
    {
        const bool branch_taken_0x1c7288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7288) {
            ctx->pc = 0x1C733Cu;
            goto label_1c733c;
        }
    }
    ctx->pc = 0x1C7290u;
label_1c7290:
    // 0x1c7290: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7294:
    // 0x1c7294: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7298:
    // 0x1c7298: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1c7298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c729c:
    // 0x1c729c: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x1c729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c72a0:
    // 0x1c72a0: 0xc058f20  jal         func_163C80
label_1c72a4:
    if (ctx->pc == 0x1C72A4u) {
        ctx->pc = 0x1C72A8u;
        goto label_1c72a8;
    }
    ctx->pc = 0x1C72A0u;
    SET_GPR_U32(ctx, 31, 0x1C72A8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C72A0u, 0x1C72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72A8u;
label_1c72a8:
    // 0x1c72a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c72a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c72ac:
    // 0x1c72ac: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c72acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c72b0:
    // 0x1c72b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c72b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c72b4:
    // 0x1c72b4: 0x0  nop
    ctx->pc = 0x1c72b4u;
    // NOP
label_1c72b8:
    // 0x1c72b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c72b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c72bc:
    // 0x1c72bc: 0x0  nop
    ctx->pc = 0x1c72bcu;
    // NOP
label_1c72c0:
    // 0x1c72c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1c72c4:
    if (ctx->pc == 0x1C72C4u) {
        ctx->pc = 0x1C72C8u;
        goto label_1c72c8;
    }
    ctx->pc = 0x1C72C0u;
    {
        const bool branch_taken_0x1c72c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c72c0) {
            ctx->pc = 0x1C72DCu;
            goto label_1c72dc;
        }
    }
    ctx->pc = 0x1C72C8u;
label_1c72c8:
    // 0x1c72c8: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x1c72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_1c72cc:
    // 0x1c72cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c72ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c72d0:
    // 0x1c72d0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c72d4:
    // 0x1c72d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c72d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c72d8:
    // 0x1c72d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c72d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c72dc:
    // 0x1c72dc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c72dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c72e0:
    // 0x1c72e0: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x1c72e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
label_1c72e4:
    // 0x1c72e4: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1c72e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1c72e8:
    // 0x1c72e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c72e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c72ec:
    // 0x1c72ec: 0x0  nop
    ctx->pc = 0x1c72ecu;
    // NOP
label_1c72f0:
    // 0x1c72f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c72f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c72f4:
    // 0x1c72f4: 0x0  nop
    ctx->pc = 0x1c72f4u;
    // NOP
label_1c72f8:
    // 0x1c72f8: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_1c72fc:
    if (ctx->pc == 0x1C72FCu) {
        ctx->pc = 0x1C7300u;
        goto label_1c7300;
    }
    ctx->pc = 0x1C72F8u;
    {
        const bool branch_taken_0x1c72f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c72f8) {
            ctx->pc = 0x1C73F8u;
            goto label_1c73f8;
        }
    }
    ctx->pc = 0x1C7300u;
label_1c7300:
    // 0x1c7300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7304:
    // 0x1c7304: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7308:
    // 0x1c7308: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1c7308u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c730c:
    // 0x1c730c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1c730cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1c7310:
    // 0x1c7310: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7314:
    // 0x1c7314: 0xa0900001  sb          $s0, 0x1($a0)
    ctx->pc = 0x1c7314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 16));
label_1c7318:
    // 0x1c7318: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c731c:
    // 0x1c731c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1c731cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7320:
    // 0x1c7320: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7324:
    // 0x1c7324: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1c7324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7328:
    // 0x1c7328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c7328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c732c:
    // 0x1c732c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c732cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7330:
    // 0x1c7330: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1c7330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1c7334:
    // 0x1c7334: 0x1000040b  b           . + 4 + (0x40B << 2)
label_1c7338:
    if (ctx->pc == 0x1C7338u) {
        ctx->pc = 0x1C733Cu;
        goto label_1c733c;
    }
    ctx->pc = 0x1C7334u;
    {
        const bool branch_taken_0x1c7334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7334) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C733Cu;
label_1c733c:
    // 0x1c733c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7340:
    // 0x1c7340: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7344:
    // 0x1c7344: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1c7344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7348:
    // 0x1c7348: 0xc48d1380  lwc1        $f13, 0x1380($a0)
    ctx->pc = 0x1c7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c734c:
    // 0x1c734c: 0xc058f20  jal         func_163C80
label_1c7350:
    if (ctx->pc == 0x1C7350u) {
        ctx->pc = 0x1C7354u;
        goto label_1c7354;
    }
    ctx->pc = 0x1C734Cu;
    SET_GPR_U32(ctx, 31, 0x1C7354u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C734Cu, 0x1C7354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7354u;
label_1c7354:
    // 0x1c7354: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c7354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c7358:
    // 0x1c7358: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c7358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c735c:
    // 0x1c735c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c735cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7360:
    // 0x1c7360: 0x0  nop
    ctx->pc = 0x1c7360u;
    // NOP
label_1c7364:
    // 0x1c7364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7368:
    // 0x1c7368: 0x0  nop
    ctx->pc = 0x1c7368u;
    // NOP
label_1c736c:
    // 0x1c736c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1c7370:
    if (ctx->pc == 0x1C7370u) {
        ctx->pc = 0x1C7374u;
        goto label_1c7374;
    }
    ctx->pc = 0x1C736Cu;
    {
        const bool branch_taken_0x1c736c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c736c) {
            ctx->pc = 0x1C7388u;
            goto label_1c7388;
        }
    }
    ctx->pc = 0x1C7374u;
label_1c7374:
    // 0x1c7374: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c7374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1c7378:
    // 0x1c7378: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c737c:
    // 0x1c737c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7380:
    // 0x1c7380: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7384:
    // 0x1c7384: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c7388:
    // 0x1c7388: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c738c:
    // 0x1c738c: 0x3c044016  lui         $a0, 0x4016
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16406 << 16));
label_1c7390:
    // 0x1c7390: 0x3486cbe4  ori         $a2, $a0, 0xCBE4
    ctx->pc = 0x1c7390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52196);
label_1c7394:
    // 0x1c7394: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c7394u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7398:
    // 0x1c7398: 0x0  nop
    ctx->pc = 0x1c7398u;
    // NOP
label_1c739c:
    // 0x1c739c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c739cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c73a0:
    // 0x1c73a0: 0x0  nop
    ctx->pc = 0x1c73a0u;
    // NOP
label_1c73a4:
    // 0x1c73a4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1c73a8:
    if (ctx->pc == 0x1C73A8u) {
        ctx->pc = 0x1C73ACu;
        goto label_1c73ac;
    }
    ctx->pc = 0x1C73A4u;
    {
        const bool branch_taken_0x1c73a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c73a4) {
            ctx->pc = 0x1C73F8u;
            goto label_1c73f8;
        }
    }
    ctx->pc = 0x1C73ACu;
label_1c73ac:
    // 0x1c73ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c73acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c73b0:
    // 0x1c73b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c73b4:
    // 0x1c73b4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c73b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1c73b8:
    // 0x1c73b8: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1c73b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c73bc:
    // 0x1c73bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c73c0:
    // 0x1c73c0: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x1c73c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
label_1c73c4:
    // 0x1c73c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c73c8:
    // 0x1c73c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c73c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c73cc:
    // 0x1c73cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c73d0:
    // 0x1c73d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c73d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c73d4:
    // 0x1c73d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c73d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c73d8:
    // 0x1c73d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c73dc:
    // 0x1c73dc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c73dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c73e0:
    // 0x1c73e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c73e4:
    // 0x1c73e4: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1c73e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c73e8:
    // 0x1c73e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c73ec:
    // 0x1c73ec: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c73ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1c73f0:
    // 0x1c73f0: 0x100003dc  b           . + 4 + (0x3DC << 2)
label_1c73f4:
    if (ctx->pc == 0x1C73F4u) {
        ctx->pc = 0x1C73F8u;
        goto label_1c73f8;
    }
    ctx->pc = 0x1C73F0u;
    {
        const bool branch_taken_0x1c73f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c73f0) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C73F8u;
label_1c73f8:
    // 0x1c73f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c73fc:
    // 0x1c73fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c73fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c7400:
    // 0x1c7400: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c7400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c7404:
    // 0x1c7404: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c7404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c7408:
    // 0x1c7408: 0x100003d6  b           . + 4 + (0x3D6 << 2)
label_1c740c:
    if (ctx->pc == 0x1C740Cu) {
        ctx->pc = 0x1C7410u;
        goto label_1c7410;
    }
    ctx->pc = 0x1C7408u;
    {
        const bool branch_taken_0x1c7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7408) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7410u;
label_1c7410:
    // 0x1c7410: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c7414:
    // 0x1c7414: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7418:
    // 0x1c7418: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c7418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c741c:
    // 0x1c741c: 0x100003d1  b           . + 4 + (0x3D1 << 2)
label_1c7420:
    if (ctx->pc == 0x1C7420u) {
        ctx->pc = 0x1C7424u;
        goto label_1c7424;
    }
    ctx->pc = 0x1C741Cu;
    {
        const bool branch_taken_0x1c741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c741c) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7424u;
label_1c7424:
    // 0x1c7424: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7428:
    // 0x1c7428: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c7428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c742c:
    // 0x1c742c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1c742cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_1c7430:
    // 0x1c7430: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x1c7430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1c7434:
    // 0x1c7434: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1c7438:
    if (ctx->pc == 0x1C7438u) {
        ctx->pc = 0x1C743Cu;
        goto label_1c743c;
    }
    ctx->pc = 0x1C7434u;
    {
        const bool branch_taken_0x1c7434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7434) {
            ctx->pc = 0x1C7450u;
            goto label_1c7450;
        }
    }
    ctx->pc = 0x1C743Cu;
label_1c743c:
    // 0x1c743c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c743cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c7440:
    // 0x1c7440: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c7440u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7444:
    // 0x1c7444: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x1c7444u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
label_1c7448:
    // 0x1c7448: 0x100003c6  b           . + 4 + (0x3C6 << 2)
label_1c744c:
    if (ctx->pc == 0x1C744Cu) {
        ctx->pc = 0x1C7450u;
        goto label_1c7450;
    }
    ctx->pc = 0x1C7448u;
    {
        const bool branch_taken_0x1c7448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7448) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7450u;
label_1c7450:
    // 0x1c7450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7454:
    // 0x1c7454: 0x94640a00  lhu         $a0, 0xA00($v1)
    ctx->pc = 0x1c7454u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
label_1c7458:
    // 0x1c7458: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1c7458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1c745c:
    // 0x1c745c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1c745cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1c7460:
    // 0x1c7460: 0x146003c0  bnez        $v1, . + 4 + (0x3C0 << 2)
label_1c7464:
    if (ctx->pc == 0x1C7464u) {
        ctx->pc = 0x1C7468u;
        goto label_1c7468;
    }
    ctx->pc = 0x1C7460u;
    {
        const bool branch_taken_0x1c7460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7460) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7468u;
label_1c7468:
    // 0x1c7468: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1c746c:
    // 0x1c746c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1c746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1c7470:
    // 0x1c7470: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1c7474:
    if (ctx->pc == 0x1C7474u) {
        ctx->pc = 0x1C7478u;
        goto label_1c7478;
    }
    ctx->pc = 0x1C7470u;
    {
        const bool branch_taken_0x1c7470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7470) {
            ctx->pc = 0x1C748Cu;
            goto label_1c748c;
        }
    }
    ctx->pc = 0x1C7478u;
label_1c7478:
    // 0x1c7478: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c747c:
    // 0x1c747c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c7480:
    // 0x1c7480: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c7480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1c7484:
    // 0x1c7484: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x1c7484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c7488:
    // 0x1c7488: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x1c7488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
label_1c748c:
    // 0x1c748c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1c748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1c7490:
    // 0x1c7490: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c7490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1c7494:
    // 0x1c7494: 0x106003b3  beqz        $v1, . + 4 + (0x3B3 << 2)
label_1c7498:
    if (ctx->pc == 0x1C7498u) {
        ctx->pc = 0x1C749Cu;
        goto label_1c749c;
    }
    ctx->pc = 0x1C7494u;
    {
        const bool branch_taken_0x1c7494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7494) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C749Cu;
label_1c749c:
    // 0x1c749c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c749cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c74a0:
    // 0x1c74a0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c74a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c74a4:
    // 0x1c74a4: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1c74a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_1c74a8:
    // 0x1c74a8: 0x106003ae  beqz        $v1, . + 4 + (0x3AE << 2)
label_1c74ac:
    if (ctx->pc == 0x1C74ACu) {
        ctx->pc = 0x1C74B0u;
        goto label_1c74b0;
    }
    ctx->pc = 0x1C74A8u;
    {
        const bool branch_taken_0x1c74a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c74a8) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C74B0u;
label_1c74b0:
    // 0x1c74b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c74b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c74b4:
    // 0x1c74b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c74b8:
    // 0x1c74b8: 0xac651b60  sw          $a1, 0x1B60($v1)
    ctx->pc = 0x1c74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 5));
label_1c74bc:
    // 0x1c74bc: 0x100003a9  b           . + 4 + (0x3A9 << 2)
label_1c74c0:
    if (ctx->pc == 0x1C74C0u) {
        ctx->pc = 0x1C74C4u;
        goto label_1c74c4;
    }
    ctx->pc = 0x1C74BCu;
    {
        const bool branch_taken_0x1c74bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c74bc) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C74C4u;
label_1c74c4:
    // 0x1c74c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c74c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c74c8:
    // 0x1c74c8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1c74c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c74cc:
    // 0x1c74cc: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1c74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_1c74d0:
    // 0x1c74d0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x1c74d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c74d4:
    // 0x1c74d4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1c74d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1c74d8:
    // 0x1c74d8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1c74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1c74dc:
    // 0x1c74dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c74e0:
    // 0x1c74e0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c74e4:
    // 0x1c74e4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c74e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1c74e8:
    // 0x1c74e8: 0x8ce80368  lw          $t0, 0x368($a3)
    ctx->pc = 0x1c74e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 872)));
label_1c74ec:
    // 0x1c74ec: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1c74ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1c74f0:
    // 0x1c74f0: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x1c74f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1c74f4:
    // 0x1c74f4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c74f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c74f8:
    // 0x1c74f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c74f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c74fc:
    // 0x1c74fc: 0xc0965d0  jal         func_259740
label_1c7500:
    if (ctx->pc == 0x1C7500u) {
        ctx->pc = 0x1C7504u;
        goto label_1c7504;
    }
    ctx->pc = 0x1C74FCu;
    SET_GPR_U32(ctx, 31, 0x1C7504u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C74FCu, 0x1C7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7504u;
label_1c7504:
    // 0x1c7504: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c7508:
    // 0x1c7508: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c750c:
    // 0x1c750c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c750cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1c7510:
    // 0x1c7510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7514:
    // 0x1c7514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7518:
    // 0x1c7518: 0xa0621576  sb          $v0, 0x1576($v1)
    ctx->pc = 0x1c7518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 2));
label_1c751c:
    // 0x1c751c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c751cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c7520:
    // 0x1c7520: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7524:
    // 0x1c7524: 0xa0641577  sb          $a0, 0x1577($v1)
    ctx->pc = 0x1c7524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5495), (uint8_t)GPR_U32(ctx, 4));
label_1c7528:
    // 0x1c7528: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c752c:
    // 0x1c752c: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1c752cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
label_1c7530:
    // 0x1c7530: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7534:
    // 0x1c7534: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c7534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c7538:
    // 0x1c7538: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c753c:
    // 0x1c753c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c753cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c7540:
    // 0x1c7540: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c7540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c7544:
    // 0x1c7544: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c7544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c7548:
    // 0x1c7548: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1c7548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1c754c:
    // 0x1c754c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c7550:
    if (ctx->pc == 0x1C7550u) {
        ctx->pc = 0x1C7554u;
        goto label_1c7554;
    }
    ctx->pc = 0x1C754Cu;
    {
        const bool branch_taken_0x1c754c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c754c) {
            ctx->pc = 0x1C7560u;
            goto label_1c7560;
        }
    }
    ctx->pc = 0x1C7554u;
label_1c7554:
    // 0x1c7554: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c7554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c7558:
    // 0x1c7558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c755c:
    // 0x1c755c: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1c755cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1c7560:
    // 0x1c7560: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7564:
    // 0x1c7564: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c7564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c7568:
    // 0x1c7568: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c7568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1c756c:
    // 0x1c756c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c756cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c7570:
    // 0x1c7570: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c7570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c7574:
    // 0x1c7574: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7578:
    // 0x1c7578: 0x84c31278  lh          $v1, 0x1278($a2)
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_1c757c:
    // 0x1c757c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_1c7580:
    if (ctx->pc == 0x1C7580u) {
        ctx->pc = 0x1C7584u;
        goto label_1c7584;
    }
    ctx->pc = 0x1C757Cu;
    {
        const bool branch_taken_0x1c757c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c757c) {
            ctx->pc = 0x1C75F4u;
            goto label_1c75f4;
        }
    }
    ctx->pc = 0x1C7584u;
label_1c7584:
    // 0x1c7584: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7588:
    // 0x1c7588: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_1c758c:
    // 0x1c758c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1c758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1c7590:
    // 0x1c7590: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1c7590u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1c7594:
    // 0x1c7594: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7598:
    // 0x1c7598: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c7598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1c759c:
    // 0x1c759c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1c75a0:
    if (ctx->pc == 0x1C75A0u) {
        ctx->pc = 0x1C75A4u;
        goto label_1c75a4;
    }
    ctx->pc = 0x1C759Cu;
    {
        const bool branch_taken_0x1c759c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c759c) {
            ctx->pc = 0x1C75F4u;
            goto label_1c75f4;
        }
    }
    ctx->pc = 0x1C75A4u;
label_1c75a4:
    // 0x1c75a4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c75a8:
    // 0x1c75a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c75ac:
    // 0x1c75ac: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c75acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c75b0:
    // 0x1c75b0: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1c75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1c75b4:
    // 0x1c75b4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c75b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c75b8:
    // 0x1c75b8: 0xc05ccfc  jal         func_1733F0
label_1c75bc:
    if (ctx->pc == 0x1C75BCu) {
        ctx->pc = 0x1C75C0u;
        goto label_1c75c0;
    }
    ctx->pc = 0x1C75B8u;
    SET_GPR_U32(ctx, 31, 0x1C75C0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C75B8u, 0x1C75C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75C0u;
label_1c75c0:
    // 0x1c75c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c75c4:
    // 0x1c75c4: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1c75c8:
    // 0x1c75c8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c75c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c75cc:
    // 0x1c75cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c75d0:
    // 0x1c75d0: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
label_1c75d4:
    // 0x1c75d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c75d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1c75d8:
    // 0x1c75d8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1c75d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c75dc:
    // 0x1c75dc: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1c75dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c75e0:
    // 0x1c75e0: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1c75e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c75e4:
    // 0x1c75e4: 0xc058f50  jal         func_163D40
label_1c75e8:
    if (ctx->pc == 0x1C75E8u) {
        ctx->pc = 0x1C75ECu;
        goto label_1c75ec;
    }
    ctx->pc = 0x1C75E4u;
    SET_GPR_U32(ctx, 31, 0x1C75ECu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C75E4u, 0x1C75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75ECu;
label_1c75ec:
    // 0x1c75ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c75f0:
    // 0x1c75f0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1c75f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1c75f4:
    // 0x1c75f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c75f8:
    // 0x1c75f8: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1c75f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1c75fc:
    // 0x1c75fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c75fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c7600:
    // 0x1c7600: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x1c7600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1c7604:
    // 0x1c7604: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1c7608:
    if (ctx->pc == 0x1C7608u) {
        ctx->pc = 0x1C760Cu;
        goto label_1c760c;
    }
    ctx->pc = 0x1C7604u;
    {
        const bool branch_taken_0x1c7604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7604) {
            ctx->pc = 0x1C768Cu;
            goto label_1c768c;
        }
    }
    ctx->pc = 0x1C760Cu;
label_1c760c:
    // 0x1c760c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c760cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c7610:
    // 0x1c7610: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c7610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c7614:
    // 0x1c7614: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1c7614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_1c7618:
    // 0x1c7618: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c7618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c761c:
    // 0x1c761c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c7620:
    // 0x1c7620: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1c7620u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1c7624:
    // 0x1c7624: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c7624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c7628:
    // 0x1c7628: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c762c:
    // 0x1c762c: 0xa083157d  sb          $v1, 0x157D($a0)
    ctx->pc = 0x1c762cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 3));
label_1c7630:
    // 0x1c7630: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7634:
    // 0x1c7634: 0x8c651b6c  lw          $a1, 0x1B6C($v1)
    ctx->pc = 0x1c7634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1c7638:
    // 0x1c7638: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
label_1c763c:
    if (ctx->pc == 0x1C763Cu) {
        ctx->pc = 0x1C7640u;
        goto label_1c7640;
    }
    ctx->pc = 0x1C7638u;
    {
        const bool branch_taken_0x1c7638 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7638) {
            ctx->pc = 0x1C768Cu;
            goto label_1c768c;
        }
    }
    ctx->pc = 0x1C7640u;
label_1c7640:
    // 0x1c7640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7644:
    // 0x1c7644: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7648:
    // 0x1c7648: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1c7648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
label_1c764c:
    // 0x1c764c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7650:
    // 0x1c7650: 0x846615ec  lh          $a2, 0x15EC($v1)
    ctx->pc = 0x1c7650u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c7654:
    // 0x1c7654: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_1c7658:
    if (ctx->pc == 0x1C7658u) {
        ctx->pc = 0x1C765Cu;
        goto label_1c765c;
    }
    ctx->pc = 0x1C7654u;
    {
        const bool branch_taken_0x1c7654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7654) {
            ctx->pc = 0x1C768Cu;
            goto label_1c768c;
        }
    }
    ctx->pc = 0x1C765Cu;
label_1c765c:
    // 0x1c765c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c765cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7660:
    // 0x1c7660: 0x84a315ec  lh          $v1, 0x15EC($a1)
    ctx->pc = 0x1c7660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
label_1c7664:
    // 0x1c7664: 0x2464fed4  addiu       $a0, $v1, -0x12C
    ctx->pc = 0x1c7664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966996));
label_1c7668:
    // 0x1c7668: 0xa4a415ec  sh          $a0, 0x15EC($a1)
    ctx->pc = 0x1c7668u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 4));
label_1c766c:
    // 0x1c766c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7670:
    // 0x1c7670: 0x846415ec  lh          $a0, 0x15EC($v1)
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c7674:
    // 0x1c7674: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1c7674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_1c7678:
    // 0x1c7678: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1c7678u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1c767c:
    // 0x1c767c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c7680:
    if (ctx->pc == 0x1C7680u) {
        ctx->pc = 0x1C7684u;
        goto label_1c7684;
    }
    ctx->pc = 0x1C767Cu;
    {
        const bool branch_taken_0x1c767c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c767c) {
            ctx->pc = 0x1C768Cu;
            goto label_1c768c;
        }
    }
    ctx->pc = 0x1C7684u;
label_1c7684:
    // 0x1c7684: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7688:
    // 0x1c7688: 0xa4a015ec  sh          $zero, 0x15EC($a1)
    ctx->pc = 0x1c7688u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1c768c:
    // 0x1c768c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c768cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7690:
    // 0x1c7690: 0x90c709da  lbu         $a3, 0x9DA($a2)
    ctx->pc = 0x1c7690u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2522)));
label_1c7694:
    // 0x1c7694: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x1c7694u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1c7698:
    // 0x1c7698: 0x3103003f  andi        $v1, $t0, 0x3F
    ctx->pc = 0x1c7698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
label_1c769c:
    // 0x1c769c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1c769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1c76a0:
    // 0x1c76a0: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
label_1c76a4:
    if (ctx->pc == 0x1C76A4u) {
        ctx->pc = 0x1C76A8u;
        goto label_1c76a8;
    }
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C76FCu;
            goto label_1c76fc;
        }
    }
    ctx->pc = 0x1C76A8u;
label_1c76a8:
    // 0x1c76a8: 0xc067694  jal         func_19DA50
label_1c76ac:
    if (ctx->pc == 0x1C76ACu) {
        ctx->pc = 0x1C76B0u;
        goto label_1c76b0;
    }
    ctx->pc = 0x1C76A8u;
    SET_GPR_U32(ctx, 31, 0x1C76B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C76A8u, 0x1C76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76B0u;
label_1c76b0:
    // 0x1c76b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c76b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c76b4:
    // 0x1c76b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c76b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c76b8:
    // 0x1c76b8: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x1c76b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1c76bc:
    // 0x1c76bc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1c76bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1c76c0:
    // 0x1c76c0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1c76c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1c76c4:
    // 0x1c76c4: 0x24c79228  addiu       $a3, $a2, -0x6DD8
    ctx->pc = 0x1c76c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939176));
label_1c76c8:
    // 0x1c76c8: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x1c76c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1c76cc:
    // 0x1c76cc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x1c76ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1c76d0:
    // 0x1c76d0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1c76d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c76d4:
    // 0x1c76d4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1c76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1c76d8:
    // 0x1c76d8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1c76d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1c76dc:
    // 0x1c76dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c76dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c76e0:
    // 0x1c76e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c76e4:
    // 0x1c76e4: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1c76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1c76e8:
    // 0x1c76e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c76e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1c76ec:
    // 0x1c76ec: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1c76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1c76f0:
    // 0x1c76f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c76f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c76f4:
    // 0x1c76f4: 0xc067b18  jal         func_19EC60
label_1c76f8:
    if (ctx->pc == 0x1C76F8u) {
        ctx->pc = 0x1C76FCu;
        goto label_1c76fc;
    }
    ctx->pc = 0x1C76F4u;
    SET_GPR_U32(ctx, 31, 0x1C76FCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C76F4u, 0x1C76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76FCu;
label_1c76fc:
    // 0x1c76fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7700:
    // 0x1c7700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7704:
    // 0x1c7704: 0xc096b40  jal         func_25AD00
label_1c7708:
    if (ctx->pc == 0x1C7708u) {
        ctx->pc = 0x1C770Cu;
        goto label_1c770c;
    }
    ctx->pc = 0x1C7704u;
    SET_GPR_U32(ctx, 31, 0x1C770Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C7704u, 0x1C770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C770Cu;
label_1c770c:
    // 0x1c770c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1c770cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7710:
    // 0x1c7710: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7714:
    // 0x1c7714: 0xc05cd10  jal         func_173440
label_1c7718:
    if (ctx->pc == 0x1C7718u) {
        ctx->pc = 0x1C771Cu;
        goto label_1c771c;
    }
    ctx->pc = 0x1C7714u;
    SET_GPR_U32(ctx, 31, 0x1C771Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C7714u, 0x1C771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C771Cu;
label_1c771c:
    // 0x1c771c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c771cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7720:
    // 0x1c7720: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7724:
    // 0x1c7724: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7728:
    // 0x1c7728: 0xc0573d8  jal         func_15CF60
label_1c772c:
    if (ctx->pc == 0x1C772Cu) {
        ctx->pc = 0x1C7730u;
        goto label_1c7730;
    }
    ctx->pc = 0x1C7728u;
    SET_GPR_U32(ctx, 31, 0x1C7730u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C7728u, 0x1C7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7730u;
label_1c7730:
    // 0x1c7730: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c7730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7734:
    // 0x1c7734: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7734u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7738:
    // 0x1c7738: 0xc097530  jal         func_25D4C0
label_1c773c:
    if (ctx->pc == 0x1C773Cu) {
        ctx->pc = 0x1C7740u;
        goto label_1c7740;
    }
    ctx->pc = 0x1C7738u;
    SET_GPR_U32(ctx, 31, 0x1C7740u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C7738u, 0x1C7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7740u;
label_1c7740:
    // 0x1c7740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7744:
    // 0x1c7744: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c7744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c7748:
    // 0x1c7748: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c774c:
    if (ctx->pc == 0x1C774Cu) {
        ctx->pc = 0x1C7750u;
        goto label_1c7750;
    }
    ctx->pc = 0x1C7748u;
    {
        const bool branch_taken_0x1c7748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7748) {
            ctx->pc = 0x1C775Cu;
            goto label_1c775c;
        }
    }
    ctx->pc = 0x1C7750u;
label_1c7750:
    // 0x1c7750: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c7750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c7754:
    // 0x1c7754: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7758:
    // 0x1c7758: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c7758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c775c:
    // 0x1c775c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c775cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7760:
    // 0x1c7760: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c7760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c7764:
    // 0x1c7764: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c7764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1c7768:
    // 0x1c7768: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c7768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c776c:
    // 0x1c776c: 0x108002fd  beqz        $a0, . + 4 + (0x2FD << 2)
label_1c7770:
    if (ctx->pc == 0x1C7770u) {
        ctx->pc = 0x1C7774u;
        goto label_1c7774;
    }
    ctx->pc = 0x1C776Cu;
    {
        const bool branch_taken_0x1c776c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c776c) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7774u;
label_1c7774:
    // 0x1c7774: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c7774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c7778:
    // 0x1c7778: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c777c:
    // 0x1c777c: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1c777cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
label_1c7780:
    // 0x1c7780: 0x100002f8  b           . + 4 + (0x2F8 << 2)
label_1c7784:
    if (ctx->pc == 0x1C7784u) {
        ctx->pc = 0x1C7788u;
        goto label_1c7788;
    }
    ctx->pc = 0x1C7780u;
    {
        const bool branch_taken_0x1c7780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7780) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7788u;
label_1c7788:
    // 0x1c7788: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c778c:
    // 0x1c778c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7790:
    // 0x1c7790: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c7790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1c7794:
    // 0x1c7794: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c7794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c7798:
    // 0x1c7798: 0x24060f41  addiu       $a2, $zero, 0xF41
    ctx->pc = 0x1c7798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3905));
label_1c779c:
    // 0x1c779c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c779cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c77a0:
    // 0x1c77a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c77a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c77a4:
    // 0x1c77a4: 0xc0965d0  jal         func_259740
label_1c77a8:
    if (ctx->pc == 0x1C77A8u) {
        ctx->pc = 0x1C77ACu;
        goto label_1c77ac;
    }
    ctx->pc = 0x1C77A4u;
    SET_GPR_U32(ctx, 31, 0x1C77ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C77A4u, 0x1C77ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77ACu;
label_1c77ac:
    // 0x1c77ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c77acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c77b0:
    // 0x1c77b0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c77b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c77b4:
    // 0x1c77b4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c77b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c77b8:
    // 0x1c77b8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c77bc:
    // 0x1c77bc: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c77bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c77c0:
    // 0x1c77c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c77c4:
    // 0x1c77c4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c77c8:
    // 0x1c77c8: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
label_1c77cc:
    // 0x1c77cc: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1c77ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c77d0:
    // 0x1c77d0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1c77d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1c77d4:
    // 0x1c77d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c77d8:
    // 0x1c77d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c77d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c77dc:
    // 0x1c77dc: 0xc096b40  jal         func_25AD00
label_1c77e0:
    if (ctx->pc == 0x1C77E0u) {
        ctx->pc = 0x1C77E4u;
        goto label_1c77e4;
    }
    ctx->pc = 0x1C77DCu;
    SET_GPR_U32(ctx, 31, 0x1C77E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C77DCu, 0x1C77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77E4u;
label_1c77e4:
    // 0x1c77e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c77e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c77e8:
    // 0x1c77e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c77ec:
    // 0x1c77ec: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c77ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1c77f0:
    // 0x1c77f0: 0xc05cd10  jal         func_173440
label_1c77f4:
    if (ctx->pc == 0x1C77F4u) {
        ctx->pc = 0x1C77F8u;
        goto label_1c77f8;
    }
    ctx->pc = 0x1C77F0u;
    SET_GPR_U32(ctx, 31, 0x1C77F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C77F0u, 0x1C77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77F8u;
label_1c77f8:
    // 0x1c77f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c77f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c77fc:
    // 0x1c77fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c77fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7800:
    // 0x1c7800: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7804:
    // 0x1c7804: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c7804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1c7808:
    // 0x1c7808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c780c:
    // 0x1c780c: 0xc0573d8  jal         func_15CF60
label_1c7810:
    if (ctx->pc == 0x1C7810u) {
        ctx->pc = 0x1C7814u;
        goto label_1c7814;
    }
    ctx->pc = 0x1C780Cu;
    SET_GPR_U32(ctx, 31, 0x1C7814u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C780Cu, 0x1C7814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7814u;
label_1c7814:
    // 0x1c7814: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7818:
    // 0x1c7818: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c781c:
    // 0x1c781c: 0xc097530  jal         func_25D4C0
label_1c7820:
    if (ctx->pc == 0x1C7820u) {
        ctx->pc = 0x1C7824u;
        goto label_1c7824;
    }
    ctx->pc = 0x1C781Cu;
    SET_GPR_U32(ctx, 31, 0x1C7824u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C781Cu, 0x1C7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7824u;
label_1c7824:
    // 0x1c7824: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c7824u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7828:
    // 0x1c7828: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c782c:
    // 0x1c782c: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x1c782cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
label_1c7830:
    // 0x1c7830: 0x110002cc  beqz        $t0, . + 4 + (0x2CC << 2)
label_1c7834:
    if (ctx->pc == 0x1C7834u) {
        ctx->pc = 0x1C7838u;
        goto label_1c7838;
    }
    ctx->pc = 0x1C7830u;
    {
        const bool branch_taken_0x1c7830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7830) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7838u;
label_1c7838:
    // 0x1c7838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c783c:
    // 0x1c783c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c7840:
    // 0x1c7840: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1c7840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1c7844:
    // 0x1c7844: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c7844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1c7848:
    // 0x1c7848: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1c784c:
    if (ctx->pc == 0x1C784Cu) {
        ctx->pc = 0x1C7850u;
        goto label_1c7850;
    }
    ctx->pc = 0x1C7848u;
    {
        const bool branch_taken_0x1c7848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7848) {
            ctx->pc = 0x1C790Cu;
            goto label_1c790c;
        }
    }
    ctx->pc = 0x1C7850u;
label_1c7850:
    // 0x1c7850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7854:
    // 0x1c7854: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7858:
    // 0x1c7858: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1c7858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
label_1c785c:
    // 0x1c785c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7860:
    // 0x1c7860: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7864:
    // 0x1c7864: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7868:
    // 0x1c7868: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c7868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
label_1c786c:
    // 0x1c786c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7870:
    // 0x1c7870: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7874:
    // 0x1c7874: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7878:
    // 0x1c7878: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1c7878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
label_1c787c:
    // 0x1c787c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7880:
    // 0x1c7880: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c7880u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1c7884:
    // 0x1c7884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7888:
    // 0x1c7888: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c7888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c788c:
    // 0x1c788c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c7890:
    if (ctx->pc == 0x1C7890u) {
        ctx->pc = 0x1C7894u;
        goto label_1c7894;
    }
    ctx->pc = 0x1C788Cu;
    {
        const bool branch_taken_0x1c788c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c788c) {
            ctx->pc = 0x1C78A4u;
            goto label_1c78a4;
        }
    }
    ctx->pc = 0x1C7894u;
label_1c7894:
    // 0x1c7894: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7898:
    // 0x1c7898: 0xc0571d0  jal         func_15C740
label_1c789c:
    if (ctx->pc == 0x1C789Cu) {
        ctx->pc = 0x1C78A0u;
        goto label_1c78a0;
    }
    ctx->pc = 0x1C7898u;
    SET_GPR_U32(ctx, 31, 0x1C78A0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C7898u, 0x1C78A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78A0u;
label_1c78a0:
    // 0x1c78a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c78a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c78a4:
    // 0x1c78a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c78a8:
    // 0x1c78a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78ac:
    // 0x1c78ac: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c78acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1c78b0:
    // 0x1c78b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c78b4:
    // 0x1c78b4: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c78b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78b8:
    // 0x1c78b8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1c78b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c78bc:
    // 0x1c78bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78c0:
    // 0x1c78c0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c78c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c78c4:
    // 0x1c78c4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78c8:
    // 0x1c78c8: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1c78c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c78cc:
    // 0x1c78cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78d0:
    // 0x1c78d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c78d4:
    // 0x1c78d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c78d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c78d8:
    // 0x1c78d8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c78d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78dc:
    // 0x1c78dc: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x1c78dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c78e0:
    // 0x1c78e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78e4:
    // 0x1c78e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c78e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c78e8:
    // 0x1c78e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c78ec:
    // 0x1c78ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78f0:
    // 0x1c78f0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c78f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1c78f4:
    // 0x1c78f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c78f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c78f8:
    // 0x1c78f8: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1c78f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c78fc:
    // 0x1c78fc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c78fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7900:
    // 0x1c7900: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1c7900u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c7904:
    // 0x1c7904: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c7908:
    if (ctx->pc == 0x1C7908u) {
        ctx->pc = 0x1C790Cu;
        goto label_1c790c;
    }
    ctx->pc = 0x1C7904u;
    {
        const bool branch_taken_0x1c7904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7904) {
            ctx->pc = 0x1C793Cu;
            goto label_1c793c;
        }
    }
    ctx->pc = 0x1C790Cu;
label_1c790c:
    // 0x1c790c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7910:
    // 0x1c7910: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7914:
    // 0x1c7914: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1c7914u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c7918:
    // 0x1c7918: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c791c:
    // 0x1c791c: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x1c791cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c7920:
    // 0x1c7920: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7924:
    // 0x1c7924: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1c7924u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7928:
    // 0x1c7928: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c7928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c792c:
    // 0x1c792c: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x1c792cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7930:
    // 0x1c7930: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c7934:
    // 0x1c7934: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7938:
    // 0x1c7938: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c7938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c793c:
    // 0x1c793c: 0x10000289  b           . + 4 + (0x289 << 2)
label_1c7940:
    if (ctx->pc == 0x1C7940u) {
        ctx->pc = 0x1C7944u;
        goto label_1c7944;
    }
    ctx->pc = 0x1C793Cu;
    {
        const bool branch_taken_0x1c793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c793c) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7944u;
label_1c7944:
    // 0x1c7944: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7948:
    // 0x1c7948: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c794c:
    // 0x1c794c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c794cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c7950:
    // 0x1c7950: 0x24060f3f  addiu       $a2, $zero, 0xF3F
    ctx->pc = 0x1c7950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3903));
label_1c7954:
    // 0x1c7954: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c7954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c7958:
    // 0x1c7958: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1c7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c795c:
    // 0x1c795c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1c795cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7960:
    // 0x1c7960: 0xc0965d0  jal         func_259740
label_1c7964:
    if (ctx->pc == 0x1C7964u) {
        ctx->pc = 0x1C7968u;
        goto label_1c7968;
    }
    ctx->pc = 0x1C7960u;
    SET_GPR_U32(ctx, 31, 0x1C7968u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C7960u, 0x1C7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7968u;
label_1c7968:
    // 0x1c7968: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c7968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c796c:
    // 0x1c796c: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x1c796cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1c7970:
    // 0x1c7970: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1c7970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c7974:
    // 0x1c7974: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1c7974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c7978:
    // 0x1c7978: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c797c:
    // 0x1c797c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c7980:
    // 0x1c7980: 0x3c058040  lui         $a1, 0x8040
    ctx->pc = 0x1c7980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32832 << 16));
label_1c7984:
    // 0x1c7984: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x1c7984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1c7988:
    // 0x1c7988: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x1c7988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
label_1c798c:
    // 0x1c798c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7990:
    // 0x1c7990: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7990u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7994:
    // 0x1c7994: 0xc096b40  jal         func_25AD00
label_1c7998:
    if (ctx->pc == 0x1C7998u) {
        ctx->pc = 0x1C799Cu;
        goto label_1c799c;
    }
    ctx->pc = 0x1C7994u;
    SET_GPR_U32(ctx, 31, 0x1C799Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C7994u, 0x1C799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C799Cu;
label_1c799c:
    // 0x1c799c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c799cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c79a0:
    // 0x1c79a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c79a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c79a4:
    // 0x1c79a4: 0xc05cd10  jal         func_173440
label_1c79a8:
    if (ctx->pc == 0x1C79A8u) {
        ctx->pc = 0x1C79ACu;
        goto label_1c79ac;
    }
    ctx->pc = 0x1C79A4u;
    SET_GPR_U32(ctx, 31, 0x1C79ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C79A4u, 0x1C79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79ACu;
label_1c79ac:
    // 0x1c79ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c79acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c79b0:
    // 0x1c79b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c79b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c79b4:
    // 0x1c79b4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c79b8:
    // 0x1c79b8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c79b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1c79bc:
    // 0x1c79bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c79bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c79c0:
    // 0x1c79c0: 0xc0573d8  jal         func_15CF60
label_1c79c4:
    if (ctx->pc == 0x1C79C4u) {
        ctx->pc = 0x1C79C8u;
        goto label_1c79c8;
    }
    ctx->pc = 0x1C79C0u;
    SET_GPR_U32(ctx, 31, 0x1C79C8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C79C0u, 0x1C79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79C8u;
label_1c79c8:
    // 0x1c79c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c79c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c79cc:
    // 0x1c79cc: 0xc097530  jal         func_25D4C0
label_1c79d0:
    if (ctx->pc == 0x1C79D0u) {
        ctx->pc = 0x1C79D4u;
        goto label_1c79d4;
    }
    ctx->pc = 0x1C79CCu;
    SET_GPR_U32(ctx, 31, 0x1C79D4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C79CCu, 0x1C79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79D4u;
label_1c79d4:
    // 0x1c79d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c79d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c79d8:
    // 0x1c79d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c79dc:
    // 0x1c79dc: 0x906609e7  lbu         $a2, 0x9E7($v1)
    ctx->pc = 0x1c79dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c79e0:
    // 0x1c79e0: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
label_1c79e4:
    if (ctx->pc == 0x1C79E4u) {
        ctx->pc = 0x1C79E8u;
        goto label_1c79e8;
    }
    ctx->pc = 0x1C79E0u;
    {
        const bool branch_taken_0x1c79e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c79e0) {
            ctx->pc = 0x1C7A08u;
            goto label_1c7a08;
        }
    }
    ctx->pc = 0x1C79E8u;
label_1c79e8:
    // 0x1c79e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c79ec:
    // 0x1c79ec: 0x8c8509f8  lw          $a1, 0x9F8($a0)
    ctx->pc = 0x1c79ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2552)));
label_1c79f0:
    // 0x1c79f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c79f4:
    // 0x1c79f4: 0x8c6609fc  lw          $a2, 0x9FC($v1)
    ctx->pc = 0x1c79f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2556)));
label_1c79f8:
    // 0x1c79f8: 0x24c4ff00  addiu       $a0, $a2, -0x100
    ctx->pc = 0x1c79f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967040));
label_1c79fc:
    // 0x1c79fc: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x1c79fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1c7a00:
    // 0x1c7a00: 0x10200258  beqz        $at, . + 4 + (0x258 << 2)
label_1c7a04:
    if (ctx->pc == 0x1C7A04u) {
        ctx->pc = 0x1C7A08u;
        goto label_1c7a08;
    }
    ctx->pc = 0x1C7A00u;
    {
        const bool branch_taken_0x1c7a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a00) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7A08u;
label_1c7a08:
    // 0x1c7a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a0c:
    // 0x1c7a0c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c7a10:
    // 0x1c7a10: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1c7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1c7a14:
    // 0x1c7a14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c7a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1c7a18:
    // 0x1c7a18: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_1c7a1c:
    if (ctx->pc == 0x1C7A1Cu) {
        ctx->pc = 0x1C7A20u;
        goto label_1c7a20;
    }
    ctx->pc = 0x1C7A18u;
    {
        const bool branch_taken_0x1c7a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a18) {
            ctx->pc = 0x1C7AE0u;
            goto label_1c7ae0;
        }
    }
    ctx->pc = 0x1C7A20u;
label_1c7a20:
    // 0x1c7a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7a24:
    // 0x1c7a24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a28:
    // 0x1c7a28: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1c7a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
label_1c7a2c:
    // 0x1c7a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a30:
    // 0x1c7a30: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7a34:
    // 0x1c7a34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a38:
    // 0x1c7a38: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c7a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
label_1c7a3c:
    // 0x1c7a3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a40:
    // 0x1c7a40: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7a44:
    // 0x1c7a44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a48:
    // 0x1c7a48: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c7a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c7a4c:
    // 0x1c7a4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a50:
    // 0x1c7a50: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1c7a50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1c7a54:
    // 0x1c7a54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a58:
    // 0x1c7a58: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1c7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c7a5c:
    // 0x1c7a5c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1c7a60:
    if (ctx->pc == 0x1C7A60u) {
        ctx->pc = 0x1C7A64u;
        goto label_1c7a64;
    }
    ctx->pc = 0x1C7A5Cu;
    {
        const bool branch_taken_0x1c7a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a5c) {
            ctx->pc = 0x1C7A78u;
            goto label_1c7a78;
        }
    }
    ctx->pc = 0x1C7A64u;
label_1c7a64:
    // 0x1c7a64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a68:
    // 0x1c7a68: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c7a68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1c7a6c:
    // 0x1c7a6c: 0xc0571d0  jal         func_15C740
label_1c7a70:
    if (ctx->pc == 0x1C7A70u) {
        ctx->pc = 0x1C7A74u;
        goto label_1c7a74;
    }
    ctx->pc = 0x1C7A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A74u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C7A6Cu, 0x1C7A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A74u;
label_1c7a74:
    // 0x1c7a74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7a74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7a78:
    // 0x1c7a78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7a7c:
    // 0x1c7a7c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a80:
    // 0x1c7a80: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x1c7a80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
label_1c7a84:
    // 0x1c7a84: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c7a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c7a88:
    // 0x1c7a88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a8c:
    // 0x1c7a8c: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x1c7a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
label_1c7a90:
    // 0x1c7a90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a94:
    // 0x1c7a94: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c7a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7a98:
    // 0x1c7a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7a9c:
    // 0x1c7a9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7aa0:
    // 0x1c7aa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7aa4:
    // 0x1c7aa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c7aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c7aa8:
    // 0x1c7aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7aac:
    // 0x1c7aac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ab0:
    // 0x1c7ab0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c7ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c7ab4:
    // 0x1c7ab4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ab8:
    // 0x1c7ab8: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1c7ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7abc:
    // 0x1c7abc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c7abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c7ac0:
    // 0x1c7ac0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ac4:
    // 0x1c7ac4: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c7ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1c7ac8:
    // 0x1c7ac8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c7ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7acc:
    // 0x1c7acc: 0xa600127c  sh          $zero, 0x127C($s0)
    ctx->pc = 0x1c7accu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c7ad0:
    // 0x1c7ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ad4:
    // 0x1c7ad4: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1c7ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c7ad8:
    // 0x1c7ad8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c7adc:
    if (ctx->pc == 0x1C7ADCu) {
        ctx->pc = 0x1C7AE0u;
        goto label_1c7ae0;
    }
    ctx->pc = 0x1C7AD8u;
    {
        const bool branch_taken_0x1c7ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ad8) {
            ctx->pc = 0x1C7B10u;
            goto label_1c7b10;
        }
    }
    ctx->pc = 0x1C7AE0u;
label_1c7ae0:
    // 0x1c7ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7ae4:
    // 0x1c7ae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ae8:
    // 0x1c7ae8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c7ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c7aec:
    // 0x1c7aec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7af0:
    // 0x1c7af0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c7af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c7af4:
    // 0x1c7af4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7af8:
    // 0x1c7af8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1c7af8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7afc:
    // 0x1c7afc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b00:
    // 0x1c7b00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7b00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7b04:
    // 0x1c7b04: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c7b08:
    // 0x1c7b08: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b0c:
    // 0x1c7b0c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1c7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1c7b10:
    // 0x1c7b10: 0x10000214  b           . + 4 + (0x214 << 2)
label_1c7b14:
    if (ctx->pc == 0x1C7B14u) {
        ctx->pc = 0x1C7B18u;
        goto label_1c7b18;
    }
    ctx->pc = 0x1C7B10u;
    {
        const bool branch_taken_0x1c7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b10) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7B18u;
label_1c7b18:
    // 0x1c7b18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b1c:
    // 0x1c7b1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b20:
    // 0x1c7b20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c7b20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7b24:
    // 0x1c7b24: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c7b28:
    // 0x1c7b28: 0x24030f41  addiu       $v1, $zero, 0xF41
    ctx->pc = 0x1c7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3905));
label_1c7b2c:
    // 0x1c7b2c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1c7b2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1c7b30:
    // 0x1c7b30: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c7b34:
    // 0x1c7b34: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c7b38:
    // 0x1c7b38: 0xc0965d0  jal         func_259740
label_1c7b3c:
    if (ctx->pc == 0x1C7B3Cu) {
        ctx->pc = 0x1C7B40u;
        goto label_1c7b40;
    }
    ctx->pc = 0x1C7B38u;
    SET_GPR_U32(ctx, 31, 0x1C7B40u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C7B38u, 0x1C7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B40u;
label_1c7b40:
    // 0x1c7b40: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c7b40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7b44:
    // 0x1c7b44: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b48:
    // 0x1c7b48: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x1c7b48u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1c7b4c:
    // 0x1c7b4c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1c7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1c7b50:
    // 0x1c7b50: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x1c7b50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c7b54:
    // 0x1c7b54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b58:
    // 0x1c7b58: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c7b5c:
    // 0x1c7b5c: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
label_1c7b60:
    // 0x1c7b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c7b64:
    // 0x1c7b64: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1c7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1c7b68:
    // 0x1c7b68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b6c:
    // 0x1c7b6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7b70:
    // 0x1c7b70: 0xc096b40  jal         func_25AD00
label_1c7b74:
    if (ctx->pc == 0x1C7B74u) {
        ctx->pc = 0x1C7B78u;
        goto label_1c7b78;
    }
    ctx->pc = 0x1C7B70u;
    SET_GPR_U32(ctx, 31, 0x1C7B78u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C7B70u, 0x1C7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B78u;
label_1c7b78:
    // 0x1c7b78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7b78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7b7c:
    // 0x1c7b7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b80:
    // 0x1c7b80: 0xc05cd10  jal         func_173440
label_1c7b84:
    if (ctx->pc == 0x1C7B84u) {
        ctx->pc = 0x1C7B88u;
        goto label_1c7b88;
    }
    ctx->pc = 0x1C7B80u;
    SET_GPR_U32(ctx, 31, 0x1C7B88u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C7B80u, 0x1C7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B88u;
label_1c7b88:
    // 0x1c7b88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7b8c:
    // 0x1c7b8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7b90:
    // 0x1c7b90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7b94:
    // 0x1c7b94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7b94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7b98:
    // 0x1c7b98: 0xc0573d8  jal         func_15CF60
label_1c7b9c:
    if (ctx->pc == 0x1C7B9Cu) {
        ctx->pc = 0x1C7BA0u;
        goto label_1c7ba0;
    }
    ctx->pc = 0x1C7B98u;
    SET_GPR_U32(ctx, 31, 0x1C7BA0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C7B98u, 0x1C7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BA0u;
label_1c7ba0:
    // 0x1c7ba0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7ba0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7ba4:
    // 0x1c7ba4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7ba4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7ba8:
    // 0x1c7ba8: 0xc097530  jal         func_25D4C0
label_1c7bac:
    if (ctx->pc == 0x1C7BACu) {
        ctx->pc = 0x1C7BB0u;
        goto label_1c7bb0;
    }
    ctx->pc = 0x1C7BA8u;
    SET_GPR_U32(ctx, 31, 0x1C7BB0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C7BA8u, 0x1C7BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BB0u;
label_1c7bb0:
    // 0x1c7bb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7bb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7bb4:
    // 0x1c7bb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7bb8:
    // 0x1c7bb8: 0x946409ee  lhu         $a0, 0x9EE($v1)
    ctx->pc = 0x1c7bb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_1c7bbc:
    // 0x1c7bbc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1c7bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1c7bc0:
    // 0x1c7bc0: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x1c7bc0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c7bc4:
    // 0x1c7bc4: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_1c7bc8:
    if (ctx->pc == 0x1C7BC8u) {
        ctx->pc = 0x1C7BCCu;
        goto label_1c7bcc;
    }
    ctx->pc = 0x1C7BC4u;
    {
        const bool branch_taken_0x1c7bc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bc4) {
            ctx->pc = 0x1C7BF8u;
            goto label_1c7bf8;
        }
    }
    ctx->pc = 0x1C7BCCu;
label_1c7bcc:
    // 0x1c7bcc: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1c7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1c7bd0:
    // 0x1c7bd0: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1c7bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1c7bd4:
    // 0x1c7bd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1c7bd8:
    if (ctx->pc == 0x1C7BD8u) {
        ctx->pc = 0x1C7BDCu;
        goto label_1c7bdc;
    }
    ctx->pc = 0x1C7BD4u;
    {
        const bool branch_taken_0x1c7bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bd4) {
            ctx->pc = 0x1C7BF8u;
            goto label_1c7bf8;
        }
    }
    ctx->pc = 0x1C7BDCu;
label_1c7bdc:
    // 0x1c7bdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7be0:
    // 0x1c7be0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c7be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7be4:
    // 0x1c7be4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7be8:
    // 0x1c7be8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c7bec:
    // 0x1c7bec: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1c7becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_1c7bf0:
    // 0x1c7bf0: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x1c7bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1c7bf4:
    // 0x1c7bf4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1c7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1c7bf8:
    // 0x1c7bf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7bfc:
    // 0x1c7bfc: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1c7bfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c7c00:
    // 0x1c7c00: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1c7c04:
    if (ctx->pc == 0x1C7C04u) {
        ctx->pc = 0x1C7C08u;
        goto label_1c7c08;
    }
    ctx->pc = 0x1C7C00u;
    {
        const bool branch_taken_0x1c7c00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c00) {
            ctx->pc = 0x1C7C28u;
            goto label_1c7c28;
        }
    }
    ctx->pc = 0x1C7C08u;
label_1c7c08:
    // 0x1c7c08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c0c:
    // 0x1c7c0c: 0x8c6509f8  lw          $a1, 0x9F8($v1)
    ctx->pc = 0x1c7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
label_1c7c10:
    // 0x1c7c10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c14:
    // 0x1c7c14: 0x8c6309fc  lw          $v1, 0x9FC($v1)
    ctx->pc = 0x1c7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2556)));
label_1c7c18:
    // 0x1c7c18: 0x2464ff00  addiu       $a0, $v1, -0x100
    ctx->pc = 0x1c7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
label_1c7c1c:
    // 0x1c7c1c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x1c7c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1c7c20:
    // 0x1c7c20: 0x102001d0  beqz        $at, . + 4 + (0x1D0 << 2)
label_1c7c24:
    if (ctx->pc == 0x1C7C24u) {
        ctx->pc = 0x1C7C28u;
        goto label_1c7c28;
    }
    ctx->pc = 0x1C7C20u;
    {
        const bool branch_taken_0x1c7c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c20) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7C28u;
label_1c7c28:
    // 0x1c7c28: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c2c:
    // 0x1c7c2c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1c7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c7c30:
    // 0x1c7c30: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1c7c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_1c7c34:
    // 0x1c7c34: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1c7c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_1c7c38:
    // 0x1c7c38: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_1c7c3c:
    if (ctx->pc == 0x1C7C3Cu) {
        ctx->pc = 0x1C7C40u;
        goto label_1c7c40;
    }
    ctx->pc = 0x1C7C38u;
    {
        const bool branch_taken_0x1c7c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c38) {
            ctx->pc = 0x1C7CFCu;
            goto label_1c7cfc;
        }
    }
    ctx->pc = 0x1C7C40u;
label_1c7c40:
    // 0x1c7c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7c44:
    // 0x1c7c44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c48:
    // 0x1c7c48: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1c7c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_1c7c4c:
    // 0x1c7c4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c50:
    // 0x1c7c50: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7c54:
    // 0x1c7c54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c58:
    // 0x1c7c58: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c7c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
label_1c7c5c:
    // 0x1c7c5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c60:
    // 0x1c7c60: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7c64:
    // 0x1c7c64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c68:
    // 0x1c7c68: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c7c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c7c6c:
    // 0x1c7c6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c70:
    // 0x1c7c70: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c7c70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1c7c74:
    // 0x1c7c74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c78:
    // 0x1c7c78: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1c7c7c:
    // 0x1c7c7c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c7c80:
    if (ctx->pc == 0x1C7C80u) {
        ctx->pc = 0x1C7C84u;
        goto label_1c7c84;
    }
    ctx->pc = 0x1C7C7Cu;
    {
        const bool branch_taken_0x1c7c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c7c) {
            ctx->pc = 0x1C7C94u;
            goto label_1c7c94;
        }
    }
    ctx->pc = 0x1C7C84u;
label_1c7c84:
    // 0x1c7c84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c88:
    // 0x1c7c88: 0xc0571d0  jal         func_15C740
label_1c7c8c:
    if (ctx->pc == 0x1C7C8Cu) {
        ctx->pc = 0x1C7C90u;
        goto label_1c7c90;
    }
    ctx->pc = 0x1C7C88u;
    SET_GPR_U32(ctx, 31, 0x1C7C90u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C7C88u, 0x1C7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C90u;
label_1c7c90:
    // 0x1c7c90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7c90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7c94:
    // 0x1c7c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7c98:
    // 0x1c7c98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7c9c:
    // 0x1c7c9c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c7c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c7ca0:
    // 0x1c7ca0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c7ca4:
    // 0x1c7ca4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ca8:
    // 0x1c7ca8: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1c7ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c7cac:
    // 0x1c7cac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7cb0:
    // 0x1c7cb0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c7cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7cb4:
    // 0x1c7cb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7cb8:
    // 0x1c7cb8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7cbc:
    // 0x1c7cbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7cc0:
    // 0x1c7cc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c7cc4:
    // 0x1c7cc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7cc8:
    // 0x1c7cc8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ccc:
    // 0x1c7ccc: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1c7cccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
label_1c7cd0:
    // 0x1c7cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7cd4:
    // 0x1c7cd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7cd8:
    // 0x1c7cd8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c7cdc:
    // 0x1c7cdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ce0:
    // 0x1c7ce0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c7ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1c7ce4:
    // 0x1c7ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ce8:
    // 0x1c7ce8: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1c7ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c7cec:
    // 0x1c7cec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7cf0:
    // 0x1c7cf0: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1c7cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c7cf4:
    // 0x1c7cf4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c7cf8:
    if (ctx->pc == 0x1C7CF8u) {
        ctx->pc = 0x1C7CFCu;
        goto label_1c7cfc;
    }
    ctx->pc = 0x1C7CF4u;
    {
        const bool branch_taken_0x1c7cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7cf4) {
            ctx->pc = 0x1C7D2Cu;
            goto label_1c7d2c;
        }
    }
    ctx->pc = 0x1C7CFCu;
label_1c7cfc:
    // 0x1c7cfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7d00:
    // 0x1c7d00: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7d04:
    // 0x1c7d04: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1c7d04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_1c7d08:
    // 0x1c7d08: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7d0c:
    // 0x1c7d0c: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1c7d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c7d10:
    // 0x1c7d10: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c7d10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7d14:
    // 0x1c7d14: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1c7d14u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7d18:
    // 0x1c7d18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7d1c:
    // 0x1c7d1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7d20:
    // 0x1c7d20: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c7d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c7d24:
    // 0x1c7d24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7d28:
    // 0x1c7d28: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c7d2c:
    // 0x1c7d2c: 0x1000018d  b           . + 4 + (0x18D << 2)
label_1c7d30:
    if (ctx->pc == 0x1C7D30u) {
        ctx->pc = 0x1C7D34u;
        goto label_1c7d34;
    }
    ctx->pc = 0x1C7D2Cu;
    {
        const bool branch_taken_0x1c7d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d2c) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7D34u;
label_1c7d34:
    // 0x1c7d34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7d38:
    // 0x1c7d38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7d3c:
    // 0x1c7d3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c7d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1c7d40:
    // 0x1c7d40: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c7d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1c7d44:
    // 0x1c7d44: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c7d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c7d48:
    // 0x1c7d48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c7d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c7d4c:
    // 0x1c7d4c: 0xc0965d0  jal         func_259740
label_1c7d50:
    if (ctx->pc == 0x1C7D50u) {
        ctx->pc = 0x1C7D54u;
        goto label_1c7d54;
    }
    ctx->pc = 0x1C7D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C7D4Cu, 0x1C7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D54u;
label_1c7d54:
    // 0x1c7d54: 0xc067694  jal         func_19DA50
label_1c7d58:
    if (ctx->pc == 0x1C7D58u) {
        ctx->pc = 0x1C7D5Cu;
        goto label_1c7d5c;
    }
    ctx->pc = 0x1C7D54u;
    SET_GPR_U32(ctx, 31, 0x1C7D5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C7D54u, 0x1C7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D5Cu;
label_1c7d5c:
    // 0x1c7d5c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1c7d5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7d60:
    // 0x1c7d60: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c7d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c7d64:
    // 0x1c7d64: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1c7d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1c7d68:
    // 0x1c7d68: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1c7d6c:
    // 0x1c7d6c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c7d70:
    // 0x1c7d70: 0x24459230  addiu       $a1, $v0, -0x6DD0
    ctx->pc = 0x1c7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939184));
label_1c7d74:
    // 0x1c7d74: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1c7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c7d78:
    // 0x1c7d78: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x1c7d78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7d7c:
    // 0x1c7d7c: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1c7d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1c7d80:
    // 0x1c7d80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7d84:
    // 0x1c7d84: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x1c7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1c7d88:
    // 0x1c7d88: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1c7d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_1c7d8c:
    // 0x1c7d8c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c7d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1c7d90:
    // 0x1c7d90: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1c7d90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7d94:
    // 0x1c7d94: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c7d94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1c7d98:
    // 0x1c7d98: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1c7d9c:
    // 0x1c7d9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7d9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7da0:
    // 0x1c7da0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c7da0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7da4:
    // 0x1c7da4: 0xc067b18  jal         func_19EC60
label_1c7da8:
    if (ctx->pc == 0x1C7DA8u) {
        ctx->pc = 0x1C7DACu;
        goto label_1c7dac;
    }
    ctx->pc = 0x1C7DA4u;
    SET_GPR_U32(ctx, 31, 0x1C7DACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C7DA4u, 0x1C7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DACu;
label_1c7dac:
    // 0x1c7dac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7dacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7db0:
    // 0x1c7db0: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x1c7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
label_1c7db4:
    // 0x1c7db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7db8:
    // 0x1c7db8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7dbc:
    // 0x1c7dbc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1c7dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_1c7dc0:
    // 0x1c7dc0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7dc4:
    // 0x1c7dc4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c7dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c7dc8:
    // 0x1c7dc8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c7dcc:
    // 0x1c7dcc: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c7dccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c7dd0:
    // 0x1c7dd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7dd4:
    // 0x1c7dd4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c7dd8:
    // 0x1c7dd8: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1c7ddc:
    // 0x1c7ddc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c7ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c7de0:
    // 0x1c7de0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1c7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1c7de4:
    // 0x1c7de4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7de8:
    // 0x1c7de8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c7de8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1c7dec:
    // 0x1c7dec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c7decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c7df0:
    // 0x1c7df0: 0xc096b40  jal         func_25AD00
label_1c7df4:
    if (ctx->pc == 0x1C7DF4u) {
        ctx->pc = 0x1C7DF8u;
        goto label_1c7df8;
    }
    ctx->pc = 0x1C7DF0u;
    SET_GPR_U32(ctx, 31, 0x1C7DF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C7DF0u, 0x1C7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DF8u;
label_1c7df8:
    // 0x1c7df8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c7df8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7dfc:
    // 0x1c7dfc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7e00:
    // 0x1c7e00: 0xc4e10188  lwc1        $f1, 0x188($a3)
    ctx->pc = 0x1c7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7e04:
    // 0x1c7e04: 0x3c0840a0  lui         $t0, 0x40A0
    ctx->pc = 0x1c7e04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16544 << 16));
label_1c7e08:
    // 0x1c7e08: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c7e08u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7e0c:
    // 0x1c7e0c: 0x0  nop
    ctx->pc = 0x1c7e0cu;
    // NOP
label_1c7e10:
    // 0x1c7e10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c7e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c7e14:
    // 0x1c7e14: 0xe4e00188  swc1        $f0, 0x188($a3)
    ctx->pc = 0x1c7e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 392), bits); }
label_1c7e18:
    // 0x1c7e18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7e1c:
    // 0x1c7e1c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1c7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7e20:
    // 0x1c7e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7e24:
    // 0x1c7e24: 0x0  nop
    ctx->pc = 0x1c7e24u;
    // NOP
label_1c7e28:
    // 0x1c7e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7e2c:
    // 0x1c7e2c: 0x0  nop
    ctx->pc = 0x1c7e2cu;
    // NOP
label_1c7e30:
    // 0x1c7e30: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1c7e34:
    if (ctx->pc == 0x1C7E34u) {
        ctx->pc = 0x1C7E38u;
        goto label_1c7e38;
    }
    ctx->pc = 0x1C7E30u;
    {
        const bool branch_taken_0x1c7e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7e30) {
            ctx->pc = 0x1C7E44u;
            goto label_1c7e44;
        }
    }
    ctx->pc = 0x1C7E38u;
label_1c7e38:
    // 0x1c7e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7e3c:
    // 0x1c7e3c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7e40:
    // 0x1c7e40: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1c7e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_1c7e44:
    // 0x1c7e44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7e48:
    // 0x1c7e48: 0xc05cd10  jal         func_173440
label_1c7e4c:
    if (ctx->pc == 0x1C7E4Cu) {
        ctx->pc = 0x1C7E50u;
        goto label_1c7e50;
    }
    ctx->pc = 0x1C7E48u;
    SET_GPR_U32(ctx, 31, 0x1C7E50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C7E48u, 0x1C7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E50u;
label_1c7e50:
    // 0x1c7e50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7e50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7e54:
    // 0x1c7e54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7e58:
    // 0x1c7e58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7e5c:
    // 0x1c7e5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7e5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7e60:
    // 0x1c7e60: 0xc0573d8  jal         func_15CF60
label_1c7e64:
    if (ctx->pc == 0x1C7E64u) {
        ctx->pc = 0x1C7E68u;
        goto label_1c7e68;
    }
    ctx->pc = 0x1C7E60u;
    SET_GPR_U32(ctx, 31, 0x1C7E68u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C7E60u, 0x1C7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E68u;
label_1c7e68:
    // 0x1c7e68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7e68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7e6c:
    // 0x1c7e6c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c7e70:
    // 0x1c7e70: 0xc097530  jal         func_25D4C0
label_1c7e74:
    if (ctx->pc == 0x1C7E74u) {
        ctx->pc = 0x1C7E78u;
        goto label_1c7e78;
    }
    ctx->pc = 0x1C7E70u;
    SET_GPR_U32(ctx, 31, 0x1C7E78u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C7E70u, 0x1C7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E78u;
label_1c7e78:
    // 0x1c7e78: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7e7c:
    // 0x1c7e7c: 0x90a409e7  lbu         $a0, 0x9E7($a1)
    ctx->pc = 0x1c7e7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_1c7e80:
    // 0x1c7e80: 0x10800138  beqz        $a0, . + 4 + (0x138 << 2)
label_1c7e84:
    if (ctx->pc == 0x1C7E84u) {
        ctx->pc = 0x1C7E88u;
        goto label_1c7e88;
    }
    ctx->pc = 0x1C7E80u;
    {
        const bool branch_taken_0x1c7e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e80) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7E88u;
label_1c7e88:
    // 0x1c7e88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7e8c:
    // 0x1c7e8c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c7e90:
    // 0x1c7e90: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1c7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1c7e94:
    // 0x1c7e94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c7e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1c7e98:
    // 0x1c7e98: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1c7e9c:
    if (ctx->pc == 0x1C7E9Cu) {
        ctx->pc = 0x1C7EA0u;
        goto label_1c7ea0;
    }
    ctx->pc = 0x1C7E98u;
    {
        const bool branch_taken_0x1c7e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e98) {
            ctx->pc = 0x1C7F5Cu;
            goto label_1c7f5c;
        }
    }
    ctx->pc = 0x1C7EA0u;
label_1c7ea0:
    // 0x1c7ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ea4:
    // 0x1c7ea4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ea8:
    // 0x1c7ea8: 0xe4a01564  swc1        $f0, 0x1564($a1)
    ctx->pc = 0x1c7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5476), bits); }
label_1c7eac:
    // 0x1c7eac: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7eb0:
    // 0x1c7eb0: 0xc4c000d4  lwc1        $f0, 0xD4($a2)
    ctx->pc = 0x1c7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7eb4:
    // 0x1c7eb4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7eb8:
    // 0x1c7eb8: 0xe4e01568  swc1        $f0, 0x1568($a3)
    ctx->pc = 0x1c7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 5480), bits); }
label_1c7ebc:
    // 0x1c7ebc: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c7ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ec0:
    // 0x1c7ec0: 0xc5001568  lwc1        $f0, 0x1568($t0)
    ctx->pc = 0x1c7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7ec4:
    // 0x1c7ec4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ec8:
    // 0x1c7ec8: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c7ecc:
    // 0x1c7ecc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ed0:
    // 0x1c7ed0: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c7ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1c7ed4:
    // 0x1c7ed4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ed8:
    // 0x1c7ed8: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1c7edc:
    // 0x1c7edc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c7ee0:
    if (ctx->pc == 0x1C7EE0u) {
        ctx->pc = 0x1C7EE4u;
        goto label_1c7ee4;
    }
    ctx->pc = 0x1C7EDCu;
    {
        const bool branch_taken_0x1c7edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7edc) {
            ctx->pc = 0x1C7EF4u;
            goto label_1c7ef4;
        }
    }
    ctx->pc = 0x1C7EE4u;
label_1c7ee4:
    // 0x1c7ee4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ee8:
    // 0x1c7ee8: 0xc0571d0  jal         func_15C740
label_1c7eec:
    if (ctx->pc == 0x1C7EECu) {
        ctx->pc = 0x1C7EF0u;
        goto label_1c7ef0;
    }
    ctx->pc = 0x1C7EE8u;
    SET_GPR_U32(ctx, 31, 0x1C7EF0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C7EE8u, 0x1C7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EF0u;
label_1c7ef0:
    // 0x1c7ef0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7ef0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7ef4:
    // 0x1c7ef4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7ef8:
    // 0x1c7ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7efc:
    // 0x1c7efc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c7efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c7f00:
    // 0x1c7f00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c7f04:
    // 0x1c7f04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f08:
    // 0x1c7f08: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c7f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1c7f0c:
    // 0x1c7f0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f10:
    // 0x1c7f10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c7f10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7f14:
    // 0x1c7f14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f18:
    // 0x1c7f18: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7f18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7f1c:
    // 0x1c7f1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f20:
    // 0x1c7f20: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1c7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1c7f24:
    // 0x1c7f24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7f28:
    // 0x1c7f28: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f2c:
    // 0x1c7f2c: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1c7f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
label_1c7f30:
    // 0x1c7f30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f34:
    // 0x1c7f34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7f38:
    // 0x1c7f38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c7f3c:
    // 0x1c7f3c: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c7f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f40:
    // 0x1c7f40: 0xa603127a  sh          $v1, 0x127A($s0)
    ctx->pc = 0x1c7f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c7f44:
    // 0x1c7f44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f48:
    // 0x1c7f48: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1c7f48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c7f4c:
    // 0x1c7f4c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f50:
    // 0x1c7f50: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1c7f50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c7f54:
    // 0x1c7f54: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c7f58:
    if (ctx->pc == 0x1C7F58u) {
        ctx->pc = 0x1C7F5Cu;
        goto label_1c7f5c;
    }
    ctx->pc = 0x1C7F54u;
    {
        const bool branch_taken_0x1c7f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f54) {
            ctx->pc = 0x1C7F8Cu;
            goto label_1c7f8c;
        }
    }
    ctx->pc = 0x1C7F5Cu;
label_1c7f5c:
    // 0x1c7f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7f60:
    // 0x1c7f60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f64:
    // 0x1c7f64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c7f64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c7f68:
    // 0x1c7f68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f6c:
    // 0x1c7f6c: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1c7f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c7f70:
    // 0x1c7f70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f74:
    // 0x1c7f74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c7f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c7f78:
    // 0x1c7f78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f7c:
    // 0x1c7f7c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1c7f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c7f80:
    // 0x1c7f80: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1c7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c7f84:
    // 0x1c7f84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f88:
    // 0x1c7f88: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1c7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1c7f8c:
    // 0x1c7f8c: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_1c7f90:
    if (ctx->pc == 0x1C7F90u) {
        ctx->pc = 0x1C7F94u;
        goto label_1c7f94;
    }
    ctx->pc = 0x1C7F8Cu;
    {
        const bool branch_taken_0x1c7f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f8c) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C7F94u;
label_1c7f94:
    // 0x1c7f94: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f98:
    // 0x1c7f98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7f9c:
    // 0x1c7f9c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c7f9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1c7fa0:
    // 0x1c7fa0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c7fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c7fa4:
    // 0x1c7fa4: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1c7fa8:
    // 0x1c7fa8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c7fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c7fac:
    // 0x1c7fac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c7facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c7fb0:
    // 0x1c7fb0: 0xc0965d0  jal         func_259740
label_1c7fb4:
    if (ctx->pc == 0x1C7FB4u) {
        ctx->pc = 0x1C7FB8u;
        goto label_1c7fb8;
    }
    ctx->pc = 0x1C7FB0u;
    SET_GPR_U32(ctx, 31, 0x1C7FB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C7FB0u, 0x1C7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FB8u;
label_1c7fb8:
    // 0x1c7fb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c7fb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7fbc:
    // 0x1c7fbc: 0xc067694  jal         func_19DA50
label_1c7fc0:
    if (ctx->pc == 0x1C7FC0u) {
        ctx->pc = 0x1C7FC4u;
        goto label_1c7fc4;
    }
    ctx->pc = 0x1C7FBCu;
    SET_GPR_U32(ctx, 31, 0x1C7FC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C7FBCu, 0x1C7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FC4u;
label_1c7fc4:
    // 0x1c7fc4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7fc4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c7fc8:
    // 0x1c7fc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c7fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c7fcc:
    // 0x1c7fcc: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1c7fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1c7fd0:
    // 0x1c7fd0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1c7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c7fd4:
    // 0x1c7fd4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1c7fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1c7fd8:
    // 0x1c7fd8: 0x24c79230  addiu       $a3, $a2, -0x6DD0
    ctx->pc = 0x1c7fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939184));
label_1c7fdc:
    // 0x1c7fdc: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1c7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1c7fe0:
    // 0x1c7fe0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1c7fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7fe4:
    // 0x1c7fe4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1c7fe4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c7fe8:
    // 0x1c7fe8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1c7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1c7fec:
    // 0x1c7fec: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x1c7fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1c7ff0:
    // 0x1c7ff0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1c7ff0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7ff4:
    // 0x1c7ff4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c7ff8:
    // 0x1c7ff8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1c7ffc:
    // 0x1c7ffc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c7ffcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1c8000:
    // 0x1c8000: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1c8004:
    // 0x1c8004: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c8004u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8008:
    // 0x1c8008: 0xc067b18  jal         func_19EC60
label_1c800c:
    if (ctx->pc == 0x1C800Cu) {
        ctx->pc = 0x1C8010u;
        goto label_1c8010;
    }
    ctx->pc = 0x1C8008u;
    SET_GPR_U32(ctx, 31, 0x1C8010u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C8008u, 0x1C8010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8010u;
label_1c8010:
    // 0x1c8010: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1c8010u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8014:
    // 0x1c8014: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x1c8014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
label_1c8018:
    // 0x1c8018: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8018u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c801c:
    // 0x1c801c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c801cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8020:
    // 0x1c8020: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1c8020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_1c8024:
    // 0x1c8024: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8028:
    // 0x1c8028: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c802c:
    // 0x1c802c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1c802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c8030:
    // 0x1c8030: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1c8030u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_1c8034:
    // 0x1c8034: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c8034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8038:
    // 0x1c8038: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c8038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c803c:
    // 0x1c803c: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c803cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1c8040:
    // 0x1c8040: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x1c8040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c8044:
    // 0x1c8044: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1c8044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_1c8048:
    // 0x1c8048: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c804c:
    // 0x1c804c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c8050:
    // 0x1c8050: 0xc096b40  jal         func_25AD00
label_1c8054:
    if (ctx->pc == 0x1C8054u) {
        ctx->pc = 0x1C8058u;
        goto label_1c8058;
    }
    ctx->pc = 0x1C8050u;
    SET_GPR_U32(ctx, 31, 0x1C8058u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C8050u, 0x1C8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8058u;
label_1c8058:
    // 0x1c8058: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8058u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c805c:
    // 0x1c805c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c805cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8060:
    // 0x1c8060: 0xc4c10188  lwc1        $f1, 0x188($a2)
    ctx->pc = 0x1c8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8064:
    // 0x1c8064: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x1c8064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_1c8068:
    // 0x1c8068: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c806c:
    // 0x1c806c: 0x0  nop
    ctx->pc = 0x1c806cu;
    // NOP
label_1c8070:
    // 0x1c8070: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c8074:
    // 0x1c8074: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x1c8074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
label_1c8078:
    // 0x1c8078: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c807c:
    // 0x1c807c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1c807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8080:
    // 0x1c8080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8084:
    // 0x1c8084: 0x0  nop
    ctx->pc = 0x1c8084u;
    // NOP
label_1c8088:
    // 0x1c8088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c808c:
    // 0x1c808c: 0x0  nop
    ctx->pc = 0x1c808cu;
    // NOP
label_1c8090:
    // 0x1c8090: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1c8094:
    if (ctx->pc == 0x1C8094u) {
        ctx->pc = 0x1C8098u;
        goto label_1c8098;
    }
    ctx->pc = 0x1C8090u;
    {
        const bool branch_taken_0x1c8090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8090) {
            ctx->pc = 0x1C80A4u;
            goto label_1c80a4;
        }
    }
    ctx->pc = 0x1C8098u;
label_1c8098:
    // 0x1c8098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c809c:
    // 0x1c809c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c80a0:
    // 0x1c80a0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1c80a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1c80a4:
    // 0x1c80a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c80a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c80a8:
    // 0x1c80a8: 0xc05cd10  jal         func_173440
label_1c80ac:
    if (ctx->pc == 0x1C80ACu) {
        ctx->pc = 0x1C80B0u;
        goto label_1c80b0;
    }
    ctx->pc = 0x1C80A8u;
    SET_GPR_U32(ctx, 31, 0x1C80B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C80A8u, 0x1C80B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80B0u;
label_1c80b0:
    // 0x1c80b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c80b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c80b4:
    // 0x1c80b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c80b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c80b8:
    // 0x1c80b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c80bc:
    // 0x1c80bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c80bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c80c0:
    // 0x1c80c0: 0xc0573d8  jal         func_15CF60
label_1c80c4:
    if (ctx->pc == 0x1C80C4u) {
        ctx->pc = 0x1C80C8u;
        goto label_1c80c8;
    }
    ctx->pc = 0x1C80C0u;
    SET_GPR_U32(ctx, 31, 0x1C80C8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C80C0u, 0x1C80C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80C8u;
label_1c80c8:
    // 0x1c80c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c80c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c80cc:
    // 0x1c80cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c80ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c80d0:
    // 0x1c80d0: 0xc097530  jal         func_25D4C0
label_1c80d4:
    if (ctx->pc == 0x1C80D4u) {
        ctx->pc = 0x1C80D8u;
        goto label_1c80d8;
    }
    ctx->pc = 0x1C80D0u;
    SET_GPR_U32(ctx, 31, 0x1C80D8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C80D0u, 0x1C80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80D8u;
label_1c80d8:
    // 0x1c80d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c80d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c80dc:
    // 0x1c80dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c80e0:
    // 0x1c80e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c80e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c80e4:
    // 0x1c80e4: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
label_1c80e8:
    if (ctx->pc == 0x1C80E8u) {
        ctx->pc = 0x1C80ECu;
        goto label_1c80ec;
    }
    ctx->pc = 0x1C80E4u;
    {
        const bool branch_taken_0x1c80e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c80e4) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C80ECu;
label_1c80ec:
    // 0x1c80ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c80f0:
    // 0x1c80f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c80f4:
    // 0x1c80f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c80f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c80f8:
    // 0x1c80f8: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1c80fc:
    if (ctx->pc == 0x1C80FCu) {
        ctx->pc = 0x1C8100u;
        goto label_1c8100;
    }
    ctx->pc = 0x1C80F8u;
    {
        const bool branch_taken_0x1c80f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c80f8) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C8100u;
label_1c8100:
    // 0x1c8100: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8104:
    // 0x1c8104: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8108:
    // 0x1c8108: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c8108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c810c:
    // 0x1c810c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1c8110:
    // 0x1c8110: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c8110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c8114:
    // 0x1c8114: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c8114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c8118:
    // 0x1c8118: 0xc0965d0  jal         func_259740
label_1c811c:
    if (ctx->pc == 0x1C811Cu) {
        ctx->pc = 0x1C8120u;
        goto label_1c8120;
    }
    ctx->pc = 0x1C8118u;
    SET_GPR_U32(ctx, 31, 0x1C8120u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C8118u, 0x1C8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8120u;
label_1c8120:
    // 0x1c8120: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8120u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8124:
    // 0x1c8124: 0xc067694  jal         func_19DA50
label_1c8128:
    if (ctx->pc == 0x1C8128u) {
        ctx->pc = 0x1C812Cu;
        goto label_1c812c;
    }
    ctx->pc = 0x1C8124u;
    SET_GPR_U32(ctx, 31, 0x1C812Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C8124u, 0x1C812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C812Cu;
label_1c812c:
    // 0x1c812c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c812cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8130:
    // 0x1c8130: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1c8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c8134:
    // 0x1c8134: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1c8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1c8138:
    // 0x1c8138: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1c8138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c813c:
    // 0x1c813c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1c813cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1c8140:
    // 0x1c8140: 0x24659230  addiu       $a1, $v1, -0x6DD0
    ctx->pc = 0x1c8140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939184));
label_1c8144:
    // 0x1c8144: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c8144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1c8148:
    // 0x1c8148: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1c8148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1c814c:
    // 0x1c814c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1c814cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1c8150:
    // 0x1c8150: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1c8150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1c8154:
    // 0x1c8154: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1c8154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1c8158:
    // 0x1c8158: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c8158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c815c:
    // 0x1c815c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8160:
    // 0x1c8160: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1c8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1c8164:
    // 0x1c8164: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c8164u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1c8168:
    // 0x1c8168: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1c8168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1c816c:
    // 0x1c816c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c816cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8170:
    // 0x1c8170: 0xc067b18  jal         func_19EC60
label_1c8174:
    if (ctx->pc == 0x1C8174u) {
        ctx->pc = 0x1C8178u;
        goto label_1c8178;
    }
    ctx->pc = 0x1C8170u;
    SET_GPR_U32(ctx, 31, 0x1C8178u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C8170u, 0x1C8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8178u;
label_1c8178:
    // 0x1c8178: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8178u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c817c:
    // 0x1c817c: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x1c817cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
label_1c8180:
    // 0x1c8180: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8180u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8184:
    // 0x1c8184: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c8184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8188:
    // 0x1c8188: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1c8188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_1c818c:
    // 0x1c818c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8190:
    // 0x1c8190: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1c8190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c8194:
    // 0x1c8194: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1c8194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c8198:
    // 0x1c8198: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x1c8198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_1c819c:
    // 0x1c819c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c81a0:
    // 0x1c81a0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c81a4:
    // 0x1c81a4: 0x3c088040  lui         $t0, 0x8040
    ctx->pc = 0x1c81a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32832 << 16));
label_1c81a8:
    // 0x1c81a8: 0xe83025  or          $a2, $a3, $t0
    ctx->pc = 0x1c81a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1c81ac:
    // 0x1c81ac: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1c81acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_1c81b0:
    // 0x1c81b0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c81b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c81b4:
    // 0x1c81b4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1c81b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1c81b8:
    // 0x1c81b8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1c81b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c81bc:
    // 0x1c81bc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1c81bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1c81c0:
    // 0x1c81c0: 0xc096b40  jal         func_25AD00
label_1c81c4:
    if (ctx->pc == 0x1C81C4u) {
        ctx->pc = 0x1C81C8u;
        goto label_1c81c8;
    }
    ctx->pc = 0x1C81C0u;
    SET_GPR_U32(ctx, 31, 0x1C81C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C81C0u, 0x1C81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81C8u;
label_1c81c8:
    // 0x1c81c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c81cc:
    // 0x1c81cc: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1c81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c81d0:
    // 0x1c81d0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1c81d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_1c81d4:
    // 0x1c81d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c81d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c81d8:
    // 0x1c81d8: 0x0  nop
    ctx->pc = 0x1c81d8u;
    // NOP
label_1c81dc:
    // 0x1c81dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c81dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c81e0:
    // 0x1c81e0: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1c81e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_1c81e4:
    // 0x1c81e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c81e8:
    // 0x1c81e8: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1c81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c81ec:
    // 0x1c81ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c81ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c81f0:
    // 0x1c81f0: 0x0  nop
    ctx->pc = 0x1c81f0u;
    // NOP
label_1c81f4:
    // 0x1c81f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c81f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c81f8:
    // 0x1c81f8: 0x0  nop
    ctx->pc = 0x1c81f8u;
    // NOP
label_1c81fc:
    // 0x1c81fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1c8200:
    if (ctx->pc == 0x1C8200u) {
        ctx->pc = 0x1C8204u;
        goto label_1c8204;
    }
    ctx->pc = 0x1C81FCu;
    {
        const bool branch_taken_0x1c81fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c81fc) {
            ctx->pc = 0x1C8210u;
            goto label_1c8210;
        }
    }
    ctx->pc = 0x1C8204u;
label_1c8204:
    // 0x1c8204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8208:
    // 0x1c8208: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c820c:
    // 0x1c820c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1c820cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1c8210:
    // 0x1c8210: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8214:
    // 0x1c8214: 0xc05cd10  jal         func_173440
label_1c8218:
    if (ctx->pc == 0x1C8218u) {
        ctx->pc = 0x1C821Cu;
        goto label_1c821c;
    }
    ctx->pc = 0x1C8214u;
    SET_GPR_U32(ctx, 31, 0x1C821Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C8214u, 0x1C821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C821Cu;
label_1c821c:
    // 0x1c821c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c821cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8220:
    // 0x1c8220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c8224:
    // 0x1c8224: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8228:
    // 0x1c8228: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c822c:
    // 0x1c822c: 0xc0573d8  jal         func_15CF60
label_1c8230:
    if (ctx->pc == 0x1C8230u) {
        ctx->pc = 0x1C8234u;
        goto label_1c8234;
    }
    ctx->pc = 0x1C822Cu;
    SET_GPR_U32(ctx, 31, 0x1C8234u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C822Cu, 0x1C8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8234u;
label_1c8234:
    // 0x1c8234: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c8234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8238:
    // 0x1c8238: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c823c:
    // 0x1c823c: 0xc097530  jal         func_25D4C0
label_1c8240:
    if (ctx->pc == 0x1C8240u) {
        ctx->pc = 0x1C8244u;
        goto label_1c8244;
    }
    ctx->pc = 0x1C823Cu;
    SET_GPR_U32(ctx, 31, 0x1C8244u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C823Cu, 0x1C8244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8244u;
label_1c8244:
    // 0x1c8244: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c8244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8248:
    // 0x1c8248: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c824c:
    // 0x1c824c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c824cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c8250:
    // 0x1c8250: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_1c8254:
    if (ctx->pc == 0x1C8254u) {
        ctx->pc = 0x1C8258u;
        goto label_1c8258;
    }
    ctx->pc = 0x1C8250u;
    {
        const bool branch_taken_0x1c8250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8250) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C8258u;
label_1c8258:
    // 0x1c8258: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c825c:
    // 0x1c825c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c825cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c8260:
    // 0x1c8260: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c8260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1c8264:
    // 0x1c8264: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1c8264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c8268:
    // 0x1c8268: 0x10a00030  beqz        $a1, . + 4 + (0x30 << 2)
label_1c826c:
    if (ctx->pc == 0x1C826Cu) {
        ctx->pc = 0x1C8270u;
        goto label_1c8270;
    }
    ctx->pc = 0x1C8268u;
    {
        const bool branch_taken_0x1c8268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8268) {
            ctx->pc = 0x1C832Cu;
            goto label_1c832c;
        }
    }
    ctx->pc = 0x1C8270u;
label_1c8270:
    // 0x1c8270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8274:
    // 0x1c8274: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8278:
    // 0x1c8278: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1c8278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
label_1c827c:
    // 0x1c827c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8280:
    // 0x1c8280: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c8280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8284:
    // 0x1c8284: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8288:
    // 0x1c8288: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c8288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_1c828c:
    // 0x1c828c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c828cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8290:
    // 0x1c8290: 0xc4c01568  lwc1        $f0, 0x1568($a2)
    ctx->pc = 0x1c8290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8294:
    // 0x1c8294: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8298:
    // 0x1c8298: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c8298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c829c:
    // 0x1c829c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82a0:
    // 0x1c82a0: 0xa4a01574  sh          $zero, 0x1574($a1)
    ctx->pc = 0x1c82a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1c82a4:
    // 0x1c82a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c82a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82a8:
    // 0x1c82a8: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c82a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1c82ac:
    // 0x1c82ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c82b0:
    if (ctx->pc == 0x1C82B0u) {
        ctx->pc = 0x1C82B4u;
        goto label_1c82b4;
    }
    ctx->pc = 0x1C82ACu;
    {
        const bool branch_taken_0x1c82ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82ac) {
            ctx->pc = 0x1C82C4u;
            goto label_1c82c4;
        }
    }
    ctx->pc = 0x1C82B4u;
label_1c82b4:
    // 0x1c82b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82b8:
    // 0x1c82b8: 0xc0571d0  jal         func_15C740
label_1c82bc:
    if (ctx->pc == 0x1C82BCu) {
        ctx->pc = 0x1C82C0u;
        goto label_1c82c0;
    }
    ctx->pc = 0x1C82B8u;
    SET_GPR_U32(ctx, 31, 0x1C82C0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C82B8u, 0x1C82C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C0u;
label_1c82c0:
    // 0x1c82c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c82c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c82c4:
    // 0x1c82c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c82c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c82c8:
    // 0x1c82c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82cc:
    // 0x1c82cc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c82ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1c82d0:
    // 0x1c82d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c82d4:
    // 0x1c82d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c82d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82d8:
    // 0x1c82d8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1c82d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c82dc:
    // 0x1c82dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c82dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82e0:
    // 0x1c82e0: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1c82e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c82e4:
    // 0x1c82e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82e8:
    // 0x1c82e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c82e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c82ec:
    // 0x1c82ec: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82f0:
    // 0x1c82f0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1c82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1c82f4:
    // 0x1c82f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c82f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c82f8:
    // 0x1c82f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c82fc:
    // 0x1c82fc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c82fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c8300:
    // 0x1c8300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8304:
    // 0x1c8304: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c8308:
    // 0x1c8308: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c8308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c830c:
    // 0x1c830c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8310:
    // 0x1c8310: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c8310u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1c8314:
    // 0x1c8314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8318:
    // 0x1c8318: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1c8318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c831c:
    // 0x1c831c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8320:
    // 0x1c8320: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1c8320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c8324:
    // 0x1c8324: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c8328:
    if (ctx->pc == 0x1C8328u) {
        ctx->pc = 0x1C832Cu;
        goto label_1c832c;
    }
    ctx->pc = 0x1C8324u;
    {
        const bool branch_taken_0x1c8324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8324) {
            ctx->pc = 0x1C835Cu;
            goto label_1c835c;
        }
    }
    ctx->pc = 0x1C832Cu;
label_1c832c:
    // 0x1c832c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8330:
    // 0x1c8330: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8334:
    // 0x1c8334: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c8334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c8338:
    // 0x1c8338: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c833c:
    // 0x1c833c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1c833cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c8340:
    // 0x1c8340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8344:
    // 0x1c8344: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c8344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c8348:
    // 0x1c8348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c834c:
    // 0x1c834c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c834cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c8350:
    // 0x1c8350: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c8350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c8354:
    // 0x1c8354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c8358:
    // 0x1c8358: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c8358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c835c:
    // 0x1c835c: 0x10000001  b           . + 4 + (0x1 << 2)
label_1c8360:
    if (ctx->pc == 0x1C8360u) {
        ctx->pc = 0x1C8364u;
        goto label_1c8364;
    }
    ctx->pc = 0x1C835Cu;
    {
        const bool branch_taken_0x1c835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c835c) {
            ctx->pc = 0x1C8364u;
            goto label_1c8364;
        }
    }
    ctx->pc = 0x1C8364u;
label_1c8364:
    // 0x1c8364: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1c8364u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8368:
    // 0x1c8368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c836c:
    // 0x1c836c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c836cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8370:
    // 0x1c8370: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c8370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c8374:
    // 0x1c8374: 0x3e00008  jr          $ra
label_1c8378:
    if (ctx->pc == 0x1C8378u) {
        ctx->pc = 0x1C837Cu;
        goto label_fallthrough_0x1c8374;
    }
    ctx->pc = 0x1C8374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c8374:
    ctx->pc = 0x1C837Cu;
}
