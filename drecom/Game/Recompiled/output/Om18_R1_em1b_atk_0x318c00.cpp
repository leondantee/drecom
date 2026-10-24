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

// Function: Om18_R1_em1b_atk
// Address: 0x318c00 - 0x3191e4
void Om18_R1_em1b_atk_0x318c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R1_em1b_atk_0x318c00");
#endif

    switch (ctx->pc) {
        case 0x318c00u: goto label_318c00;
        case 0x318c04u: goto label_318c04;
        case 0x318c08u: goto label_318c08;
        case 0x318c0cu: goto label_318c0c;
        case 0x318c10u: goto label_318c10;
        case 0x318c14u: goto label_318c14;
        case 0x318c18u: goto label_318c18;
        case 0x318c1cu: goto label_318c1c;
        case 0x318c20u: goto label_318c20;
        case 0x318c24u: goto label_318c24;
        case 0x318c28u: goto label_318c28;
        case 0x318c2cu: goto label_318c2c;
        case 0x318c30u: goto label_318c30;
        case 0x318c34u: goto label_318c34;
        case 0x318c38u: goto label_318c38;
        case 0x318c3cu: goto label_318c3c;
        case 0x318c40u: goto label_318c40;
        case 0x318c44u: goto label_318c44;
        case 0x318c48u: goto label_318c48;
        case 0x318c4cu: goto label_318c4c;
        case 0x318c50u: goto label_318c50;
        case 0x318c54u: goto label_318c54;
        case 0x318c58u: goto label_318c58;
        case 0x318c5cu: goto label_318c5c;
        case 0x318c60u: goto label_318c60;
        case 0x318c64u: goto label_318c64;
        case 0x318c68u: goto label_318c68;
        case 0x318c6cu: goto label_318c6c;
        case 0x318c70u: goto label_318c70;
        case 0x318c74u: goto label_318c74;
        case 0x318c78u: goto label_318c78;
        case 0x318c7cu: goto label_318c7c;
        case 0x318c80u: goto label_318c80;
        case 0x318c84u: goto label_318c84;
        case 0x318c88u: goto label_318c88;
        case 0x318c8cu: goto label_318c8c;
        case 0x318c90u: goto label_318c90;
        case 0x318c94u: goto label_318c94;
        case 0x318c98u: goto label_318c98;
        case 0x318c9cu: goto label_318c9c;
        case 0x318ca0u: goto label_318ca0;
        case 0x318ca4u: goto label_318ca4;
        case 0x318ca8u: goto label_318ca8;
        case 0x318cacu: goto label_318cac;
        case 0x318cb0u: goto label_318cb0;
        case 0x318cb4u: goto label_318cb4;
        case 0x318cb8u: goto label_318cb8;
        case 0x318cbcu: goto label_318cbc;
        case 0x318cc0u: goto label_318cc0;
        case 0x318cc4u: goto label_318cc4;
        case 0x318cc8u: goto label_318cc8;
        case 0x318cccu: goto label_318ccc;
        case 0x318cd0u: goto label_318cd0;
        case 0x318cd4u: goto label_318cd4;
        case 0x318cd8u: goto label_318cd8;
        case 0x318cdcu: goto label_318cdc;
        case 0x318ce0u: goto label_318ce0;
        case 0x318ce4u: goto label_318ce4;
        case 0x318ce8u: goto label_318ce8;
        case 0x318cecu: goto label_318cec;
        case 0x318cf0u: goto label_318cf0;
        case 0x318cf4u: goto label_318cf4;
        case 0x318cf8u: goto label_318cf8;
        case 0x318cfcu: goto label_318cfc;
        case 0x318d00u: goto label_318d00;
        case 0x318d04u: goto label_318d04;
        case 0x318d08u: goto label_318d08;
        case 0x318d0cu: goto label_318d0c;
        case 0x318d10u: goto label_318d10;
        case 0x318d14u: goto label_318d14;
        case 0x318d18u: goto label_318d18;
        case 0x318d1cu: goto label_318d1c;
        case 0x318d20u: goto label_318d20;
        case 0x318d24u: goto label_318d24;
        case 0x318d28u: goto label_318d28;
        case 0x318d2cu: goto label_318d2c;
        case 0x318d30u: goto label_318d30;
        case 0x318d34u: goto label_318d34;
        case 0x318d38u: goto label_318d38;
        case 0x318d3cu: goto label_318d3c;
        case 0x318d40u: goto label_318d40;
        case 0x318d44u: goto label_318d44;
        case 0x318d48u: goto label_318d48;
        case 0x318d4cu: goto label_318d4c;
        case 0x318d50u: goto label_318d50;
        case 0x318d54u: goto label_318d54;
        case 0x318d58u: goto label_318d58;
        case 0x318d5cu: goto label_318d5c;
        case 0x318d60u: goto label_318d60;
        case 0x318d64u: goto label_318d64;
        case 0x318d68u: goto label_318d68;
        case 0x318d6cu: goto label_318d6c;
        case 0x318d70u: goto label_318d70;
        case 0x318d74u: goto label_318d74;
        case 0x318d78u: goto label_318d78;
        case 0x318d7cu: goto label_318d7c;
        case 0x318d80u: goto label_318d80;
        case 0x318d84u: goto label_318d84;
        case 0x318d88u: goto label_318d88;
        case 0x318d8cu: goto label_318d8c;
        case 0x318d90u: goto label_318d90;
        case 0x318d94u: goto label_318d94;
        case 0x318d98u: goto label_318d98;
        case 0x318d9cu: goto label_318d9c;
        case 0x318da0u: goto label_318da0;
        case 0x318da4u: goto label_318da4;
        case 0x318da8u: goto label_318da8;
        case 0x318dacu: goto label_318dac;
        case 0x318db0u: goto label_318db0;
        case 0x318db4u: goto label_318db4;
        case 0x318db8u: goto label_318db8;
        case 0x318dbcu: goto label_318dbc;
        case 0x318dc0u: goto label_318dc0;
        case 0x318dc4u: goto label_318dc4;
        case 0x318dc8u: goto label_318dc8;
        case 0x318dccu: goto label_318dcc;
        case 0x318dd0u: goto label_318dd0;
        case 0x318dd4u: goto label_318dd4;
        case 0x318dd8u: goto label_318dd8;
        case 0x318ddcu: goto label_318ddc;
        case 0x318de0u: goto label_318de0;
        case 0x318de4u: goto label_318de4;
        case 0x318de8u: goto label_318de8;
        case 0x318decu: goto label_318dec;
        case 0x318df0u: goto label_318df0;
        case 0x318df4u: goto label_318df4;
        case 0x318df8u: goto label_318df8;
        case 0x318dfcu: goto label_318dfc;
        case 0x318e00u: goto label_318e00;
        case 0x318e04u: goto label_318e04;
        case 0x318e08u: goto label_318e08;
        case 0x318e0cu: goto label_318e0c;
        case 0x318e10u: goto label_318e10;
        case 0x318e14u: goto label_318e14;
        case 0x318e18u: goto label_318e18;
        case 0x318e1cu: goto label_318e1c;
        case 0x318e20u: goto label_318e20;
        case 0x318e24u: goto label_318e24;
        case 0x318e28u: goto label_318e28;
        case 0x318e2cu: goto label_318e2c;
        case 0x318e30u: goto label_318e30;
        case 0x318e34u: goto label_318e34;
        case 0x318e38u: goto label_318e38;
        case 0x318e3cu: goto label_318e3c;
        case 0x318e40u: goto label_318e40;
        case 0x318e44u: goto label_318e44;
        case 0x318e48u: goto label_318e48;
        case 0x318e4cu: goto label_318e4c;
        case 0x318e50u: goto label_318e50;
        case 0x318e54u: goto label_318e54;
        case 0x318e58u: goto label_318e58;
        case 0x318e5cu: goto label_318e5c;
        case 0x318e60u: goto label_318e60;
        case 0x318e64u: goto label_318e64;
        case 0x318e68u: goto label_318e68;
        case 0x318e6cu: goto label_318e6c;
        case 0x318e70u: goto label_318e70;
        case 0x318e74u: goto label_318e74;
        case 0x318e78u: goto label_318e78;
        case 0x318e7cu: goto label_318e7c;
        case 0x318e80u: goto label_318e80;
        case 0x318e84u: goto label_318e84;
        case 0x318e88u: goto label_318e88;
        case 0x318e8cu: goto label_318e8c;
        case 0x318e90u: goto label_318e90;
        case 0x318e94u: goto label_318e94;
        case 0x318e98u: goto label_318e98;
        case 0x318e9cu: goto label_318e9c;
        case 0x318ea0u: goto label_318ea0;
        case 0x318ea4u: goto label_318ea4;
        case 0x318ea8u: goto label_318ea8;
        case 0x318eacu: goto label_318eac;
        case 0x318eb0u: goto label_318eb0;
        case 0x318eb4u: goto label_318eb4;
        case 0x318eb8u: goto label_318eb8;
        case 0x318ebcu: goto label_318ebc;
        case 0x318ec0u: goto label_318ec0;
        case 0x318ec4u: goto label_318ec4;
        case 0x318ec8u: goto label_318ec8;
        case 0x318eccu: goto label_318ecc;
        case 0x318ed0u: goto label_318ed0;
        case 0x318ed4u: goto label_318ed4;
        case 0x318ed8u: goto label_318ed8;
        case 0x318edcu: goto label_318edc;
        case 0x318ee0u: goto label_318ee0;
        case 0x318ee4u: goto label_318ee4;
        case 0x318ee8u: goto label_318ee8;
        case 0x318eecu: goto label_318eec;
        case 0x318ef0u: goto label_318ef0;
        case 0x318ef4u: goto label_318ef4;
        case 0x318ef8u: goto label_318ef8;
        case 0x318efcu: goto label_318efc;
        case 0x318f00u: goto label_318f00;
        case 0x318f04u: goto label_318f04;
        case 0x318f08u: goto label_318f08;
        case 0x318f0cu: goto label_318f0c;
        case 0x318f10u: goto label_318f10;
        case 0x318f14u: goto label_318f14;
        case 0x318f18u: goto label_318f18;
        case 0x318f1cu: goto label_318f1c;
        case 0x318f20u: goto label_318f20;
        case 0x318f24u: goto label_318f24;
        case 0x318f28u: goto label_318f28;
        case 0x318f2cu: goto label_318f2c;
        case 0x318f30u: goto label_318f30;
        case 0x318f34u: goto label_318f34;
        case 0x318f38u: goto label_318f38;
        case 0x318f3cu: goto label_318f3c;
        case 0x318f40u: goto label_318f40;
        case 0x318f44u: goto label_318f44;
        case 0x318f48u: goto label_318f48;
        case 0x318f4cu: goto label_318f4c;
        case 0x318f50u: goto label_318f50;
        case 0x318f54u: goto label_318f54;
        case 0x318f58u: goto label_318f58;
        case 0x318f5cu: goto label_318f5c;
        case 0x318f60u: goto label_318f60;
        case 0x318f64u: goto label_318f64;
        case 0x318f68u: goto label_318f68;
        case 0x318f6cu: goto label_318f6c;
        case 0x318f70u: goto label_318f70;
        case 0x318f74u: goto label_318f74;
        case 0x318f78u: goto label_318f78;
        case 0x318f7cu: goto label_318f7c;
        case 0x318f80u: goto label_318f80;
        case 0x318f84u: goto label_318f84;
        case 0x318f88u: goto label_318f88;
        case 0x318f8cu: goto label_318f8c;
        case 0x318f90u: goto label_318f90;
        case 0x318f94u: goto label_318f94;
        case 0x318f98u: goto label_318f98;
        case 0x318f9cu: goto label_318f9c;
        case 0x318fa0u: goto label_318fa0;
        case 0x318fa4u: goto label_318fa4;
        case 0x318fa8u: goto label_318fa8;
        case 0x318facu: goto label_318fac;
        case 0x318fb0u: goto label_318fb0;
        case 0x318fb4u: goto label_318fb4;
        case 0x318fb8u: goto label_318fb8;
        case 0x318fbcu: goto label_318fbc;
        case 0x318fc0u: goto label_318fc0;
        case 0x318fc4u: goto label_318fc4;
        case 0x318fc8u: goto label_318fc8;
        case 0x318fccu: goto label_318fcc;
        case 0x318fd0u: goto label_318fd0;
        case 0x318fd4u: goto label_318fd4;
        case 0x318fd8u: goto label_318fd8;
        case 0x318fdcu: goto label_318fdc;
        case 0x318fe0u: goto label_318fe0;
        case 0x318fe4u: goto label_318fe4;
        case 0x318fe8u: goto label_318fe8;
        case 0x318fecu: goto label_318fec;
        case 0x318ff0u: goto label_318ff0;
        case 0x318ff4u: goto label_318ff4;
        case 0x318ff8u: goto label_318ff8;
        case 0x318ffcu: goto label_318ffc;
        case 0x319000u: goto label_319000;
        case 0x319004u: goto label_319004;
        case 0x319008u: goto label_319008;
        case 0x31900cu: goto label_31900c;
        case 0x319010u: goto label_319010;
        case 0x319014u: goto label_319014;
        case 0x319018u: goto label_319018;
        case 0x31901cu: goto label_31901c;
        case 0x319020u: goto label_319020;
        case 0x319024u: goto label_319024;
        case 0x319028u: goto label_319028;
        case 0x31902cu: goto label_31902c;
        case 0x319030u: goto label_319030;
        case 0x319034u: goto label_319034;
        case 0x319038u: goto label_319038;
        case 0x31903cu: goto label_31903c;
        case 0x319040u: goto label_319040;
        case 0x319044u: goto label_319044;
        case 0x319048u: goto label_319048;
        case 0x31904cu: goto label_31904c;
        case 0x319050u: goto label_319050;
        case 0x319054u: goto label_319054;
        case 0x319058u: goto label_319058;
        case 0x31905cu: goto label_31905c;
        case 0x319060u: goto label_319060;
        case 0x319064u: goto label_319064;
        case 0x319068u: goto label_319068;
        case 0x31906cu: goto label_31906c;
        case 0x319070u: goto label_319070;
        case 0x319074u: goto label_319074;
        case 0x319078u: goto label_319078;
        case 0x31907cu: goto label_31907c;
        case 0x319080u: goto label_319080;
        case 0x319084u: goto label_319084;
        case 0x319088u: goto label_319088;
        case 0x31908cu: goto label_31908c;
        case 0x319090u: goto label_319090;
        case 0x319094u: goto label_319094;
        case 0x319098u: goto label_319098;
        case 0x31909cu: goto label_31909c;
        case 0x3190a0u: goto label_3190a0;
        case 0x3190a4u: goto label_3190a4;
        case 0x3190a8u: goto label_3190a8;
        case 0x3190acu: goto label_3190ac;
        case 0x3190b0u: goto label_3190b0;
        case 0x3190b4u: goto label_3190b4;
        case 0x3190b8u: goto label_3190b8;
        case 0x3190bcu: goto label_3190bc;
        case 0x3190c0u: goto label_3190c0;
        case 0x3190c4u: goto label_3190c4;
        case 0x3190c8u: goto label_3190c8;
        case 0x3190ccu: goto label_3190cc;
        case 0x3190d0u: goto label_3190d0;
        case 0x3190d4u: goto label_3190d4;
        case 0x3190d8u: goto label_3190d8;
        case 0x3190dcu: goto label_3190dc;
        case 0x3190e0u: goto label_3190e0;
        case 0x3190e4u: goto label_3190e4;
        case 0x3190e8u: goto label_3190e8;
        case 0x3190ecu: goto label_3190ec;
        case 0x3190f0u: goto label_3190f0;
        case 0x3190f4u: goto label_3190f4;
        case 0x3190f8u: goto label_3190f8;
        case 0x3190fcu: goto label_3190fc;
        case 0x319100u: goto label_319100;
        case 0x319104u: goto label_319104;
        case 0x319108u: goto label_319108;
        case 0x31910cu: goto label_31910c;
        case 0x319110u: goto label_319110;
        case 0x319114u: goto label_319114;
        case 0x319118u: goto label_319118;
        case 0x31911cu: goto label_31911c;
        case 0x319120u: goto label_319120;
        case 0x319124u: goto label_319124;
        case 0x319128u: goto label_319128;
        case 0x31912cu: goto label_31912c;
        case 0x319130u: goto label_319130;
        case 0x319134u: goto label_319134;
        case 0x319138u: goto label_319138;
        case 0x31913cu: goto label_31913c;
        case 0x319140u: goto label_319140;
        case 0x319144u: goto label_319144;
        case 0x319148u: goto label_319148;
        case 0x31914cu: goto label_31914c;
        case 0x319150u: goto label_319150;
        case 0x319154u: goto label_319154;
        case 0x319158u: goto label_319158;
        case 0x31915cu: goto label_31915c;
        case 0x319160u: goto label_319160;
        case 0x319164u: goto label_319164;
        case 0x319168u: goto label_319168;
        case 0x31916cu: goto label_31916c;
        case 0x319170u: goto label_319170;
        case 0x319174u: goto label_319174;
        case 0x319178u: goto label_319178;
        case 0x31917cu: goto label_31917c;
        case 0x319180u: goto label_319180;
        case 0x319184u: goto label_319184;
        case 0x319188u: goto label_319188;
        case 0x31918cu: goto label_31918c;
        case 0x319190u: goto label_319190;
        case 0x319194u: goto label_319194;
        case 0x319198u: goto label_319198;
        case 0x31919cu: goto label_31919c;
        case 0x3191a0u: goto label_3191a0;
        case 0x3191a4u: goto label_3191a4;
        case 0x3191a8u: goto label_3191a8;
        case 0x3191acu: goto label_3191ac;
        case 0x3191b0u: goto label_3191b0;
        case 0x3191b4u: goto label_3191b4;
        case 0x3191b8u: goto label_3191b8;
        case 0x3191bcu: goto label_3191bc;
        case 0x3191c0u: goto label_3191c0;
        case 0x3191c4u: goto label_3191c4;
        case 0x3191c8u: goto label_3191c8;
        case 0x3191ccu: goto label_3191cc;
        case 0x3191d0u: goto label_3191d0;
        case 0x3191d4u: goto label_3191d4;
        case 0x3191d8u: goto label_3191d8;
        case 0x3191dcu: goto label_3191dc;
        case 0x3191e0u: goto label_3191e0;
        default: break;
    }

    ctx->pc = 0x318c00u;

