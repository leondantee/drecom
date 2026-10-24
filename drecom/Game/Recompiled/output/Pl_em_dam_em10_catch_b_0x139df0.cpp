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

// Function: Pl_em_dam_em10_catch_b
// Address: 0x139df0 - 0x13a2e8
void Pl_em_dam_em10_catch_b_0x139df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em10_catch_b_0x139df0");
#endif

    switch (ctx->pc) {
        case 0x139df0u: goto label_139df0;
        case 0x139df4u: goto label_139df4;
        case 0x139df8u: goto label_139df8;
        case 0x139dfcu: goto label_139dfc;
        case 0x139e00u: goto label_139e00;
        case 0x139e04u: goto label_139e04;
        case 0x139e08u: goto label_139e08;
        case 0x139e0cu: goto label_139e0c;
        case 0x139e10u: goto label_139e10;
        case 0x139e14u: goto label_139e14;
        case 0x139e18u: goto label_139e18;
        case 0x139e1cu: goto label_139e1c;
        case 0x139e20u: goto label_139e20;
        case 0x139e24u: goto label_139e24;
        case 0x139e28u: goto label_139e28;
        case 0x139e2cu: goto label_139e2c;
        case 0x139e30u: goto label_139e30;
        case 0x139e34u: goto label_139e34;
        case 0x139e38u: goto label_139e38;
        case 0x139e3cu: goto label_139e3c;
        case 0x139e40u: goto label_139e40;
        case 0x139e44u: goto label_139e44;
        case 0x139e48u: goto label_139e48;
        case 0x139e4cu: goto label_139e4c;
        case 0x139e50u: goto label_139e50;
        case 0x139e54u: goto label_139e54;
        case 0x139e58u: goto label_139e58;
        case 0x139e5cu: goto label_139e5c;
        case 0x139e60u: goto label_139e60;
        case 0x139e64u: goto label_139e64;
        case 0x139e68u: goto label_139e68;
        case 0x139e6cu: goto label_139e6c;
        case 0x139e70u: goto label_139e70;
        case 0x139e74u: goto label_139e74;
        case 0x139e78u: goto label_139e78;
        case 0x139e7cu: goto label_139e7c;
        case 0x139e80u: goto label_139e80;
        case 0x139e84u: goto label_139e84;
        case 0x139e88u: goto label_139e88;
        case 0x139e8cu: goto label_139e8c;
        case 0x139e90u: goto label_139e90;
        case 0x139e94u: goto label_139e94;
        case 0x139e98u: goto label_139e98;
        case 0x139e9cu: goto label_139e9c;
        case 0x139ea0u: goto label_139ea0;
        case 0x139ea4u: goto label_139ea4;
        case 0x139ea8u: goto label_139ea8;
        case 0x139eacu: goto label_139eac;
        case 0x139eb0u: goto label_139eb0;
        case 0x139eb4u: goto label_139eb4;
        case 0x139eb8u: goto label_139eb8;
        case 0x139ebcu: goto label_139ebc;
        case 0x139ec0u: goto label_139ec0;
        case 0x139ec4u: goto label_139ec4;
        case 0x139ec8u: goto label_139ec8;
        case 0x139eccu: goto label_139ecc;
        case 0x139ed0u: goto label_139ed0;
        case 0x139ed4u: goto label_139ed4;
        case 0x139ed8u: goto label_139ed8;
        case 0x139edcu: goto label_139edc;
        case 0x139ee0u: goto label_139ee0;
        case 0x139ee4u: goto label_139ee4;
        case 0x139ee8u: goto label_139ee8;
        case 0x139eecu: goto label_139eec;
        case 0x139ef0u: goto label_139ef0;
        case 0x139ef4u: goto label_139ef4;
        case 0x139ef8u: goto label_139ef8;
        case 0x139efcu: goto label_139efc;
        case 0x139f00u: goto label_139f00;
        case 0x139f04u: goto label_139f04;
        case 0x139f08u: goto label_139f08;
        case 0x139f0cu: goto label_139f0c;
        case 0x139f10u: goto label_139f10;
        case 0x139f14u: goto label_139f14;
        case 0x139f18u: goto label_139f18;
        case 0x139f1cu: goto label_139f1c;
        case 0x139f20u: goto label_139f20;
        case 0x139f24u: goto label_139f24;
        case 0x139f28u: goto label_139f28;
        case 0x139f2cu: goto label_139f2c;
        case 0x139f30u: goto label_139f30;
        case 0x139f34u: goto label_139f34;
        case 0x139f38u: goto label_139f38;
        case 0x139f3cu: goto label_139f3c;
        case 0x139f40u: goto label_139f40;
        case 0x139f44u: goto label_139f44;
        case 0x139f48u: goto label_139f48;
        case 0x139f4cu: goto label_139f4c;
        case 0x139f50u: goto label_139f50;
        case 0x139f54u: goto label_139f54;
        case 0x139f58u: goto label_139f58;
        case 0x139f5cu: goto label_139f5c;
        case 0x139f60u: goto label_139f60;
        case 0x139f64u: goto label_139f64;
        case 0x139f68u: goto label_139f68;
        case 0x139f6cu: goto label_139f6c;
        case 0x139f70u: goto label_139f70;
        case 0x139f74u: goto label_139f74;
        case 0x139f78u: goto label_139f78;
        case 0x139f7cu: goto label_139f7c;
        case 0x139f80u: goto label_139f80;
        case 0x139f84u: goto label_139f84;
        case 0x139f88u: goto label_139f88;
        case 0x139f8cu: goto label_139f8c;
        case 0x139f90u: goto label_139f90;
        case 0x139f94u: goto label_139f94;
        case 0x139f98u: goto label_139f98;
        case 0x139f9cu: goto label_139f9c;
        case 0x139fa0u: goto label_139fa0;
        case 0x139fa4u: goto label_139fa4;
        case 0x139fa8u: goto label_139fa8;
        case 0x139facu: goto label_139fac;
        case 0x139fb0u: goto label_139fb0;
        case 0x139fb4u: goto label_139fb4;
        case 0x139fb8u: goto label_139fb8;
        case 0x139fbcu: goto label_139fbc;
        case 0x139fc0u: goto label_139fc0;
        case 0x139fc4u: goto label_139fc4;
        case 0x139fc8u: goto label_139fc8;
        case 0x139fccu: goto label_139fcc;
        case 0x139fd0u: goto label_139fd0;
        case 0x139fd4u: goto label_139fd4;
        case 0x139fd8u: goto label_139fd8;
        case 0x139fdcu: goto label_139fdc;
        case 0x139fe0u: goto label_139fe0;
        case 0x139fe4u: goto label_139fe4;
        case 0x139fe8u: goto label_139fe8;
        case 0x139fecu: goto label_139fec;
        case 0x139ff0u: goto label_139ff0;
        case 0x139ff4u: goto label_139ff4;
        case 0x139ff8u: goto label_139ff8;
        case 0x139ffcu: goto label_139ffc;
        case 0x13a000u: goto label_13a000;
        case 0x13a004u: goto label_13a004;
        case 0x13a008u: goto label_13a008;
        case 0x13a00cu: goto label_13a00c;
        case 0x13a010u: goto label_13a010;
        case 0x13a014u: goto label_13a014;
        case 0x13a018u: goto label_13a018;
        case 0x13a01cu: goto label_13a01c;
        case 0x13a020u: goto label_13a020;
        case 0x13a024u: goto label_13a024;
        case 0x13a028u: goto label_13a028;
        case 0x13a02cu: goto label_13a02c;
        case 0x13a030u: goto label_13a030;
        case 0x13a034u: goto label_13a034;
        case 0x13a038u: goto label_13a038;
        case 0x13a03cu: goto label_13a03c;
        case 0x13a040u: goto label_13a040;
        case 0x13a044u: goto label_13a044;
        case 0x13a048u: goto label_13a048;
        case 0x13a04cu: goto label_13a04c;
        case 0x13a050u: goto label_13a050;
        case 0x13a054u: goto label_13a054;
        case 0x13a058u: goto label_13a058;
        case 0x13a05cu: goto label_13a05c;
        case 0x13a060u: goto label_13a060;
        case 0x13a064u: goto label_13a064;
        case 0x13a068u: goto label_13a068;
        case 0x13a06cu: goto label_13a06c;
        case 0x13a070u: goto label_13a070;
        case 0x13a074u: goto label_13a074;
        case 0x13a078u: goto label_13a078;
        case 0x13a07cu: goto label_13a07c;
        case 0x13a080u: goto label_13a080;
        case 0x13a084u: goto label_13a084;
        case 0x13a088u: goto label_13a088;
        case 0x13a08cu: goto label_13a08c;
        case 0x13a090u: goto label_13a090;
        case 0x13a094u: goto label_13a094;
        case 0x13a098u: goto label_13a098;
        case 0x13a09cu: goto label_13a09c;
        case 0x13a0a0u: goto label_13a0a0;
        case 0x13a0a4u: goto label_13a0a4;
        case 0x13a0a8u: goto label_13a0a8;
        case 0x13a0acu: goto label_13a0ac;
        case 0x13a0b0u: goto label_13a0b0;
        case 0x13a0b4u: goto label_13a0b4;
        case 0x13a0b8u: goto label_13a0b8;
        case 0x13a0bcu: goto label_13a0bc;
        case 0x13a0c0u: goto label_13a0c0;
        case 0x13a0c4u: goto label_13a0c4;
        case 0x13a0c8u: goto label_13a0c8;
        case 0x13a0ccu: goto label_13a0cc;
        case 0x13a0d0u: goto label_13a0d0;
        case 0x13a0d4u: goto label_13a0d4;
        case 0x13a0d8u: goto label_13a0d8;
        case 0x13a0dcu: goto label_13a0dc;
        case 0x13a0e0u: goto label_13a0e0;
        case 0x13a0e4u: goto label_13a0e4;
        case 0x13a0e8u: goto label_13a0e8;
        case 0x13a0ecu: goto label_13a0ec;
        case 0x13a0f0u: goto label_13a0f0;
        case 0x13a0f4u: goto label_13a0f4;
        case 0x13a0f8u: goto label_13a0f8;
        case 0x13a0fcu: goto label_13a0fc;
        case 0x13a100u: goto label_13a100;
        case 0x13a104u: goto label_13a104;
        case 0x13a108u: goto label_13a108;
        case 0x13a10cu: goto label_13a10c;
        case 0x13a110u: goto label_13a110;
        case 0x13a114u: goto label_13a114;
        case 0x13a118u: goto label_13a118;
        case 0x13a11cu: goto label_13a11c;
        case 0x13a120u: goto label_13a120;
        case 0x13a124u: goto label_13a124;
        case 0x13a128u: goto label_13a128;
        case 0x13a12cu: goto label_13a12c;
        case 0x13a130u: goto label_13a130;
        case 0x13a134u: goto label_13a134;
        case 0x13a138u: goto label_13a138;
        case 0x13a13cu: goto label_13a13c;
        case 0x13a140u: goto label_13a140;
        case 0x13a144u: goto label_13a144;
        case 0x13a148u: goto label_13a148;
        case 0x13a14cu: goto label_13a14c;
        case 0x13a150u: goto label_13a150;
        case 0x13a154u: goto label_13a154;
        case 0x13a158u: goto label_13a158;
        case 0x13a15cu: goto label_13a15c;
        case 0x13a160u: goto label_13a160;
        case 0x13a164u: goto label_13a164;
        case 0x13a168u: goto label_13a168;
        case 0x13a16cu: goto label_13a16c;
        case 0x13a170u: goto label_13a170;
        case 0x13a174u: goto label_13a174;
        case 0x13a178u: goto label_13a178;
        case 0x13a17cu: goto label_13a17c;
        case 0x13a180u: goto label_13a180;
        case 0x13a184u: goto label_13a184;
        case 0x13a188u: goto label_13a188;
        case 0x13a18cu: goto label_13a18c;
        case 0x13a190u: goto label_13a190;
        case 0x13a194u: goto label_13a194;
        case 0x13a198u: goto label_13a198;
        case 0x13a19cu: goto label_13a19c;
        case 0x13a1a0u: goto label_13a1a0;
        case 0x13a1a4u: goto label_13a1a4;
        case 0x13a1a8u: goto label_13a1a8;
        case 0x13a1acu: goto label_13a1ac;
        case 0x13a1b0u: goto label_13a1b0;
        case 0x13a1b4u: goto label_13a1b4;
        case 0x13a1b8u: goto label_13a1b8;
        case 0x13a1bcu: goto label_13a1bc;
        case 0x13a1c0u: goto label_13a1c0;
        case 0x13a1c4u: goto label_13a1c4;
        case 0x13a1c8u: goto label_13a1c8;
        case 0x13a1ccu: goto label_13a1cc;
        case 0x13a1d0u: goto label_13a1d0;
        case 0x13a1d4u: goto label_13a1d4;
        case 0x13a1d8u: goto label_13a1d8;
        case 0x13a1dcu: goto label_13a1dc;
        case 0x13a1e0u: goto label_13a1e0;
        case 0x13a1e4u: goto label_13a1e4;
        case 0x13a1e8u: goto label_13a1e8;
        case 0x13a1ecu: goto label_13a1ec;
        case 0x13a1f0u: goto label_13a1f0;
        case 0x13a1f4u: goto label_13a1f4;
        case 0x13a1f8u: goto label_13a1f8;
        case 0x13a1fcu: goto label_13a1fc;
        case 0x13a200u: goto label_13a200;
        case 0x13a204u: goto label_13a204;
        case 0x13a208u: goto label_13a208;
        case 0x13a20cu: goto label_13a20c;
        case 0x13a210u: goto label_13a210;
        case 0x13a214u: goto label_13a214;
        case 0x13a218u: goto label_13a218;
        case 0x13a21cu: goto label_13a21c;
        case 0x13a220u: goto label_13a220;
        case 0x13a224u: goto label_13a224;
        case 0x13a228u: goto label_13a228;
        case 0x13a22cu: goto label_13a22c;
        case 0x13a230u: goto label_13a230;
        case 0x13a234u: goto label_13a234;
        case 0x13a238u: goto label_13a238;
        case 0x13a23cu: goto label_13a23c;
        case 0x13a240u: goto label_13a240;
        case 0x13a244u: goto label_13a244;
        case 0x13a248u: goto label_13a248;
        case 0x13a24cu: goto label_13a24c;
        case 0x13a250u: goto label_13a250;
        case 0x13a254u: goto label_13a254;
        case 0x13a258u: goto label_13a258;
        case 0x13a25cu: goto label_13a25c;
        case 0x13a260u: goto label_13a260;
        case 0x13a264u: goto label_13a264;
        case 0x13a268u: goto label_13a268;
        case 0x13a26cu: goto label_13a26c;
        case 0x13a270u: goto label_13a270;
        case 0x13a274u: goto label_13a274;
        case 0x13a278u: goto label_13a278;
        case 0x13a27cu: goto label_13a27c;
        case 0x13a280u: goto label_13a280;
        case 0x13a284u: goto label_13a284;
        case 0x13a288u: goto label_13a288;
        case 0x13a28cu: goto label_13a28c;
        case 0x13a290u: goto label_13a290;
        case 0x13a294u: goto label_13a294;
        case 0x13a298u: goto label_13a298;
        case 0x13a29cu: goto label_13a29c;
        case 0x13a2a0u: goto label_13a2a0;
        case 0x13a2a4u: goto label_13a2a4;
        case 0x13a2a8u: goto label_13a2a8;
        case 0x13a2acu: goto label_13a2ac;
        case 0x13a2b0u: goto label_13a2b0;
        case 0x13a2b4u: goto label_13a2b4;
        case 0x13a2b8u: goto label_13a2b8;
        case 0x13a2bcu: goto label_13a2bc;
        case 0x13a2c0u: goto label_13a2c0;
        case 0x13a2c4u: goto label_13a2c4;
        case 0x13a2c8u: goto label_13a2c8;
        case 0x13a2ccu: goto label_13a2cc;
        case 0x13a2d0u: goto label_13a2d0;
        case 0x13a2d4u: goto label_13a2d4;
        case 0x13a2d8u: goto label_13a2d8;
        case 0x13a2dcu: goto label_13a2dc;
        case 0x13a2e0u: goto label_13a2e0;
        case 0x13a2e4u: goto label_13a2e4;
        default: break;
    }

    ctx->pc = 0x139df0u;

