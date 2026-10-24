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

// Function: R110_melancholy_soul_fall
// Address: 0x277c40 - 0x278108
void R110_melancholy_soul_fall_0x277c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R110_melancholy_soul_fall_0x277c40");
#endif

    switch (ctx->pc) {
        case 0x277c40u: goto label_277c40;
        case 0x277c44u: goto label_277c44;
        case 0x277c48u: goto label_277c48;
        case 0x277c4cu: goto label_277c4c;
        case 0x277c50u: goto label_277c50;
        case 0x277c54u: goto label_277c54;
        case 0x277c58u: goto label_277c58;
        case 0x277c5cu: goto label_277c5c;
        case 0x277c60u: goto label_277c60;
        case 0x277c64u: goto label_277c64;
        case 0x277c68u: goto label_277c68;
        case 0x277c6cu: goto label_277c6c;
        case 0x277c70u: goto label_277c70;
        case 0x277c74u: goto label_277c74;
        case 0x277c78u: goto label_277c78;
        case 0x277c7cu: goto label_277c7c;
        case 0x277c80u: goto label_277c80;
        case 0x277c84u: goto label_277c84;
        case 0x277c88u: goto label_277c88;
        case 0x277c8cu: goto label_277c8c;
        case 0x277c90u: goto label_277c90;
        case 0x277c94u: goto label_277c94;
        case 0x277c98u: goto label_277c98;
        case 0x277c9cu: goto label_277c9c;
        case 0x277ca0u: goto label_277ca0;
        case 0x277ca4u: goto label_277ca4;
        case 0x277ca8u: goto label_277ca8;
        case 0x277cacu: goto label_277cac;
        case 0x277cb0u: goto label_277cb0;
        case 0x277cb4u: goto label_277cb4;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cbcu: goto label_277cbc;
        case 0x277cc0u: goto label_277cc0;
        case 0x277cc4u: goto label_277cc4;
        case 0x277cc8u: goto label_277cc8;
        case 0x277cccu: goto label_277ccc;
        case 0x277cd0u: goto label_277cd0;
        case 0x277cd4u: goto label_277cd4;
        case 0x277cd8u: goto label_277cd8;
        case 0x277cdcu: goto label_277cdc;
        case 0x277ce0u: goto label_277ce0;
        case 0x277ce4u: goto label_277ce4;
        case 0x277ce8u: goto label_277ce8;
        case 0x277cecu: goto label_277cec;
        case 0x277cf0u: goto label_277cf0;
        case 0x277cf4u: goto label_277cf4;
        case 0x277cf8u: goto label_277cf8;
        case 0x277cfcu: goto label_277cfc;
        case 0x277d00u: goto label_277d00;
        case 0x277d04u: goto label_277d04;
        case 0x277d08u: goto label_277d08;
        case 0x277d0cu: goto label_277d0c;
        case 0x277d10u: goto label_277d10;
        case 0x277d14u: goto label_277d14;
        case 0x277d18u: goto label_277d18;
        case 0x277d1cu: goto label_277d1c;
        case 0x277d20u: goto label_277d20;
        case 0x277d24u: goto label_277d24;
        case 0x277d28u: goto label_277d28;
        case 0x277d2cu: goto label_277d2c;
        case 0x277d30u: goto label_277d30;
        case 0x277d34u: goto label_277d34;
        case 0x277d38u: goto label_277d38;
        case 0x277d3cu: goto label_277d3c;
        case 0x277d40u: goto label_277d40;
        case 0x277d44u: goto label_277d44;
        case 0x277d48u: goto label_277d48;
        case 0x277d4cu: goto label_277d4c;
        case 0x277d50u: goto label_277d50;
        case 0x277d54u: goto label_277d54;
        case 0x277d58u: goto label_277d58;
        case 0x277d5cu: goto label_277d5c;
        case 0x277d60u: goto label_277d60;
        case 0x277d64u: goto label_277d64;
        case 0x277d68u: goto label_277d68;
        case 0x277d6cu: goto label_277d6c;
        case 0x277d70u: goto label_277d70;
        case 0x277d74u: goto label_277d74;
        case 0x277d78u: goto label_277d78;
        case 0x277d7cu: goto label_277d7c;
        case 0x277d80u: goto label_277d80;
        case 0x277d84u: goto label_277d84;
        case 0x277d88u: goto label_277d88;
        case 0x277d8cu: goto label_277d8c;
        case 0x277d90u: goto label_277d90;
        case 0x277d94u: goto label_277d94;
        case 0x277d98u: goto label_277d98;
        case 0x277d9cu: goto label_277d9c;
        case 0x277da0u: goto label_277da0;
        case 0x277da4u: goto label_277da4;
        case 0x277da8u: goto label_277da8;
        case 0x277dacu: goto label_277dac;
        case 0x277db0u: goto label_277db0;
        case 0x277db4u: goto label_277db4;
        case 0x277db8u: goto label_277db8;
        case 0x277dbcu: goto label_277dbc;
        case 0x277dc0u: goto label_277dc0;
        case 0x277dc4u: goto label_277dc4;
        case 0x277dc8u: goto label_277dc8;
        case 0x277dccu: goto label_277dcc;
        case 0x277dd0u: goto label_277dd0;
        case 0x277dd4u: goto label_277dd4;
        case 0x277dd8u: goto label_277dd8;
        case 0x277ddcu: goto label_277ddc;
        case 0x277de0u: goto label_277de0;
        case 0x277de4u: goto label_277de4;
        case 0x277de8u: goto label_277de8;
        case 0x277decu: goto label_277dec;
        case 0x277df0u: goto label_277df0;
        case 0x277df4u: goto label_277df4;
        case 0x277df8u: goto label_277df8;
        case 0x277dfcu: goto label_277dfc;
        case 0x277e00u: goto label_277e00;
        case 0x277e04u: goto label_277e04;
        case 0x277e08u: goto label_277e08;
        case 0x277e0cu: goto label_277e0c;
        case 0x277e10u: goto label_277e10;
        case 0x277e14u: goto label_277e14;
        case 0x277e18u: goto label_277e18;
        case 0x277e1cu: goto label_277e1c;
        case 0x277e20u: goto label_277e20;
        case 0x277e24u: goto label_277e24;
        case 0x277e28u: goto label_277e28;
        case 0x277e2cu: goto label_277e2c;
        case 0x277e30u: goto label_277e30;
        case 0x277e34u: goto label_277e34;
        case 0x277e38u: goto label_277e38;
        case 0x277e3cu: goto label_277e3c;
        case 0x277e40u: goto label_277e40;
        case 0x277e44u: goto label_277e44;
        case 0x277e48u: goto label_277e48;
        case 0x277e4cu: goto label_277e4c;
        case 0x277e50u: goto label_277e50;
        case 0x277e54u: goto label_277e54;
        case 0x277e58u: goto label_277e58;
        case 0x277e5cu: goto label_277e5c;
        case 0x277e60u: goto label_277e60;
        case 0x277e64u: goto label_277e64;
        case 0x277e68u: goto label_277e68;
        case 0x277e6cu: goto label_277e6c;
        case 0x277e70u: goto label_277e70;
        case 0x277e74u: goto label_277e74;
        case 0x277e78u: goto label_277e78;
        case 0x277e7cu: goto label_277e7c;
        case 0x277e80u: goto label_277e80;
        case 0x277e84u: goto label_277e84;
        case 0x277e88u: goto label_277e88;
        case 0x277e8cu: goto label_277e8c;
        case 0x277e90u: goto label_277e90;
        case 0x277e94u: goto label_277e94;
        case 0x277e98u: goto label_277e98;
        case 0x277e9cu: goto label_277e9c;
        case 0x277ea0u: goto label_277ea0;
        case 0x277ea4u: goto label_277ea4;
        case 0x277ea8u: goto label_277ea8;
        case 0x277eacu: goto label_277eac;
        case 0x277eb0u: goto label_277eb0;
        case 0x277eb4u: goto label_277eb4;
        case 0x277eb8u: goto label_277eb8;
        case 0x277ebcu: goto label_277ebc;
        case 0x277ec0u: goto label_277ec0;
        case 0x277ec4u: goto label_277ec4;
        case 0x277ec8u: goto label_277ec8;
        case 0x277eccu: goto label_277ecc;
        case 0x277ed0u: goto label_277ed0;
        case 0x277ed4u: goto label_277ed4;
        case 0x277ed8u: goto label_277ed8;
        case 0x277edcu: goto label_277edc;
        case 0x277ee0u: goto label_277ee0;
        case 0x277ee4u: goto label_277ee4;
        case 0x277ee8u: goto label_277ee8;
        case 0x277eecu: goto label_277eec;
        case 0x277ef0u: goto label_277ef0;
        case 0x277ef4u: goto label_277ef4;
        case 0x277ef8u: goto label_277ef8;
        case 0x277efcu: goto label_277efc;
        case 0x277f00u: goto label_277f00;
        case 0x277f04u: goto label_277f04;
        case 0x277f08u: goto label_277f08;
        case 0x277f0cu: goto label_277f0c;
        case 0x277f10u: goto label_277f10;
        case 0x277f14u: goto label_277f14;
        case 0x277f18u: goto label_277f18;
        case 0x277f1cu: goto label_277f1c;
        case 0x277f20u: goto label_277f20;
        case 0x277f24u: goto label_277f24;
        case 0x277f28u: goto label_277f28;
        case 0x277f2cu: goto label_277f2c;
        case 0x277f30u: goto label_277f30;
        case 0x277f34u: goto label_277f34;
        case 0x277f38u: goto label_277f38;
        case 0x277f3cu: goto label_277f3c;
        case 0x277f40u: goto label_277f40;
        case 0x277f44u: goto label_277f44;
        case 0x277f48u: goto label_277f48;
        case 0x277f4cu: goto label_277f4c;
        case 0x277f50u: goto label_277f50;
        case 0x277f54u: goto label_277f54;
        case 0x277f58u: goto label_277f58;
        case 0x277f5cu: goto label_277f5c;
        case 0x277f60u: goto label_277f60;
        case 0x277f64u: goto label_277f64;
        case 0x277f68u: goto label_277f68;
        case 0x277f6cu: goto label_277f6c;
        case 0x277f70u: goto label_277f70;
        case 0x277f74u: goto label_277f74;
        case 0x277f78u: goto label_277f78;
        case 0x277f7cu: goto label_277f7c;
        case 0x277f80u: goto label_277f80;
        case 0x277f84u: goto label_277f84;
        case 0x277f88u: goto label_277f88;
        case 0x277f8cu: goto label_277f8c;
        case 0x277f90u: goto label_277f90;
        case 0x277f94u: goto label_277f94;
        case 0x277f98u: goto label_277f98;
        case 0x277f9cu: goto label_277f9c;
        case 0x277fa0u: goto label_277fa0;
        case 0x277fa4u: goto label_277fa4;
        case 0x277fa8u: goto label_277fa8;
        case 0x277facu: goto label_277fac;
        case 0x277fb0u: goto label_277fb0;
        case 0x277fb4u: goto label_277fb4;
        case 0x277fb8u: goto label_277fb8;
        case 0x277fbcu: goto label_277fbc;
        case 0x277fc0u: goto label_277fc0;
        case 0x277fc4u: goto label_277fc4;
        case 0x277fc8u: goto label_277fc8;
        case 0x277fccu: goto label_277fcc;
        case 0x277fd0u: goto label_277fd0;
        case 0x277fd4u: goto label_277fd4;
        case 0x277fd8u: goto label_277fd8;
        case 0x277fdcu: goto label_277fdc;
        case 0x277fe0u: goto label_277fe0;
        case 0x277fe4u: goto label_277fe4;
        case 0x277fe8u: goto label_277fe8;
        case 0x277fecu: goto label_277fec;
        case 0x277ff0u: goto label_277ff0;
        case 0x277ff4u: goto label_277ff4;
        case 0x277ff8u: goto label_277ff8;
        case 0x277ffcu: goto label_277ffc;
        case 0x278000u: goto label_278000;
        case 0x278004u: goto label_278004;
        case 0x278008u: goto label_278008;
        case 0x27800cu: goto label_27800c;
        case 0x278010u: goto label_278010;
        case 0x278014u: goto label_278014;
        case 0x278018u: goto label_278018;
        case 0x27801cu: goto label_27801c;
        case 0x278020u: goto label_278020;
        case 0x278024u: goto label_278024;
        case 0x278028u: goto label_278028;
        case 0x27802cu: goto label_27802c;
        case 0x278030u: goto label_278030;
        case 0x278034u: goto label_278034;
        case 0x278038u: goto label_278038;
        case 0x27803cu: goto label_27803c;
        case 0x278040u: goto label_278040;
        case 0x278044u: goto label_278044;
        case 0x278048u: goto label_278048;
        case 0x27804cu: goto label_27804c;
        case 0x278050u: goto label_278050;
        case 0x278054u: goto label_278054;
        case 0x278058u: goto label_278058;
        case 0x27805cu: goto label_27805c;
        case 0x278060u: goto label_278060;
        case 0x278064u: goto label_278064;
        case 0x278068u: goto label_278068;
        case 0x27806cu: goto label_27806c;
        case 0x278070u: goto label_278070;
        case 0x278074u: goto label_278074;
        case 0x278078u: goto label_278078;
        case 0x27807cu: goto label_27807c;
        case 0x278080u: goto label_278080;
        case 0x278084u: goto label_278084;
        case 0x278088u: goto label_278088;
        case 0x27808cu: goto label_27808c;
        case 0x278090u: goto label_278090;
        case 0x278094u: goto label_278094;
        case 0x278098u: goto label_278098;
        case 0x27809cu: goto label_27809c;
        case 0x2780a0u: goto label_2780a0;
        case 0x2780a4u: goto label_2780a4;
        case 0x2780a8u: goto label_2780a8;
        case 0x2780acu: goto label_2780ac;
        case 0x2780b0u: goto label_2780b0;
        case 0x2780b4u: goto label_2780b4;
        case 0x2780b8u: goto label_2780b8;
        case 0x2780bcu: goto label_2780bc;
        case 0x2780c0u: goto label_2780c0;
        case 0x2780c4u: goto label_2780c4;
        case 0x2780c8u: goto label_2780c8;
        case 0x2780ccu: goto label_2780cc;
        case 0x2780d0u: goto label_2780d0;
        case 0x2780d4u: goto label_2780d4;
        case 0x2780d8u: goto label_2780d8;
        case 0x2780dcu: goto label_2780dc;
        case 0x2780e0u: goto label_2780e0;
        case 0x2780e4u: goto label_2780e4;
        case 0x2780e8u: goto label_2780e8;
        case 0x2780ecu: goto label_2780ec;
        case 0x2780f0u: goto label_2780f0;
        case 0x2780f4u: goto label_2780f4;
        case 0x2780f8u: goto label_2780f8;
        case 0x2780fcu: goto label_2780fc;
        case 0x278100u: goto label_278100;
        case 0x278104u: goto label_278104;
        default: break;
    }

    ctx->pc = 0x277c40u;

