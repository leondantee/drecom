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

// Function: Bg_trans
// Address: 0x201ad0 - 0x201fb4
void Bg_trans_0x201ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bg_trans_0x201ad0");
#endif

    switch (ctx->pc) {
        case 0x201ad0u: goto label_201ad0;
        case 0x201ad4u: goto label_201ad4;
        case 0x201ad8u: goto label_201ad8;
        case 0x201adcu: goto label_201adc;
        case 0x201ae0u: goto label_201ae0;
        case 0x201ae4u: goto label_201ae4;
        case 0x201ae8u: goto label_201ae8;
        case 0x201aecu: goto label_201aec;
        case 0x201af0u: goto label_201af0;
        case 0x201af4u: goto label_201af4;
        case 0x201af8u: goto label_201af8;
        case 0x201afcu: goto label_201afc;
        case 0x201b00u: goto label_201b00;
        case 0x201b04u: goto label_201b04;
        case 0x201b08u: goto label_201b08;
        case 0x201b0cu: goto label_201b0c;
        case 0x201b10u: goto label_201b10;
        case 0x201b14u: goto label_201b14;
        case 0x201b18u: goto label_201b18;
        case 0x201b1cu: goto label_201b1c;
        case 0x201b20u: goto label_201b20;
        case 0x201b24u: goto label_201b24;
        case 0x201b28u: goto label_201b28;
        case 0x201b2cu: goto label_201b2c;
        case 0x201b30u: goto label_201b30;
        case 0x201b34u: goto label_201b34;
        case 0x201b38u: goto label_201b38;
        case 0x201b3cu: goto label_201b3c;
        case 0x201b40u: goto label_201b40;
        case 0x201b44u: goto label_201b44;
        case 0x201b48u: goto label_201b48;
        case 0x201b4cu: goto label_201b4c;
        case 0x201b50u: goto label_201b50;
        case 0x201b54u: goto label_201b54;
        case 0x201b58u: goto label_201b58;
        case 0x201b5cu: goto label_201b5c;
        case 0x201b60u: goto label_201b60;
        case 0x201b64u: goto label_201b64;
        case 0x201b68u: goto label_201b68;
        case 0x201b6cu: goto label_201b6c;
        case 0x201b70u: goto label_201b70;
        case 0x201b74u: goto label_201b74;
        case 0x201b78u: goto label_201b78;
        case 0x201b7cu: goto label_201b7c;
        case 0x201b80u: goto label_201b80;
        case 0x201b84u: goto label_201b84;
        case 0x201b88u: goto label_201b88;
        case 0x201b8cu: goto label_201b8c;
        case 0x201b90u: goto label_201b90;
        case 0x201b94u: goto label_201b94;
        case 0x201b98u: goto label_201b98;
        case 0x201b9cu: goto label_201b9c;
        case 0x201ba0u: goto label_201ba0;
        case 0x201ba4u: goto label_201ba4;
        case 0x201ba8u: goto label_201ba8;
        case 0x201bacu: goto label_201bac;
        case 0x201bb0u: goto label_201bb0;
        case 0x201bb4u: goto label_201bb4;
        case 0x201bb8u: goto label_201bb8;
        case 0x201bbcu: goto label_201bbc;
        case 0x201bc0u: goto label_201bc0;
        case 0x201bc4u: goto label_201bc4;
        case 0x201bc8u: goto label_201bc8;
        case 0x201bccu: goto label_201bcc;
        case 0x201bd0u: goto label_201bd0;
        case 0x201bd4u: goto label_201bd4;
        case 0x201bd8u: goto label_201bd8;
        case 0x201bdcu: goto label_201bdc;
        case 0x201be0u: goto label_201be0;
        case 0x201be4u: goto label_201be4;
        case 0x201be8u: goto label_201be8;
        case 0x201becu: goto label_201bec;
        case 0x201bf0u: goto label_201bf0;
        case 0x201bf4u: goto label_201bf4;
        case 0x201bf8u: goto label_201bf8;
        case 0x201bfcu: goto label_201bfc;
        case 0x201c00u: goto label_201c00;
        case 0x201c04u: goto label_201c04;
        case 0x201c08u: goto label_201c08;
        case 0x201c0cu: goto label_201c0c;
        case 0x201c10u: goto label_201c10;
        case 0x201c14u: goto label_201c14;
        case 0x201c18u: goto label_201c18;
        case 0x201c1cu: goto label_201c1c;
        case 0x201c20u: goto label_201c20;
        case 0x201c24u: goto label_201c24;
        case 0x201c28u: goto label_201c28;
        case 0x201c2cu: goto label_201c2c;
        case 0x201c30u: goto label_201c30;
        case 0x201c34u: goto label_201c34;
        case 0x201c38u: goto label_201c38;
        case 0x201c3cu: goto label_201c3c;
        case 0x201c40u: goto label_201c40;
        case 0x201c44u: goto label_201c44;
        case 0x201c48u: goto label_201c48;
        case 0x201c4cu: goto label_201c4c;
        case 0x201c50u: goto label_201c50;
        case 0x201c54u: goto label_201c54;
        case 0x201c58u: goto label_201c58;
        case 0x201c5cu: goto label_201c5c;
        case 0x201c60u: goto label_201c60;
        case 0x201c64u: goto label_201c64;
        case 0x201c68u: goto label_201c68;
        case 0x201c6cu: goto label_201c6c;
        case 0x201c70u: goto label_201c70;
        case 0x201c74u: goto label_201c74;
        case 0x201c78u: goto label_201c78;
        case 0x201c7cu: goto label_201c7c;
        case 0x201c80u: goto label_201c80;
        case 0x201c84u: goto label_201c84;
        case 0x201c88u: goto label_201c88;
        case 0x201c8cu: goto label_201c8c;
        case 0x201c90u: goto label_201c90;
        case 0x201c94u: goto label_201c94;
        case 0x201c98u: goto label_201c98;
        case 0x201c9cu: goto label_201c9c;
        case 0x201ca0u: goto label_201ca0;
        case 0x201ca4u: goto label_201ca4;
        case 0x201ca8u: goto label_201ca8;
        case 0x201cacu: goto label_201cac;
        case 0x201cb0u: goto label_201cb0;
        case 0x201cb4u: goto label_201cb4;
        case 0x201cb8u: goto label_201cb8;
        case 0x201cbcu: goto label_201cbc;
        case 0x201cc0u: goto label_201cc0;
        case 0x201cc4u: goto label_201cc4;
        case 0x201cc8u: goto label_201cc8;
        case 0x201cccu: goto label_201ccc;
        case 0x201cd0u: goto label_201cd0;
        case 0x201cd4u: goto label_201cd4;
        case 0x201cd8u: goto label_201cd8;
        case 0x201cdcu: goto label_201cdc;
        case 0x201ce0u: goto label_201ce0;
        case 0x201ce4u: goto label_201ce4;
        case 0x201ce8u: goto label_201ce8;
        case 0x201cecu: goto label_201cec;
        case 0x201cf0u: goto label_201cf0;
        case 0x201cf4u: goto label_201cf4;
        case 0x201cf8u: goto label_201cf8;
        case 0x201cfcu: goto label_201cfc;
        case 0x201d00u: goto label_201d00;
        case 0x201d04u: goto label_201d04;
        case 0x201d08u: goto label_201d08;
        case 0x201d0cu: goto label_201d0c;
        case 0x201d10u: goto label_201d10;
        case 0x201d14u: goto label_201d14;
        case 0x201d18u: goto label_201d18;
        case 0x201d1cu: goto label_201d1c;
        case 0x201d20u: goto label_201d20;
        case 0x201d24u: goto label_201d24;
        case 0x201d28u: goto label_201d28;
        case 0x201d2cu: goto label_201d2c;
        case 0x201d30u: goto label_201d30;
        case 0x201d34u: goto label_201d34;
        case 0x201d38u: goto label_201d38;
        case 0x201d3cu: goto label_201d3c;
        case 0x201d40u: goto label_201d40;
        case 0x201d44u: goto label_201d44;
        case 0x201d48u: goto label_201d48;
        case 0x201d4cu: goto label_201d4c;
        case 0x201d50u: goto label_201d50;
        case 0x201d54u: goto label_201d54;
        case 0x201d58u: goto label_201d58;
        case 0x201d5cu: goto label_201d5c;
        case 0x201d60u: goto label_201d60;
        case 0x201d64u: goto label_201d64;
        case 0x201d68u: goto label_201d68;
        case 0x201d6cu: goto label_201d6c;
        case 0x201d70u: goto label_201d70;
        case 0x201d74u: goto label_201d74;
        case 0x201d78u: goto label_201d78;
        case 0x201d7cu: goto label_201d7c;
        case 0x201d80u: goto label_201d80;
        case 0x201d84u: goto label_201d84;
        case 0x201d88u: goto label_201d88;
        case 0x201d8cu: goto label_201d8c;
        case 0x201d90u: goto label_201d90;
        case 0x201d94u: goto label_201d94;
        case 0x201d98u: goto label_201d98;
        case 0x201d9cu: goto label_201d9c;
        case 0x201da0u: goto label_201da0;
        case 0x201da4u: goto label_201da4;
        case 0x201da8u: goto label_201da8;
        case 0x201dacu: goto label_201dac;
        case 0x201db0u: goto label_201db0;
        case 0x201db4u: goto label_201db4;
        case 0x201db8u: goto label_201db8;
        case 0x201dbcu: goto label_201dbc;
        case 0x201dc0u: goto label_201dc0;
        case 0x201dc4u: goto label_201dc4;
        case 0x201dc8u: goto label_201dc8;
        case 0x201dccu: goto label_201dcc;
        case 0x201dd0u: goto label_201dd0;
        case 0x201dd4u: goto label_201dd4;
        case 0x201dd8u: goto label_201dd8;
        case 0x201ddcu: goto label_201ddc;
        case 0x201de0u: goto label_201de0;
        case 0x201de4u: goto label_201de4;
        case 0x201de8u: goto label_201de8;
        case 0x201decu: goto label_201dec;
        case 0x201df0u: goto label_201df0;
        case 0x201df4u: goto label_201df4;
        case 0x201df8u: goto label_201df8;
        case 0x201dfcu: goto label_201dfc;
        case 0x201e00u: goto label_201e00;
        case 0x201e04u: goto label_201e04;
        case 0x201e08u: goto label_201e08;
        case 0x201e0cu: goto label_201e0c;
        case 0x201e10u: goto label_201e10;
        case 0x201e14u: goto label_201e14;
        case 0x201e18u: goto label_201e18;
        case 0x201e1cu: goto label_201e1c;
        case 0x201e20u: goto label_201e20;
        case 0x201e24u: goto label_201e24;
        case 0x201e28u: goto label_201e28;
        case 0x201e2cu: goto label_201e2c;
        case 0x201e30u: goto label_201e30;
        case 0x201e34u: goto label_201e34;
        case 0x201e38u: goto label_201e38;
        case 0x201e3cu: goto label_201e3c;
        case 0x201e40u: goto label_201e40;
        case 0x201e44u: goto label_201e44;
        case 0x201e48u: goto label_201e48;
        case 0x201e4cu: goto label_201e4c;
        case 0x201e50u: goto label_201e50;
        case 0x201e54u: goto label_201e54;
        case 0x201e58u: goto label_201e58;
        case 0x201e5cu: goto label_201e5c;
        case 0x201e60u: goto label_201e60;
        case 0x201e64u: goto label_201e64;
        case 0x201e68u: goto label_201e68;
        case 0x201e6cu: goto label_201e6c;
        case 0x201e70u: goto label_201e70;
        case 0x201e74u: goto label_201e74;
        case 0x201e78u: goto label_201e78;
        case 0x201e7cu: goto label_201e7c;
        case 0x201e80u: goto label_201e80;
        case 0x201e84u: goto label_201e84;
        case 0x201e88u: goto label_201e88;
        case 0x201e8cu: goto label_201e8c;
        case 0x201e90u: goto label_201e90;
        case 0x201e94u: goto label_201e94;
        case 0x201e98u: goto label_201e98;
        case 0x201e9cu: goto label_201e9c;
        case 0x201ea0u: goto label_201ea0;
        case 0x201ea4u: goto label_201ea4;
        case 0x201ea8u: goto label_201ea8;
        case 0x201eacu: goto label_201eac;
        case 0x201eb0u: goto label_201eb0;
        case 0x201eb4u: goto label_201eb4;
        case 0x201eb8u: goto label_201eb8;
        case 0x201ebcu: goto label_201ebc;
        case 0x201ec0u: goto label_201ec0;
        case 0x201ec4u: goto label_201ec4;
        case 0x201ec8u: goto label_201ec8;
        case 0x201eccu: goto label_201ecc;
        case 0x201ed0u: goto label_201ed0;
        case 0x201ed4u: goto label_201ed4;
        case 0x201ed8u: goto label_201ed8;
        case 0x201edcu: goto label_201edc;
        case 0x201ee0u: goto label_201ee0;
        case 0x201ee4u: goto label_201ee4;
        case 0x201ee8u: goto label_201ee8;
        case 0x201eecu: goto label_201eec;
        case 0x201ef0u: goto label_201ef0;
        case 0x201ef4u: goto label_201ef4;
        case 0x201ef8u: goto label_201ef8;
        case 0x201efcu: goto label_201efc;
        case 0x201f00u: goto label_201f00;
        case 0x201f04u: goto label_201f04;
        case 0x201f08u: goto label_201f08;
        case 0x201f0cu: goto label_201f0c;
        case 0x201f10u: goto label_201f10;
        case 0x201f14u: goto label_201f14;
        case 0x201f18u: goto label_201f18;
        case 0x201f1cu: goto label_201f1c;
        case 0x201f20u: goto label_201f20;
        case 0x201f24u: goto label_201f24;
        case 0x201f28u: goto label_201f28;
        case 0x201f2cu: goto label_201f2c;
        case 0x201f30u: goto label_201f30;
        case 0x201f34u: goto label_201f34;
        case 0x201f38u: goto label_201f38;
        case 0x201f3cu: goto label_201f3c;
        case 0x201f40u: goto label_201f40;
        case 0x201f44u: goto label_201f44;
        case 0x201f48u: goto label_201f48;
        case 0x201f4cu: goto label_201f4c;
        case 0x201f50u: goto label_201f50;
        case 0x201f54u: goto label_201f54;
        case 0x201f58u: goto label_201f58;
        case 0x201f5cu: goto label_201f5c;
        case 0x201f60u: goto label_201f60;
        case 0x201f64u: goto label_201f64;
        case 0x201f68u: goto label_201f68;
        case 0x201f6cu: goto label_201f6c;
        case 0x201f70u: goto label_201f70;
        case 0x201f74u: goto label_201f74;
        case 0x201f78u: goto label_201f78;
        case 0x201f7cu: goto label_201f7c;
        case 0x201f80u: goto label_201f80;
        case 0x201f84u: goto label_201f84;
        case 0x201f88u: goto label_201f88;
        case 0x201f8cu: goto label_201f8c;
        case 0x201f90u: goto label_201f90;
        case 0x201f94u: goto label_201f94;
        case 0x201f98u: goto label_201f98;
        case 0x201f9cu: goto label_201f9c;
        case 0x201fa0u: goto label_201fa0;
        case 0x201fa4u: goto label_201fa4;
        case 0x201fa8u: goto label_201fa8;
        case 0x201facu: goto label_201fac;
        case 0x201fb0u: goto label_201fb0;
        default: break;
    }

    ctx->pc = 0x201ad0u;