label_318c00:
    // 0x318c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x318c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_318c04:
    // 0x318c04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x318c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_318c08:
    // 0x318c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x318c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_318c0c:
    // 0x318c0c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x318c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_318c10:
    // 0x318c10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x318c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_318c14:
    // 0x318c14: 0x24429c20  addiu       $v0, $v0, -0x63E0
    ctx->pc = 0x318c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941728));
label_318c18:
    // 0x318c18: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x318c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_318c1c:
    // 0x318c1c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x318c1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_318c20:
    // 0x318c20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x318c20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_318c24:
    // 0x318c24: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318c28:
    // 0x318c28: 0x8c5012a4  lw          $s0, 0x12A4($v0)
    ctx->pc = 0x318c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
label_318c2c:
    // 0x318c2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318c30:
    // 0x318c30: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x318c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318c34:
    // 0x318c34: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x318c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318c38:
    // 0x318c38: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_318c3c:
    // 0x318c3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x318c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_318c40:
    // 0x318c40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318c44:
    // 0x318c44: 0x0  nop
    ctx->pc = 0x318c44u;
    // NOP
label_318c48:
    // 0x318c48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318c4c:
    // 0x318c4c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x318c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
label_318c50:
    // 0x318c50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318c54:
    // 0x318c54: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318c58:
    // 0x318c58: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x318c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318c5c:
    // 0x318c5c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x318c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_318c60:
    // 0x318c60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_318c64:
    // 0x318c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318c68:
    // 0x318c68: 0x0  nop
    ctx->pc = 0x318c68u;
    // NOP