label_277c40:
    // 0x277c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x277c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_277c44:
    // 0x277c44: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x277c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_277c48:
    // 0x277c48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_277c4c:
    // 0x277c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_277c50:
    // 0x277c50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_277c54:
    // 0x277c54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x277c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_277c58:
    // 0x277c58: 0x24501a50  addiu       $s0, $v0, 0x1A50
    ctx->pc = 0x277c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
label_277c5c:
    // 0x277c5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277c60:
    // 0x277c60: 0x8c31f9e0  lw          $s1, -0x620($at)
    ctx->pc = 0x277c60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965728)));
label_277c64:
    // 0x277c64: 0x0  nop
    ctx->pc = 0x277c64u;
    // NOP
label_277c68:
    // 0x277c68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277c6c:
    // 0x277c6c: 0x8c221a28  lw          $v0, 0x1A28($at)
    ctx->pc = 0x277c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6696)));
label_277c70:
    // 0x277c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277c74:
    // 0x277c74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277c78:
    // 0x277c78: 0xac221a28  sw          $v0, 0x1A28($at)
    ctx->pc = 0x277c78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6696), GPR_U32(ctx, 2));
label_277c7c:
    // 0x277c7c: 0x2c410097  sltiu       $at, $v0, 0x97
    ctx->pc = 0x277c7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)151) ? 1 : 0);