label_201ad0:
    // 0x201ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_201ad4:
    // 0x201ad4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x201ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_201ad8:
    // 0x201ad8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_201adc:
    // 0x201adc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x201adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_201ae0:
    // 0x201ae0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_201ae4:
    // 0x201ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201ae8:
    // 0x201ae8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_201aec:
    // 0x201aec: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x201aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_201af0:
    // 0x201af0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x201af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_201af4:
    // 0x201af4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x201af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201af8:
    // 0x201af8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_201afc:
    // 0x201afc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x201afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201b00:
    // 0x201b00: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x201b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_201b04:
    // 0x201b04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201b08:
    // 0x201b08: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x201b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
label_201b0c:
    // 0x201b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201b10:
    // 0x201b10: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201b14:
    // 0x201b14: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201b14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201b18:
    // 0x201b18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_201b1c:
    // 0x201b1c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x201b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_201b20:
    // 0x201b20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_201b24:
    if (ctx->pc == 0x201B24u) {
        ctx->pc = 0x201B28u;
        goto label_201b28;
    }
    ctx->pc = 0x201B20u;
    {
        const bool branch_taken_0x201b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b20) {
            ctx->pc = 0x201B60u;
            goto label_201b60;
        }
    }
    ctx->pc = 0x201B28u;
label_201b28:
    // 0x201b28: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_201b2c:
    // 0x201b2c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