label_318c6c:
    // 0x318c6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318c6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318c70:
    // 0x318c70: 0x0  nop
    ctx->pc = 0x318c70u;
    // NOP
label_318c74:
    // 0x318c74: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_318c78:
    if (ctx->pc == 0x318C78u) {
        ctx->pc = 0x318C7Cu;
        goto label_318c7c;
    }
    ctx->pc = 0x318C74u;
    {
        const bool branch_taken_0x318c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318c74) {
            ctx->pc = 0x318C94u;
            goto label_318c94;
        }
    }
    ctx->pc = 0x318C7Cu;
label_318c7c:
    // 0x318c7c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x318c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_318c80:
    // 0x318c80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_318c84:
    // 0x318c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318c88:
    // 0x318c88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318c8c:
    // 0x318c8c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318c90:
    // 0x318c90: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x318c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
label_318c94:
    // 0x318c94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318c98:
    // 0x318c98: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x318c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318c9c:
    // 0x318c9c: 0xc040cbc  jal         func_1032F0
label_318ca0:
    if (ctx->pc == 0x318CA0u) {
        ctx->pc = 0x318CA4u;
        goto label_318ca4;
    }
    ctx->pc = 0x318C9Cu;
    SET_GPR_U32(ctx, 31, 0x318CA4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x318CA4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x318CA4u) { return; }
    ctx->pc = 0x318CA4u;