label_277c80:
    // 0x277c80: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_277c84:
    if (ctx->pc == 0x277C84u) {
        ctx->pc = 0x277C88u;
        goto label_277c88;
    }
    ctx->pc = 0x277C80u;
    {
        const bool branch_taken_0x277c80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x277c80) {
            ctx->pc = 0x277C94u;
            goto label_277c94;
        }
    }
    ctx->pc = 0x277C88u;
label_277c88:
    // 0x277c88: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x277c88u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_277c8c:
    // 0x277c8c: 0x10000115  b           . + 4 + (0x115 << 2)
label_277c90:
    if (ctx->pc == 0x277C90u) {
        ctx->pc = 0x277C94u;
        goto label_277c94;
    }
    ctx->pc = 0x277C8Cu;
    {
        const bool branch_taken_0x277c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c8c) {
            ctx->pc = 0x2780E4u;
            goto label_2780e4;
        }
    }
    ctx->pc = 0x277C94u;
label_277c94:
    // 0x277c94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277c98:
    // 0x277c98: 0x8c241a38  lw          $a0, 0x1A38($at)
    ctx->pc = 0x277c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6712)));
label_277c9c:
    // 0x277c9c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x277c9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_277ca0:
    // 0x277ca0: 0x102000e3  beqz        $at, . + 4 + (0xE3 << 2)
