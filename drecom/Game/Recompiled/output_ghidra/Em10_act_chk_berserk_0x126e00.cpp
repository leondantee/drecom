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

// Function: Em10_act_chk_berserk
// Address: 0x126e00 - 0x127390
void Em10_act_chk_berserk_0x126e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_berserk_0x126e00");
#endif

    switch (ctx->pc) {
        case 0x126e00u: goto label_126e00;
        case 0x126e04u: goto label_126e04;
        case 0x126e08u: goto label_126e08;
        case 0x126e0cu: goto label_126e0c;
        case 0x126e10u: goto label_126e10;
        case 0x126e14u: goto label_126e14;
        case 0x126e18u: goto label_126e18;
        case 0x126e1cu: goto label_126e1c;
        case 0x126e20u: goto label_126e20;
        case 0x126e24u: goto label_126e24;
        case 0x126e28u: goto label_126e28;
        case 0x126e2cu: goto label_126e2c;
        case 0x126e30u: goto label_126e30;
        case 0x126e34u: goto label_126e34;
        case 0x126e38u: goto label_126e38;
        case 0x126e3cu: goto label_126e3c;
        case 0x126e40u: goto label_126e40;
        case 0x126e44u: goto label_126e44;
        case 0x126e48u: goto label_126e48;
        case 0x126e4cu: goto label_126e4c;
        case 0x126e50u: goto label_126e50;
        case 0x126e54u: goto label_126e54;
        case 0x126e58u: goto label_126e58;
        case 0x126e5cu: goto label_126e5c;
        case 0x126e60u: goto label_126e60;
        case 0x126e64u: goto label_126e64;
        case 0x126e68u: goto label_126e68;
        case 0x126e6cu: goto label_126e6c;
        case 0x126e70u: goto label_126e70;
        case 0x126e74u: goto label_126e74;
        case 0x126e78u: goto label_126e78;
        case 0x126e7cu: goto label_126e7c;
        case 0x126e80u: goto label_126e80;
        case 0x126e84u: goto label_126e84;
        case 0x126e88u: goto label_126e88;
        case 0x126e8cu: goto label_126e8c;
        case 0x126e90u: goto label_126e90;
        case 0x126e94u: goto label_126e94;
        case 0x126e98u: goto label_126e98;
        case 0x126e9cu: goto label_126e9c;
        case 0x126ea0u: goto label_126ea0;
        case 0x126ea4u: goto label_126ea4;
        case 0x126ea8u: goto label_126ea8;
        case 0x126eacu: goto label_126eac;
        case 0x126eb0u: goto label_126eb0;
        case 0x126eb4u: goto label_126eb4;
        case 0x126eb8u: goto label_126eb8;
        case 0x126ebcu: goto label_126ebc;
        case 0x126ec0u: goto label_126ec0;
        case 0x126ec4u: goto label_126ec4;
        case 0x126ec8u: goto label_126ec8;
        case 0x126eccu: goto label_126ecc;
        case 0x126ed0u: goto label_126ed0;
        case 0x126ed4u: goto label_126ed4;
        case 0x126ed8u: goto label_126ed8;
        case 0x126edcu: goto label_126edc;
        case 0x126ee0u: goto label_126ee0;
        case 0x126ee4u: goto label_126ee4;
        case 0x126ee8u: goto label_126ee8;
        case 0x126eecu: goto label_126eec;
        case 0x126ef0u: goto label_126ef0;
        case 0x126ef4u: goto label_126ef4;
        case 0x126ef8u: goto label_126ef8;
        case 0x126efcu: goto label_126efc;
        case 0x126f00u: goto label_126f00;
        case 0x126f04u: goto label_126f04;
        case 0x126f08u: goto label_126f08;
        case 0x126f0cu: goto label_126f0c;
        case 0x126f10u: goto label_126f10;
        case 0x126f14u: goto label_126f14;
        case 0x126f18u: goto label_126f18;
        case 0x126f1cu: goto label_126f1c;
        case 0x126f20u: goto label_126f20;
        case 0x126f24u: goto label_126f24;
        case 0x126f28u: goto label_126f28;
        case 0x126f2cu: goto label_126f2c;
        case 0x126f30u: goto label_126f30;
        case 0x126f34u: goto label_126f34;
        case 0x126f38u: goto label_126f38;
        case 0x126f3cu: goto label_126f3c;
        case 0x126f40u: goto label_126f40;
        case 0x126f44u: goto label_126f44;
        case 0x126f48u: goto label_126f48;
        case 0x126f4cu: goto label_126f4c;
        case 0x126f50u: goto label_126f50;
        case 0x126f54u: goto label_126f54;
        case 0x126f58u: goto label_126f58;
        case 0x126f5cu: goto label_126f5c;
        case 0x126f60u: goto label_126f60;
        case 0x126f64u: goto label_126f64;
        case 0x126f68u: goto label_126f68;
        case 0x126f6cu: goto label_126f6c;
        case 0x126f70u: goto label_126f70;
        case 0x126f74u: goto label_126f74;
        case 0x126f78u: goto label_126f78;
        case 0x126f7cu: goto label_126f7c;
        case 0x126f80u: goto label_126f80;
        case 0x126f84u: goto label_126f84;
        case 0x126f88u: goto label_126f88;
        case 0x126f8cu: goto label_126f8c;
        case 0x126f90u: goto label_126f90;
        case 0x126f94u: goto label_126f94;
        case 0x126f98u: goto label_126f98;
        case 0x126f9cu: goto label_126f9c;
        case 0x126fa0u: goto label_126fa0;
        case 0x126fa4u: goto label_126fa4;
        case 0x126fa8u: goto label_126fa8;
        case 0x126facu: goto label_126fac;
        case 0x126fb0u: goto label_126fb0;
        case 0x126fb4u: goto label_126fb4;
        case 0x126fb8u: goto label_126fb8;
        case 0x126fbcu: goto label_126fbc;
        case 0x126fc0u: goto label_126fc0;
        case 0x126fc4u: goto label_126fc4;
        case 0x126fc8u: goto label_126fc8;
        case 0x126fccu: goto label_126fcc;
        case 0x126fd0u: goto label_126fd0;
        case 0x126fd4u: goto label_126fd4;
        case 0x126fd8u: goto label_126fd8;
        case 0x126fdcu: goto label_126fdc;
        case 0x126fe0u: goto label_126fe0;
        case 0x126fe4u: goto label_126fe4;
        case 0x126fe8u: goto label_126fe8;
        case 0x126fecu: goto label_126fec;
        case 0x126ff0u: goto label_126ff0;
        case 0x126ff4u: goto label_126ff4;
        case 0x126ff8u: goto label_126ff8;
        case 0x126ffcu: goto label_126ffc;
        case 0x127000u: goto label_127000;
        case 0x127004u: goto label_127004;
        case 0x127008u: goto label_127008;
        case 0x12700cu: goto label_12700c;
        case 0x127010u: goto label_127010;
        case 0x127014u: goto label_127014;
        case 0x127018u: goto label_127018;
        case 0x12701cu: goto label_12701c;
        case 0x127020u: goto label_127020;
        case 0x127024u: goto label_127024;
        case 0x127028u: goto label_127028;
        case 0x12702cu: goto label_12702c;
        case 0x127030u: goto label_127030;
        case 0x127034u: goto label_127034;
        case 0x127038u: goto label_127038;
        case 0x12703cu: goto label_12703c;
        case 0x127040u: goto label_127040;
        case 0x127044u: goto label_127044;
        case 0x127048u: goto label_127048;
        case 0x12704cu: goto label_12704c;
        case 0x127050u: goto label_127050;
        case 0x127054u: goto label_127054;
        case 0x127058u: goto label_127058;
        case 0x12705cu: goto label_12705c;
        case 0x127060u: goto label_127060;
        case 0x127064u: goto label_127064;
        case 0x127068u: goto label_127068;
        case 0x12706cu: goto label_12706c;
        case 0x127070u: goto label_127070;
        case 0x127074u: goto label_127074;
        case 0x127078u: goto label_127078;
        case 0x12707cu: goto label_12707c;
        case 0x127080u: goto label_127080;
        case 0x127084u: goto label_127084;
        case 0x127088u: goto label_127088;
        case 0x12708cu: goto label_12708c;
        case 0x127090u: goto label_127090;
        case 0x127094u: goto label_127094;
        case 0x127098u: goto label_127098;
        case 0x12709cu: goto label_12709c;
        case 0x1270a0u: goto label_1270a0;
        case 0x1270a4u: goto label_1270a4;
        case 0x1270a8u: goto label_1270a8;
        case 0x1270acu: goto label_1270ac;
        case 0x1270b0u: goto label_1270b0;
        case 0x1270b4u: goto label_1270b4;
        case 0x1270b8u: goto label_1270b8;
        case 0x1270bcu: goto label_1270bc;
        case 0x1270c0u: goto label_1270c0;
        case 0x1270c4u: goto label_1270c4;
        case 0x1270c8u: goto label_1270c8;
        case 0x1270ccu: goto label_1270cc;
        case 0x1270d0u: goto label_1270d0;
        case 0x1270d4u: goto label_1270d4;
        case 0x1270d8u: goto label_1270d8;
        case 0x1270dcu: goto label_1270dc;
        case 0x1270e0u: goto label_1270e0;
        case 0x1270e4u: goto label_1270e4;
        case 0x1270e8u: goto label_1270e8;
        case 0x1270ecu: goto label_1270ec;
        case 0x1270f0u: goto label_1270f0;
        case 0x1270f4u: goto label_1270f4;
        case 0x1270f8u: goto label_1270f8;
        case 0x1270fcu: goto label_1270fc;
        case 0x127100u: goto label_127100;
        case 0x127104u: goto label_127104;
        case 0x127108u: goto label_127108;
        case 0x12710cu: goto label_12710c;
        case 0x127110u: goto label_127110;
        case 0x127114u: goto label_127114;
        case 0x127118u: goto label_127118;
        case 0x12711cu: goto label_12711c;
        case 0x127120u: goto label_127120;
        case 0x127124u: goto label_127124;
        case 0x127128u: goto label_127128;
        case 0x12712cu: goto label_12712c;
        case 0x127130u: goto label_127130;
        case 0x127134u: goto label_127134;
        case 0x127138u: goto label_127138;
        case 0x12713cu: goto label_12713c;
        case 0x127140u: goto label_127140;
        case 0x127144u: goto label_127144;
        case 0x127148u: goto label_127148;
        case 0x12714cu: goto label_12714c;
        case 0x127150u: goto label_127150;
        case 0x127154u: goto label_127154;
        case 0x127158u: goto label_127158;
        case 0x12715cu: goto label_12715c;
        case 0x127160u: goto label_127160;
        case 0x127164u: goto label_127164;
        case 0x127168u: goto label_127168;
        case 0x12716cu: goto label_12716c;
        case 0x127170u: goto label_127170;
        case 0x127174u: goto label_127174;
        case 0x127178u: goto label_127178;
        case 0x12717cu: goto label_12717c;
        case 0x127180u: goto label_127180;
        case 0x127184u: goto label_127184;
        case 0x127188u: goto label_127188;
        case 0x12718cu: goto label_12718c;
        case 0x127190u: goto label_127190;
        case 0x127194u: goto label_127194;
        case 0x127198u: goto label_127198;
        case 0x12719cu: goto label_12719c;
        case 0x1271a0u: goto label_1271a0;
        case 0x1271a4u: goto label_1271a4;
        case 0x1271a8u: goto label_1271a8;
        case 0x1271acu: goto label_1271ac;
        case 0x1271b0u: goto label_1271b0;
        case 0x1271b4u: goto label_1271b4;
        case 0x1271b8u: goto label_1271b8;
        case 0x1271bcu: goto label_1271bc;
        case 0x1271c0u: goto label_1271c0;
        case 0x1271c4u: goto label_1271c4;
        case 0x1271c8u: goto label_1271c8;
        case 0x1271ccu: goto label_1271cc;
        case 0x1271d0u: goto label_1271d0;
        case 0x1271d4u: goto label_1271d4;
        case 0x1271d8u: goto label_1271d8;
        case 0x1271dcu: goto label_1271dc;
        case 0x1271e0u: goto label_1271e0;
        case 0x1271e4u: goto label_1271e4;
        case 0x1271e8u: goto label_1271e8;
        case 0x1271ecu: goto label_1271ec;
        case 0x1271f0u: goto label_1271f0;
        case 0x1271f4u: goto label_1271f4;
        case 0x1271f8u: goto label_1271f8;
        case 0x1271fcu: goto label_1271fc;
        case 0x127200u: goto label_127200;
        case 0x127204u: goto label_127204;
        case 0x127208u: goto label_127208;
        case 0x12720cu: goto label_12720c;
        case 0x127210u: goto label_127210;
        case 0x127214u: goto label_127214;
        case 0x127218u: goto label_127218;
        case 0x12721cu: goto label_12721c;
        case 0x127220u: goto label_127220;
        case 0x127224u: goto label_127224;
        case 0x127228u: goto label_127228;
        case 0x12722cu: goto label_12722c;
        case 0x127230u: goto label_127230;
        case 0x127234u: goto label_127234;
        case 0x127238u: goto label_127238;
        case 0x12723cu: goto label_12723c;
        case 0x127240u: goto label_127240;
        case 0x127244u: goto label_127244;
        case 0x127248u: goto label_127248;
        case 0x12724cu: goto label_12724c;
        case 0x127250u: goto label_127250;
        case 0x127254u: goto label_127254;
        case 0x127258u: goto label_127258;
        case 0x12725cu: goto label_12725c;
        case 0x127260u: goto label_127260;
        case 0x127264u: goto label_127264;
        case 0x127268u: goto label_127268;
        case 0x12726cu: goto label_12726c;
        case 0x127270u: goto label_127270;
        case 0x127274u: goto label_127274;
        case 0x127278u: goto label_127278;
        case 0x12727cu: goto label_12727c;
        case 0x127280u: goto label_127280;
        case 0x127284u: goto label_127284;
        case 0x127288u: goto label_127288;
        case 0x12728cu: goto label_12728c;
        case 0x127290u: goto label_127290;
        case 0x127294u: goto label_127294;
        case 0x127298u: goto label_127298;
        case 0x12729cu: goto label_12729c;
        case 0x1272a0u: goto label_1272a0;
        case 0x1272a4u: goto label_1272a4;
        case 0x1272a8u: goto label_1272a8;
        case 0x1272acu: goto label_1272ac;
        case 0x1272b0u: goto label_1272b0;
        case 0x1272b4u: goto label_1272b4;
        case 0x1272b8u: goto label_1272b8;
        case 0x1272bcu: goto label_1272bc;
        case 0x1272c0u: goto label_1272c0;
        case 0x1272c4u: goto label_1272c4;
        case 0x1272c8u: goto label_1272c8;
        case 0x1272ccu: goto label_1272cc;
        case 0x1272d0u: goto label_1272d0;
        case 0x1272d4u: goto label_1272d4;
        case 0x1272d8u: goto label_1272d8;
        case 0x1272dcu: goto label_1272dc;
        case 0x1272e0u: goto label_1272e0;
        case 0x1272e4u: goto label_1272e4;
        case 0x1272e8u: goto label_1272e8;
        case 0x1272ecu: goto label_1272ec;
        case 0x1272f0u: goto label_1272f0;
        case 0x1272f4u: goto label_1272f4;
        case 0x1272f8u: goto label_1272f8;
        case 0x1272fcu: goto label_1272fc;
        case 0x127300u: goto label_127300;
        case 0x127304u: goto label_127304;
        case 0x127308u: goto label_127308;
        case 0x12730cu: goto label_12730c;
        case 0x127310u: goto label_127310;
        case 0x127314u: goto label_127314;
        case 0x127318u: goto label_127318;
        case 0x12731cu: goto label_12731c;
        case 0x127320u: goto label_127320;
        case 0x127324u: goto label_127324;
        case 0x127328u: goto label_127328;
        case 0x12732cu: goto label_12732c;
        case 0x127330u: goto label_127330;
        case 0x127334u: goto label_127334;
        case 0x127338u: goto label_127338;
        case 0x12733cu: goto label_12733c;
        case 0x127340u: goto label_127340;
        case 0x127344u: goto label_127344;
        case 0x127348u: goto label_127348;
        case 0x12734cu: goto label_12734c;
        case 0x127350u: goto label_127350;
        case 0x127354u: goto label_127354;
        case 0x127358u: goto label_127358;
        case 0x12735cu: goto label_12735c;
        case 0x127360u: goto label_127360;
        case 0x127364u: goto label_127364;
        case 0x127368u: goto label_127368;
        case 0x12736cu: goto label_12736c;
        case 0x127370u: goto label_127370;
        case 0x127374u: goto label_127374;
        case 0x127378u: goto label_127378;
        case 0x12737cu: goto label_12737c;
        case 0x127380u: goto label_127380;
        case 0x127384u: goto label_127384;
        case 0x127388u: goto label_127388;
        case 0x12738cu: goto label_12738c;
        default: break;
    }

    ctx->pc = 0x126e00u;

