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

// Function: Set_effect_pl00_denkiatk02
// Address: 0x2f2a80 - 0x2f2f8c
void Set_effect_pl00_denkiatk02_0x2f2a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denkiatk02_0x2f2a80");
#endif

    switch (ctx->pc) {
        case 0x2f2a80u: goto label_2f2a80;
        case 0x2f2a84u: goto label_2f2a84;
        case 0x2f2a88u: goto label_2f2a88;
        case 0x2f2a8cu: goto label_2f2a8c;
        case 0x2f2a90u: goto label_2f2a90;
        case 0x2f2a94u: goto label_2f2a94;
        case 0x2f2a98u: goto label_2f2a98;
        case 0x2f2a9cu: goto label_2f2a9c;
        case 0x2f2aa0u: goto label_2f2aa0;
        case 0x2f2aa4u: goto label_2f2aa4;
        case 0x2f2aa8u: goto label_2f2aa8;
        case 0x2f2aacu: goto label_2f2aac;
        case 0x2f2ab0u: goto label_2f2ab0;
        case 0x2f2ab4u: goto label_2f2ab4;
        case 0x2f2ab8u: goto label_2f2ab8;
        case 0x2f2abcu: goto label_2f2abc;
        case 0x2f2ac0u: goto label_2f2ac0;
        case 0x2f2ac4u: goto label_2f2ac4;
        case 0x2f2ac8u: goto label_2f2ac8;
        case 0x2f2accu: goto label_2f2acc;
        case 0x2f2ad0u: goto label_2f2ad0;
        case 0x2f2ad4u: goto label_2f2ad4;
        case 0x2f2ad8u: goto label_2f2ad8;
        case 0x2f2adcu: goto label_2f2adc;
        case 0x2f2ae0u: goto label_2f2ae0;
        case 0x2f2ae4u: goto label_2f2ae4;
        case 0x2f2ae8u: goto label_2f2ae8;
        case 0x2f2aecu: goto label_2f2aec;
        case 0x2f2af0u: goto label_2f2af0;
        case 0x2f2af4u: goto label_2f2af4;
        case 0x2f2af8u: goto label_2f2af8;
        case 0x2f2afcu: goto label_2f2afc;
        case 0x2f2b00u: goto label_2f2b00;
        case 0x2f2b04u: goto label_2f2b04;
        case 0x2f2b08u: goto label_2f2b08;
        case 0x2f2b0cu: goto label_2f2b0c;
        case 0x2f2b10u: goto label_2f2b10;
        case 0x2f2b14u: goto label_2f2b14;
        case 0x2f2b18u: goto label_2f2b18;
        case 0x2f2b1cu: goto label_2f2b1c;
        case 0x2f2b20u: goto label_2f2b20;
        case 0x2f2b24u: goto label_2f2b24;
        case 0x2f2b28u: goto label_2f2b28;
        case 0x2f2b2cu: goto label_2f2b2c;
        case 0x2f2b30u: goto label_2f2b30;
        case 0x2f2b34u: goto label_2f2b34;
        case 0x2f2b38u: goto label_2f2b38;
        case 0x2f2b3cu: goto label_2f2b3c;
        case 0x2f2b40u: goto label_2f2b40;
        case 0x2f2b44u: goto label_2f2b44;
        case 0x2f2b48u: goto label_2f2b48;
        case 0x2f2b4cu: goto label_2f2b4c;
        case 0x2f2b50u: goto label_2f2b50;
        case 0x2f2b54u: goto label_2f2b54;
        case 0x2f2b58u: goto label_2f2b58;
        case 0x2f2b5cu: goto label_2f2b5c;
        case 0x2f2b60u: goto label_2f2b60;
        case 0x2f2b64u: goto label_2f2b64;
        case 0x2f2b68u: goto label_2f2b68;
        case 0x2f2b6cu: goto label_2f2b6c;
        case 0x2f2b70u: goto label_2f2b70;
        case 0x2f2b74u: goto label_2f2b74;
        case 0x2f2b78u: goto label_2f2b78;
        case 0x2f2b7cu: goto label_2f2b7c;
        case 0x2f2b80u: goto label_2f2b80;
        case 0x2f2b84u: goto label_2f2b84;
        case 0x2f2b88u: goto label_2f2b88;
        case 0x2f2b8cu: goto label_2f2b8c;
        case 0x2f2b90u: goto label_2f2b90;
        case 0x2f2b94u: goto label_2f2b94;
        case 0x2f2b98u: goto label_2f2b98;
        case 0x2f2b9cu: goto label_2f2b9c;
        case 0x2f2ba0u: goto label_2f2ba0;
        case 0x2f2ba4u: goto label_2f2ba4;
        case 0x2f2ba8u: goto label_2f2ba8;
        case 0x2f2bacu: goto label_2f2bac;
        case 0x2f2bb0u: goto label_2f2bb0;
        case 0x2f2bb4u: goto label_2f2bb4;
        case 0x2f2bb8u: goto label_2f2bb8;
        case 0x2f2bbcu: goto label_2f2bbc;
        case 0x2f2bc0u: goto label_2f2bc0;
        case 0x2f2bc4u: goto label_2f2bc4;
        case 0x2f2bc8u: goto label_2f2bc8;
        case 0x2f2bccu: goto label_2f2bcc;
        case 0x2f2bd0u: goto label_2f2bd0;
        case 0x2f2bd4u: goto label_2f2bd4;
        case 0x2f2bd8u: goto label_2f2bd8;
        case 0x2f2bdcu: goto label_2f2bdc;
        case 0x2f2be0u: goto label_2f2be0;
        case 0x2f2be4u: goto label_2f2be4;
        case 0x2f2be8u: goto label_2f2be8;
        case 0x2f2becu: goto label_2f2bec;
        case 0x2f2bf0u: goto label_2f2bf0;
        case 0x2f2bf4u: goto label_2f2bf4;
        case 0x2f2bf8u: goto label_2f2bf8;
        case 0x2f2bfcu: goto label_2f2bfc;
        case 0x2f2c00u: goto label_2f2c00;
        case 0x2f2c04u: goto label_2f2c04;
        case 0x2f2c08u: goto label_2f2c08;
        case 0x2f2c0cu: goto label_2f2c0c;
        case 0x2f2c10u: goto label_2f2c10;
        case 0x2f2c14u: goto label_2f2c14;
        case 0x2f2c18u: goto label_2f2c18;
        case 0x2f2c1cu: goto label_2f2c1c;
        case 0x2f2c20u: goto label_2f2c20;
        case 0x2f2c24u: goto label_2f2c24;
        case 0x2f2c28u: goto label_2f2c28;
        case 0x2f2c2cu: goto label_2f2c2c;
        case 0x2f2c30u: goto label_2f2c30;
        case 0x2f2c34u: goto label_2f2c34;
        case 0x2f2c38u: goto label_2f2c38;
        case 0x2f2c3cu: goto label_2f2c3c;
        case 0x2f2c40u: goto label_2f2c40;
        case 0x2f2c44u: goto label_2f2c44;
        case 0x2f2c48u: goto label_2f2c48;
        case 0x2f2c4cu: goto label_2f2c4c;
        case 0x2f2c50u: goto label_2f2c50;
        case 0x2f2c54u: goto label_2f2c54;
        case 0x2f2c58u: goto label_2f2c58;
        case 0x2f2c5cu: goto label_2f2c5c;
        case 0x2f2c60u: goto label_2f2c60;
        case 0x2f2c64u: goto label_2f2c64;
        case 0x2f2c68u: goto label_2f2c68;
        case 0x2f2c6cu: goto label_2f2c6c;
        case 0x2f2c70u: goto label_2f2c70;
        case 0x2f2c74u: goto label_2f2c74;
        case 0x2f2c78u: goto label_2f2c78;
        case 0x2f2c7cu: goto label_2f2c7c;
        case 0x2f2c80u: goto label_2f2c80;
        case 0x2f2c84u: goto label_2f2c84;
        case 0x2f2c88u: goto label_2f2c88;
        case 0x2f2c8cu: goto label_2f2c8c;
        case 0x2f2c90u: goto label_2f2c90;
        case 0x2f2c94u: goto label_2f2c94;
        case 0x2f2c98u: goto label_2f2c98;
        case 0x2f2c9cu: goto label_2f2c9c;
        case 0x2f2ca0u: goto label_2f2ca0;
        case 0x2f2ca4u: goto label_2f2ca4;
        case 0x2f2ca8u: goto label_2f2ca8;
        case 0x2f2cacu: goto label_2f2cac;
        case 0x2f2cb0u: goto label_2f2cb0;
        case 0x2f2cb4u: goto label_2f2cb4;
        case 0x2f2cb8u: goto label_2f2cb8;
        case 0x2f2cbcu: goto label_2f2cbc;
        case 0x2f2cc0u: goto label_2f2cc0;
        case 0x2f2cc4u: goto label_2f2cc4;
        case 0x2f2cc8u: goto label_2f2cc8;
        case 0x2f2cccu: goto label_2f2ccc;
        case 0x2f2cd0u: goto label_2f2cd0;
        case 0x2f2cd4u: goto label_2f2cd4;
        case 0x2f2cd8u: goto label_2f2cd8;
        case 0x2f2cdcu: goto label_2f2cdc;
        case 0x2f2ce0u: goto label_2f2ce0;
        case 0x2f2ce4u: goto label_2f2ce4;
        case 0x2f2ce8u: goto label_2f2ce8;
        case 0x2f2cecu: goto label_2f2cec;
        case 0x2f2cf0u: goto label_2f2cf0;
        case 0x2f2cf4u: goto label_2f2cf4;
        case 0x2f2cf8u: goto label_2f2cf8;
        case 0x2f2cfcu: goto label_2f2cfc;
        case 0x2f2d00u: goto label_2f2d00;
        case 0x2f2d04u: goto label_2f2d04;
        case 0x2f2d08u: goto label_2f2d08;
        case 0x2f2d0cu: goto label_2f2d0c;
        case 0x2f2d10u: goto label_2f2d10;
        case 0x2f2d14u: goto label_2f2d14;
        case 0x2f2d18u: goto label_2f2d18;
        case 0x2f2d1cu: goto label_2f2d1c;
        case 0x2f2d20u: goto label_2f2d20;
        case 0x2f2d24u: goto label_2f2d24;
        case 0x2f2d28u: goto label_2f2d28;
        case 0x2f2d2cu: goto label_2f2d2c;
        case 0x2f2d30u: goto label_2f2d30;
        case 0x2f2d34u: goto label_2f2d34;
        case 0x2f2d38u: goto label_2f2d38;
        case 0x2f2d3cu: goto label_2f2d3c;
        case 0x2f2d40u: goto label_2f2d40;
        case 0x2f2d44u: goto label_2f2d44;
        case 0x2f2d48u: goto label_2f2d48;
        case 0x2f2d4cu: goto label_2f2d4c;
        case 0x2f2d50u: goto label_2f2d50;
        case 0x2f2d54u: goto label_2f2d54;
        case 0x2f2d58u: goto label_2f2d58;
        case 0x2f2d5cu: goto label_2f2d5c;
        case 0x2f2d60u: goto label_2f2d60;
        case 0x2f2d64u: goto label_2f2d64;
        case 0x2f2d68u: goto label_2f2d68;
        case 0x2f2d6cu: goto label_2f2d6c;
        case 0x2f2d70u: goto label_2f2d70;
        case 0x2f2d74u: goto label_2f2d74;
        case 0x2f2d78u: goto label_2f2d78;
        case 0x2f2d7cu: goto label_2f2d7c;
        case 0x2f2d80u: goto label_2f2d80;
        case 0x2f2d84u: goto label_2f2d84;
        case 0x2f2d88u: goto label_2f2d88;
        case 0x2f2d8cu: goto label_2f2d8c;
        case 0x2f2d90u: goto label_2f2d90;
        case 0x2f2d94u: goto label_2f2d94;
        case 0x2f2d98u: goto label_2f2d98;
        case 0x2f2d9cu: goto label_2f2d9c;
        case 0x2f2da0u: goto label_2f2da0;
        case 0x2f2da4u: goto label_2f2da4;
        case 0x2f2da8u: goto label_2f2da8;
        case 0x2f2dacu: goto label_2f2dac;
        case 0x2f2db0u: goto label_2f2db0;
        case 0x2f2db4u: goto label_2f2db4;
        case 0x2f2db8u: goto label_2f2db8;
        case 0x2f2dbcu: goto label_2f2dbc;
        case 0x2f2dc0u: goto label_2f2dc0;
        case 0x2f2dc4u: goto label_2f2dc4;
        case 0x2f2dc8u: goto label_2f2dc8;
        case 0x2f2dccu: goto label_2f2dcc;
        case 0x2f2dd0u: goto label_2f2dd0;
        case 0x2f2dd4u: goto label_2f2dd4;
        case 0x2f2dd8u: goto label_2f2dd8;
        case 0x2f2ddcu: goto label_2f2ddc;
        case 0x2f2de0u: goto label_2f2de0;
        case 0x2f2de4u: goto label_2f2de4;
        case 0x2f2de8u: goto label_2f2de8;
        case 0x2f2decu: goto label_2f2dec;
        case 0x2f2df0u: goto label_2f2df0;
        case 0x2f2df4u: goto label_2f2df4;
        case 0x2f2df8u: goto label_2f2df8;
        case 0x2f2dfcu: goto label_2f2dfc;
        case 0x2f2e00u: goto label_2f2e00;
        case 0x2f2e04u: goto label_2f2e04;
        case 0x2f2e08u: goto label_2f2e08;
        case 0x2f2e0cu: goto label_2f2e0c;
        case 0x2f2e10u: goto label_2f2e10;
        case 0x2f2e14u: goto label_2f2e14;
        case 0x2f2e18u: goto label_2f2e18;
        case 0x2f2e1cu: goto label_2f2e1c;
        case 0x2f2e20u: goto label_2f2e20;
        case 0x2f2e24u: goto label_2f2e24;
        case 0x2f2e28u: goto label_2f2e28;
        case 0x2f2e2cu: goto label_2f2e2c;
        case 0x2f2e30u: goto label_2f2e30;
        case 0x2f2e34u: goto label_2f2e34;
        case 0x2f2e38u: goto label_2f2e38;
        case 0x2f2e3cu: goto label_2f2e3c;
        case 0x2f2e40u: goto label_2f2e40;
        case 0x2f2e44u: goto label_2f2e44;
        case 0x2f2e48u: goto label_2f2e48;
        case 0x2f2e4cu: goto label_2f2e4c;
        case 0x2f2e50u: goto label_2f2e50;
        case 0x2f2e54u: goto label_2f2e54;
        case 0x2f2e58u: goto label_2f2e58;
        case 0x2f2e5cu: goto label_2f2e5c;
        case 0x2f2e60u: goto label_2f2e60;
        case 0x2f2e64u: goto label_2f2e64;
        case 0x2f2e68u: goto label_2f2e68;
        case 0x2f2e6cu: goto label_2f2e6c;
        case 0x2f2e70u: goto label_2f2e70;
        case 0x2f2e74u: goto label_2f2e74;
        case 0x2f2e78u: goto label_2f2e78;
        case 0x2f2e7cu: goto label_2f2e7c;
        case 0x2f2e80u: goto label_2f2e80;
        case 0x2f2e84u: goto label_2f2e84;
        case 0x2f2e88u: goto label_2f2e88;
        case 0x2f2e8cu: goto label_2f2e8c;
        case 0x2f2e90u: goto label_2f2e90;
        case 0x2f2e94u: goto label_2f2e94;
        case 0x2f2e98u: goto label_2f2e98;
        case 0x2f2e9cu: goto label_2f2e9c;
        case 0x2f2ea0u: goto label_2f2ea0;
        case 0x2f2ea4u: goto label_2f2ea4;
        case 0x2f2ea8u: goto label_2f2ea8;
        case 0x2f2eacu: goto label_2f2eac;
        case 0x2f2eb0u: goto label_2f2eb0;
        case 0x2f2eb4u: goto label_2f2eb4;
        case 0x2f2eb8u: goto label_2f2eb8;
        case 0x2f2ebcu: goto label_2f2ebc;
        case 0x2f2ec0u: goto label_2f2ec0;
        case 0x2f2ec4u: goto label_2f2ec4;
        case 0x2f2ec8u: goto label_2f2ec8;
        case 0x2f2eccu: goto label_2f2ecc;
        case 0x2f2ed0u: goto label_2f2ed0;
        case 0x2f2ed4u: goto label_2f2ed4;
        case 0x2f2ed8u: goto label_2f2ed8;
        case 0x2f2edcu: goto label_2f2edc;
        case 0x2f2ee0u: goto label_2f2ee0;
        case 0x2f2ee4u: goto label_2f2ee4;
        case 0x2f2ee8u: goto label_2f2ee8;
        case 0x2f2eecu: goto label_2f2eec;
        case 0x2f2ef0u: goto label_2f2ef0;
        case 0x2f2ef4u: goto label_2f2ef4;
        case 0x2f2ef8u: goto label_2f2ef8;
        case 0x2f2efcu: goto label_2f2efc;
        case 0x2f2f00u: goto label_2f2f00;
        case 0x2f2f04u: goto label_2f2f04;
        case 0x2f2f08u: goto label_2f2f08;
        case 0x2f2f0cu: goto label_2f2f0c;
        case 0x2f2f10u: goto label_2f2f10;
        case 0x2f2f14u: goto label_2f2f14;
        case 0x2f2f18u: goto label_2f2f18;
        case 0x2f2f1cu: goto label_2f2f1c;
        case 0x2f2f20u: goto label_2f2f20;
        case 0x2f2f24u: goto label_2f2f24;
        case 0x2f2f28u: goto label_2f2f28;
        case 0x2f2f2cu: goto label_2f2f2c;
        case 0x2f2f30u: goto label_2f2f30;
        case 0x2f2f34u: goto label_2f2f34;
        case 0x2f2f38u: goto label_2f2f38;
        case 0x2f2f3cu: goto label_2f2f3c;
        case 0x2f2f40u: goto label_2f2f40;
        case 0x2f2f44u: goto label_2f2f44;
        case 0x2f2f48u: goto label_2f2f48;
        case 0x2f2f4cu: goto label_2f2f4c;
        case 0x2f2f50u: goto label_2f2f50;
        case 0x2f2f54u: goto label_2f2f54;
        case 0x2f2f58u: goto label_2f2f58;
        case 0x2f2f5cu: goto label_2f2f5c;
        case 0x2f2f60u: goto label_2f2f60;
        case 0x2f2f64u: goto label_2f2f64;
        case 0x2f2f68u: goto label_2f2f68;
        case 0x2f2f6cu: goto label_2f2f6c;
        case 0x2f2f70u: goto label_2f2f70;
        case 0x2f2f74u: goto label_2f2f74;
        case 0x2f2f78u: goto label_2f2f78;
        case 0x2f2f7cu: goto label_2f2f7c;
        case 0x2f2f80u: goto label_2f2f80;
        case 0x2f2f84u: goto label_2f2f84;
        case 0x2f2f88u: goto label_2f2f88;
        default: break;
    }

    ctx->pc = 0x2f2a80u;