label_277ca4:
    if (ctx->pc == 0x277CA4u) {
        ctx->pc = 0x277CA8u;
        goto label_277ca8;
    }
    ctx->pc = 0x277CA0u;
    {
        const bool branch_taken_0x277ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ca0) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277CA8u;
label_277ca8:
    // 0x277ca8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x277ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_277cac:
    // 0x277cac: 0x24431580  addiu       $v1, $v0, 0x1580
    ctx->pc = 0x277cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
label_277cb0:
    // 0x277cb0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x277cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_277cb4:
    // 0x277cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_277cb8:
    // 0x277cb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x277cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277cbc:
    // 0x277cbc: 0x400008  jr          $v0
label_277cc0:
    if (ctx->pc == 0x277CC0u) {
        ctx->pc = 0x277CC4u;
        goto label_277cc4;
    }
    ctx->pc = 0x277CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277CBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x277CC4u;
label_277cc4:
    // 0x277cc4: 0x0  nop
    ctx->pc = 0x277cc4u;
    // NOP
label_277cc8:
    // 0x277cc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_277ccc:
    // 0x277ccc: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x277cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
label_277cd0:
    // 0x277cd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277cd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_277cd4:
    // 0x277cd4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x277cd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_277cd8:
    // 0x277cd8: 0xc067b18  jal         func_19EC60
label_277cdc:
    if (ctx->pc == 0x277CDCu) {
        ctx->pc = 0x277CE0u;
        goto label_277ce0;
    }
    ctx->pc = 0x277CD8u;
    SET_GPR_U32(ctx, 31, 0x277CE0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x277CD8u, 0x277CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CE0u;
label_277ce0:
    // 0x277ce0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ce4:
    // 0x277ce4: 0x0  nop
    ctx->pc = 0x277ce4u;
    // NOP
label_277ce8:
    // 0x277ce8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_277cec:
    // 0x277cec: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x277cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_277cf0:
    // 0x277cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277cf4:
    // 0x277cf4: 0x0  nop
    ctx->pc = 0x277cf4u;
    // NOP
label_277cf8:
    // 0x277cf8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_277cfc:
    // 0x277cfc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x277cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_277d00:
    // 0x277d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277d04:
    // 0x277d04: 0x0  nop
    ctx->pc = 0x277d04u;
    // NOP
label_277d08:
    // 0x277d08: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_277d0c:
    // 0x277d0c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x277d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_277d10:
    // 0x277d10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x277d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_277d14:
    // 0x277d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277d18:
    // 0x277d18: 0x0  nop
    ctx->pc = 0x277d18u;
    // NOP
label_277d1c:
    // 0x277d1c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_277d20:
    // 0x277d20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277d24:
    // 0x277d24: 0x0  nop
    ctx->pc = 0x277d24u;
    // NOP
label_277d28:
    // 0x277d28: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_277d2c:
    // 0x277d2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277d30:
    // 0x277d30: 0x0  nop
    ctx->pc = 0x277d30u;
    // NOP
label_277d34:
    // 0x277d34: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_277d38:
    // 0x277d38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277d3c:
    // 0x277d3c: 0xac201a40  sw          $zero, 0x1A40($at)
    ctx->pc = 0x277d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6720), GPR_U32(ctx, 0));
label_277d40:
    // 0x277d40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277d44:
    // 0x277d44: 0x8c221a38  lw          $v0, 0x1A38($at)
    ctx->pc = 0x277d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6712)));
label_277d48:
    // 0x277d48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277d4c:
    // 0x277d4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277d50:
    // 0x277d50: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277d50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6712), GPR_U32(ctx, 2));