label_201b30:
    // 0x201b30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_201b34:
    // 0x201b34: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x201b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
label_201b38:
    // 0x201b38: 0x34420a12  ori         $v0, $v0, 0xA12
    ctx->pc = 0x201b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2578);
label_201b3c:
    // 0x201b3c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_201b40:
    // 0x201b40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_201b44:
    // 0x201b44: 0x24450d50  addiu       $a1, $v0, 0xD50
    ctx->pc = 0x201b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3408));
label_201b48:
    // 0x201b48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201b4c:
    // 0x201b4c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x201b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201b50:
    // 0x201b50: 0xc059b14  jal         func_166C50
label_201b54:
    if (ctx->pc == 0x201B54u) {
        ctx->pc = 0x201B58u;
        goto label_201b58;
    }
    ctx->pc = 0x201B50u;
    SET_GPR_U32(ctx, 31, 0x201B58u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201B50u, 0x201B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B58u;
label_201b58:
    // 0x201b58: 0x1000000d  b           . + 4 + (0xD << 2)
label_201b5c:
    if (ctx->pc == 0x201B5Cu) {
        ctx->pc = 0x201B60u;
        goto label_201b60;
    }
    ctx->pc = 0x201B58u;
    {
        const bool branch_taken_0x201b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b58) {
            ctx->pc = 0x201B90u;
            goto label_201b90;
        }
    }
    ctx->pc = 0x201B60u;