label_126e00:
    // 0x126e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x126e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_126e04:
    // 0x126e04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x126e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_126e08:
    // 0x126e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x126e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_126e0c:
    // 0x126e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126e10:
    // 0x126e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_126e14:
    // 0x126e14: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x126e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_126e18:
    // 0x126e18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x126e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126e1c:
    // 0x126e1c: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x126e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_126e20:
    // 0x126e20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126e24:
    // 0x126e24: 0xc05cdd8  jal         func_173760
label_126e28:
    if (ctx->pc == 0x126E28u) {
        ctx->pc = 0x126E2Cu;
        goto label_126e2c;
    }
    ctx->pc = 0x126E24u;
    SET_GPR_U32(ctx, 31, 0x126E2Cu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x126E24u, 0x126E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E2Cu;
label_126e2c:
    // 0x126e2c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x126e2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_126e30:
    // 0x126e30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126e34:
    // 0x126e34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x126e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126e38:
    // 0x126e38: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x126e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_126e3c:
    // 0x126e3c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x126e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_126e40:
    // 0x126e40: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x126e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_126e44:
    // 0x126e44: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x126e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_126e48:
    // 0x126e48: 0xc05cc90  jal         func_173240
label_126e4c:
    if (ctx->pc == 0x126E4Cu) {
        ctx->pc = 0x126E50u;
        goto label_126e50;
    }
    ctx->pc = 0x126E48u;
    SET_GPR_U32(ctx, 31, 0x126E50u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x126E48u, 0x126E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E50u;
label_126e50:
    // 0x126e50: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x126e50u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_126e54:
    // 0x126e54: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x126e54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_126e58:
    // 0x126e58: 0x10200146  beqz        $at, . + 4 + (0x146 << 2)
label_126e5c:
    if (ctx->pc == 0x126E5Cu) {
        ctx->pc = 0x126E60u;
        goto label_126e60;
    }
    ctx->pc = 0x126E58u;
    {
        const bool branch_taken_0x126e58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126e58) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x126E60u;
label_126e60:
    // 0x126e60: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x126e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_126e64:
    // 0x126e64: 0x2464e2c0  addiu       $a0, $v1, -0x1D40
    ctx->pc = 0x126e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959808));