label_277d54:
    // 0x277d54: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_277d58:
    if (ctx->pc == 0x277D58u) {
        ctx->pc = 0x277D5Cu;
        goto label_277d5c;
    }
    ctx->pc = 0x277D54u;
    {
        const bool branch_taken_0x277d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277d54) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277D5Cu;
label_277d5c:
    // 0x277d5c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x277d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277d60:
    // 0x277d60: 0x3c02c597  lui         $v0, 0xC597
    ctx->pc = 0x277d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50583 << 16));
label_277d64:
    // 0x277d64: 0x3442d733  ori         $v0, $v0, 0xD733
    ctx->pc = 0x277d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55091);
label_277d68:
    // 0x277d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277d6c:
    // 0x277d6c: 0x0  nop
    ctx->pc = 0x277d6cu;
    // NOP
label_277d70:
    // 0x277d70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x277d70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_277d74:
    // 0x277d74: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x277d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_277d78:
    // 0x277d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277d7c:
    // 0x277d7c: 0x0  nop
    ctx->pc = 0x277d7cu;
    // NOP
label_277d80:
    // 0x277d80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x277d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277d84:
    // 0x277d84: 0x0  nop
    ctx->pc = 0x277d84u;
    // NOP
label_277d88:
    // 0x277d88: 0x450100a9  bc1t        . + 4 + (0xA9 << 2)
label_277d8c:
    if (ctx->pc == 0x277D8Cu) {
        ctx->pc = 0x277D90u;
        goto label_277d90;
    }
    ctx->pc = 0x277D88u;
    {
        const bool branch_taken_0x277d88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277d88) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277D90u;
label_277d90:
    // 0x277d90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277d94:
    // 0x277d94: 0x0  nop
    ctx->pc = 0x277d94u;
    // NOP
label_277d98:
    // 0x277d98: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_277d9c:
    // 0x277d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277da0:
    // 0x277da0: 0x0  nop
    ctx->pc = 0x277da0u;
    // NOP
label_277da4:
    // 0x277da4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_277da8:
    // 0x277da8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x277da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_277dac:
    // 0x277dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277db0:
    // 0x277db0: 0x0  nop
    ctx->pc = 0x277db0u;
    // NOP
label_277db4:
    // 0x277db4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_277db8:
    // 0x277db8: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x277db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_277dbc:
    // 0x277dbc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x277dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_277dc0:
    // 0x277dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277dc4:
    // 0x277dc4: 0x0  nop
    ctx->pc = 0x277dc4u;
    // NOP
label_277dc8:
    // 0x277dc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_277dcc:
    // 0x277dcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277dd0:
    // 0x277dd0: 0x0  nop
    ctx->pc = 0x277dd0u;
    // NOP
label_277dd4:
    // 0x277dd4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_277dd8:
    // 0x277dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ddc:
    // 0x277ddc: 0x0  nop
    ctx->pc = 0x277ddcu;
    // NOP
label_277de0:
    // 0x277de0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_277de4:
    // 0x277de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277de8:
    // 0x277de8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277dec:
    // 0x277dec: 0xac221a40  sw          $v0, 0x1A40($at)
    ctx->pc = 0x277decu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6720), GPR_U32(ctx, 2));
label_277df0:
    // 0x277df0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x277df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_277df4:
    // 0x277df4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277df8:
    // 0x277df8: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277df8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6712), GPR_U32(ctx, 2));
label_277dfc:
    // 0x277dfc: 0x1000008c  b           . + 4 + (0x8C << 2)
label_277e00:
    if (ctx->pc == 0x277E00u) {
        ctx->pc = 0x277E04u;
        goto label_277e04;
    }
    ctx->pc = 0x277DFCu;
    {
        const bool branch_taken_0x277dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277dfc) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277E04u;
label_277e04:
    // 0x277e04: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x277e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277e08:
    // 0x277e08: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x277e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_277e0c:
    // 0x277e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e10:
    // 0x277e10: 0x0  nop
    ctx->pc = 0x277e10u;
    // NOP
label_277e14:
    // 0x277e14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277e18:
    // 0x277e18: 0x0  nop
    ctx->pc = 0x277e18u;
    // NOP
label_277e1c:
    // 0x277e1c: 0x45000084  bc1f        . + 4 + (0x84 << 2)
label_277e20:
    if (ctx->pc == 0x277E20u) {
        ctx->pc = 0x277E24u;
        goto label_277e24;
    }
    ctx->pc = 0x277E1Cu;
    {
        const bool branch_taken_0x277e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277e1c) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277E24u;
label_277e24:
    // 0x277e24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e28:
    // 0x277e28: 0x0  nop
    ctx->pc = 0x277e28u;
    // NOP
label_277e2c:
    // 0x277e2c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_277e30:
    // 0x277e30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e34:
    // 0x277e34: 0x0  nop
    ctx->pc = 0x277e34u;
    // NOP
label_277e38:
    // 0x277e38: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_277e3c:
    // 0x277e3c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x277e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_277e40:
    // 0x277e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e44:
    // 0x277e44: 0x0  nop
    ctx->pc = 0x277e44u;
    // NOP
label_277e48:
    // 0x277e48: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_277e4c:
    // 0x277e4c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x277e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_277e50:
    // 0x277e50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x277e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_277e54:
    // 0x277e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e58:
    // 0x277e58: 0x0  nop
    ctx->pc = 0x277e58u;
    // NOP
label_277e5c:
    // 0x277e5c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_277e60:
    // 0x277e60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e64:
    // 0x277e64: 0x0  nop
    ctx->pc = 0x277e64u;
    // NOP