label_318ca4:
    // 0x318ca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318ca8:
    // 0x318ca8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cac:
    // 0x318cac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318cb0:
    // 0x318cb0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x318cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_318cb4:
    // 0x318cb4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cb8:
    // 0x318cb8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318cbc:
    // 0x318cbc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x318cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_318cc0:
    // 0x318cc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cc4:
    // 0x318cc4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318cc8:
    // 0x318cc8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x318cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_318ccc:
    // 0x318ccc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cd0:
    // 0x318cd0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cd4:
    // 0x318cd4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cd8:
    // 0x318cd8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318cdc:
    // 0x318cdc: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x318cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_318ce0:
    // 0x318ce0: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x318ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_318ce4:
    // 0x318ce4: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x318ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
label_318ce8:
    // 0x318ce8: 0xc040d62  jal         func_103588
label_318cec:
    if (ctx->pc == 0x318CECu) {
        ctx->pc = 0x318CF0u;
        goto label_318cf0;
    }
    ctx->pc = 0x318CE8u;
    SET_GPR_U32(ctx, 31, 0x318CF0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x318CF0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x318CF0u) { return; }
    ctx->pc = 0x318CF0u;
label_318cf0:
    // 0x318cf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cf4:
    // 0x318cf4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x318cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_318cf8:
    // 0x318cf8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x318cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_318cfc:
    // 0x318cfc: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x318cfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_318d00:
    // 0x318d00: 0x10200133  beqz        $at, . + 4 + (0x133 << 2)
label_318d04:
    if (ctx->pc == 0x318D04u) {
        ctx->pc = 0x318D08u;
        goto label_318d08;
    }
    ctx->pc = 0x318D00u;
    {
        const bool branch_taken_0x318d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d00) {
            ctx->pc = 0x3191D0u;
            goto label_3191d0;
        }
    }
    ctx->pc = 0x318D08u;