label_126e68:
    // 0x126e68: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x126e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_126e6c:
    // 0x126e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x126e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_126e70:
    // 0x126e70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x126e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126e74:
    // 0x126e74: 0x600008  jr          $v1
label_126e78:
    if (ctx->pc == 0x126E78u) {
        ctx->pc = 0x126E7Cu;
        goto label_126e7c;
    }
    ctx->pc = 0x126E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x126E7Cu;
label_126e7c:
    // 0x126e7c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x126e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_126e80:
    // 0x126e80: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x126e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_126e84:
    // 0x126e84: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_126e88:
    if (ctx->pc == 0x126E88u) {
        ctx->pc = 0x126E8Cu;
        goto label_126e8c;
    }
    ctx->pc = 0x126E84u;
    {
        const bool branch_taken_0x126e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126e84) {
            ctx->pc = 0x126E9Cu;
            goto label_126e9c;
        }
    }
    ctx->pc = 0x126E8Cu;
label_126e8c:
    // 0x126e8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126e90:
    // 0x126e90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x126e90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_126e94:
    // 0x126e94: 0x10600137  beqz        $v1, . + 4 + (0x137 << 2)
label_126e98:
    if (ctx->pc == 0x126E98u) {
        ctx->pc = 0x126E9Cu;
        goto label_126e9c;
    }
    ctx->pc = 0x126E94u;
    {
        const bool branch_taken_0x126e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126e94) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x126E9Cu;