label_201b60:
    // 0x201b60: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_201b64:
    // 0x201b64: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
label_201b68:
    // 0x201b68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_201b6c:
    // 0x201b6c: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x201b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
label_201b70:
    // 0x201b70: 0x34422812  ori         $v0, $v0, 0x2812
    ctx->pc = 0x201b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10258);
label_201b74:
    // 0x201b74: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_201b78:
    // 0x201b78: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_201b7c:
    // 0x201b7c: 0x24450d50  addiu       $a1, $v0, 0xD50
    ctx->pc = 0x201b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3408));
label_201b80:
    // 0x201b80: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201b84:
    // 0x201b84: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x201b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201b88:
    // 0x201b88: 0xc059b14  jal         func_166C50
label_201b8c:
    if (ctx->pc == 0x201B8Cu) {
        ctx->pc = 0x201B90u;
        goto label_201b90;
    }
    ctx->pc = 0x201B88u;
    SET_GPR_U32(ctx, 31, 0x201B90u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201B88u, 0x201B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B90u;
label_201b90:
    // 0x201b90: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201b94:
    // 0x201b94: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201b98:
    // 0x201b98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_201b9c:
    // 0x201b9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201ba0:
    // 0x201ba0: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201ba4:
    // 0x201ba4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201ba8:
    // 0x201ba8: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201bac:
    // 0x201bac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_201bb0:
    // 0x201bb0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201bb4:
    // 0x201bb4: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201bb8:
    // 0x201bb8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201bbc:
    // 0x201bbc: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201bc0:
    // 0x201bc0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x201bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_201bc4:
    // 0x201bc4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x201bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_201bc8:
    // 0x201bc8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201bcc:
    // 0x201bcc: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201bd0:
    // 0x201bd0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x201bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
label_201bd4:
    // 0x201bd4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201bd8:
    // 0x201bd8: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201bdc:
    // 0x201bdc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_201be0:
    // 0x201be0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201be4:
    // 0x201be4: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201be4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201be8:
    // 0x201be8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_201bec:
    // 0x201bec: 0x3443080a  ori         $v1, $v0, 0x80A
    ctx->pc = 0x201becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2058);