label_318d08:
    // 0x318d08: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x318d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_318d0c:
    // 0x318d0c: 0x24641d50  addiu       $a0, $v1, 0x1D50
    ctx->pc = 0x318d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7504));
label_318d10:
    // 0x318d10: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x318d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_318d14:
    // 0x318d14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x318d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_318d18:
    // 0x318d18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x318d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_318d1c:
    // 0x318d1c: 0x600008  jr          $v1
label_318d20:
    if (ctx->pc == 0x318D20u) {
        ctx->pc = 0x318D24u;
        goto label_318d24;
    }
    ctx->pc = 0x318D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x318D24u;
label_318d24:
    // 0x318d24: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d28:
    // 0x318d28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x318d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_318d2c:
    // 0x318d2c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x318d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_318d30:
    // 0x318d30: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x318d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_318d34:
    // 0x318d34: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x318d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_318d38:
    // 0x318d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318d3c:
    // 0x318d3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d40:
    // 0x318d40: 0xe46012d0  swc1        $f0, 0x12D0($v1)
    ctx->pc = 0x318d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4816), bits); }
label_318d44:
    // 0x318d44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d48:
    // 0x318d48: 0xac60129c  sw          $zero, 0x129C($v1)
    ctx->pc = 0x318d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 0));
label_318d4c:
    // 0x318d4c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d50:
    // 0x318d50: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x318d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_318d54:
    // 0x318d54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_318d58:
    // 0x318d58: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x318d58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_318d5c:
    // 0x318d5c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d60:
    // 0x318d60: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x318d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_318d64:
    // 0x318d64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_318d68:
    // 0x318d68: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x318d68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_318d6c:
    // 0x318d6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d70:
    // 0x318d70: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x318d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
label_318d74:
    // 0x318d74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d78:
    // 0x318d78: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x318d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_318d7c:
    // 0x318d7c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x318d7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_318d80:
    // 0x318d80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d84:
    // 0x318d84: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x318d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
label_318d88:
    // 0x318d88: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x318d88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_318d8c:
    // 0x318d8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318d90:
    // 0x318d90: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x318d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_318d94:
    // 0x318d94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_318d98:
    // 0x318d98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x318d98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_318d9c:
    // 0x318d9c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318da0:
    // 0x318da0: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318da4:
    // 0x318da4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x318da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
label_318da8:
    // 0x318da8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_318dac:
    // 0x318dac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318db0:
    // 0x318db0: 0x0  nop
    ctx->pc = 0x318db0u;
    // NOP
label_318db4:
    // 0x318db4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318db8:
    // 0x318db8: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_318dbc:
    // 0x318dbc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318dc0:
    // 0x318dc0: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x318dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318dc4:
    // 0x318dc4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x318dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
label_318dc8:
    // 0x318dc8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_318dcc:
    // 0x318dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318dd0:
    // 0x318dd0: 0x0  nop
    ctx->pc = 0x318dd0u;
    // NOP
label_318dd4:
    // 0x318dd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318dd8:
    // 0x318dd8: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x318dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
label_318ddc:
    // 0x318ddc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318de0:
    // 0x318de0: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x318de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318de4:
    // 0x318de4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x318de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
label_318de8:
    // 0x318de8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_318dec:
    // 0x318dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318df0:
    // 0x318df0: 0x0  nop
    ctx->pc = 0x318df0u;
    // NOP
label_318df4:
    // 0x318df4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318df8:
    // 0x318df8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x318df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_318dfc:
    // 0x318dfc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e00:
    // 0x318e00: 0x8c831290  lw          $v1, 0x1290($a0)
    ctx->pc = 0x318e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
label_318e04:
    // 0x318e04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_318e08:
    // 0x318e08: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x318e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
label_318e0c:
    // 0x318e0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e10:
    // 0x318e10: 0x8c631290  lw          $v1, 0x1290($v1)
    ctx->pc = 0x318e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
label_318e14:
    // 0x318e14: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x318e14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_318e18:
    // 0x318e18: 0x142000ed  bnez        $at, . + 4 + (0xED << 2)
label_318e1c:
    if (ctx->pc == 0x318E1Cu) {
        ctx->pc = 0x318E20u;
        goto label_318e20;
    }
    ctx->pc = 0x318E18u;
    {
        const bool branch_taken_0x318e18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x318e18) {
            ctx->pc = 0x3191D0u;
            goto label_3191d0;
        }
    }
    ctx->pc = 0x318E20u;
label_318e20:
    // 0x318e20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e24:
    // 0x318e24: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x318e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
label_318e28:
    // 0x318e28: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e2c:
    // 0x318e2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x318e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_318e30:
    // 0x318e30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_318e34:
    // 0x318e34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x318e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_318e38:
    // 0x318e38: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_318e3c:
    if (ctx->pc == 0x318E3Cu) {
        ctx->pc = 0x318E40u;
        goto label_318e40;
    }
    ctx->pc = 0x318E38u;
    {
        const bool branch_taken_0x318e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e38) {
            ctx->pc = 0x3191D0u;
            goto label_3191d0;
        }
    }
    ctx->pc = 0x318E40u;
label_318e40:
    // 0x318e40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x318e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_318e44:
    // 0x318e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318e48:
    // 0x318e48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e4c:
    // 0x318e4c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x318e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
label_318e50:
    // 0x318e50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x318e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_318e54:
    // 0x318e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318e58:
    // 0x318e58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e5c:
    // 0x318e5c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x318e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_318e60:
    // 0x318e60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x318e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_318e64:
    // 0x318e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318e68:
    // 0x318e68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e6c:
    // 0x318e6c: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x318e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_318e70:
    // 0x318e70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x318e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_318e74:
    // 0x318e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318e78:
    // 0x318e78: 0x0  nop
    ctx->pc = 0x318e78u;
    // NOP