label_126e9c:
    // 0x126e9c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x126e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_126ea0:
    // 0x126ea0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_126ea4:
    if (ctx->pc == 0x126EA4u) {
        ctx->pc = 0x126EA8u;
        goto label_126ea8;
    }
    ctx->pc = 0x126EA0u;
    {
        const bool branch_taken_0x126ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ea0) {
            ctx->pc = 0x126EE4u;
            goto label_126ee4;
        }
    }
    ctx->pc = 0x126EA8u;
label_126ea8:
    // 0x126ea8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126eac:
    // 0x126eac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126eb0:
    // 0x126eb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126eb4:
    // 0x126eb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x126eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_126eb8:
    // 0x126eb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ebc:
    // 0x126ebc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126ec0:
    // 0x126ec0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ec4:
    // 0x126ec4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126ec8:
    // 0x126ec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ecc:
    // 0x126ecc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126ed0:
    // 0x126ed0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x126ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_126ed4:
    // 0x126ed4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ed8:
    // 0x126ed8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x126ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_126edc:
    // 0x126edc: 0x10000125  b           . + 4 + (0x125 << 2)
label_126ee0:
    if (ctx->pc == 0x126EE0u) {
        ctx->pc = 0x126EE4u;
        goto label_126ee4;
    }
    ctx->pc = 0x126EDCu;
    {
        const bool branch_taken_0x126edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126edc) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x126EE4u;
label_126ee4:
    // 0x126ee4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x126ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_126ee8:
    // 0x126ee8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x126ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_126eec:
    // 0x126eec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_126ef0:
    if (ctx->pc == 0x126EF0u) {
        ctx->pc = 0x126EF4u;
        goto label_126ef4;
    }
    ctx->pc = 0x126EECu;
    {
        const bool branch_taken_0x126eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126eec) {
            ctx->pc = 0x126F0Cu;
            goto label_126f0c;
        }
    }
    ctx->pc = 0x126EF4u;
label_126ef4:
    // 0x126ef4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x126ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_126ef8:
    // 0x126ef8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x126ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_126efc:
    // 0x126efc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x126efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_126f00:
    // 0x126f00: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x126f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_126f04:
    // 0x126f04: 0x1000011b  b           . + 4 + (0x11B << 2)
label_126f08:
    if (ctx->pc == 0x126F08u) {
        ctx->pc = 0x126F0Cu;
        goto label_126f0c;
    }
    ctx->pc = 0x126F04u;
    {
        const bool branch_taken_0x126f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126f04) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x126F0Cu;