label_201bf0:
    // 0x201bf0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201bf4:
    // 0x201bf4: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201bf8:
    // 0x201bf8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x201bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_201bfc:
    // 0x201bfc: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x201bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_201c00:
    // 0x201c00: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c04:
    // 0x201c04: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201c08:
    // 0x201c08: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x201c08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
label_201c0c:
    // 0x201c0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c10:
    // 0x201c10: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201c14:
    // 0x201c14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_201c18:
    // 0x201c18: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c1c:
    // 0x201c1c: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201c20:
    // 0x201c20: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c24:
    // 0x201c24: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201c28:
    // 0x201c28: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x201c28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_201c2c:
    // 0x201c2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_201c30:
    // 0x201c30: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c34:
    // 0x201c34: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201c38:
    // 0x201c38: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x201c38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
label_201c3c:
    // 0x201c3c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c40:
    // 0x201c40: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201c44:
    // 0x201c44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_201c48:
    // 0x201c48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c4c:
    // 0x201c4c: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201c50:
    // 0x201c50: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c54:
    // 0x201c54: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201c58:
    // 0x201c58: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c5c:
    // 0x201c5c: 0xac220ac0  sw          $v0, 0xAC0($at)
    ctx->pc = 0x201c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2752), GPR_U32(ctx, 2));
label_201c60:
    // 0x201c60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_201c64:
    // 0x201c64: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x201c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_201c68:
    // 0x201c68: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x201c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_201c6c:
    // 0x201c6c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x201c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201c70:
    // 0x201c70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_201c74:
    // 0x201c74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x201c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201c78:
    // 0x201c78: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x201c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_201c7c:
    // 0x201c7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201c80:
    // 0x201c80: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x201c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
label_201c84:
    // 0x201c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201c88:
    // 0x201c88: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x201c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_201c8c:
    // 0x201c8c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201c90:
    // 0x201c90: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201c94:
    // 0x201c94: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x201c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201c98:
    // 0x201c98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x201c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_201c9c:
    // 0x201c9c: 0x38102  srl         $s0, $v1, 4
    ctx->pc = 0x201c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_201ca0:
    // 0x201ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_201ca4:
    // 0x201ca4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x201ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_201ca8:
    // 0x201ca8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x201ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_201cac:
    // 0x201cac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x201cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201cb0:
    // 0x201cb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_201cb4:
    // 0x201cb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x201cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201cb8:
    // 0x201cb8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x201cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_201cbc:
    // 0x201cbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201cc0:
    // 0x201cc0: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x201cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