label_277e68:
    // 0x277e68: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_277e6c:
    // 0x277e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e70:
    // 0x277e70: 0x0  nop
    ctx->pc = 0x277e70u;
    // NOP
label_277e74:
    // 0x277e74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_277e78:
    // 0x277e78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277e7c:
    // 0x277e7c: 0xac201a40  sw          $zero, 0x1A40($at)
    ctx->pc = 0x277e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6720), GPR_U32(ctx, 0));
label_277e80:
    // 0x277e80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277e84:
    // 0x277e84: 0x8c221a38  lw          $v0, 0x1A38($at)
    ctx->pc = 0x277e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6712)));
label_277e88:
    // 0x277e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277e8c:
    // 0x277e8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277e90:
    // 0x277e90: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277e90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6712), GPR_U32(ctx, 2));
label_277e94:
    // 0x277e94: 0x10000066  b           . + 4 + (0x66 << 2)
label_277e98:
    if (ctx->pc == 0x277E98u) {
        ctx->pc = 0x277E9Cu;
        goto label_277e9c;
    }
    ctx->pc = 0x277E94u;
    {
        const bool branch_taken_0x277e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277e94) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277E9Cu;
label_277e9c:
    // 0x277e9c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x277e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277ea0:
    // 0x277ea0: 0x3c02c590  lui         $v0, 0xC590
    ctx->pc = 0x277ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50576 << 16));
label_277ea4:
    // 0x277ea4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x277ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_277ea8:
    // 0x277ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277eac:
    // 0x277eac: 0x0  nop
    ctx->pc = 0x277eacu;
    // NOP
label_277eb0:
    // 0x277eb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x277eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277eb4:
    // 0x277eb4: 0x0  nop
    ctx->pc = 0x277eb4u;
    // NOP
label_277eb8:
    // 0x277eb8: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
label_277ebc:
    if (ctx->pc == 0x277EBCu) {
        ctx->pc = 0x277EC0u;
        goto label_277ec0;
    }
    ctx->pc = 0x277EB8u;
    {
        const bool branch_taken_0x277eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277eb8) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277EC0u;
label_277ec0:
    // 0x277ec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ec4:
    // 0x277ec4: 0x0  nop
    ctx->pc = 0x277ec4u;
    // NOP
label_277ec8:
    // 0x277ec8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_277ecc:
    // 0x277ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ed0:
    // 0x277ed0: 0x0  nop
    ctx->pc = 0x277ed0u;
    // NOP
label_277ed4:
    // 0x277ed4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_277ed8:
    // 0x277ed8: 0x3c024055  lui         $v0, 0x4055
    ctx->pc = 0x277ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16469 << 16));
label_277edc:
    // 0x277edc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x277edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_277ee0:
    // 0x277ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ee4:
    // 0x277ee4: 0x0  nop
    ctx->pc = 0x277ee4u;
    // NOP
label_277ee8:
    // 0x277ee8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_277eec:
    // 0x277eec: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x277eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_277ef0:
    // 0x277ef0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x277ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_277ef4:
    // 0x277ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ef8:
    // 0x277ef8: 0x0  nop
    ctx->pc = 0x277ef8u;
    // NOP
label_277efc:
    // 0x277efc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_277f00:
    // 0x277f00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277f04:
    // 0x277f04: 0x0  nop
    ctx->pc = 0x277f04u;
    // NOP
label_277f08:
    // 0x277f08: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_277f0c:
    // 0x277f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277f10:
    // 0x277f10: 0x0  nop
    ctx->pc = 0x277f10u;
    // NOP
label_277f14:
    // 0x277f14: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_277f18:
    // 0x277f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277f1c:
    // 0x277f1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277f20:
    // 0x277f20: 0xac221a40  sw          $v0, 0x1A40($at)
    ctx->pc = 0x277f20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6720), GPR_U32(ctx, 2));
label_277f24:
    // 0x277f24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277f28:
    // 0x277f28: 0x8c221a38  lw          $v0, 0x1A38($at)
    ctx->pc = 0x277f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6712)));
label_277f2c:
    // 0x277f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277f30:
    // 0x277f30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277f34:
    // 0x277f34: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277f34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6712), GPR_U32(ctx, 2));
label_277f38:
    // 0x277f38: 0x1000003d  b           . + 4 + (0x3D << 2)
label_277f3c:
    if (ctx->pc == 0x277F3Cu) {
        ctx->pc = 0x277F40u;
        goto label_277f40;
    }
    ctx->pc = 0x277F38u;
    {
        const bool branch_taken_0x277f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277f38) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277F40u;
label_277f40:
    // 0x277f40: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x277f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277f44:
    // 0x277f44: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x277f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_277f48:
    // 0x277f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277f4c:
    // 0x277f4c: 0x0  nop
    ctx->pc = 0x277f4cu;
    // NOP
label_277f50:
    // 0x277f50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277f54:
    // 0x277f54: 0x0  nop
    ctx->pc = 0x277f54u;
    // NOP
label_277f58:
    // 0x277f58: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_277f5c:
    if (ctx->pc == 0x277F5Cu) {
        ctx->pc = 0x277F60u;
        goto label_277f60;
    }
    ctx->pc = 0x277F58u;
    {
        const bool branch_taken_0x277f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277f58) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277F60u;