label_139df0:
    // 0x139df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_139df4:
    // 0x139df4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x139df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_139df8:
    // 0x139df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_139dfc:
    // 0x139dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_139e00:
    // 0x139e00: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x139e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_139e04:
    // 0x139e04: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x139e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_139e08:
    // 0x139e08: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x139e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_139e0c:
    // 0x139e0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139e10:
    // 0x139e10: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x139e10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
label_139e14:
    // 0x139e14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x139e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_139e18:
    // 0x139e18: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x139e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_139e1c:
    // 0x139e1c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x139e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_139e20:
    // 0x139e20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x139e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_139e24:
    // 0x139e24: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x139e24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_139e28:
    // 0x139e28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139e2c:
    // 0x139e2c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x139e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_139e30:
    // 0x139e30: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x139e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_139e34:
    // 0x139e34: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x139e34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_139e38:
    // 0x139e38: 0x10200125  beqz        $at, . + 4 + (0x125 << 2)
label_139e3c:
    if (ctx->pc == 0x139E3Cu) {
        ctx->pc = 0x139E40u;
        goto label_139e40;
    }
    ctx->pc = 0x139E38u;
    {
        const bool branch_taken_0x139e38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e38) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x139E40u;
label_139e40:
    // 0x139e40: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x139e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_139e44:
    // 0x139e44: 0x2464e600  addiu       $a0, $v1, -0x1A00
    ctx->pc = 0x139e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960640));