label_2f2a80:
    // 0x2f2a80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f2a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2f2a84:
    // 0x2f2a84: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x2f2a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_2f2a88:
    // 0x2f2a88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f2a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f2a8c:
    // 0x2f2a8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f2a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f2a90:
    // 0x2f2a90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f2a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f2a94:
    // 0x2f2a94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f2a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f2a98:
    // 0x2f2a98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f2a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f2a9c:
    // 0x2f2a9c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2f2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_2f2aa0:
    // 0x2f2aa0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2f2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_2f2aa4:
    // 0x2f2aa4: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x2f2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
label_2f2aa8:
    // 0x2f2aa8: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x2f2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_2f2aac:
    // 0x2f2aac: 0xafa80098  sw          $t0, 0x98($sp)
    ctx->pc = 0x2f2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 8));
label_2f2ab0:
    // 0x2f2ab0: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
label_2f2ab4:
    // 0x2f2ab4: 0xe7ad00b0  swc1        $f13, 0xB0($sp)
    ctx->pc = 0x2f2ab4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2f2ab8:
    // 0x2f2ab8: 0xafaa00c0  sw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 10));
label_2f2abc:
    // 0x2f2abc: 0xa3ab00c8  sb          $t3, 0xC8($sp)
    ctx->pc = 0x2f2abcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 11));