label_277f60:
    // 0x277f60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_277f64:
    // 0x277f64: 0x2404040e  addiu       $a0, $zero, 0x40E
    ctx->pc = 0x277f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
label_277f68:
    // 0x277f68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_277f6c:
    // 0x277f6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x277f6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_277f70:
    // 0x277f70: 0xc067b18  jal         func_19EC60
label_277f74:
    if (ctx->pc == 0x277F74u) {
        ctx->pc = 0x277F78u;
        goto label_277f78;
    }
    ctx->pc = 0x277F70u;
    SET_GPR_U32(ctx, 31, 0x277F78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x277F70u, 0x277F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F78u;
label_277f78:
    // 0x277f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277f7c:
    // 0x277f7c: 0x0  nop
    ctx->pc = 0x277f7cu;
    // NOP
label_277f80:
    // 0x277f80: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_277f84:
    // 0x277f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277f88:
    // 0x277f88: 0x0  nop
    ctx->pc = 0x277f88u;
    // NOP
label_277f8c:
    // 0x277f8c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_277f90:
    // 0x277f90: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x277f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_277f94:
    // 0x277f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277f98:
    // 0x277f98: 0x0  nop
    ctx->pc = 0x277f98u;
    // NOP
label_277f9c:
    // 0x277f9c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_277fa0:
    // 0x277fa0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x277fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_277fa4:
    // 0x277fa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x277fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_277fa8:
    // 0x277fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277fac:
    // 0x277fac: 0x0  nop
    ctx->pc = 0x277facu;
    // NOP
label_277fb0:
    // 0x277fb0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_277fb4:
    // 0x277fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277fb8:
    // 0x277fb8: 0x0  nop
    ctx->pc = 0x277fb8u;
    // NOP
label_277fbc:
    // 0x277fbc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_277fc0:
    // 0x277fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277fc4:
    // 0x277fc4: 0x0  nop
    ctx->pc = 0x277fc4u;
    // NOP
label_277fc8:
    // 0x277fc8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_277fcc:
    // 0x277fcc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277fd0:
    // 0x277fd0: 0xac201a40  sw          $zero, 0x1A40($at)
    ctx->pc = 0x277fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6720), GPR_U32(ctx, 0));
label_277fd4:
    // 0x277fd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277fd8:
    // 0x277fd8: 0x8c221a38  lw          $v0, 0x1A38($at)
    ctx->pc = 0x277fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6712)));
label_277fdc:
    // 0x277fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277fe0:
    // 0x277fe0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277fe4:
    // 0x277fe4: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6712), GPR_U32(ctx, 2));
label_277fe8:
    // 0x277fe8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277fec:
    // 0x277fec: 0xac201a30  sw          $zero, 0x1A30($at)
    ctx->pc = 0x277fecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6704), GPR_U32(ctx, 0));
label_277ff0:
    // 0x277ff0: 0x1000000f  b           . + 4 + (0xF << 2)
label_277ff4:
    if (ctx->pc == 0x277FF4u) {
        ctx->pc = 0x277FF8u;
        goto label_277ff8;
    }
    ctx->pc = 0x277FF0u;
    {
        const bool branch_taken_0x277ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ff0) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x277FF8u;
label_277ff8:
    // 0x277ff8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277ffc:
    // 0x277ffc: 0x8c231a30  lw          $v1, 0x1A30($at)
    ctx->pc = 0x277ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6704)));
label_278000:
    // 0x278000: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x278000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_278004:
    // 0x278004: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_278008:
    // 0x278008: 0xac221a30  sw          $v0, 0x1A30($at)
    ctx->pc = 0x278008u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6704), GPR_U32(ctx, 2));
label_27800c:
    // 0x27800c: 0x2c61003d  sltiu       $at, $v1, 0x3D
    ctx->pc = 0x27800cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_278010:
    // 0x278010: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_278014:
    if (ctx->pc == 0x278014u) {
        ctx->pc = 0x278018u;
        goto label_278018;
    }
    ctx->pc = 0x278010u;
    {
        const bool branch_taken_0x278010 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x278010) {
            ctx->pc = 0x278030u;
            goto label_278030;
        }
    }
    ctx->pc = 0x278018u;
label_278018:
    // 0x278018: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27801c:
    // 0x27801c: 0xac201a28  sw          $zero, 0x1A28($at)
    ctx->pc = 0x27801cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6696), GPR_U32(ctx, 0));
label_278020:
    // 0x278020: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_278024:
    // 0x278024: 0xac201a38  sw          $zero, 0x1A38($at)
    ctx->pc = 0x278024u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6712), GPR_U32(ctx, 0));
label_278028:
    // 0x278028: 0x1000002e  b           . + 4 + (0x2E << 2)
label_27802c:
    if (ctx->pc == 0x27802Cu) {
        ctx->pc = 0x278030u;
        goto label_278030;
    }
    ctx->pc = 0x278028u;
    {
        const bool branch_taken_0x278028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278028) {
            ctx->pc = 0x2780E4u;
            goto label_2780e4;
        }
    }
    ctx->pc = 0x278030u;
label_278030:
    // 0x278030: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x278030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_278034:
    // 0x278034: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x278034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_278038:
    // 0x278038: 0xc040c9e  jal         func_103278
label_27803c:
    if (ctx->pc == 0x27803Cu) {
        ctx->pc = 0x278040u;
        goto label_278040;
    }
    ctx->pc = 0x278038u;
    SET_GPR_U32(ctx, 31, 0x278040u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x278040u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x278040u) { return; }
    ctx->pc = 0x278040u;