label_126f0c:
    // 0x126f0c: 0xc067694  jal         func_19DA50
label_126f10:
    if (ctx->pc == 0x126F10u) {
        ctx->pc = 0x126F14u;
        goto label_126f14;
    }
    ctx->pc = 0x126F0Cu;
    SET_GPR_U32(ctx, 31, 0x126F14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x126F0Cu, 0x126F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F14u;
label_126f14:
    // 0x126f14: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x126f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_126f18:
    // 0x126f18: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x126f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_126f1c:
    // 0x126f1c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x126f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_126f20:
    // 0x126f20: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_126f24:
    if (ctx->pc == 0x126F24u) {
        ctx->pc = 0x126F28u;
        goto label_126f28;
    }
    ctx->pc = 0x126F20u;
    {
        const bool branch_taken_0x126f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126f20) {
            ctx->pc = 0x126F64u;
            goto label_126f64;
        }
    }
    ctx->pc = 0x126F28u;
label_126f28:
    // 0x126f28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126f2c:
    // 0x126f2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126f30:
    // 0x126f30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126f34:
    // 0x126f34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x126f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_126f38:
    // 0x126f38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126f3c:
    // 0x126f3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126f40:
    // 0x126f40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126f44:
    // 0x126f44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126f48:
    // 0x126f48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126f4c:
    // 0x126f4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126f50:
    // 0x126f50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126f54:
    // 0x126f54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126f58:
    // 0x126f58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x126f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_126f5c:
    // 0x126f5c: 0x10000105  b           . + 4 + (0x105 << 2)
label_126f60:
    if (ctx->pc == 0x126F60u) {
        ctx->pc = 0x126F64u;
        goto label_126f64;
    }
    ctx->pc = 0x126F5Cu;
    {
        const bool branch_taken_0x126f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126f5c) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x126F64u;
label_126f64:
    // 0x126f64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126f68:
    // 0x126f68: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x126f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_126f6c:
    // 0x126f6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x126f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_126f70:
    // 0x126f70: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x126f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_126f74:
    // 0x126f74: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_126f78:
    if (ctx->pc == 0x126F78u) {
        ctx->pc = 0x126F7Cu;
        goto label_126f7c;
    }
    ctx->pc = 0x126F74u;
    {
        const bool branch_taken_0x126f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126f74) {
            ctx->pc = 0x12712Cu;
            goto label_12712c;
        }
    }
    ctx->pc = 0x126F7Cu;
label_126f7c:
    // 0x126f7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126f80:
    // 0x126f80: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126f84:
    // 0x126f84: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x126f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_126f88:
    // 0x126f88: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x126f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_126f8c:
    // 0x126f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126f90:
    // 0x126f90: 0x0  nop
    ctx->pc = 0x126f90u;
    // NOP
label_126f94:
    // 0x126f94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126f98:
    // 0x126f98: 0x0  nop
    ctx->pc = 0x126f98u;
    // NOP
label_126f9c:
    // 0x126f9c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_126fa0:
    if (ctx->pc == 0x126FA0u) {
        ctx->pc = 0x126FA4u;
        goto label_126fa4;
    }
    ctx->pc = 0x126F9Cu;
    {
        const bool branch_taken_0x126f9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126f9c) {
            ctx->pc = 0x126FE8u;
            goto label_126fe8;
        }
    }
    ctx->pc = 0x126FA4u;
label_126fa4:
    // 0x126fa4: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x126fa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_126fa8:
    // 0x126fa8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_126fac:
    if (ctx->pc == 0x126FACu) {
        ctx->pc = 0x126FB0u;
        goto label_126fb0;
    }
    ctx->pc = 0x126FA8u;
    {
        const bool branch_taken_0x126fa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fa8) {
            ctx->pc = 0x126FE0u;
            goto label_126fe0;
        }
    }
    ctx->pc = 0x126FB0u;
label_126fb0:
    // 0x126fb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126fb4:
    // 0x126fb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126fb8:
    // 0x126fb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126fbc:
    // 0x126fbc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x126fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_126fc0:
    // 0x126fc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126fc4:
    // 0x126fc4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126fc8:
    // 0x126fc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126fcc:
    // 0x126fcc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126fd0:
    // 0x126fd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126fd4:
    // 0x126fd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126fd8:
    // 0x126fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126fdc:
    // 0x126fdc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126fe0:
    // 0x126fe0: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_126fe4:
    if (ctx->pc == 0x126FE4u) {
        ctx->pc = 0x126FE8u;
        goto label_126fe8;
    }
    ctx->pc = 0x126FE0u;
    {
        const bool branch_taken_0x126fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fe0) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x126FE8u;
label_126fe8:
    // 0x126fe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126fec:
    // 0x126fec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126ff0:
    // 0x126ff0: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x126ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_126ff4:
    // 0x126ff4: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x126ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_126ff8:
    // 0x126ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126ffc:
    // 0x126ffc: 0x0  nop
    ctx->pc = 0x126ffcu;
    // NOP
label_127000:
    // 0x127000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127004:
    // 0x127004: 0x0  nop
    ctx->pc = 0x127004u;
    // NOP
label_127008:
    // 0x127008: 0x450000da  bc1f        . + 4 + (0xDA << 2)
label_12700c:
    if (ctx->pc == 0x12700Cu) {
        ctx->pc = 0x127010u;
        goto label_127010;
    }
    ctx->pc = 0x127008u;
    {
        const bool branch_taken_0x127008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127008) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x127010u;
label_127010:
    // 0x127010: 0xc067694  jal         func_19DA50