label_201cc4:
    // 0x201cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201cc8:
    // 0x201cc8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201ccc:
    // 0x201ccc: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201cccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201cd0:
    // 0x201cd0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x201cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_201cd4:
    // 0x201cd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_201cd8:
    // 0x201cd8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x201cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_201cdc:
    // 0x201cdc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_201ce0:
    // 0x201ce0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x201ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_201ce4:
    // 0x201ce4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201ce8:
    // 0x201ce8: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201cec:
    // 0x201cec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x201cecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_201cf0:
    // 0x201cf0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201cf4:
    // 0x201cf4: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201cf8:
    // 0x201cf8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x201cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_201cfc:
    // 0x201cfc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x201cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_201d00:
    // 0x201d00: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x201d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_201d04:
    // 0x201d04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x201d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_201d08:
    // 0x201d08: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d0c:
    // 0x201d0c: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201d10:
    // 0x201d10: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x201d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_201d14:
    // 0x201d14: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d18:
    // 0x201d18: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201d1c:
    // 0x201d1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_201d20:
    // 0x201d20: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d24:
    // 0x201d24: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201d24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201d28:
    // 0x201d28: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x201d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_201d2c:
    // 0x201d2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x201d2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_201d30:
    // 0x201d30: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x201d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_201d34:
    // 0x201d34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_201d38:
    // 0x201d38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x201d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_201d3c:
    // 0x201d3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x201d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_201d40:
    // 0x201d40: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d44:
    // 0x201d44: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201d48:
    // 0x201d48: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x201d48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_201d4c:
    // 0x201d4c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x201d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_201d50:
    // 0x201d50: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d54:
    // 0x201d54: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201d58:
    // 0x201d58: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x201d58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
label_201d5c:
    // 0x201d5c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d60:
    // 0x201d60: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201d64:
    // 0x201d64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_201d68:
    // 0x201d68: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d6c:
    // 0x201d6c: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201d70:
    // 0x201d70: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d74:
    // 0x201d74: 0x8c220ac0  lw          $v0, 0xAC0($at)
    ctx->pc = 0x201d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2752)));
label_201d78:
    // 0x201d78: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201d7c:
    // 0x201d7c: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 2));
label_201d80:
    // 0x201d80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_201d84:
    // 0x201d84: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x201d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_201d88:
    // 0x201d88: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x201d88u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000800
label_201d8c:
    // 0x201d8c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x201d8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_201d90:
    // 0x201d90: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x201d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201d94:
    // 0x201d94: 0x1000002c  b           . + 4 + (0x2C << 2)
label_201d98:
    if (ctx->pc == 0x201D98u) {
        ctx->pc = 0x201D9Cu;
        goto label_201d9c;
    }
    ctx->pc = 0x201D94u;
    {
        const bool branch_taken_0x201d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d94) {
            ctx->pc = 0x201E48u;
            goto label_201e48;
        }
    }
    ctx->pc = 0x201D9Cu;
label_201d9c:
    // 0x201d9c: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
label_201da0:
    // 0x201da0: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_201da4:
    // 0x201da4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201da8:
    // 0x201da8: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
label_201dac:
    // 0x201dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201db0:
    // 0x201db0: 0x9042485f  lbu         $v0, 0x485F($v0)
    ctx->pc = 0x201db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18527)));
label_201db4:
    // 0x201db4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_201db8:
    if (ctx->pc == 0x201DB8u) {
        ctx->pc = 0x201DBCu;
        goto label_201dbc;
    }
    ctx->pc = 0x201DB4u;
    {
        const bool branch_taken_0x201db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201db4) {
            ctx->pc = 0x201E40u;
            goto label_201e40;
        }
    }
    ctx->pc = 0x201DBCu;
label_201dbc:
    // 0x201dbc: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
label_201dc0:
    // 0x201dc0: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_201dc4:
    // 0x201dc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201dc8:
    // 0x201dc8: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
label_201dcc:
    // 0x201dcc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201dd0:
    // 0x201dd0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x201dd0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_201dd4:
    // 0x201dd4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x201dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_201dd8:
    // 0x201dd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_201ddc:
    // 0x201ddc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x201ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_201de0:
    // 0x201de0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x201de0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_201de4:
    // 0x201de4: 0x64420010  daddiu      $v0, $v0, 0x10
    ctx->pc = 0x201de4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)16);