label_278040:
    // 0x278040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x278040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278044:
    // 0x278044: 0x0  nop
    ctx->pc = 0x278044u;
    // NOP
label_278048:
    // 0x278048: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x278048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_27804c:
    // 0x27804c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27804cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278050:
    // 0x278050: 0x0  nop
    ctx->pc = 0x278050u;
    // NOP
label_278054:
    // 0x278054: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x278054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_278058:
    // 0x278058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x278058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27805c:
    // 0x27805c: 0x0  nop
    ctx->pc = 0x27805cu;
    // NOP
label_278060:
    // 0x278060: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x278060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_278064:
    // 0x278064: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x278064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_278068:
    // 0x278068: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x278068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_27806c:
    // 0x27806c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x27806cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_278070:
    // 0x278070: 0xc040d62  jal         func_103588
label_278074:
    if (ctx->pc == 0x278074u) {
        ctx->pc = 0x278078u;
        goto label_278078;
    }
    ctx->pc = 0x278070u;
    SET_GPR_U32(ctx, 31, 0x278078u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x278078u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x278078u) { return; }
    ctx->pc = 0x278078u;
label_278078:
    // 0x278078: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x278078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_27807c:
    // 0x27807c: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x27807cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_278080:
    // 0x278080: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x278080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_278084:
    // 0x278084: 0xc040c92  jal         func_103248
label_278088:
    if (ctx->pc == 0x278088u) {
        ctx->pc = 0x27808Cu;
        goto label_27808c;
    }
    ctx->pc = 0x278084u;
    SET_GPR_U32(ctx, 31, 0x27808Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x27808Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27808Cu) { return; }
    ctx->pc = 0x27808Cu;
label_27808c:
    // 0x27808c: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_278090:
    // 0x278090: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x278090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_278094:
    // 0x278094: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x278094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_278098:
    // 0x278098: 0xc040c7a  jal         func_1031E8
label_27809c:
    if (ctx->pc == 0x27809Cu) {
        ctx->pc = 0x2780A0u;
        goto label_2780a0;
    }
    ctx->pc = 0x278098u;
    SET_GPR_U32(ctx, 31, 0x2780A0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2780A0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2780A0u) { return; }
    ctx->pc = 0x2780A0u;
label_2780a0:
    // 0x2780a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2780a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2780a4:
    // 0x2780a4: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x2780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6720)));
label_2780a8:
    // 0x2780a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2780a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2780ac:
    // 0x2780ac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2780b0:
    if (ctx->pc == 0x2780B0u) {
        ctx->pc = 0x2780B4u;
        goto label_2780b4;
    }
    ctx->pc = 0x2780ACu;
    {
        const bool branch_taken_0x2780ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2780ac) {
            ctx->pc = 0x2780D0u;
            goto label_2780d0;
        }
    }
    ctx->pc = 0x2780B4u;
label_2780b4:
    // 0x2780b4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2780b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2780b8:
    // 0x2780b8: 0x3c023f2e  lui         $v0, 0x3F2E
    ctx->pc = 0x2780b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16174 << 16));
label_2780bc:
    // 0x2780bc: 0x34425700  ori         $v0, $v0, 0x5700
    ctx->pc = 0x2780bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22272);
label_2780c0:
    // 0x2780c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2780c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2780c4:
    // 0x2780c4: 0x0  nop
    ctx->pc = 0x2780c4u;
    // NOP
label_2780c8:
    // 0x2780c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2780c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2780cc:
    // 0x2780cc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2780ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2780d0:
    // 0x2780d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2780d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2780d4:
    // 0x2780d4: 0xc084964  jal         func_212590
label_2780d8:
    if (ctx->pc == 0x2780D8u) {
        ctx->pc = 0x2780DCu;
        goto label_2780dc;
    }
    ctx->pc = 0x2780D4u;
    SET_GPR_U32(ctx, 31, 0x2780DCu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2780D4u, 0x2780DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780DCu;
label_2780dc:
    // 0x2780dc: 0x1000fee2  b           . + 4 + (-0x11E << 2)
label_2780e0:
    if (ctx->pc == 0x2780E0u) {
        ctx->pc = 0x2780E4u;
        goto label_2780e4;
    }
    ctx->pc = 0x2780DCu;
    {
        const bool branch_taken_0x2780dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2780dc) {
            ctx->pc = 0x277C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277c68;
        }
    }
    ctx->pc = 0x2780E4u;
label_2780e4:
    // 0x2780e4: 0xc084934  jal         func_2124D0
label_2780e8:
    if (ctx->pc == 0x2780E8u) {
        ctx->pc = 0x2780ECu;
        goto label_2780ec;
    }
    ctx->pc = 0x2780E4u;
    SET_GPR_U32(ctx, 31, 0x2780ECu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2780E4u, 0x2780ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780ECu;
label_2780ec:
    // 0x2780ec: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2780ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2780f0:
    // 0x2780f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2780f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2780f4:
    // 0x2780f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2780f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2780f8:
    // 0x2780f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2780f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2780fc:
    // 0x2780fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2780fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_278100:
    // 0x278100: 0x3e00008  jr          $ra
label_278104:
    if (ctx->pc == 0x278104u) {
        ctx->pc = 0x278108u;
        goto label_fallthrough_0x278100;
    }
    ctx->pc = 0x278100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x278100:
    ctx->pc = 0x278108u;
}