label_2f2ac0:
    // 0x2f2ac0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2f2ac0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2ac4:
    // 0x2f2ac4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f2ac4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2ac8:
    // 0x2f2ac8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2acc:
    // 0x2f2acc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2f2ad0:
    if (ctx->pc == 0x2F2AD0u) {
        ctx->pc = 0x2F2AD4u;
        goto label_2f2ad4;
    }
    ctx->pc = 0x2F2ACCu;
    {
        const bool branch_taken_0x2f2acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2acc) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2AD4u;
label_2f2ad4:
    // 0x2f2ad4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2ad8:
    // 0x2f2ad8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f2adc:
    if (ctx->pc == 0x2F2ADCu) {
        ctx->pc = 0x2F2AE0u;
        goto label_2f2ae0;
    }
    ctx->pc = 0x2F2AD8u;
    {
        const bool branch_taken_0x2f2ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ad8) {
            ctx->pc = 0x2F2AECu;
            goto label_2f2aec;
        }
    }
    ctx->pc = 0x2F2AE0u;
label_2f2ae0:
    // 0x2f2ae0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f2ae0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2ae4:
    // 0x2f2ae4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f2ae8:
    if (ctx->pc == 0x2F2AE8u) {
        ctx->pc = 0x2F2AECu;
        goto label_2f2aec;
    }
    ctx->pc = 0x2F2AE4u;
    {
        const bool branch_taken_0x2f2ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ae4) {
            ctx->pc = 0x2F2B20u;
            goto label_2f2b20;
        }
    }
    ctx->pc = 0x2F2AECu;