label_127014:
    if (ctx->pc == 0x127014u) {
        ctx->pc = 0x127018u;
        goto label_127018;
    }
    ctx->pc = 0x127010u;
    SET_GPR_U32(ctx, 31, 0x127018u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127010u, 0x127018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127018u;
label_127018:
    // 0x127018: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12701c:
    // 0x12701c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x12701cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127020:
    // 0x127020: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x127020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_127024:
    // 0x127024: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_127028:
    if (ctx->pc == 0x127028u) {
        ctx->pc = 0x12702Cu;
        goto label_12702c;
    }
    ctx->pc = 0x127024u;
    {
        const bool branch_taken_0x127024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127024) {
            ctx->pc = 0x127124u;
            goto label_127124;
        }
    }
    ctx->pc = 0x12702Cu;
label_12702c:
    // 0x12702c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12702cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_127030:
    // 0x127030: 0x2464e2a0  addiu       $a0, $v1, -0x1D60
    ctx->pc = 0x127030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959776));
label_127034:
    // 0x127034: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x127034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_127038:
    // 0x127038: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x127038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12703c:
    // 0x12703c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_127040:
    // 0x127040: 0x600008  jr          $v1
label_127044:
    if (ctx->pc == 0x127044u) {
        ctx->pc = 0x127048u;
        goto label_127048;
    }
    ctx->pc = 0x127040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127040u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127048u;
label_127048:
    // 0x127048: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12704c:
    // 0x12704c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127050:
    // 0x127050: 0xc05d25c  jal         func_174970
label_127054:
    if (ctx->pc == 0x127054u) {
        ctx->pc = 0x127058u;
        goto label_127058;
    }
    ctx->pc = 0x127050u;
    SET_GPR_U32(ctx, 31, 0x127058u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127050u, 0x127058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127058u;
label_127058:
    // 0x127058: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_12705c:
    if (ctx->pc == 0x12705Cu) {
        ctx->pc = 0x127060u;
        goto label_127060;
    }
    ctx->pc = 0x127058u;
    {
        const bool branch_taken_0x127058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127058) {
            ctx->pc = 0x127124u;
            goto label_127124;
        }
    }
    ctx->pc = 0x127060u;
label_127060:
    // 0x127060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127064:
    // 0x127064: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127068:
    // 0x127068: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_12706c:
    // 0x12706c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12706cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127070:
    // 0x127070: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127074:
    // 0x127074: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127078:
    // 0x127078: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12707c:
    // 0x12707c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12707cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127080:
    // 0x127080: 0x0  nop
    ctx->pc = 0x127080u;
    // NOP
label_127084:
    // 0x127084: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_127088:
    if (ctx->pc == 0x127088u) {
        ctx->pc = 0x12708Cu;
        goto label_12708c;
    }
    ctx->pc = 0x127084u;
    {
        const bool branch_taken_0x127084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127084) {
            ctx->pc = 0x127124u;
            goto label_127124;
        }
    }
    ctx->pc = 0x12708Cu;
label_12708c:
    // 0x12708c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127090:
    // 0x127090: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127094:
    // 0x127094: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127098:
    // 0x127098: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12709c:
    // 0x12709c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12709cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1270a0:
    // 0x1270a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1270a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1270a4:
    // 0x1270a4: 0x0  nop
    ctx->pc = 0x1270a4u;
    // NOP
label_1270a8:
    // 0x1270a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1270a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1270ac:
    // 0x1270ac: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1270acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1270b0:
    // 0x1270b0: 0x0  nop
    ctx->pc = 0x1270b0u;
    // NOP
label_1270b4:
    // 0x1270b4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_1270b8:
    if (ctx->pc == 0x1270B8u) {
        ctx->pc = 0x1270BCu;
        goto label_1270bc;
    }
    ctx->pc = 0x1270B4u;
    {
        const bool branch_taken_0x1270b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1270b4) {
            ctx->pc = 0x127124u;
            goto label_127124;
        }
    }
    ctx->pc = 0x1270BCu;
label_1270bc:
    // 0x1270bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1270bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1270c0:
    // 0x1270c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1270c4:
    // 0x1270c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1270c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1270c8:
    // 0x1270c8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1270c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1270cc:
    // 0x1270cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1270d0:
    // 0x1270d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1270d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1270d4:
    // 0x1270d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1270d8:
    // 0x1270d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1270d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1270dc:
    // 0x1270dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1270e0:
    // 0x1270e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1270e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1270e4:
    // 0x1270e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1270e8:
    // 0x1270e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1270e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1270ec:
    // 0x1270ec: 0x1000000d  b           . + 4 + (0xD << 2)
label_1270f0:
    if (ctx->pc == 0x1270F0u) {
        ctx->pc = 0x1270F4u;
        goto label_1270f4;
    }
    ctx->pc = 0x1270ECu;
    {
        const bool branch_taken_0x1270ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1270ec) {
            ctx->pc = 0x127124u;
            goto label_127124;
        }
    }
    ctx->pc = 0x1270F4u;
label_1270f4:
    // 0x1270f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1270f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1270f8:
    // 0x1270f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1270fc:
    // 0x1270fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1270fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127100:
    // 0x127100: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x127100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_127104:
    // 0x127104: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127108:
    // 0x127108: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12710c:
    // 0x12710c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127110:
    // 0x127110: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127114:
    // 0x127114: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127118:
    // 0x127118: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12711c:
    // 0x12711c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127120:
    // 0x127120: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127124:
    // 0x127124: 0x10000093  b           . + 4 + (0x93 << 2)
label_127128:
    if (ctx->pc == 0x127128u) {
        ctx->pc = 0x12712Cu;
        goto label_12712c;
    }
    ctx->pc = 0x127124u;
    {
        const bool branch_taken_0x127124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127124) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x12712Cu;
label_12712c:
    // 0x12712c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127130:
    // 0x127130: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127134:
    // 0x127134: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x127134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_127138:
    // 0x127138: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_12713c:
    // 0x12713c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12713cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127140:
    // 0x127140: 0x0  nop
    ctx->pc = 0x127140u;
    // NOP