label_201de8:
    // 0x201de8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x201de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_201dec:
    // 0x201dec: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x201decu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_201df0:
    // 0x201df0: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
label_201df4:
    // 0x201df4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_201df8:
    // 0x201df8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201dfc:
    // 0x201dfc: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
label_201e00:
    // 0x201e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201e04:
    // 0x201e04: 0x9042485e  lbu         $v0, 0x485E($v0)
    ctx->pc = 0x201e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18526)));
label_201e08:
    // 0x201e08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_201e0c:
    // 0x201e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_201e10:
    // 0x201e10: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_201e14:
    // 0x201e14: 0x24429fa8  addiu       $v0, $v0, -0x6058
    ctx->pc = 0x201e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942632));
label_201e18:
    // 0x201e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201e1c:
    // 0x201e1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x201e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201e20:
    // 0x201e20: 0x40f809  jalr        $v0
label_201e24:
    if (ctx->pc == 0x201E24u) {
        ctx->pc = 0x201E28u;
        goto label_201e28;
    }
    ctx->pc = 0x201E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201E28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E20u, 0x201E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201E28u;
label_201e28:
    // 0x201e28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201e2c:
    // 0x201e2c: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
label_201e30:
    // 0x201e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_201e34:
    // 0x201e34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201e38:
    // 0x201e38: 0xac220ab0  sw          $v0, 0xAB0($at)
    ctx->pc = 0x201e38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 2));
label_201e3c:
    // 0x201e3c: 0x0  nop
    ctx->pc = 0x201e3cu;
    // NOP
label_201e40:
    // 0x201e40: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x201e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_201e44:
    // 0x201e44: 0x0  nop
    ctx->pc = 0x201e44u;
    // NOP
label_201e48:
    // 0x201e48: 0x601ffd4  bgez        $s0, . + 4 + (-0x2C << 2)
label_201e4c:
    if (ctx->pc == 0x201E4Cu) {
        ctx->pc = 0x201E50u;
        goto label_201e50;
    }
    ctx->pc = 0x201E48u;
    {
        const bool branch_taken_0x201e48 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x201e48) {
            ctx->pc = 0x201D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201d9c;
        }
    }
    ctx->pc = 0x201E50u;
label_201e50:
    // 0x201e50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_201e54:
    // 0x201e54: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_201e58:
    // 0x201e58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_201e5c:
    if (ctx->pc == 0x201E5Cu) {
        ctx->pc = 0x201E60u;
        goto label_201e60;
    }
    ctx->pc = 0x201E58u;
    {
        const bool branch_taken_0x201e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e58) {
            ctx->pc = 0x201EB0u;
            goto label_201eb0;
        }
    }
    ctx->pc = 0x201E60u;
label_201e60:
    // 0x201e60: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201e64:
    // 0x201e64: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
label_201e68:
    // 0x201e68: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x201e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
label_201e6c:
    // 0x201e6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x201e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_201e70:
    // 0x201e70: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x201e70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_201e74:
    // 0x201e74: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_201e78:
    // 0x201e78: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
label_201e7c:
    // 0x201e7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_201e80:
    // 0x201e80: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
label_201e84:
    // 0x201e84: 0x34420a00  ori         $v0, $v0, 0xA00
    ctx->pc = 0x201e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2560);
label_201e88:
    // 0x201e88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_201e8c:
    // 0x201e8c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_201e90:
    // 0x201e90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_201e94:
    // 0x201e94: 0x24450d70  addiu       $a1, $v0, 0xD70
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3440));
label_201e98:
    // 0x201e98: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201e9c:
    // 0x201e9c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x201e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201ea0:
    // 0x201ea0: 0xc059b14  jal         func_166C50
label_201ea4:
    if (ctx->pc == 0x201EA4u) {
        ctx->pc = 0x201EA8u;
        goto label_201ea8;
    }
    ctx->pc = 0x201EA0u;
    SET_GPR_U32(ctx, 31, 0x201EA8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201EA0u, 0x201EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EA8u;
label_201ea8:
    // 0x201ea8: 0x10000013  b           . + 4 + (0x13 << 2)
label_201eac:
    if (ctx->pc == 0x201EACu) {
        ctx->pc = 0x201EB0u;
        goto label_201eb0;
    }
    ctx->pc = 0x201EA8u;
    {
        const bool branch_taken_0x201ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201ea8) {
            ctx->pc = 0x201EF8u;
            goto label_201ef8;
        }
    }
    ctx->pc = 0x201EB0u;
label_201eb0:
    // 0x201eb0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201eb4:
    // 0x201eb4: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
label_201eb8:
    // 0x201eb8: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