label_2f2aec:
    // 0x2f2aec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f2aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2af0:
    // 0x2f2af0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f2af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2af4:
    // 0x2f2af4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f2af8:
    if (ctx->pc == 0x2F2AF8u) {
        ctx->pc = 0x2F2AFCu;
        goto label_2f2afc;
    }
    ctx->pc = 0x2F2AF4u;
    {
        const bool branch_taken_0x2f2af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2af4) {
            ctx->pc = 0x2F2B20u;
            goto label_2f2b20;
        }
    }
    ctx->pc = 0x2F2AFCu;
label_2f2afc:
    // 0x2f2afc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f2afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2b00:
    // 0x2f2b00: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2b04:
    // 0x2f2b04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f2b08:
    if (ctx->pc == 0x2F2B08u) {
        ctx->pc = 0x2F2B0Cu;
        goto label_2f2b0c;
    }
    ctx->pc = 0x2F2B04u;
    {
        const bool branch_taken_0x2f2b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b04) {
            ctx->pc = 0x2F2B18u;
            goto label_2f2b18;
        }
    }
    ctx->pc = 0x2F2B0Cu;
label_2f2b0c:
    // 0x2f2b0c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f2b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2b10:
    // 0x2f2b10: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f2b14:
    if (ctx->pc == 0x2F2B14u) {
        ctx->pc = 0x2F2B18u;
        goto label_2f2b18;
    }
    ctx->pc = 0x2F2B10u;
    {
        const bool branch_taken_0x2f2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b10) {
            ctx->pc = 0x2F2B20u;
            goto label_2f2b20;
        }
    }
    ctx->pc = 0x2F2B18u;