label_127144:
    // 0x127144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127148:
    // 0x127148: 0x0  nop
    ctx->pc = 0x127148u;
    // NOP
label_12714c:
    // 0x12714c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_127150:
    if (ctx->pc == 0x127150u) {
        ctx->pc = 0x127154u;
        goto label_127154;
    }
    ctx->pc = 0x12714Cu;
    {
        const bool branch_taken_0x12714c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12714c) {
            ctx->pc = 0x12718Cu;
            goto label_12718c;
        }
    }
    ctx->pc = 0x127154u;
label_127154:
    // 0x127154: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127158:
    // 0x127158: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12715c:
    // 0x12715c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12715cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127160:
    // 0x127160: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x127160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_127164:
    // 0x127164: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127168:
    // 0x127168: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12716c:
    // 0x12716c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127170:
    // 0x127170: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127174:
    // 0x127174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127178:
    // 0x127178: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127178u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12717c:
    // 0x12717c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127180:
    // 0x127180: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127184:
    // 0x127184: 0x1000007b  b           . + 4 + (0x7B << 2)
label_127188:
    if (ctx->pc == 0x127188u) {
        ctx->pc = 0x12718Cu;
        goto label_12718c;
    }
    ctx->pc = 0x127184u;
    {
        const bool branch_taken_0x127184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127184) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x12718Cu;
label_12718c:
    // 0x12718c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127190:
    // 0x127190: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127194:
    // 0x127194: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x127194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
label_127198:
    // 0x127198: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_12719c:
    // 0x12719c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12719cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1271a0:
    // 0x1271a0: 0x0  nop
    ctx->pc = 0x1271a0u;
    // NOP
label_1271a4:
    // 0x1271a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1271a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1271a8:
    // 0x1271a8: 0x0  nop
    ctx->pc = 0x1271a8u;
    // NOP
label_1271ac:
    // 0x1271ac: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1271b0:
    if (ctx->pc == 0x1271B0u) {
        ctx->pc = 0x1271B4u;
        goto label_1271b4;
    }
    ctx->pc = 0x1271ACu;
    {
        const bool branch_taken_0x1271ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1271ac) {
            ctx->pc = 0x1271F8u;
            goto label_1271f8;
        }
    }
    ctx->pc = 0x1271B4u;
label_1271b4:
    // 0x1271b4: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1271b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1271b8:
    // 0x1271b8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1271bc:
    if (ctx->pc == 0x1271BCu) {
        ctx->pc = 0x1271C0u;
        goto label_1271c0;
    }
    ctx->pc = 0x1271B8u;
    {
        const bool branch_taken_0x1271b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271b8) {
            ctx->pc = 0x1271F0u;
            goto label_1271f0;
        }
    }
    ctx->pc = 0x1271C0u;
label_1271c0:
    // 0x1271c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1271c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1271c4:
    // 0x1271c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1271c8:
    // 0x1271c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1271c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1271cc:
    // 0x1271cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1271ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1271d0:
    // 0x1271d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1271d4:
    // 0x1271d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1271d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1271d8:
    // 0x1271d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1271dc:
    // 0x1271dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1271dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1271e0:
    // 0x1271e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1271e4:
    // 0x1271e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1271e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1271e8:
    // 0x1271e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1271ec:
    // 0x1271ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1271ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1271f0:
    // 0x1271f0: 0x10000060  b           . + 4 + (0x60 << 2)
label_1271f4:
    if (ctx->pc == 0x1271F4u) {
        ctx->pc = 0x1271F8u;
        goto label_1271f8;
    }
    ctx->pc = 0x1271F0u;
    {
        const bool branch_taken_0x1271f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271f0) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x1271F8u;
label_1271f8:
    // 0x1271f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1271fc:
    // 0x1271fc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1271fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127200:
    // 0x127200: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x127200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_127204:
    // 0x127204: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x127204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_127208:
    // 0x127208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12720c:
    // 0x12720c: 0x0  nop
    ctx->pc = 0x12720cu;
    // NOP
label_127210:
    // 0x127210: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127214:
    // 0x127214: 0x0  nop
    ctx->pc = 0x127214u;
    // NOP
label_127218:
    // 0x127218: 0x45000056  bc1f        . + 4 + (0x56 << 2)
label_12721c:
    if (ctx->pc == 0x12721Cu) {
        ctx->pc = 0x127220u;
        goto label_127220;
    }
    ctx->pc = 0x127218u;
    {
        const bool branch_taken_0x127218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127218) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x127220u;
label_127220:
    // 0x127220: 0xc067694  jal         func_19DA50
label_127224:
    if (ctx->pc == 0x127224u) {
        ctx->pc = 0x127228u;
        goto label_127228;
    }
    ctx->pc = 0x127220u;
    SET_GPR_U32(ctx, 31, 0x127228u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127220u, 0x127228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127228u;
label_127228:
    // 0x127228: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12722c:
    // 0x12722c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x12722cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127230:
    // 0x127230: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x127230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_127234:
    // 0x127234: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_127238:
    if (ctx->pc == 0x127238u) {
        ctx->pc = 0x12723Cu;
        goto label_12723c;
    }
    ctx->pc = 0x127234u;
    {
        const bool branch_taken_0x127234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127234) {
            ctx->pc = 0x127334u;
            goto label_127334;
        }
    }
    ctx->pc = 0x12723Cu;
label_12723c:
    // 0x12723c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12723cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_127240:
    // 0x127240: 0x2464e280  addiu       $a0, $v1, -0x1D80
    ctx->pc = 0x127240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959744));
label_127244:
    // 0x127244: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x127244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_127248:
    // 0x127248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x127248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12724c:
    // 0x12724c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_127250:
    // 0x127250: 0x600008  jr          $v1
label_127254:
    if (ctx->pc == 0x127254u) {
        ctx->pc = 0x127258u;
        goto label_127258;
    }
    ctx->pc = 0x127250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127250u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127258u;