label_201ebc:
    // 0x201ebc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x201ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_201ec0:
    // 0x201ec0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x201ec0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_201ec4:
    // 0x201ec4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_201ec8:
    // 0x201ec8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
label_201ecc:
    // 0x201ecc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_201ed0:
    // 0x201ed0: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x201ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
label_201ed4:
    // 0x201ed4: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x201ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
label_201ed8:
    // 0x201ed8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_201edc:
    // 0x201edc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x201edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_201ee0:
    // 0x201ee0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_201ee4:
    // 0x201ee4: 0x24450d70  addiu       $a1, $v0, 0xD70
    ctx->pc = 0x201ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3440));
label_201ee8:
    // 0x201ee8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201eec:
    // 0x201eec: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x201eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201ef0:
    // 0x201ef0: 0xc059b14  jal         func_166C50
label_201ef4:
    if (ctx->pc == 0x201EF4u) {
        ctx->pc = 0x201EF8u;
        goto label_201ef8;
    }
    ctx->pc = 0x201EF0u;
    SET_GPR_U32(ctx, 31, 0x201EF8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201EF0u, 0x201EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EF8u;
label_201ef8:
    // 0x201ef8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x201ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_201efc:
    // 0x201efc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201f00:
    // 0x201f00: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201f04:
    // 0x201f04: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x201f04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_201f08:
    // 0x201f08: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201f0c:
    // 0x201f0c: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201f10:
    // 0x201f10: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x201f10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_201f14:
    // 0x201f14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_201f18:
    // 0x201f18: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x201f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_201f1c:
    // 0x201f1c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x201f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_201f20:
    // 0x201f20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x201f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201f24:
    // 0x201f24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_201f28:
    // 0x201f28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x201f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201f2c:
    // 0x201f2c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x201f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_201f30:
    // 0x201f30: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201f34:
    // 0x201f34: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x201f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
label_201f38:
    // 0x201f38: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x201f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201f3c:
    // 0x201f3c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201f40:
    // 0x201f40: 0x8c250ab8  lw          $a1, 0xAB8($at)
    ctx->pc = 0x201f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
label_201f44:
    // 0x201f44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_201f48:
    // 0x201f48: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x201f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_201f4c:
    // 0x201f4c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x201f4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_201f50:
    // 0x201f50: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_201f54:
    // 0x201f54: 0xc04f054  jal         func_13C150
label_201f58:
    if (ctx->pc == 0x201F58u) {
        ctx->pc = 0x201F5Cu;
        goto label_201f5c;
    }
    ctx->pc = 0x201F54u;
    SET_GPR_U32(ctx, 31, 0x201F5Cu);
    ctx->pc = 0x13C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C150u, 0x201F54u, 0x201F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201F5Cu;
label_201f5c:
    // 0x201f5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_201f60:
    // 0x201f60: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x201f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_201f64:
    // 0x201f64: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x201f64u;
    SET_GPR_S32(ctx, 19, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000800
label_201f68:
    // 0x201f68: 0x2723023  subu        $a2, $s3, $s2
    ctx->pc = 0x201f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_201f6c:
    // 0x201f6c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_201f70:
    // 0x201f70: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
label_201f74:
    // 0x201f74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_201f78:
    // 0x201f78: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x201f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
label_201f7c:
    // 0x201f7c: 0x34420a13  ori         $v0, $v0, 0xA13
    ctx->pc = 0x201f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2579);
label_201f80:
    // 0x201f80: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_201f84:
    // 0x201f84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_201f88:
    // 0x201f88: 0x24450d90  addiu       $a1, $v0, 0xD90
    ctx->pc = 0x201f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
label_201f8c:
    // 0x201f8c: 0xc059b14  jal         func_166C50
label_201f90:
    if (ctx->pc == 0x201F90u) {
        ctx->pc = 0x201F94u;
        goto label_201f94;
    }
    ctx->pc = 0x201F8Cu;
    SET_GPR_U32(ctx, 31, 0x201F94u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201F8Cu, 0x201F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201F94u;
label_201f94:
    // 0x201f94: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x201f94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201f98:
    // 0x201f98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201f9c:
    // 0x201f9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201fa0:
    // 0x201fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201fa4:
    // 0x201fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201fa8:
    // 0x201fa8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x201fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_201fac:
    // 0x201fac: 0x3e00008  jr          $ra
label_201fb0:
    if (ctx->pc == 0x201FB0u) {
        ctx->pc = 0x201FB4u;
        goto label_fallthrough_0x201fac;
    }
    ctx->pc = 0x201FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x201fac:
    ctx->pc = 0x201FB4u;
}