label_318e7c:
    // 0x318e7c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x318e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_318e80:
    // 0x318e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318e84:
    // 0x318e84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e88:
    // 0x318e88: 0xac4312b0  sw          $v1, 0x12B0($v0)
    ctx->pc = 0x318e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 3));
label_318e8c:
    // 0x318e8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318e90:
    // 0x318e90: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x318e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_318e94:
    // 0x318e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_318e98:
    // 0x318e98: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x318e98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_318e9c:
    // 0x318e9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318ea0:
    // 0x318ea0: 0xc44012d0  lwc1        $f0, 0x12D0($v0)
    ctx->pc = 0x318ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318ea4:
    // 0x318ea4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318ea8:
    // 0x318ea8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x318ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_318eac:
    // 0x318eac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318eb0:
    // 0x318eb0: 0xc44112d0  lwc1        $f1, 0x12D0($v0)
    ctx->pc = 0x318eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318eb4:
    // 0x318eb4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x318eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_318eb8:
    // 0x318eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318ebc:
    // 0x318ebc: 0x0  nop
    ctx->pc = 0x318ebcu;
    // NOP
label_318ec0:
    // 0x318ec0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318ec4:
    // 0x318ec4: 0x0  nop
    ctx->pc = 0x318ec4u;
    // NOP
label_318ec8:
    // 0x318ec8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_318ecc:
    if (ctx->pc == 0x318ECCu) {
        ctx->pc = 0x318ED0u;
        goto label_318ed0;
    }
    ctx->pc = 0x318EC8u;
    {
        const bool branch_taken_0x318ec8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318ec8) {
            ctx->pc = 0x318F64u;
            goto label_318f64;
        }
    }
    ctx->pc = 0x318ED0u;
label_318ed0:
    // 0x318ed0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x318ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_318ed4:
    // 0x318ed4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_318ed8:
    // 0x318ed8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x318ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_318edc:
    // 0x318edc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318ee0:
    // 0x318ee0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_318ee4:
    // 0x318ee4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x318ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_318ee8:
    // 0x318ee8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x318ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_318eec:
    // 0x318eec: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_318ef0:
    // 0x318ef0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x318ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_318ef4:
    // 0x318ef4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x318ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_318ef8:
    // 0x318ef8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x318ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_318efc:
    // 0x318efc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_318f00:
    // 0x318f00: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x318f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_318f04:
    // 0x318f04: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x318f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_318f08:
    // 0x318f08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x318f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_318f0c:
    // 0x318f0c: 0x2445dd30  addiu       $a1, $v0, -0x22D0
    ctx->pc = 0x318f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958384));
label_318f10:
    // 0x318f10: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x318f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_318f14:
    // 0x318f14: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x318f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_318f18:
    // 0x318f18: 0xc05c968  jal         func_1725A0
label_318f1c:
    if (ctx->pc == 0x318F1Cu) {
        ctx->pc = 0x318F20u;
        goto label_318f20;
    }
    ctx->pc = 0x318F18u;
    SET_GPR_U32(ctx, 31, 0x318F20u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x318F18u, 0x318F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F20u;
label_318f20:
    // 0x318f20: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x318f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_318f24:
    // 0x318f24: 0xc058fec  jal         func_163FB0
label_318f28:
    if (ctx->pc == 0x318F28u) {
        ctx->pc = 0x318F2Cu;
        goto label_318f2c;
    }
    ctx->pc = 0x318F24u;
    SET_GPR_U32(ctx, 31, 0x318F2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x318F24u, 0x318F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F2Cu;
label_318f2c:
    // 0x318f2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318f30:
    // 0x318f30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x318f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_318f34:
    // 0x318f34: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x318f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_318f38:
    // 0x318f38: 0xc058fec  jal         func_163FB0
label_318f3c:
    if (ctx->pc == 0x318F3Cu) {
        ctx->pc = 0x318F40u;
        goto label_318f40;
    }
    ctx->pc = 0x318F38u;
    SET_GPR_U32(ctx, 31, 0x318F40u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x318F38u, 0x318F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F40u;
label_318f40:
    // 0x318f40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318f44:
    // 0x318f44: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x318f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_318f48:
    // 0x318f48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318f4c:
    // 0x318f4c: 0xc46112d0  lwc1        $f1, 0x12D0($v1)
    ctx->pc = 0x318f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318f50:
    // 0x318f50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x318f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_318f54:
    // 0x318f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318f58:
    // 0x318f58: 0x0  nop
    ctx->pc = 0x318f58u;
    // NOP
label_318f5c:
    // 0x318f5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318f60:
    // 0x318f60: 0xe46012d0  swc1        $f0, 0x12D0($v1)
    ctx->pc = 0x318f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4816), bits); }
label_318f64:
    // 0x318f64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318f68:
    // 0x318f68: 0xc05cd34  jal         func_1734D0
label_318f6c:
    if (ctx->pc == 0x318F6Cu) {
        ctx->pc = 0x318F70u;
        goto label_318f70;
    }
    ctx->pc = 0x318F68u;
    SET_GPR_U32(ctx, 31, 0x318F70u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x318F68u, 0x318F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F70u;
label_318f70:
    // 0x318f70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318f74:
    // 0x318f74: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x318f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_318f78:
    // 0x318f78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x318f78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_318f7c:
    // 0x318f7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318f80:
    // 0x318f80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x318f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_318f84:
    // 0x318f84: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x318f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_318f88:
    // 0x318f88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x318f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_318f8c:
    // 0x318f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318f90:
    // 0x318f90: 0x0  nop
    ctx->pc = 0x318f90u;
    // NOP
label_318f94:
    // 0x318f94: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x318f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_318f98:
    // 0x318f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318f9c:
    // 0x318f9c: 0x0  nop
    ctx->pc = 0x318f9cu;
    // NOP
label_318fa0:
    // 0x318fa0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x318fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_318fa4:
    // 0x318fa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318fa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318fa8:
    // 0x318fa8: 0x0  nop
    ctx->pc = 0x318fa8u;
    // NOP
label_318fac:
    // 0x318fac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x318facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_318fb0:
    // 0x318fb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_318fb4:
    // 0x318fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318fb8:
    // 0x318fb8: 0x0  nop
    ctx->pc = 0x318fb8u;
    // NOP
label_318fbc:
    // 0x318fbc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x318fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_318fc0:
    // 0x318fc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x318fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_318fc4:
    // 0x318fc4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x318fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_318fc8:
    // 0x318fc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x318fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_318fcc:
    // 0x318fcc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_318fd0:
    if (ctx->pc == 0x318FD0u) {
        ctx->pc = 0x318FD4u;
        goto label_318fd4;
    }
    ctx->pc = 0x318FCCu;
    {
        const bool branch_taken_0x318fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318fcc) {
            ctx->pc = 0x319010u;
            goto label_319010;
        }
    }
    ctx->pc = 0x318FD4u;