label_139e48:
    // 0x139e48: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x139e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_139e4c:
    // 0x139e4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_139e50:
    // 0x139e50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x139e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_139e54:
    // 0x139e54: 0x600008  jr          $v1
label_139e58:
    if (ctx->pc == 0x139E58u) {
        ctx->pc = 0x139E5Cu;
        goto label_139e5c;
    }
    ctx->pc = 0x139E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139E54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x139E5Cu;
label_139e5c:
    // 0x139e5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x139e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_139e60:
    // 0x139e60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139e64:
    // 0x139e64: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x139e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_139e68:
    // 0x139e68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_139e6c:
    // 0x139e6c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x139e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_139e70:
    // 0x139e70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_139e74:
    // 0x139e74: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_139e78:
    // 0x139e78: 0x240605af  addiu       $a2, $zero, 0x5AF
    ctx->pc = 0x139e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
label_139e7c:
    // 0x139e7c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x139e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_139e80:
    // 0x139e80: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_139e84:
    // 0x139e84: 0xc0965d0  jal         func_259740
label_139e88:
    if (ctx->pc == 0x139E88u) {
        ctx->pc = 0x139E8Cu;
        goto label_139e8c;
    }
    ctx->pc = 0x139E84u;
    SET_GPR_U32(ctx, 31, 0x139E8Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139E84u, 0x139E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E8Cu;
label_139e8c:
    // 0x139e8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139e90:
    // 0x139e90: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x139e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_139e94:
    // 0x139e94: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x139e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_139e98:
    // 0x139e98: 0xc05ccfc  jal         func_1733F0
label_139e9c:
    if (ctx->pc == 0x139E9Cu) {
        ctx->pc = 0x139EA0u;
        goto label_139ea0;
    }
    ctx->pc = 0x139E98u;
    SET_GPR_U32(ctx, 31, 0x139EA0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x139E98u, 0x139EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EA0u;
label_139ea0:
    // 0x139ea0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x139ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_139ea4:
    // 0x139ea4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x139ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_139ea8:
    // 0x139ea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x139ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_139eac:
    // 0x139eac: 0x0  nop
    ctx->pc = 0x139eacu;
    // NOP
label_139eb0:
    // 0x139eb0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x139eb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_139eb4:
    // 0x139eb4: 0xc058fec  jal         func_163FB0
label_139eb8:
    if (ctx->pc == 0x139EB8u) {
        ctx->pc = 0x139EBCu;
        goto label_139ebc;
    }
    ctx->pc = 0x139EB4u;
    SET_GPR_U32(ctx, 31, 0x139EBCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x139EB4u, 0x139EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EBCu;
label_139ebc:
    // 0x139ebc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ec0:
    // 0x139ec0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x139ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_139ec4:
    // 0x139ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x139ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139ec8:
    // 0x139ec8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ecc:
    // 0x139ecc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x139eccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_139ed0:
    // 0x139ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ed4:
    // 0x139ed4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_139ed8:
    // 0x139ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_139edc:
    // 0x139edc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_139ee0:
    // 0x139ee0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ee4:
    // 0x139ee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ee8:
    // 0x139ee8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x139ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_139eec:
    // 0x139eec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x139eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_139ef0:
    // 0x139ef0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x139ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_139ef4:
    // 0x139ef4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x139ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_139ef8:
    // 0x139ef8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x139ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_139efc:
    // 0x139efc: 0xc058f50  jal         func_163D40
label_139f00:
    if (ctx->pc == 0x139F00u) {
        ctx->pc = 0x139F04u;
        goto label_139f04;
    }
    ctx->pc = 0x139EFCu;
    SET_GPR_U32(ctx, 31, 0x139F04u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x139EFCu, 0x139F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F04u;
label_139f04:
    // 0x139f04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139f08:
    // 0x139f08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x139f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_139f0c:
    // 0x139f0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139f10:
    // 0x139f10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139f10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139f14:
    // 0x139f14: 0xc096b40  jal         func_25AD00
label_139f18:
    if (ctx->pc == 0x139F18u) {
        ctx->pc = 0x139F1Cu;
        goto label_139f1c;
    }
    ctx->pc = 0x139F14u;
    SET_GPR_U32(ctx, 31, 0x139F1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139F14u, 0x139F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F1Cu;
label_139f1c:
    // 0x139f1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139f20:
    // 0x139f20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139f24:
    // 0x139f24: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x139f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_139f28:
    // 0x139f28: 0xc05cd58  jal         func_173560
label_139f2c:
    if (ctx->pc == 0x139F2Cu) {
        ctx->pc = 0x139F30u;
        goto label_139f30;
    }
    ctx->pc = 0x139F28u;
    SET_GPR_U32(ctx, 31, 0x139F30u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x139F28u, 0x139F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F30u;
label_139f30:
    // 0x139f30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139f34:
    // 0x139f34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139f38:
    // 0x139f38: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x139f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_139f3c:
    // 0x139f3c: 0xc040c9e  jal         func_103278
label_139f40:
    if (ctx->pc == 0x139F40u) {
        ctx->pc = 0x139F44u;
        goto label_139f44;
    }
    ctx->pc = 0x139F3Cu;
    SET_GPR_U32(ctx, 31, 0x139F44u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x139F44u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x139F44u) { return; }
    ctx->pc = 0x139F44u;
label_139f44:
    // 0x139f44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_139f48:
    // 0x139f48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139f4c:
    // 0x139f4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139f50:
    // 0x139f50: 0xc0573d8  jal         func_15CF60
label_139f54:
    if (ctx->pc == 0x139F54u) {
        ctx->pc = 0x139F58u;
        goto label_139f58;
    }
    ctx->pc = 0x139F50u;
    SET_GPR_U32(ctx, 31, 0x139F58u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139F50u, 0x139F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F58u;
label_139f58:
    // 0x139f58: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x139f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139f5c:
    // 0x139f5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139f60:
    // 0x139f60: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x139f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_139f64:
    // 0x139f64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139f68:
    // 0x139f68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139f6c:
    // 0x139f6c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x139f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_139f70:
    // 0x139f70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x139f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139f74:
    // 0x139f74: 0xc0675b0  jal         func_19D6C0
label_139f78:
    if (ctx->pc == 0x139F78u) {
        ctx->pc = 0x139F7Cu;
        goto label_139f7c;
    }
    ctx->pc = 0x139F74u;
    SET_GPR_U32(ctx, 31, 0x139F7Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x139F74u, 0x139F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F7Cu;
label_139f7c:
    // 0x139f7c: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x139f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139f80:
    // 0x139f80: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x139f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139f84:
    // 0x139f84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_139f88:
    // 0x139f88: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x139f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
label_139f8c:
    // 0x139f8c: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x139f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139f90:
    // 0x139f90: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x139f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139f94:
    // 0x139f94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_139f98:
    // 0x139f98: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x139f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
label_139f9c:
    // 0x139f9c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139f9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139fa0:
    // 0x139fa0: 0xc097530  jal         func_25D4C0
label_139fa4:
    if (ctx->pc == 0x139FA4u) {
        ctx->pc = 0x139FA8u;
        goto label_139fa8;
    }
    ctx->pc = 0x139FA0u;
    SET_GPR_U32(ctx, 31, 0x139FA8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139FA0u, 0x139FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FA8u;
label_139fa8:
    // 0x139fa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139fac:
    // 0x139fac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_139fb0:
    // 0x139fb0: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
label_139fb4:
    if (ctx->pc == 0x139FB4u) {
        ctx->pc = 0x139FB8u;
        goto label_139fb8;
    }
    ctx->pc = 0x139FB0u;
    {
        const bool branch_taken_0x139fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139fb0) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x139FB8u;
label_139fb8:
    // 0x139fb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139fbc:
    // 0x139fbc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x139fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_139fc0:
    // 0x139fc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_139fc4:
    // 0x139fc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x139fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_139fc8:
    // 0x139fc8: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_139fcc:
    if (ctx->pc == 0x139FCCu) {
        ctx->pc = 0x139FD0u;
        goto label_139fd0;
    }
    ctx->pc = 0x139FC8u;
    {
        const bool branch_taken_0x139fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139fc8) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x139FD0u;
label_139fd0:
    // 0x139fd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_139fd4:
    // 0x139fd4: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x139fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_139fd8:
    // 0x139fd8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_139fdc:
    // 0x139fdc: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_139fe0:
    // 0x139fe0: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x139fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_139fe4:
    // 0x139fe4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139fe8:
    // 0x139fe8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_139fec:
    // 0x139fec: 0xc0965d0  jal         func_259740
label_139ff0:
    if (ctx->pc == 0x139FF0u) {
        ctx->pc = 0x139FF4u;
        goto label_139ff4;
    }
    ctx->pc = 0x139FECu;
    SET_GPR_U32(ctx, 31, 0x139FF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139FECu, 0x139FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FF4u;
label_139ff4:
    // 0x139ff4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ff8:
    // 0x139ff8: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x139ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139ffc:
    // 0x139ffc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a000:
    // 0x13a000: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x13a000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_13a004:
    // 0x13a004: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a008:
    // 0x13a008: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_13a00c:
    // 0x13a00c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a010:
    // 0x13a010: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13a014:
    // 0x13a014: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a018:
    // 0x13a018: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13a018u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a01c:
    // 0x13a01c: 0xc096b40  jal         func_25AD00
label_13a020:
    if (ctx->pc == 0x13A020u) {
        ctx->pc = 0x13A024u;
        goto label_13a024;
    }
    ctx->pc = 0x13A01Cu;
    SET_GPR_U32(ctx, 31, 0x13A024u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13A01Cu, 0x13A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A024u;
label_13a024:
    // 0x13a024: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a028:
    // 0x13a028: 0xc05cd10  jal         func_173440
label_13a02c:
    if (ctx->pc == 0x13A02Cu) {
        ctx->pc = 0x13A030u;
        goto label_13a030;
    }
    ctx->pc = 0x13A028u;
    SET_GPR_U32(ctx, 31, 0x13A030u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13A028u, 0x13A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A030u;
label_13a030:
    // 0x13a030: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a034:
    // 0x13a034: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a038:
    // 0x13a038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a03c:
    // 0x13a03c: 0xc0573d8  jal         func_15CF60
label_13a040:
    if (ctx->pc == 0x13A040u) {
        ctx->pc = 0x13A044u;
        goto label_13a044;
    }
    ctx->pc = 0x13A03Cu;
    SET_GPR_U32(ctx, 31, 0x13A044u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13A03Cu, 0x13A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A044u;
label_13a044:
    // 0x13a044: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13a044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a048:
    // 0x13a048: 0xc097530  jal         func_25D4C0
label_13a04c:
    if (ctx->pc == 0x13A04Cu) {
        ctx->pc = 0x13A050u;
        goto label_13a050;
    }
    ctx->pc = 0x13A048u;
    SET_GPR_U32(ctx, 31, 0x13A050u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13A048u, 0x13A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A050u;
label_13a050:
    // 0x13a050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a054:
    // 0x13a054: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13a054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_13a058:
    // 0x13a058: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
label_13a05c:
    if (ctx->pc == 0x13A05Cu) {
        ctx->pc = 0x13A060u;
        goto label_13a060;
    }
    ctx->pc = 0x13A058u;
    {
        const bool branch_taken_0x13a058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a058) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x13A060u;
label_13a060:
    // 0x13a060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a064:
    // 0x13a064: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_13a068:
    // 0x13a068: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13a068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_13a06c:
    // 0x13a06c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13a06cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_13a070:
    // 0x13a070: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
label_13a074:
    if (ctx->pc == 0x13A074u) {
        ctx->pc = 0x13A078u;
        goto label_13a078;
    }
    ctx->pc = 0x13A070u;
    {
        const bool branch_taken_0x13a070 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13a070) {
            ctx->pc = 0x13A0B0u;
            goto label_13a0b0;
        }
    }
    ctx->pc = 0x13A078u;
label_13a078:
    // 0x13a078: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x13a078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13a07c:
    // 0x13a07c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a080:
    // 0x13a080: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x13a080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_13a084:
    // 0x13a084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a088:
    // 0x13a088: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a08c:
    // 0x13a08c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x13a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_13a090:
    // 0x13a090: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a094:
    // 0x13a094: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x13a094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_13a098:
    // 0x13a098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a09c:
    // 0x13a09c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x13a09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_13a0a0:
    // 0x13a0a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a0a4:
    // 0x13a0a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_13a0a8:
    // 0x13a0a8: 0x10000089  b           . + 4 + (0x89 << 2)
label_13a0ac:
    if (ctx->pc == 0x13A0ACu) {
        ctx->pc = 0x13A0B0u;
        goto label_13a0b0;
    }
    ctx->pc = 0x13A0A8u;
    {
        const bool branch_taken_0x13a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0a8) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x13A0B0u;
label_13a0b0:
    // 0x13a0b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a0b4:
    // 0x13a0b4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13a0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_13a0b8:
    // 0x13a0b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_13a0bc:
    if (ctx->pc == 0x13A0BCu) {
        ctx->pc = 0x13A0C0u;
        goto label_13a0c0;
    }
    ctx->pc = 0x13A0B8u;
    {
        const bool branch_taken_0x13a0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0b8) {
            ctx->pc = 0x13A0D4u;
            goto label_13a0d4;
        }
    }
    ctx->pc = 0x13A0C0u;
label_13a0c0:
    // 0x13a0c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13a0c4:
    // 0x13a0c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a0c8:
    // 0x13a0c8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x13a0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_13a0cc:
    // 0x13a0cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_13a0d0:
    if (ctx->pc == 0x13A0D0u) {
        ctx->pc = 0x13A0D4u;
        goto label_13a0d4;
    }
    ctx->pc = 0x13A0CCu;
    {
        const bool branch_taken_0x13a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0cc) {
            ctx->pc = 0x13A0E0u;
            goto label_13a0e0;
        }
    }
    ctx->pc = 0x13A0D4u;
label_13a0d4:
    // 0x13a0d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x13a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13a0d8:
    // 0x13a0d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a0dc:
    // 0x13a0dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x13a0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_13a0e0:
    // 0x13a0e0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_13a0e4:
    if (ctx->pc == 0x13A0E4u) {
        ctx->pc = 0x13A0E8u;
        goto label_13a0e8;
    }
    ctx->pc = 0x13A0E0u;
    {
        const bool branch_taken_0x13a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0e0) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x13A0E8u;
label_13a0e8:
    // 0x13a0e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_13a0ec:
    // 0x13a0ec: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_13a0f0:
    // 0x13a0f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_13a0f4:
    // 0x13a0f4: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_13a0f8:
    // 0x13a0f8: 0x240600b1  addiu       $a2, $zero, 0xB1
    ctx->pc = 0x13a0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
label_13a0fc:
    // 0x13a0fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13a0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a100:
    // 0x13a100: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13a100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_13a104:
    // 0x13a104: 0xc0965d0  jal         func_259740
label_13a108:
    if (ctx->pc == 0x13A108u) {
        ctx->pc = 0x13A10Cu;
        goto label_13a10c;
    }
    ctx->pc = 0x13A104u;
    SET_GPR_U32(ctx, 31, 0x13A10Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13A104u, 0x13A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A10Cu;
label_13a10c:
    // 0x13a10c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a110:
    // 0x13a110: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x13a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a114:
    // 0x13a114: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a118:
    // 0x13a118: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x13a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_13a11c:
    // 0x13a11c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a120:
    // 0x13a120: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_13a124:
    // 0x13a124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a128:
    // 0x13a128: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13a12c:
    // 0x13a12c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a130:
    // 0x13a130: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13a130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a134:
    // 0x13a134: 0xc096b40  jal         func_25AD00
label_13a138:
    if (ctx->pc == 0x13A138u) {
        ctx->pc = 0x13A13Cu;
        goto label_13a13c;
    }
    ctx->pc = 0x13A134u;
    SET_GPR_U32(ctx, 31, 0x13A13Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13A134u, 0x13A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A13Cu;
label_13a13c:
    // 0x13a13c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a140:
    // 0x13a140: 0xc05cd10  jal         func_173440
label_13a144:
    if (ctx->pc == 0x13A144u) {
        ctx->pc = 0x13A148u;
        goto label_13a148;
    }
    ctx->pc = 0x13A140u;
    SET_GPR_U32(ctx, 31, 0x13A148u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13A140u, 0x13A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A148u;
label_13a148:
    // 0x13a148: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a14c:
    // 0x13a14c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a150:
    // 0x13a150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a154:
    // 0x13a154: 0xc0573d8  jal         func_15CF60
label_13a158:
    if (ctx->pc == 0x13A158u) {
        ctx->pc = 0x13A15Cu;
        goto label_13a15c;
    }
    ctx->pc = 0x13A154u;
    SET_GPR_U32(ctx, 31, 0x13A15Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13A154u, 0x13A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A15Cu;
label_13a15c:
    // 0x13a15c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13a15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a160:
    // 0x13a160: 0xc097530  jal         func_25D4C0
label_13a164:
    if (ctx->pc == 0x13A164u) {
        ctx->pc = 0x13A168u;
        goto label_13a168;
    }
    ctx->pc = 0x13A160u;
    SET_GPR_U32(ctx, 31, 0x13A168u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13A160u, 0x13A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A168u;
label_13a168:
    // 0x13a168: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a16c:
    // 0x13a16c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13a16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_13a170:
    // 0x13a170: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_13a174:
    if (ctx->pc == 0x13A174u) {
        ctx->pc = 0x13A178u;
        goto label_13a178;
    }
    ctx->pc = 0x13A170u;
    {
        const bool branch_taken_0x13a170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a170) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x13A178u;
label_13a178:
    // 0x13a178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a17c:
    // 0x13a17c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x13a17cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_13a180:
    // 0x13a180: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13a180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_13a184:
    // 0x13a184: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13a184u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_13a188:
    // 0x13a188: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
label_13a18c:
    if (ctx->pc == 0x13A18Cu) {
        ctx->pc = 0x13A190u;
        goto label_13a190;
    }
    ctx->pc = 0x13A188u;
    {
        const bool branch_taken_0x13a188 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13a188) {
            ctx->pc = 0x13A1C8u;
            goto label_13a1c8;
        }
    }
    ctx->pc = 0x13A190u;
label_13a190:
    // 0x13a190: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x13a190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13a194:
    // 0x13a194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a198:
    // 0x13a198: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x13a198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_13a19c:
    // 0x13a19c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a1a0:
    // 0x13a1a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a1a4:
    // 0x13a1a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x13a1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_13a1a8:
    // 0x13a1a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a1ac:
    // 0x13a1ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x13a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_13a1b0:
    // 0x13a1b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a1b4:
    // 0x13a1b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x13a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_13a1b8:
    // 0x13a1b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a1bc:
    // 0x13a1bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_13a1c0:
    // 0x13a1c0: 0x10000043  b           . + 4 + (0x43 << 2)
label_13a1c4:
    if (ctx->pc == 0x13A1C4u) {
        ctx->pc = 0x13A1C8u;
        goto label_13a1c8;
    }
    ctx->pc = 0x13A1C0u;
    {
        const bool branch_taken_0x13a1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1c0) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x13A1C8u;
label_13a1c8:
    // 0x13a1c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a1cc:
    // 0x13a1cc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13a1ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_13a1d0:
    // 0x13a1d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_13a1d4:
    if (ctx->pc == 0x13A1D4u) {
        ctx->pc = 0x13A1D8u;
        goto label_13a1d8;
    }
    ctx->pc = 0x13A1D0u;
    {
        const bool branch_taken_0x13a1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1d0) {
            ctx->pc = 0x13A1ECu;
            goto label_13a1ec;
        }
    }
    ctx->pc = 0x13A1D8u;
label_13a1d8:
    // 0x13a1d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13a1dc:
    // 0x13a1dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a1e0:
    // 0x13a1e0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x13a1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_13a1e4:
    // 0x13a1e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_13a1e8:
    if (ctx->pc == 0x13A1E8u) {
        ctx->pc = 0x13A1ECu;
        goto label_13a1ec;
    }
    ctx->pc = 0x13A1E4u;
    {
        const bool branch_taken_0x13a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1e4) {
            ctx->pc = 0x13A1F8u;
            goto label_13a1f8;
        }
    }
    ctx->pc = 0x13A1ECu;
label_13a1ec:
    // 0x13a1ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x13a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13a1f0:
    // 0x13a1f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a1f4:
    // 0x13a1f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x13a1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_13a1f8:
    // 0x13a1f8: 0x10000035  b           . + 4 + (0x35 << 2)
label_13a1fc:
    if (ctx->pc == 0x13A1FCu) {
        ctx->pc = 0x13A200u;
        goto label_13a200;
    }
    ctx->pc = 0x13A1F8u;
    {
        const bool branch_taken_0x13a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1f8) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x13A200u;
label_13a200:
    // 0x13a200: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_13a204:
    // 0x13a204: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_13a208:
    // 0x13a208: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13a208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_13a20c:
    // 0x13a20c: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_13a210:
    // 0x13a210: 0x240600a9  addiu       $a2, $zero, 0xA9
    ctx->pc = 0x13a210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_13a214:
    // 0x13a214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13a214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a218:
    // 0x13a218: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13a218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_13a21c:
    // 0x13a21c: 0xc0965d0  jal         func_259740
label_13a220:
    if (ctx->pc == 0x13A220u) {
        ctx->pc = 0x13A224u;
        goto label_13a224;
    }
    ctx->pc = 0x13A21Cu;
    SET_GPR_U32(ctx, 31, 0x13A224u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13A21Cu, 0x13A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A224u;
label_13a224:
    // 0x13a224: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a228:
    // 0x13a228: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x13a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a22c:
    // 0x13a22c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a230:
    // 0x13a230: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x13a230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_13a234:
    // 0x13a234: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a238:
    // 0x13a238: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_13a23c:
    // 0x13a23c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a240:
    // 0x13a240: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13a244:
    // 0x13a244: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a248:
    // 0x13a248: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13a248u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a24c:
    // 0x13a24c: 0xc096b40  jal         func_25AD00
label_13a250:
    if (ctx->pc == 0x13A250u) {
        ctx->pc = 0x13A254u;
        goto label_13a254;
    }
    ctx->pc = 0x13A24Cu;
    SET_GPR_U32(ctx, 31, 0x13A254u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13A24Cu, 0x13A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A254u;
label_13a254:
    // 0x13a254: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a258:
    // 0x13a258: 0xc05cd10  jal         func_173440
label_13a25c:
    if (ctx->pc == 0x13A25Cu) {
        ctx->pc = 0x13A260u;
        goto label_13a260;
    }
    ctx->pc = 0x13A258u;
    SET_GPR_U32(ctx, 31, 0x13A260u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13A258u, 0x13A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A260u;
label_13a260:
    // 0x13a260: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a264:
    // 0x13a264: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a268:
    // 0x13a268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a26c:
    // 0x13a26c: 0xc0573d8  jal         func_15CF60
label_13a270:
    if (ctx->pc == 0x13A270u) {
        ctx->pc = 0x13A274u;
        goto label_13a274;
    }
    ctx->pc = 0x13A26Cu;
    SET_GPR_U32(ctx, 31, 0x13A274u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13A26Cu, 0x13A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A274u;
label_13a274:
    // 0x13a274: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13a274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a278:
    // 0x13a278: 0xc097530  jal         func_25D4C0
label_13a27c:
    if (ctx->pc == 0x13A27Cu) {
        ctx->pc = 0x13A280u;
        goto label_13a280;
    }
    ctx->pc = 0x13A278u;
    SET_GPR_U32(ctx, 31, 0x13A280u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13A278u, 0x13A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A280u;
label_13a280:
    // 0x13a280: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a284:
    // 0x13a284: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13a284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_13a288:
    // 0x13a288: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_13a28c:
    if (ctx->pc == 0x13A28Cu) {
        ctx->pc = 0x13A290u;
        goto label_13a290;
    }
    ctx->pc = 0x13A288u;
    {
        const bool branch_taken_0x13a288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a288) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x13A290u;
label_13a290:
    // 0x13a290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a294:
    // 0x13a294: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a298:
    // 0x13a298: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x13a298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_13a29c:
    // 0x13a29c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a2a0:
    // 0x13a2a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x13a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_13a2a4:
    // 0x13a2a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a2a8:
    // 0x13a2a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x13a2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_13a2ac:
    // 0x13a2ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a2b0:
    // 0x13a2b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x13a2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_13a2b4:
    // 0x13a2b4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x13a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_13a2b8:
    // 0x13a2b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a2bc:
    // 0x13a2bc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x13a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_13a2c0:
    // 0x13a2c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a2c4:
    // 0x13a2c4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x13a2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_13a2c8:
    // 0x13a2c8: 0x10000001  b           . + 4 + (0x1 << 2)
label_13a2cc:
    if (ctx->pc == 0x13A2CCu) {
        ctx->pc = 0x13A2D0u;
        goto label_13a2d0;
    }
    ctx->pc = 0x13A2C8u;
    {
        const bool branch_taken_0x13a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a2c8) {
            ctx->pc = 0x13A2D0u;
            goto label_13a2d0;
        }
    }
    ctx->pc = 0x13A2D0u;
label_13a2d0:
    // 0x13a2d0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x13a2d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13a2d4:
    // 0x13a2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13a2d8:
    // 0x13a2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13a2dc:
    // 0x13a2dc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13a2dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13a2e0:
    // 0x13a2e0: 0x3e00008  jr          $ra
label_13a2e4:
    if (ctx->pc == 0x13A2E4u) {
        ctx->pc = 0x13A2E8u;
        goto label_fallthrough_0x13a2e0;
    }
    ctx->pc = 0x13A2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13a2e0:
    ctx->pc = 0x13A2E8u;
}