label_2f2b18:
    // 0x2f2b18: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2f2b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2b1c:
    // 0x2f2b1c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f2b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2b20:
    // 0x2f2b20: 0x93a200c8  lbu         $v0, 0xC8($sp)
    ctx->pc = 0x2f2b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
label_2f2b24:
    // 0x2f2b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2b28:
    // 0x2f2b28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f2b2c:
    if (ctx->pc == 0x2F2B2Cu) {
        ctx->pc = 0x2F2B30u;
        goto label_2f2b30;
    }
    ctx->pc = 0x2F2B28u;
    {
        const bool branch_taken_0x2f2b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b28) {
            ctx->pc = 0x2F2B3Cu;
            goto label_2f2b3c;
        }
    }
    ctx->pc = 0x2F2B30u;
label_2f2b30:
    // 0x2f2b30: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f2b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f2b34:
    // 0x2f2b34: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f2b38:
    if (ctx->pc == 0x2F2B38u) {
        ctx->pc = 0x2F2B3Cu;
        goto label_2f2b3c;
    }
    ctx->pc = 0x2F2B34u;
    {
        const bool branch_taken_0x2f2b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b34) {
            ctx->pc = 0x2F2B40u;
            goto label_2f2b40;
        }
    }
    ctx->pc = 0x2F2B3Cu;
label_2f2b3c:
    // 0x2f2b3c: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f2b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f2b40:
    // 0x2f2b40: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2f2b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2f2b44:
    // 0x2f2b44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b48:
    // 0x2f2b48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2b48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2b4c:
    // 0x2f2b4c: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x2f2b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_2f2b50:
    // 0x2f2b50: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f2b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2f2b54:
    // 0x2f2b54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b58:
    // 0x2f2b58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2b5c:
    // 0x2f2b5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f2b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2f2b60:
    // 0x2f2b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2b64:
    // 0x2f2b64: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2f2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_2f2b68:
    // 0x2f2b68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2b6c:
    // 0x2f2b6c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2f2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2f2b70:
    // 0x2f2b70: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2f2b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2f2b74:
    // 0x2f2b74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f2b78:
    // 0x2f2b78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b7c:
    // 0x2f2b7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f2b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f2b80:
    // 0x2f2b80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b84:
    // 0x2f2b84: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2f2b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2b88:
    // 0x2f2b88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2b8c:
    // 0x2f2b8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b90:
    // 0x2f2b90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2b94:
    // 0x2f2b94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2b98:
    // 0x2f2b98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f2b9c:
    // 0x2f2b9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2ba0:
    // 0x2f2ba0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2ba4:
    // 0x2f2ba4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f2ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2f2ba8:
    // 0x2f2ba8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2f2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2bac:
    // 0x2f2bac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2bb0:
    // 0x2f2bb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2bb4:
    // 0x2f2bb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2bb8:
    // 0x2f2bb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f2bbc:
    // 0x2f2bbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2bc0:
    // 0x2f2bc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2bc4:
    // 0x2f2bc4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2f2bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2f2bc8:
    // 0x2f2bc8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2bcc:
    // 0x2f2bcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2bd0:
    // 0x2f2bd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2bd4:
    // 0x2f2bd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2bd8:
    // 0x2f2bd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f2bdc:
    // 0x2f2bdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2be0:
    // 0x2f2be0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2be4:
    // 0x2f2be4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f2be4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2f2be8:
    // 0x2f2be8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2bec:
    // 0x2f2bec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2bf0:
    // 0x2f2bf0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2bf4:
    // 0x2f2bf4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2bf8:
    // 0x2f2bf8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f2bfc:
    // 0x2f2bfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2c00:
    // 0x2f2c00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2c04:
    // 0x2f2c04: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f2c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2f2c08:
    // 0x2f2c08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2c0c:
    // 0x2f2c0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2c10:
    // 0x2f2c10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2c14:
    // 0x2f2c14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2c14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2c18:
    // 0x2f2c18: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2f2c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2f2c1c:
    // 0x2f2c1c: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2f2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_2f2c20:
    // 0x2f2c20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2c24:
    // 0x2f2c24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2f2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f2c28:
    // 0x2f2c28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2c2c:
    // 0x2f2c2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2c30:
    // 0x2f2c30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2c30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2c34:
    // 0x2f2c34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f2c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2c38:
    // 0x2f2c38: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f2c38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2f2c3c:
    // 0x2f2c3c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f2c3cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2f2c40:
    // 0x2f2c40: 0xc0634c8  jal         func_18D320