label_318fd4:
    // 0x318fd4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x318fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_318fd8:
    // 0x318fd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x318fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_318fdc:
    // 0x318fdc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x318fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_318fe0:
    // 0x318fe0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x318fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_318fe4:
    // 0x318fe4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x318fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_318fe8:
    // 0x318fe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318fec:
    // 0x318fec: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x318fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_318ff0:
    // 0x318ff0: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x318ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_318ff4:
    // 0x318ff4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x318ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_318ff8:
    // 0x318ff8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x318ff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_318ffc:
    // 0x318ffc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x318ffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319000:
    // 0x319000: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x319000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_319004:
    // 0x319004: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x319004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_319008:
    // 0x319008: 0xc086488  jal         func_219220
label_31900c:
    if (ctx->pc == 0x31900Cu) {
        ctx->pc = 0x319010u;
        goto label_319010;
    }
    ctx->pc = 0x319008u;
    SET_GPR_U32(ctx, 31, 0x319010u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x319008u, 0x319010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319010u;
label_319010:
    // 0x319010: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x319010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319014:
    // 0x319014: 0xc0c6aac  jal         func_31AAB0
label_319018:
    if (ctx->pc == 0x319018u) {
        ctx->pc = 0x31901Cu;
        goto label_31901c;
    }
    ctx->pc = 0x319014u;
    SET_GPR_U32(ctx, 31, 0x31901Cu);
    ctx->pc = 0x31AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAB0u, 0x319014u, 0x31901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31901Cu;
label_31901c:
    // 0x31901c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_319020:
    if (ctx->pc == 0x319020u) {
        ctx->pc = 0x319024u;
        goto label_319024;
    }
    ctx->pc = 0x31901Cu;
    {
        const bool branch_taken_0x31901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31901c) {
            ctx->pc = 0x31905Cu;
            goto label_31905c;
        }
    }
    ctx->pc = 0x319024u;
label_319024:
    // 0x319024: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x319024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_319028:
    // 0x319028: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31902c:
    // 0x31902c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31902cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_319030:
    // 0x319030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319034:
    // 0x319034: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319038:
    // 0x319038: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x319038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_31903c:
    // 0x31903c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319040:
    // 0x319040: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x319040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_319044:
    // 0x319044: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319048:
    // 0x319048: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x319048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_31904c:
    // 0x31904c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319050:
    // 0x319050: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x319050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_319054:
    // 0x319054: 0x1000005e  b           . + 4 + (0x5E << 2)
label_319058:
    if (ctx->pc == 0x319058u) {
        ctx->pc = 0x31905Cu;
        goto label_31905c;
    }
    ctx->pc = 0x319054u;
    {
        const bool branch_taken_0x319054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319054) {
            ctx->pc = 0x3191D0u;
            goto label_3191d0;
        }
    }
    ctx->pc = 0x31905Cu;
label_31905c:
    // 0x31905c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_319060:
    // 0x319060: 0x9022edae  lbu         $v0, -0x1252($at)
    ctx->pc = 0x319060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962606)));
label_319064:
    // 0x319064: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_319068:
    if (ctx->pc == 0x319068u) {
        ctx->pc = 0x31906Cu;
        goto label_31906c;
    }
    ctx->pc = 0x319064u;
    {
        const bool branch_taken_0x319064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319064) {
            ctx->pc = 0x319078u;
            goto label_319078;
        }
    }
    ctx->pc = 0x31906Cu;
label_31906c:
    // 0x31906c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319070:
    // 0x319070: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x319070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319074:
    // 0x319074: 0xac431294  sw          $v1, 0x1294($v0)
    ctx->pc = 0x319074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4756), GPR_U32(ctx, 3));
label_319078:
    // 0x319078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x319078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31907c:
    // 0x31907c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x31907cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_319080:
    // 0x319080: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x319080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_319084:
    // 0x319084: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x319084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_319088:
    // 0x319088: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x319088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
label_31908c:
    // 0x31908c: 0x2447ae80  addiu       $a3, $v0, -0x5180
    ctx->pc = 0x31908cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
label_319090:
    // 0x319090: 0xc06d02c  jal         func_1B40B0
label_319094:
    if (ctx->pc == 0x319094u) {
        ctx->pc = 0x319098u;
        goto label_319098;
    }
    ctx->pc = 0x319090u;
    SET_GPR_U32(ctx, 31, 0x319098u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x319090u, 0x319098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319098u;
label_319098:
    // 0x319098: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_31909c:
    if (ctx->pc == 0x31909Cu) {
        ctx->pc = 0x3190A0u;
        goto label_3190a0;
    }
    ctx->pc = 0x319098u;
    {
        const bool branch_taken_0x319098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319098) {
            ctx->pc = 0x31910Cu;
            goto label_31910c;
        }
    }
    ctx->pc = 0x3190A0u;
label_3190a0:
    // 0x3190a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3190a4:
    // 0x3190a4: 0x8c631294  lw          $v1, 0x1294($v1)
    ctx->pc = 0x3190a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4756)));