label_127258:
    // 0x127258: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12725c:
    // 0x12725c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127260:
    // 0x127260: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127264:
    // 0x127264: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x127264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_127268:
    // 0x127268: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12726c:
    // 0x12726c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12726cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127270:
    // 0x127270: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127274:
    // 0x127274: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127278:
    // 0x127278: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12727c:
    // 0x12727c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12727cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127280:
    // 0x127280: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127284:
    // 0x127284: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127288:
    // 0x127288: 0x1000002a  b           . + 4 + (0x2A << 2)
label_12728c:
    if (ctx->pc == 0x12728Cu) {
        ctx->pc = 0x127290u;
        goto label_127290;
    }
    ctx->pc = 0x127288u;
    {
        const bool branch_taken_0x127288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127288) {
            ctx->pc = 0x127334u;
            goto label_127334;
        }
    }
    ctx->pc = 0x127290u;
label_127290:
    // 0x127290: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127294:
    // 0x127294: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x127294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_127298:
    // 0x127298: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x127298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12729c:
    // 0x12729c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12729cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1272a0:
    // 0x1272a0: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x1272a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
label_1272a4:
    // 0x1272a4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_1272a8:
    if (ctx->pc == 0x1272A8u) {
        ctx->pc = 0x1272ACu;
        goto label_1272ac;
    }
    ctx->pc = 0x1272A4u;
    {
        const bool branch_taken_0x1272a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272a4) {
            ctx->pc = 0x127334u;
            goto label_127334;
        }
    }
    ctx->pc = 0x1272ACu;
label_1272ac:
    // 0x1272ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1272acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1272b0:
    // 0x1272b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1272b4:
    // 0x1272b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1272b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1272b8:
    // 0x1272b8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1272b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1272bc:
    // 0x1272bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1272c0:
    // 0x1272c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1272c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1272c4:
    // 0x1272c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1272c8:
    // 0x1272c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1272c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1272cc:
    // 0x1272cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1272d0:
    // 0x1272d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1272d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1272d4:
    // 0x1272d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1272d8:
    // 0x1272d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1272d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1272dc:
    // 0x1272dc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1272e0:
    if (ctx->pc == 0x1272E0u) {
        ctx->pc = 0x1272E4u;
        goto label_1272e4;
    }
    ctx->pc = 0x1272DCu;
    {
        const bool branch_taken_0x1272dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272dc) {
            ctx->pc = 0x127334u;
            goto label_127334;
        }
    }
    ctx->pc = 0x1272E4u;
label_1272e4:
    // 0x1272e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1272e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1272e8:
    // 0x1272e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1272e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1272ec:
    // 0x1272ec: 0xc05d25c  jal         func_174970
label_1272f0:
    if (ctx->pc == 0x1272F0u) {
        ctx->pc = 0x1272F4u;
        goto label_1272f4;
    }
    ctx->pc = 0x1272ECu;
    SET_GPR_U32(ctx, 31, 0x1272F4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1272ECu, 0x1272F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272F4u;
label_1272f4:
    // 0x1272f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1272f8:
    if (ctx->pc == 0x1272F8u) {
        ctx->pc = 0x1272FCu;
        goto label_1272fc;
    }
    ctx->pc = 0x1272F4u;
    {
        const bool branch_taken_0x1272f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272f4) {
            ctx->pc = 0x127334u;
            goto label_127334;
        }
    }
    ctx->pc = 0x1272FCu;
label_1272fc:
    // 0x1272fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1272fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127300:
    // 0x127300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127304:
    // 0x127304: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127308:
    // 0x127308: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x127308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_12730c:
    // 0x12730c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127310:
    // 0x127310: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127314:
    // 0x127314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127318:
    // 0x127318: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12731c:
    // 0x12731c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127320:
    // 0x127320: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127324:
    // 0x127324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127328:
    // 0x127328: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12732c:
    // 0x12732c: 0x10000011  b           . + 4 + (0x11 << 2)
label_127330:
    if (ctx->pc == 0x127330u) {
        ctx->pc = 0x127334u;
        goto label_127334;
    }
    ctx->pc = 0x12732Cu;
    {
        const bool branch_taken_0x12732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12732c) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x127334u;
label_127334:
    // 0x127334: 0x1000000f  b           . + 4 + (0xF << 2)
label_127338:
    if (ctx->pc == 0x127338u) {
        ctx->pc = 0x12733Cu;
        goto label_12733c;
    }
    ctx->pc = 0x127334u;
    {
        const bool branch_taken_0x127334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127334) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x12733Cu;
label_12733c:
    // 0x12733c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127340:
    // 0x127340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127344:
    // 0x127344: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127348:
    // 0x127348: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x127348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_12734c:
    // 0x12734c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127350:
    // 0x127350: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127354:
    // 0x127354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127358:
    // 0x127358: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12735c:
    // 0x12735c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127360:
    // 0x127360: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127364:
    // 0x127364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127368:
    // 0x127368: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12736c:
    // 0x12736c: 0x10000001  b           . + 4 + (0x1 << 2)
label_127370:
    if (ctx->pc == 0x127370u) {
        ctx->pc = 0x127374u;
        goto label_127374;
    }
    ctx->pc = 0x12736Cu;
    {
        const bool branch_taken_0x12736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12736c) {
            ctx->pc = 0x127374u;
            goto label_127374;
        }
    }
    ctx->pc = 0x127374u;
label_127374:
    // 0x127374: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x127374u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127378:
    // 0x127378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12737c:
    // 0x12737c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12737cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127380:
    // 0x127380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_127384:
    // 0x127384: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x127384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_127388:
    // 0x127388: 0x3e00008  jr          $ra
label_12738c:
    if (ctx->pc == 0x12738Cu) {
        ctx->pc = 0x127390u;
        goto label_fallthrough_0x127388;
    }
    ctx->pc = 0x127388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127388:
    ctx->pc = 0x127390u;
}