label_2f2c44:
    if (ctx->pc == 0x2F2C44u) {
        ctx->pc = 0x2F2C48u;
        goto label_2f2c48;
    }
    ctx->pc = 0x2F2C40u;
    SET_GPR_U32(ctx, 31, 0x2F2C48u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2F2C40u, 0x2F2C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C48u;
label_2f2c48:
    // 0x2f2c48: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f2c48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f2c4c:
    // 0x2f2c4c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f2c50:
    // 0x2f2c50: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f2c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2f2c54:
    // 0x2f2c54: 0x1203004a  beq         $s0, $v1, . + 4 + (0x4A << 2)
label_2f2c58:
    if (ctx->pc == 0x2F2C58u) {
        ctx->pc = 0x2F2C5Cu;
        goto label_2f2c5c;
    }
    ctx->pc = 0x2F2C54u;
    {
        const bool branch_taken_0x2f2c54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f2c54) {
            ctx->pc = 0x2F2D80u;
            goto label_2f2d80;
        }
    }
    ctx->pc = 0x2F2C5Cu;
label_2f2c5c:
    // 0x2f2c5c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2f2c60:
    // 0x2f2c60: 0xa202034d  sb          $v0, 0x34D($s0)
    ctx->pc = 0x2f2c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 2));
label_2f2c64:
    // 0x2f2c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2c68:
    // 0x2f2c68: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f2c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2f2c6c:
    // 0x2f2c6c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2c70:
    // 0x2f2c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c74:
    // 0x2f2c74: 0x0  nop
    ctx->pc = 0x2f2c74u;
    // NOP
label_2f2c78:
    // 0x2f2c78: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f2c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2f2c7c:
    // 0x2f2c7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2c80:
    // 0x2f2c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c84:
    // 0x2f2c84: 0x0  nop
    ctx->pc = 0x2f2c84u;
    // NOP
label_2f2c88:
    // 0x2f2c88: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f2c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2f2c8c:
    // 0x2f2c8c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2c90:
    // 0x2f2c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c94:
    // 0x2f2c94: 0x0  nop
    ctx->pc = 0x2f2c94u;
    // NOP
label_2f2c98:
    // 0x2f2c98: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f2c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2f2c9c:
    // 0x2f2c9c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2ca0:
    // 0x2f2ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2ca4:
    // 0x2f2ca4: 0x0  nop
    ctx->pc = 0x2f2ca4u;
    // NOP
label_2f2ca8:
    // 0x2f2ca8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f2ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2f2cac:
    // 0x2f2cac: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2f2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_2f2cb0:
    // 0x2f2cb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2cb4:
    // 0x2f2cb4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2f2cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2cb8:
    // 0x2f2cb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f2cbc:
    // 0x2f2cbc: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f2cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2f2cc0:
    // 0x2f2cc0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2cc4:
    // 0x2f2cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2cc8:
    // 0x2f2cc8: 0x0  nop
    ctx->pc = 0x2f2cc8u;
    // NOP
label_2f2ccc:
    // 0x2f2ccc: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2f2cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2f2cd0:
    // 0x2f2cd0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2cd4:
    // 0x2f2cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2cd8:
    // 0x2f2cd8: 0x0  nop
    ctx->pc = 0x2f2cd8u;
    // NOP
label_2f2cdc:
    // 0x2f2cdc: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2f2cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2f2ce0:
    // 0x2f2ce0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2ce4:
    // 0x2f2ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2ce8:
    // 0x2f2ce8: 0x0  nop
    ctx->pc = 0x2f2ce8u;
    // NOP
label_2f2cec:
    // 0x2f2cec: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2f2cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2f2cf0:
    // 0x2f2cf0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2cf4:
    // 0x2f2cf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f2cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2cf8:
    // 0x2f2cf8: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2f2cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2f2cfc:
    // 0x2f2cfc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2d00:
    // 0x2f2d00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f2d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2d04:
    // 0x2f2d04: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2f2d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2f2d08:
    // 0x2f2d08: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2d0c:
    // 0x2f2d0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f2d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2d10:
    // 0x2f2d10: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2f2d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2f2d14:
    // 0x2f2d14: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2f2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_2f2d18:
    // 0x2f2d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2d1c:
    // 0x2f2d1c: 0x0  nop
    ctx->pc = 0x2f2d1cu;
    // NOP
label_2f2d20:
    // 0x2f2d20: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f2d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2f2d24:
    // 0x2f2d24: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f2d28:
    // 0x2f2d28: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f2d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2f2d2c:
    // 0x2f2d2c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2f2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2f2d30:
    // 0x2f2d30: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2f2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2f2d34:
    // 0x2f2d34: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2f2d38:
    // 0x2f2d38: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2f2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2f2d3c:
    // 0x2f2d3c: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x2f2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