label_3190a8:
    // 0x3190a8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3190ac:
    if (ctx->pc == 0x3190ACu) {
        ctx->pc = 0x3190B0u;
        goto label_3190b0;
    }
    ctx->pc = 0x3190A8u;
    {
        const bool branch_taken_0x3190a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3190a8) {
            ctx->pc = 0x3190CCu;
            goto label_3190cc;
        }
    }
    ctx->pc = 0x3190B0u;
label_3190b0:
    // 0x3190b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3190b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_3190b4:
    // 0x3190b4: 0x9023edae  lbu         $v1, -0x1252($at)
    ctx->pc = 0x3190b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962606)));
label_3190b8:
    // 0x3190b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3190bc:
    if (ctx->pc == 0x3190BCu) {
        ctx->pc = 0x3190C0u;
        goto label_3190c0;
    }
    ctx->pc = 0x3190B8u;
    {
        const bool branch_taken_0x3190b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3190b8) {
            ctx->pc = 0x3190CCu;
            goto label_3190cc;
        }
    }
    ctx->pc = 0x3190C0u;
label_3190c0:
    // 0x3190c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3190c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3190c4:
    // 0x3190c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3190c8:
    // 0x3190c8: 0xac6412a0  sw          $a0, 0x12A0($v1)
    ctx->pc = 0x3190c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 4));
label_3190cc:
    // 0x3190cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3190d0:
    // 0x3190d0: 0xac601294  sw          $zero, 0x1294($v1)
    ctx->pc = 0x3190d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4756), GPR_U32(ctx, 0));
label_3190d4:
    // 0x3190d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3190d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3190d8:
    // 0x3190d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3190dc:
    // 0x3190dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3190dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_3190e0:
    // 0x3190e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3190e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3190e4:
    // 0x3190e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3190e8:
    // 0x3190e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3190e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_3190ec:
    // 0x3190ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3190f0:
    // 0x3190f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3190f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_3190f4:
    // 0x3190f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3190f8:
    // 0x3190f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3190f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_3190fc:
    // 0x3190fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319100:
    // 0x319100: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x319100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_319104:
    // 0x319104: 0x10000032  b           . + 4 + (0x32 << 2)
label_319108:
    if (ctx->pc == 0x319108u) {
        ctx->pc = 0x31910Cu;
        goto label_31910c;
    }
    ctx->pc = 0x319104u;
    {
        const bool branch_taken_0x319104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319104) {
            ctx->pc = 0x3191D0u;
            goto label_3191d0;
        }
    }
    ctx->pc = 0x31910Cu;
label_31910c:
    // 0x31910c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319110:
    // 0x319110: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x319110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319114:
    // 0x319114: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x319114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_319118:
    // 0x319118: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x319118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_31911c:
    // 0x31911c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31911cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319120:
    // 0x319120: 0x0  nop
    ctx->pc = 0x319120u;
    // NOP
label_319124:
    // 0x319124: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319128:
    // 0x319128: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x319128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_31912c:
    // 0x31912c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31912cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319130:
    // 0x319130: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x319130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319134:
    // 0x319134: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x319134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_319138:
    // 0x319138: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x319138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_31913c:
    // 0x31913c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31913cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319140:
    // 0x319140: 0x0  nop
    ctx->pc = 0x319140u;
    // NOP
label_319144:
    // 0x319144: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319148:
    // 0x319148: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x319148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
label_31914c:
    // 0x31914c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31914cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319150:
    // 0x319150: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x319150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319154:
    // 0x319154: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x319154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_319158:
    // 0x319158: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x319158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_31915c:
    // 0x31915c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31915cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319160:
    // 0x319160: 0x0  nop
    ctx->pc = 0x319160u;
    // NOP
label_319164:
    // 0x319164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319168:
    // 0x319168: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x319168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_31916c:
    // 0x31916c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_319170:
    // 0x319170: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x319170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319174:
    // 0x319174: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x319174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_319178:
    // 0x319178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31917c:
    // 0x31917c: 0x0  nop
    ctx->pc = 0x31917cu;
    // NOP
label_319180:
    // 0x319180: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319184:
    // 0x319184: 0x0  nop
    ctx->pc = 0x319184u;
    // NOP
label_319188:
    // 0x319188: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_31918c:
    if (ctx->pc == 0x31918Cu) {
        ctx->pc = 0x319190u;
        goto label_319190;
    }
    ctx->pc = 0x319188u;
    {
        const bool branch_taken_0x319188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319188) {
            ctx->pc = 0x3191C0u;
            goto label_3191c0;
        }
    }
    ctx->pc = 0x319190u;
label_319190:
    // 0x319190: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x319190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_319194:
    // 0x319194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319198:
    // 0x319198: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31919c:
    // 0x31919c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31919cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_3191a0:
    // 0x3191a0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3191a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_3191a4:
    // 0x3191a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3191a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3191a8:
    // 0x3191a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3191a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3191ac:
    // 0x3191ac: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3191acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_3191b0:
    // 0x3191b0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3191b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_3191b4:
    // 0x3191b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3191b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3191b8:
    // 0x3191b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3191b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3191bc:
    // 0x3191bc: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3191bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_3191c0:
    // 0x3191c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3191c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3191c4:
    // 0x3191c4: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x3191c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
label_3191c8:
    // 0x3191c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3191c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3191cc:
    // 0x3191cc: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x3191ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
label_3191d0:
    // 0x3191d0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3191d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3191d4:
    // 0x3191d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3191d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3191d8:
    // 0x3191d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3191d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3191dc:
    // 0x3191dc: 0x3e00008  jr          $ra
label_3191e0:
    if (ctx->pc == 0x3191E0u) {
        ctx->pc = 0x3191E4u;
        goto label_fallthrough_0x3191dc;
    }
    ctx->pc = 0x3191DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3191DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3191dc:
    ctx->pc = 0x3191E4u;
}