label_2f2d40:
    // 0x2f2d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2d44:
    // 0x2f2d44: 0xa20202ab  sb          $v0, 0x2AB($s0)
    ctx->pc = 0x2f2d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 683), (uint8_t)GPR_U32(ctx, 2));
label_2f2d48:
    // 0x2f2d48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f2d48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2f2d4c:
    // 0x2f2d4c: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2f2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2f2d50:
    // 0x2f2d50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f2d54:
    // 0x2f2d54: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f2d58:
    // 0x2f2d58: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2f2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2f2d5c:
    // 0x2f2d5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f2d60:
    // 0x2f2d60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2d64:
    // 0x2f2d64: 0x40f809  jalr        $v0
label_2f2d68:
    if (ctx->pc == 0x2F2D68u) {
        ctx->pc = 0x2F2D6Cu;
        goto label_2f2d6c;
    }
    ctx->pc = 0x2F2D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2D6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2D64u, 0x2F2D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2D6Cu;
label_2f2d6c:
    // 0x2f2d6c: 0x8e020ab8  lw          $v0, 0xAB8($s0)
    ctx->pc = 0x2f2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2f2d70:
    // 0x2f2d70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f2d74:
    // 0x2f2d74: 0xae020ab8  sw          $v0, 0xAB8($s0)
    ctx->pc = 0x2f2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 2));
label_2f2d78:
    // 0x2f2d78: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f2d7c:
    if (ctx->pc == 0x2F2D7Cu) {
        ctx->pc = 0x2F2D80u;
        goto label_2f2d80;
    }
    ctx->pc = 0x2F2D78u;
    {
        const bool branch_taken_0x2f2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d78) {
            ctx->pc = 0x2F2D88u;
            goto label_2f2d88;
        }
    }
    ctx->pc = 0x2F2D80u;
label_2f2d80:
    // 0x2f2d80: 0x10000079  b           . + 4 + (0x79 << 2)
label_2f2d84:
    if (ctx->pc == 0x2F2D84u) {
        ctx->pc = 0x2F2D88u;
        goto label_2f2d88;
    }
    ctx->pc = 0x2F2D80u;
    {
        const bool branch_taken_0x2f2d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d80) {
            ctx->pc = 0x2F2F68u;
            goto label_2f2f68;
        }
    }
    ctx->pc = 0x2F2D88u;
label_2f2d88:
    // 0x2f2d88: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2f2d8c:
    // 0x2f2d8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2d90:
    // 0x2f2d90: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2f2d94:
    // 0x2f2d94: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2f2d98:
    // 0x2f2d98: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_2f2d9c:
    // 0x2f2d9c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2f2da0:
    // 0x2f2da0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2f2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_2f2da4:
    // 0x2f2da4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f2da8:
    // 0x2f2da8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2dac:
    // 0x2f2dac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f2db0:
    // 0x2f2db0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2db4:
    // 0x2f2db4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2db8:
    // 0x2f2db8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2dbc:
    // 0x2f2dbc: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2dc0:
    // 0x2f2dc0: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f2dc4:
    // 0x2f2dc4: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2dc8:
    // 0x2f2dc8: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2dc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2dcc:
    // 0x2f2dcc: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2dccu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2dd0:
    // 0x2f2dd0: 0xc0bc9dc  jal         func_2F2770
label_2f2dd4:
    if (ctx->pc == 0x2F2DD4u) {
        ctx->pc = 0x2F2DD8u;
        goto label_2f2dd8;
    }
    ctx->pc = 0x2F2DD0u;
    SET_GPR_U32(ctx, 31, 0x2F2DD8u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2DD0u, 0x2F2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DD8u;
label_2f2dd8:
    // 0x2f2dd8: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x2f2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_2f2ddc:
    // 0x2f2ddc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f2de0:
    // 0x2f2de0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2f2de4:
    // 0x2f2de4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f2de8:
    // 0x2f2de8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2f2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2f2dec:
    // 0x2f2dec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2f2df0:
    // 0x2f2df0: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_2f2df4:
    // 0x2f2df4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2f2df8:
    // 0x2f2df8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2dfc:
    // 0x2f2dfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2e00:
    // 0x2f2e00: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2e04:
    // 0x2f2e04: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2e08:
    // 0x2f2e08: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2e0c:
    // 0x2f2e0c: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2e10:
    // 0x2f2e10: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2e10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f2e14:
    // 0x2f2e14: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2e14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2e18:
    // 0x2f2e18: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2e18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2e1c:
    // 0x2f2e1c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2e1cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2e20:
    // 0x2f2e20: 0xc0bc9dc  jal         func_2F2770
label_2f2e24:
    if (ctx->pc == 0x2F2E24u) {
        ctx->pc = 0x2F2E28u;
        goto label_2f2e28;
    }
    ctx->pc = 0x2F2E20u;
    SET_GPR_U32(ctx, 31, 0x2F2E28u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2E20u, 0x2F2E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E28u;
label_2f2e28:
    // 0x2f2e28: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2f2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_2f2e2c:
    // 0x2f2e2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f2e30:
    // 0x2f2e30: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f2e34:
    // 0x2f2e34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2f2e38:
    // 0x2f2e38: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_2f2e3c:
    // 0x2f2e3c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2f2e40:
    // 0x2f2e40: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2e44:
    // 0x2f2e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2e48:
    // 0x2f2e48: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2f2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2f2e4c:
    // 0x2f2e4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f2e50:
    // 0x2f2e50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2e54:
    // 0x2f2e54: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2e58:
    // 0x2f2e58: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2e5c:
    // 0x2f2e5c: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2e60:
    // 0x2f2e60: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2e60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f2e64:
    // 0x2f2e64: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2e64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2e68:
    // 0x2f2e68: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2e68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2e6c:
    // 0x2f2e6c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2e6cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2e70:
    // 0x2f2e70: 0xc0bc9dc  jal         func_2F2770
label_2f2e74:
    if (ctx->pc == 0x2F2E74u) {
        ctx->pc = 0x2F2E78u;
        goto label_2f2e78;
    }
    ctx->pc = 0x2F2E70u;
    SET_GPR_U32(ctx, 31, 0x2F2E78u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2E70u, 0x2F2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E78u;
label_2f2e78:
    // 0x2f2e78: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2e7c:
    // 0x2f2e7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2e80:
    // 0x2f2e80: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2f2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_2f2e84:
    // 0x2f2e84: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f2e88:
    // 0x2f2e88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2e8c:
    // 0x2f2e8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2f2e90:
    // 0x2f2e90: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_2f2e94:
    // 0x2f2e94: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2f2e98:
    // 0x2f2e98: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2f2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2f2e9c:
    // 0x2f2e9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f2ea0:
    // 0x2f2ea0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2ea4:
    // 0x2f2ea4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2ea8:
    // 0x2f2ea8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2eac:
    // 0x2f2eac: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2eacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2eb0:
    // 0x2f2eb0: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f2eb4:
    // 0x2f2eb4: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2eb8:
    // 0x2f2eb8: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2ebc:
    // 0x2f2ebc: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2ebcu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2ec0:
    // 0x2f2ec0: 0xc0bc9dc  jal         func_2F2770
label_2f2ec4:
    if (ctx->pc == 0x2F2EC4u) {
        ctx->pc = 0x2F2EC8u;
        goto label_2f2ec8;
    }
    ctx->pc = 0x2F2EC0u;
    SET_GPR_U32(ctx, 31, 0x2F2EC8u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2EC0u, 0x2F2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EC8u;
label_2f2ec8:
    // 0x2f2ec8: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2f2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
label_2f2ecc:
    // 0x2f2ecc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f2ed0:
    // 0x2f2ed0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2ed4:
    // 0x2f2ed4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2f2ed8:
    // 0x2f2ed8: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_2f2edc:
    // 0x2f2edc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2f2ee0:
    // 0x2f2ee0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2ee4:
    // 0x2f2ee4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2ee8:
    // 0x2f2ee8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2eec:
    // 0x2f2eec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f2ef0:
    // 0x2f2ef0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2ef4:
    // 0x2f2ef4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2ef8:
    // 0x2f2ef8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2efc:
    // 0x2f2efc: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2f00:
    // 0x2f2f00: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2f00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f2f04:
    // 0x2f2f04: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2f04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2f08:
    // 0x2f2f08: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2f08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2f0c:
    // 0x2f2f0c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2f0cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2f10:
    // 0x2f2f10: 0xc0bc9dc  jal         func_2F2770
label_2f2f14:
    if (ctx->pc == 0x2F2F14u) {
        ctx->pc = 0x2F2F18u;
        goto label_2f2f18;
    }
    ctx->pc = 0x2F2F10u;
    SET_GPR_U32(ctx, 31, 0x2F2F18u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2F10u, 0x2F2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F18u;
label_2f2f18:
    // 0x2f2f18: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2f1c:
    // 0x2f2f1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2f20:
    // 0x2f2f20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2f24:
    // 0x2f2f24: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2f2f28:
    // 0x2f2f28: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_2f2f2c:
    // 0x2f2f2c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2f2f30:
    // 0x2f2f30: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2f34:
    // 0x2f2f34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f2f38:
    // 0x2f2f38: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2f2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2f2f3c:
    // 0x2f2f3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f2f40:
    // 0x2f2f40: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2f44:
    // 0x2f2f44: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2f48:
    // 0x2f2f48: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2f4c:
    // 0x2f2f4c: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2f50:
    // 0x2f2f50: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f2f54:
    // 0x2f2f54: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2f58:
    // 0x2f2f58: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2f58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2f5c:
    // 0x2f2f5c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2f5cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2f60:
    // 0x2f2f60: 0xc0bc9dc  jal         func_2F2770
label_2f2f64:
    if (ctx->pc == 0x2F2F64u) {
        ctx->pc = 0x2F2F68u;
        goto label_2f2f68;
    }
    ctx->pc = 0x2F2F60u;
    SET_GPR_U32(ctx, 31, 0x2F2F68u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2F60u, 0x2F2F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F68u;
label_2f2f68:
    // 0x2f2f68: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2f2f68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f2f6c:
    // 0x2f2f6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f2f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f2f70:
    // 0x2f2f70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f2f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f2f74:
    // 0x2f2f74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f2f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2f78:
    // 0x2f2f78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f2f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2f7c:
    // 0x2f2f7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f2f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2f80:
    // 0x2f2f80: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2f2f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f2f84:
    // 0x2f2f84: 0x3e00008  jr          $ra
label_2f2f88:
    if (ctx->pc == 0x2F2F88u) {
        ctx->pc = 0x2F2F8Cu;
        goto label_fallthrough_0x2f2f84;
    }
    ctx->pc = 0x2F2F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f2f84:
    ctx->pc = 0x2F2F8Cu;
}
