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

// Function: Pl_r1_sh_jump
// Address: 0x149e20 - 0x14a39c
void Pl_r1_sh_jump_0x149e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_sh_jump_0x149e20");
#endif

    switch (ctx->pc) {
        case 0x149e20u: goto label_149e20;
        case 0x149e24u: goto label_149e24;
        case 0x149e28u: goto label_149e28;
        case 0x149e2cu: goto label_149e2c;
        case 0x149e30u: goto label_149e30;
        case 0x149e34u: goto label_149e34;
        case 0x149e38u: goto label_149e38;
        case 0x149e3cu: goto label_149e3c;
        case 0x149e40u: goto label_149e40;
        case 0x149e44u: goto label_149e44;
        case 0x149e48u: goto label_149e48;
        case 0x149e4cu: goto label_149e4c;
        case 0x149e50u: goto label_149e50;
        case 0x149e54u: goto label_149e54;
        case 0x149e58u: goto label_149e58;
        case 0x149e5cu: goto label_149e5c;
        case 0x149e60u: goto label_149e60;
        case 0x149e64u: goto label_149e64;
        case 0x149e68u: goto label_149e68;
        case 0x149e6cu: goto label_149e6c;
        case 0x149e70u: goto label_149e70;
        case 0x149e74u: goto label_149e74;
        case 0x149e78u: goto label_149e78;
        case 0x149e7cu: goto label_149e7c;
        case 0x149e80u: goto label_149e80;
        case 0x149e84u: goto label_149e84;
        case 0x149e88u: goto label_149e88;
        case 0x149e8cu: goto label_149e8c;
        case 0x149e90u: goto label_149e90;
        case 0x149e94u: goto label_149e94;
        case 0x149e98u: goto label_149e98;
        case 0x149e9cu: goto label_149e9c;
        case 0x149ea0u: goto label_149ea0;
        case 0x149ea4u: goto label_149ea4;
        case 0x149ea8u: goto label_149ea8;
        case 0x149eacu: goto label_149eac;
        case 0x149eb0u: goto label_149eb0;
        case 0x149eb4u: goto label_149eb4;
        case 0x149eb8u: goto label_149eb8;
        case 0x149ebcu: goto label_149ebc;
        case 0x149ec0u: goto label_149ec0;
        case 0x149ec4u: goto label_149ec4;
        case 0x149ec8u: goto label_149ec8;
        case 0x149eccu: goto label_149ecc;
        case 0x149ed0u: goto label_149ed0;
        case 0x149ed4u: goto label_149ed4;
        case 0x149ed8u: goto label_149ed8;
        case 0x149edcu: goto label_149edc;
        case 0x149ee0u: goto label_149ee0;
        case 0x149ee4u: goto label_149ee4;
        case 0x149ee8u: goto label_149ee8;
        case 0x149eecu: goto label_149eec;
        case 0x149ef0u: goto label_149ef0;
        case 0x149ef4u: goto label_149ef4;
        case 0x149ef8u: goto label_149ef8;
        case 0x149efcu: goto label_149efc;
        case 0x149f00u: goto label_149f00;
        case 0x149f04u: goto label_149f04;
        case 0x149f08u: goto label_149f08;
        case 0x149f0cu: goto label_149f0c;
        case 0x149f10u: goto label_149f10;
        case 0x149f14u: goto label_149f14;
        case 0x149f18u: goto label_149f18;
        case 0x149f1cu: goto label_149f1c;
        case 0x149f20u: goto label_149f20;
        case 0x149f24u: goto label_149f24;
        case 0x149f28u: goto label_149f28;
        case 0x149f2cu: goto label_149f2c;
        case 0x149f30u: goto label_149f30;
        case 0x149f34u: goto label_149f34;
        case 0x149f38u: goto label_149f38;
        case 0x149f3cu: goto label_149f3c;
        case 0x149f40u: goto label_149f40;
        case 0x149f44u: goto label_149f44;
        case 0x149f48u: goto label_149f48;
        case 0x149f4cu: goto label_149f4c;
        case 0x149f50u: goto label_149f50;
        case 0x149f54u: goto label_149f54;
        case 0x149f58u: goto label_149f58;
        case 0x149f5cu: goto label_149f5c;
        case 0x149f60u: goto label_149f60;
        case 0x149f64u: goto label_149f64;
        case 0x149f68u: goto label_149f68;
        case 0x149f6cu: goto label_149f6c;
        case 0x149f70u: goto label_149f70;
        case 0x149f74u: goto label_149f74;
        case 0x149f78u: goto label_149f78;
        case 0x149f7cu: goto label_149f7c;
        case 0x149f80u: goto label_149f80;
        case 0x149f84u: goto label_149f84;
        case 0x149f88u: goto label_149f88;
        case 0x149f8cu: goto label_149f8c;
        case 0x149f90u: goto label_149f90;
        case 0x149f94u: goto label_149f94;
        case 0x149f98u: goto label_149f98;
        case 0x149f9cu: goto label_149f9c;
        case 0x149fa0u: goto label_149fa0;
        case 0x149fa4u: goto label_149fa4;
        case 0x149fa8u: goto label_149fa8;
        case 0x149facu: goto label_149fac;
        case 0x149fb0u: goto label_149fb0;
        case 0x149fb4u: goto label_149fb4;
        case 0x149fb8u: goto label_149fb8;
        case 0x149fbcu: goto label_149fbc;
        case 0x149fc0u: goto label_149fc0;
        case 0x149fc4u: goto label_149fc4;
        case 0x149fc8u: goto label_149fc8;
        case 0x149fccu: goto label_149fcc;
        case 0x149fd0u: goto label_149fd0;
        case 0x149fd4u: goto label_149fd4;
        case 0x149fd8u: goto label_149fd8;
        case 0x149fdcu: goto label_149fdc;
        case 0x149fe0u: goto label_149fe0;
        case 0x149fe4u: goto label_149fe4;
        case 0x149fe8u: goto label_149fe8;
        case 0x149fecu: goto label_149fec;
        case 0x149ff0u: goto label_149ff0;
        case 0x149ff4u: goto label_149ff4;
        case 0x149ff8u: goto label_149ff8;
        case 0x149ffcu: goto label_149ffc;
        case 0x14a000u: goto label_14a000;
        case 0x14a004u: goto label_14a004;
        case 0x14a008u: goto label_14a008;
        case 0x14a00cu: goto label_14a00c;
        case 0x14a010u: goto label_14a010;
        case 0x14a014u: goto label_14a014;
        case 0x14a018u: goto label_14a018;
        case 0x14a01cu: goto label_14a01c;
        case 0x14a020u: goto label_14a020;
        case 0x14a024u: goto label_14a024;
        case 0x14a028u: goto label_14a028;
        case 0x14a02cu: goto label_14a02c;
        case 0x14a030u: goto label_14a030;
        case 0x14a034u: goto label_14a034;
        case 0x14a038u: goto label_14a038;
        case 0x14a03cu: goto label_14a03c;
        case 0x14a040u: goto label_14a040;
        case 0x14a044u: goto label_14a044;
        case 0x14a048u: goto label_14a048;
        case 0x14a04cu: goto label_14a04c;
        case 0x14a050u: goto label_14a050;
        case 0x14a054u: goto label_14a054;
        case 0x14a058u: goto label_14a058;
        case 0x14a05cu: goto label_14a05c;
        case 0x14a060u: goto label_14a060;
        case 0x14a064u: goto label_14a064;
        case 0x14a068u: goto label_14a068;
        case 0x14a06cu: goto label_14a06c;
        case 0x14a070u: goto label_14a070;
        case 0x14a074u: goto label_14a074;
        case 0x14a078u: goto label_14a078;
        case 0x14a07cu: goto label_14a07c;
        case 0x14a080u: goto label_14a080;
        case 0x14a084u: goto label_14a084;
        case 0x14a088u: goto label_14a088;
        case 0x14a08cu: goto label_14a08c;
        case 0x14a090u: goto label_14a090;
        case 0x14a094u: goto label_14a094;
        case 0x14a098u: goto label_14a098;
        case 0x14a09cu: goto label_14a09c;
        case 0x14a0a0u: goto label_14a0a0;
        case 0x14a0a4u: goto label_14a0a4;
        case 0x14a0a8u: goto label_14a0a8;
        case 0x14a0acu: goto label_14a0ac;
        case 0x14a0b0u: goto label_14a0b0;
        case 0x14a0b4u: goto label_14a0b4;
        case 0x14a0b8u: goto label_14a0b8;
        case 0x14a0bcu: goto label_14a0bc;
        case 0x14a0c0u: goto label_14a0c0;
        case 0x14a0c4u: goto label_14a0c4;
        case 0x14a0c8u: goto label_14a0c8;
        case 0x14a0ccu: goto label_14a0cc;
        case 0x14a0d0u: goto label_14a0d0;
        case 0x14a0d4u: goto label_14a0d4;
        case 0x14a0d8u: goto label_14a0d8;
        case 0x14a0dcu: goto label_14a0dc;
        case 0x14a0e0u: goto label_14a0e0;
        case 0x14a0e4u: goto label_14a0e4;
        case 0x14a0e8u: goto label_14a0e8;
        case 0x14a0ecu: goto label_14a0ec;
        case 0x14a0f0u: goto label_14a0f0;
        case 0x14a0f4u: goto label_14a0f4;
        case 0x14a0f8u: goto label_14a0f8;
        case 0x14a0fcu: goto label_14a0fc;
        case 0x14a100u: goto label_14a100;
        case 0x14a104u: goto label_14a104;
        case 0x14a108u: goto label_14a108;
        case 0x14a10cu: goto label_14a10c;
        case 0x14a110u: goto label_14a110;
        case 0x14a114u: goto label_14a114;
        case 0x14a118u: goto label_14a118;
        case 0x14a11cu: goto label_14a11c;
        case 0x14a120u: goto label_14a120;
        case 0x14a124u: goto label_14a124;
        case 0x14a128u: goto label_14a128;
        case 0x14a12cu: goto label_14a12c;
        case 0x14a130u: goto label_14a130;
        case 0x14a134u: goto label_14a134;
        case 0x14a138u: goto label_14a138;
        case 0x14a13cu: goto label_14a13c;
        case 0x14a140u: goto label_14a140;
        case 0x14a144u: goto label_14a144;
        case 0x14a148u: goto label_14a148;
        case 0x14a14cu: goto label_14a14c;
        case 0x14a150u: goto label_14a150;
        case 0x14a154u: goto label_14a154;
        case 0x14a158u: goto label_14a158;
        case 0x14a15cu: goto label_14a15c;
        case 0x14a160u: goto label_14a160;
        case 0x14a164u: goto label_14a164;
        case 0x14a168u: goto label_14a168;
        case 0x14a16cu: goto label_14a16c;
        case 0x14a170u: goto label_14a170;
        case 0x14a174u: goto label_14a174;
        case 0x14a178u: goto label_14a178;
        case 0x14a17cu: goto label_14a17c;
        case 0x14a180u: goto label_14a180;
        case 0x14a184u: goto label_14a184;
        case 0x14a188u: goto label_14a188;
        case 0x14a18cu: goto label_14a18c;
        case 0x14a190u: goto label_14a190;
        case 0x14a194u: goto label_14a194;
        case 0x14a198u: goto label_14a198;
        case 0x14a19cu: goto label_14a19c;
        case 0x14a1a0u: goto label_14a1a0;
        case 0x14a1a4u: goto label_14a1a4;
        case 0x14a1a8u: goto label_14a1a8;
        case 0x14a1acu: goto label_14a1ac;
        case 0x14a1b0u: goto label_14a1b0;
        case 0x14a1b4u: goto label_14a1b4;
        case 0x14a1b8u: goto label_14a1b8;
        case 0x14a1bcu: goto label_14a1bc;
        case 0x14a1c0u: goto label_14a1c0;
        case 0x14a1c4u: goto label_14a1c4;
        case 0x14a1c8u: goto label_14a1c8;
        case 0x14a1ccu: goto label_14a1cc;
        case 0x14a1d0u: goto label_14a1d0;
        case 0x14a1d4u: goto label_14a1d4;
        case 0x14a1d8u: goto label_14a1d8;
        case 0x14a1dcu: goto label_14a1dc;
        case 0x14a1e0u: goto label_14a1e0;
        case 0x14a1e4u: goto label_14a1e4;
        case 0x14a1e8u: goto label_14a1e8;
        case 0x14a1ecu: goto label_14a1ec;
        case 0x14a1f0u: goto label_14a1f0;
        case 0x14a1f4u: goto label_14a1f4;
        case 0x14a1f8u: goto label_14a1f8;
        case 0x14a1fcu: goto label_14a1fc;
        case 0x14a200u: goto label_14a200;
        case 0x14a204u: goto label_14a204;
        case 0x14a208u: goto label_14a208;
        case 0x14a20cu: goto label_14a20c;
        case 0x14a210u: goto label_14a210;
        case 0x14a214u: goto label_14a214;
        case 0x14a218u: goto label_14a218;
        case 0x14a21cu: goto label_14a21c;
        case 0x14a220u: goto label_14a220;
        case 0x14a224u: goto label_14a224;
        case 0x14a228u: goto label_14a228;
        case 0x14a22cu: goto label_14a22c;
        case 0x14a230u: goto label_14a230;
        case 0x14a234u: goto label_14a234;
        case 0x14a238u: goto label_14a238;
        case 0x14a23cu: goto label_14a23c;
        case 0x14a240u: goto label_14a240;
        case 0x14a244u: goto label_14a244;
        case 0x14a248u: goto label_14a248;
        case 0x14a24cu: goto label_14a24c;
        case 0x14a250u: goto label_14a250;
        case 0x14a254u: goto label_14a254;
        case 0x14a258u: goto label_14a258;
        case 0x14a25cu: goto label_14a25c;
        case 0x14a260u: goto label_14a260;
        case 0x14a264u: goto label_14a264;
        case 0x14a268u: goto label_14a268;
        case 0x14a26cu: goto label_14a26c;
        case 0x14a270u: goto label_14a270;
        case 0x14a274u: goto label_14a274;
        case 0x14a278u: goto label_14a278;
        case 0x14a27cu: goto label_14a27c;
        case 0x14a280u: goto label_14a280;
        case 0x14a284u: goto label_14a284;
        case 0x14a288u: goto label_14a288;
        case 0x14a28cu: goto label_14a28c;
        case 0x14a290u: goto label_14a290;
        case 0x14a294u: goto label_14a294;
        case 0x14a298u: goto label_14a298;
        case 0x14a29cu: goto label_14a29c;
        case 0x14a2a0u: goto label_14a2a0;
        case 0x14a2a4u: goto label_14a2a4;
        case 0x14a2a8u: goto label_14a2a8;
        case 0x14a2acu: goto label_14a2ac;
        case 0x14a2b0u: goto label_14a2b0;
        case 0x14a2b4u: goto label_14a2b4;
        case 0x14a2b8u: goto label_14a2b8;
        case 0x14a2bcu: goto label_14a2bc;
        case 0x14a2c0u: goto label_14a2c0;
        case 0x14a2c4u: goto label_14a2c4;
        case 0x14a2c8u: goto label_14a2c8;
        case 0x14a2ccu: goto label_14a2cc;
        case 0x14a2d0u: goto label_14a2d0;
        case 0x14a2d4u: goto label_14a2d4;
        case 0x14a2d8u: goto label_14a2d8;
        case 0x14a2dcu: goto label_14a2dc;
        case 0x14a2e0u: goto label_14a2e0;
        case 0x14a2e4u: goto label_14a2e4;
        case 0x14a2e8u: goto label_14a2e8;
        case 0x14a2ecu: goto label_14a2ec;
        case 0x14a2f0u: goto label_14a2f0;
        case 0x14a2f4u: goto label_14a2f4;
        case 0x14a2f8u: goto label_14a2f8;
        case 0x14a2fcu: goto label_14a2fc;
        case 0x14a300u: goto label_14a300;
        case 0x14a304u: goto label_14a304;
        case 0x14a308u: goto label_14a308;
        case 0x14a30cu: goto label_14a30c;
        case 0x14a310u: goto label_14a310;
        case 0x14a314u: goto label_14a314;
        case 0x14a318u: goto label_14a318;
        case 0x14a31cu: goto label_14a31c;
        case 0x14a320u: goto label_14a320;
        case 0x14a324u: goto label_14a324;
        case 0x14a328u: goto label_14a328;
        case 0x14a32cu: goto label_14a32c;
        case 0x14a330u: goto label_14a330;
        case 0x14a334u: goto label_14a334;
        case 0x14a338u: goto label_14a338;
        case 0x14a33cu: goto label_14a33c;
        case 0x14a340u: goto label_14a340;
        case 0x14a344u: goto label_14a344;
        case 0x14a348u: goto label_14a348;
        case 0x14a34cu: goto label_14a34c;
        case 0x14a350u: goto label_14a350;
        case 0x14a354u: goto label_14a354;
        case 0x14a358u: goto label_14a358;
        case 0x14a35cu: goto label_14a35c;
        case 0x14a360u: goto label_14a360;
        case 0x14a364u: goto label_14a364;
        case 0x14a368u: goto label_14a368;
        case 0x14a36cu: goto label_14a36c;
        case 0x14a370u: goto label_14a370;
        case 0x14a374u: goto label_14a374;
        case 0x14a378u: goto label_14a378;
        case 0x14a37cu: goto label_14a37c;
        case 0x14a380u: goto label_14a380;
        case 0x14a384u: goto label_14a384;
        case 0x14a388u: goto label_14a388;
        case 0x14a38cu: goto label_14a38c;
        case 0x14a390u: goto label_14a390;
        case 0x14a394u: goto label_14a394;
        case 0x14a398u: goto label_14a398;
        default: break;
    }

    ctx->pc = 0x149e20u;

label_149e20:
    // 0x149e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_149e24:
    // 0x149e24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x149e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_149e28:
    // 0x149e28: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x149e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_149e2c:
    // 0x149e2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149e30:
    // 0x149e30: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x149e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149e34:
    // 0x149e34: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x149e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_149e38:
    // 0x149e38: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x149e38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_149e3c:
    // 0x149e3c: 0x10200153  beqz        $at, . + 4 + (0x153 << 2)
label_149e40:
    if (ctx->pc == 0x149E40u) {
        ctx->pc = 0x149E44u;
        goto label_149e44;
    }
    ctx->pc = 0x149E3Cu;
    {
        const bool branch_taken_0x149e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e3c) {
            ctx->pc = 0x14A38Cu;
            goto label_14a38c;
        }
    }
    ctx->pc = 0x149E44u;
label_149e44:
    // 0x149e44: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x149e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_149e48:
    // 0x149e48: 0x2464e820  addiu       $a0, $v1, -0x17E0
    ctx->pc = 0x149e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961184));
label_149e4c:
    // 0x149e4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x149e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_149e50:
    // 0x149e50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x149e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_149e54:
    // 0x149e54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x149e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_149e58:
    // 0x149e58: 0x600008  jr          $v1
label_149e5c:
    if (ctx->pc == 0x149E5Cu) {
        ctx->pc = 0x149E60u;
        goto label_149e60;
    }
    ctx->pc = 0x149E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149E58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x149E60u;
label_149e60:
    // 0x149e60: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x149e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_149e64:
    // 0x149e64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149e68:
    // 0x149e68: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x149e68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_149e6c:
    // 0x149e6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149e70:
    // 0x149e70: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x149e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149e74:
    // 0x149e74: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x149e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_149e78:
    // 0x149e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149e7c:
    // 0x149e7c: 0x0  nop
    ctx->pc = 0x149e7cu;
    // NOP
label_149e80:
    // 0x149e80: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x149e80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_149e84:
    // 0x149e84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149e88:
    // 0x149e88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x149e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149e8c:
    // 0x149e8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x149e8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_149e90:
    // 0x149e90: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x149e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_149e94:
    // 0x149e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149e98:
    // 0x149e98: 0x0  nop
    ctx->pc = 0x149e98u;
    // NOP
label_149e9c:
    // 0x149e9c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x149e9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_149ea0:
    // 0x149ea0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ea4:
    // 0x149ea4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x149ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_149ea8:
    // 0x149ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149eac:
    // 0x149eac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x149eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_149eb0:
    // 0x149eb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x149eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_149eb4:
    // 0x149eb4: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x149eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149eb8:
    // 0x149eb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x149eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_149ebc:
    // 0x149ebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ec0:
    // 0x149ec0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x149ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_149ec4:
    // 0x149ec4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ec8:
    // 0x149ec8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x149ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_149ecc:
    // 0x149ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x149eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_149ed0:
    // 0x149ed0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x149ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_149ed4:
    // 0x149ed4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_149ed8:
    if (ctx->pc == 0x149ED8u) {
        ctx->pc = 0x149EDCu;
        goto label_149edc;
    }
    ctx->pc = 0x149ED4u;
    {
        const bool branch_taken_0x149ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ed4) {
            ctx->pc = 0x149F10u;
            goto label_149f10;
        }
    }
    ctx->pc = 0x149EDCu;
label_149edc:
    // 0x149edc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ee0:
    // 0x149ee0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ee4:
    // 0x149ee4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149ee8:
    // 0x149ee8: 0x2406042b  addiu       $a2, $zero, 0x42B
    ctx->pc = 0x149ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
label_149eec:
    // 0x149eec: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x149eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_149ef0:
    // 0x149ef0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149ef4:
    // 0x149ef4: 0xc0965d0  jal         func_259740
label_149ef8:
    if (ctx->pc == 0x149EF8u) {
        ctx->pc = 0x149EFCu;
        goto label_149efc;
    }
    ctx->pc = 0x149EF4u;
    SET_GPR_U32(ctx, 31, 0x149EFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149EF4u, 0x149EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149EFCu;
label_149efc:
    // 0x149efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149f00:
    // 0x149f00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f04:
    // 0x149f04: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x149f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_149f08:
    // 0x149f08: 0x1000000b  b           . + 4 + (0xB << 2)
label_149f0c:
    if (ctx->pc == 0x149F0Cu) {
        ctx->pc = 0x149F10u;
        goto label_149f10;
    }
    ctx->pc = 0x149F08u;
    {
        const bool branch_taken_0x149f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f08) {
            ctx->pc = 0x149F38u;
            goto label_149f38;
        }
    }
    ctx->pc = 0x149F10u;
label_149f10:
    // 0x149f10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f14:
    // 0x149f14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f18:
    // 0x149f18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149f1c:
    // 0x149f1c: 0x2406042b  addiu       $a2, $zero, 0x42B
    ctx->pc = 0x149f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
label_149f20:
    // 0x149f20: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x149f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_149f24:
    // 0x149f24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149f28:
    // 0x149f28: 0xc0965d0  jal         func_259740
label_149f2c:
    if (ctx->pc == 0x149F2Cu) {
        ctx->pc = 0x149F30u;
        goto label_149f30;
    }
    ctx->pc = 0x149F28u;
    SET_GPR_U32(ctx, 31, 0x149F30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149F28u, 0x149F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F30u;
label_149f30:
    // 0x149f30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f34:
    // 0x149f34: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x149f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_149f38:
    // 0x149f38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f3c:
    // 0x149f3c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x149f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_149f40:
    // 0x149f40: 0xc058b98  jal         func_162E60
label_149f44:
    if (ctx->pc == 0x149F44u) {
        ctx->pc = 0x149F48u;
        goto label_149f48;
    }
    ctx->pc = 0x149F40u;
    SET_GPR_U32(ctx, 31, 0x149F48u);
    ctx->pc = 0x162E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162E60u, 0x149F40u, 0x149F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F48u;
label_149f48:
    // 0x149f48: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x149f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_149f4c:
    // 0x149f4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x149f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_149f50:
    // 0x149f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x149f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149f54:
    // 0x149f54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f58:
    // 0x149f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f5c:
    // 0x149f5c: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x149f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_149f60:
    // 0x149f60: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x149f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_149f64:
    // 0x149f64: 0xc040ed8  jal         func_103B60
label_149f68:
    if (ctx->pc == 0x149F68u) {
        ctx->pc = 0x149F6Cu;
        goto label_149f6c;
    }
    ctx->pc = 0x149F64u;
    SET_GPR_U32(ctx, 31, 0x149F6Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x149F6Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x149F6Cu) { return; }
    ctx->pc = 0x149F6Cu;
label_149f6c:
    // 0x149f6c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x149f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_149f70:
    // 0x149f70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f74:
    // 0x149f74: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x149f74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_149f78:
    // 0x149f78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f7c:
    // 0x149f7c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149f80:
    // 0x149f80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_149f84:
    // 0x149f84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_149f88:
    // 0x149f88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f8c:
    // 0x149f8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149f90:
    // 0x149f90: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_149f94:
    // 0x149f94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_149f98:
    // 0x149f98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x149f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_149f9c:
    // 0x149f9c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x149f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149fa0:
    // 0x149fa0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x149fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_149fa4:
    // 0x149fa4: 0xc058f50  jal         func_163D40
label_149fa8:
    if (ctx->pc == 0x149FA8u) {
        ctx->pc = 0x149FACu;
        goto label_149fac;
    }
    ctx->pc = 0x149FA4u;
    SET_GPR_U32(ctx, 31, 0x149FACu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149FA4u, 0x149FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FACu;
label_149fac:
    // 0x149fac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149fb0:
    // 0x149fb0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x149fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_149fb4:
    // 0x149fb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149fb8:
    // 0x149fb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149fb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149fbc:
    // 0x149fbc: 0xc096b40  jal         func_25AD00
label_149fc0:
    if (ctx->pc == 0x149FC0u) {
        ctx->pc = 0x149FC4u;
        goto label_149fc4;
    }
    ctx->pc = 0x149FBCu;
    SET_GPR_U32(ctx, 31, 0x149FC4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149FBCu, 0x149FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FC4u;
label_149fc4:
    // 0x149fc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149fc8:
    // 0x149fc8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x149fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149fcc:
    // 0x149fcc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x149fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_149fd0:
    // 0x149fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149fd4:
    // 0x149fd4: 0x0  nop
    ctx->pc = 0x149fd4u;
    // NOP
label_149fd8:
    // 0x149fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x149fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_149fdc:
    // 0x149fdc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x149fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_149fe0:
    // 0x149fe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149fe4:
    // 0x149fe4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149fe8:
    // 0x149fe8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149fec:
    // 0x149fec: 0xc05cd58  jal         func_173560
label_149ff0:
    if (ctx->pc == 0x149FF0u) {
        ctx->pc = 0x149FF4u;
        goto label_149ff4;
    }
    ctx->pc = 0x149FECu;
    SET_GPR_U32(ctx, 31, 0x149FF4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x149FECu, 0x149FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FF4u;
label_149ff4:
    // 0x149ff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149ff8:
    // 0x149ff8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ffc:
    // 0x149ffc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x149ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14a000:
    // 0x14a000: 0xc057480  jal         func_15D200
label_14a004:
    if (ctx->pc == 0x14A004u) {
        ctx->pc = 0x14A008u;
        goto label_14a008;
    }
    ctx->pc = 0x14A000u;
    SET_GPR_U32(ctx, 31, 0x14A008u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x14A000u, 0x14A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A008u;
label_14a008:
    // 0x14a008: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a00c:
    // 0x14a00c: 0xc097530  jal         func_25D4C0
label_14a010:
    if (ctx->pc == 0x14A010u) {
        ctx->pc = 0x14A014u;
        goto label_14a014;
    }
    ctx->pc = 0x14A00Cu;
    SET_GPR_U32(ctx, 31, 0x14A014u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A00Cu, 0x14A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A014u;
label_14a014:
    // 0x14a014: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a018:
    // 0x14a018: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14a01c:
    // 0x14a01c: 0x106000db  beqz        $v1, . + 4 + (0xDB << 2)
label_14a020:
    if (ctx->pc == 0x14A020u) {
        ctx->pc = 0x14A024u;
        goto label_14a024;
    }
    ctx->pc = 0x14A01Cu;
    {
        const bool branch_taken_0x14a01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a01c) {
            ctx->pc = 0x14A38Cu;
            goto label_14a38c;
        }
    }
    ctx->pc = 0x14A024u;
label_14a024:
    // 0x14a024: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a028:
    // 0x14a028: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14a028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14a02c:
    // 0x14a02c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14a030:
    // 0x14a030: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14a030u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_14a034:
    // 0x14a034: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_14a038:
    if (ctx->pc == 0x14A038u) {
        ctx->pc = 0x14A03Cu;
        goto label_14a03c;
    }
    ctx->pc = 0x14A034u;
    {
        const bool branch_taken_0x14a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a034) {
            ctx->pc = 0x14A38Cu;
            goto label_14a38c;
        }
    }
    ctx->pc = 0x14A03Cu;
label_14a03c:
    // 0x14a03c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a040:
    // 0x14a040: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_14a044:
    // 0x14a044: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14a048:
    if (ctx->pc == 0x14A048u) {
        ctx->pc = 0x14A04Cu;
        goto label_14a04c;
    }
    ctx->pc = 0x14A044u;
    {
        const bool branch_taken_0x14a044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a044) {
            ctx->pc = 0x14A074u;
            goto label_14a074;
        }
    }
    ctx->pc = 0x14A04Cu;
label_14a04c:
    // 0x14a04c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a050:
    // 0x14a050: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a054:
    // 0x14a054: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a058:
    // 0x14a058: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x14a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_14a05c:
    // 0x14a05c: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x14a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_14a060:
    // 0x14a060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a064:
    // 0x14a064: 0xc0965d0  jal         func_259740
label_14a068:
    if (ctx->pc == 0x14A068u) {
        ctx->pc = 0x14A06Cu;
        goto label_14a06c;
    }
    ctx->pc = 0x14A064u;
    SET_GPR_U32(ctx, 31, 0x14A06Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A064u, 0x14A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A06Cu;
label_14a06c:
    // 0x14a06c: 0x10000009  b           . + 4 + (0x9 << 2)
label_14a070:
    if (ctx->pc == 0x14A070u) {
        ctx->pc = 0x14A074u;
        goto label_14a074;
    }
    ctx->pc = 0x14A06Cu;
    {
        const bool branch_taken_0x14a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a06c) {
            ctx->pc = 0x14A094u;
            goto label_14a094;
        }
    }
    ctx->pc = 0x14A074u;
label_14a074:
    // 0x14a074: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a078:
    // 0x14a078: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a07c:
    // 0x14a07c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a080:
    // 0x14a080: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x14a080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_14a084:
    // 0x14a084: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14a084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_14a088:
    // 0x14a088: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a08c:
    // 0x14a08c: 0xc0965d0  jal         func_259740
label_14a090:
    if (ctx->pc == 0x14A090u) {
        ctx->pc = 0x14A094u;
        goto label_14a094;
    }
    ctx->pc = 0x14A08Cu;
    SET_GPR_U32(ctx, 31, 0x14A094u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A08Cu, 0x14A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A094u;
label_14a094:
    // 0x14a094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a098:
    // 0x14a098: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14a09c:
    // 0x14a09c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14a0a0:
    // 0x14a0a0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14a0a4:
    // 0x14a0a4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x14a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_14a0a8:
    // 0x14a0a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14a0ac:
    // 0x14a0ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14a0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14a0b0:
    // 0x14a0b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a0b4:
    // 0x14a0b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a0b8:
    // 0x14a0b8: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14a0bc:
    // 0x14a0bc: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14a0c0:
    // 0x14a0c0: 0xc058f50  jal         func_163D40
label_14a0c4:
    if (ctx->pc == 0x14A0C4u) {
        ctx->pc = 0x14A0C8u;
        goto label_14a0c8;
    }
    ctx->pc = 0x14A0C0u;
    SET_GPR_U32(ctx, 31, 0x14A0C8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14A0C0u, 0x14A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0C8u;
label_14a0c8:
    // 0x14a0c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a0cc:
    // 0x14a0cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14a0d0:
    // 0x14a0d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a0d4:
    // 0x14a0d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a0d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a0d8:
    // 0x14a0d8: 0xc096b40  jal         func_25AD00
label_14a0dc:
    if (ctx->pc == 0x14A0DCu) {
        ctx->pc = 0x14A0E0u;
        goto label_14a0e0;
    }
    ctx->pc = 0x14A0D8u;
    SET_GPR_U32(ctx, 31, 0x14A0E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A0D8u, 0x14A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0E0u;
label_14a0e0:
    // 0x14a0e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a0e4:
    // 0x14a0e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a0e8:
    // 0x14a0e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14a0ec:
    // 0x14a0ec: 0xc05cd58  jal         func_173560
label_14a0f0:
    if (ctx->pc == 0x14A0F0u) {
        ctx->pc = 0x14A0F4u;
        goto label_14a0f4;
    }
    ctx->pc = 0x14A0ECu;
    SET_GPR_U32(ctx, 31, 0x14A0F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14A0ECu, 0x14A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0F4u;
label_14a0f4:
    // 0x14a0f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a0f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14a0f8:
    // 0x14a0f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a0fc:
    // 0x14a0fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14a100:
    // 0x14a100: 0xc057480  jal         func_15D200
label_14a104:
    if (ctx->pc == 0x14A104u) {
        ctx->pc = 0x14A108u;
        goto label_14a108;
    }
    ctx->pc = 0x14A100u;
    SET_GPR_U32(ctx, 31, 0x14A108u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x14A100u, 0x14A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A108u;
label_14a108:
    // 0x14a108: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a10c:
    // 0x14a10c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14a10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14a110:
    // 0x14a110: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_14a114:
    if (ctx->pc == 0x14A114u) {
        ctx->pc = 0x14A118u;
        goto label_14a118;
    }
    ctx->pc = 0x14A110u;
    {
        const bool branch_taken_0x14a110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a110) {
            ctx->pc = 0x14A148u;
            goto label_14a148;
        }
    }
    ctx->pc = 0x14A118u;
label_14a118:
    // 0x14a118: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a11c:
    // 0x14a11c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a120:
    // 0x14a120: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a124:
    // 0x14a124: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x14a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_14a128:
    // 0x14a128: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14a128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14a12c:
    // 0x14a12c: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x14a12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_14a130:
    // 0x14a130: 0xc0675a8  jal         func_19D6A0
label_14a134:
    if (ctx->pc == 0x14A134u) {
        ctx->pc = 0x14A138u;
        goto label_14a138;
    }
    ctx->pc = 0x14A130u;
    SET_GPR_U32(ctx, 31, 0x14A138u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x14A130u, 0x14A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A138u;
label_14a138:
    // 0x14a138: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a13c:
    // 0x14a13c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_14a140:
    // 0x14a140: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14a144:
    // 0x14a144: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14a144u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_14a148:
    // 0x14a148: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a14c:
    // 0x14a14c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a150:
    // 0x14a150: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a154:
    // 0x14a154: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a158:
    // 0x14a158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14a15c:
    // 0x14a15c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14a15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14a160:
    // 0x14a160: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a164:
    // 0x14a164: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a168:
    // 0x14a168: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a16c:
    // 0x14a16c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a170:
    // 0x14a170: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14a174:
    // 0x14a174: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14a178:
    // 0x14a178: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a17c:
    // 0x14a17c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a180:
    // 0x14a180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14a180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a184:
    // 0x14a184: 0x0  nop
    ctx->pc = 0x14a184u;
    // NOP
label_14a188:
    // 0x14a188: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14a188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a18c:
    // 0x14a18c: 0x0  nop
    ctx->pc = 0x14a18cu;
    // NOP
label_14a190:
    // 0x14a190: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_14a194:
    if (ctx->pc == 0x14A194u) {
        ctx->pc = 0x14A198u;
        goto label_14a198;
    }
    ctx->pc = 0x14A190u;
    {
        const bool branch_taken_0x14a190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a190) {
            ctx->pc = 0x14A1E8u;
            goto label_14a1e8;
        }
    }
    ctx->pc = 0x14A198u;
label_14a198:
    // 0x14a198: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a19c:
    // 0x14a19c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a1a0:
    // 0x14a1a0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14a1a4:
    // 0x14a1a4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14a1a8:
    // 0x14a1a8: 0xc05cf7c  jal         func_173DF0
label_14a1ac:
    if (ctx->pc == 0x14A1ACu) {
        ctx->pc = 0x14A1B0u;
        goto label_14a1b0;
    }
    ctx->pc = 0x14A1A8u;
    SET_GPR_U32(ctx, 31, 0x14A1B0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14A1A8u, 0x14A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1B0u;
label_14a1b0:
    // 0x14a1b0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14a1b4:
    // 0x14a1b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a1b8:
    // 0x14a1b8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a1bc:
    // 0x14a1bc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a1c0:
    // 0x14a1c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14a1c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a1c4:
    // 0x14a1c4: 0x0  nop
    ctx->pc = 0x14a1c4u;
    // NOP
label_14a1c8:
    // 0x14a1c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_14a1cc:
    if (ctx->pc == 0x14A1CCu) {
        ctx->pc = 0x14A1D0u;
        goto label_14a1d0;
    }
    ctx->pc = 0x14A1C8u;
    {
        const bool branch_taken_0x14a1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a1c8) {
            ctx->pc = 0x14A1E8u;
            goto label_14a1e8;
        }
    }
    ctx->pc = 0x14A1D0u;
label_14a1d0:
    // 0x14a1d0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a1d4:
    // 0x14a1d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a1d8:
    // 0x14a1d8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14a1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14a1dc:
    // 0x14a1dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14a1e0:
    // 0x14a1e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a1e4:
    // 0x14a1e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x14a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_14a1e8:
    // 0x14a1e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a1e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a1ec:
    // 0x14a1ec: 0xc097530  jal         func_25D4C0
label_14a1f0:
    if (ctx->pc == 0x14A1F0u) {
        ctx->pc = 0x14A1F4u;
        goto label_14a1f4;
    }
    ctx->pc = 0x14A1ECu;
    SET_GPR_U32(ctx, 31, 0x14A1F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A1ECu, 0x14A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1F4u;
label_14a1f4:
    // 0x14a1f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a1f8:
    // 0x14a1f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a1f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14a1fc:
    // 0x14a1fc: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_14a200:
    if (ctx->pc == 0x14A200u) {
        ctx->pc = 0x14A204u;
        goto label_14a204;
    }
    ctx->pc = 0x14A1FCu;
    {
        const bool branch_taken_0x14a1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a1fc) {
            ctx->pc = 0x14A38Cu;
            goto label_14a38c;
        }
    }
    ctx->pc = 0x14A204u;
label_14a204:
    // 0x14a204: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14a208:
    // 0x14a208: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a20c:
    // 0x14a20c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14a20cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_14a210:
    // 0x14a210: 0x1000005e  b           . + 4 + (0x5E << 2)
label_14a214:
    if (ctx->pc == 0x14A214u) {
        ctx->pc = 0x14A218u;
        goto label_14a218;
    }
    ctx->pc = 0x14A210u;
    {
        const bool branch_taken_0x14a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a210) {
            ctx->pc = 0x14A38Cu;
            goto label_14a38c;
        }
    }
    ctx->pc = 0x14A218u;
label_14a218:
    // 0x14a218: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a21c:
    // 0x14a21c: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x14a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_14a220:
    // 0x14a220: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14a224:
    if (ctx->pc == 0x14A224u) {
        ctx->pc = 0x14A228u;
        goto label_14a228;
    }
    ctx->pc = 0x14A220u;
    {
        const bool branch_taken_0x14a220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a220) {
            ctx->pc = 0x14A250u;
            goto label_14a250;
        }
    }
    ctx->pc = 0x14A228u;
label_14a228:
    // 0x14a228: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a22c:
    // 0x14a22c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a230:
    // 0x14a230: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a234:
    // 0x14a234: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x14a234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_14a238:
    // 0x14a238: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x14a238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_14a23c:
    // 0x14a23c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a240:
    // 0x14a240: 0xc0965d0  jal         func_259740
label_14a244:
    if (ctx->pc == 0x14A244u) {
        ctx->pc = 0x14A248u;
        goto label_14a248;
    }
    ctx->pc = 0x14A240u;
    SET_GPR_U32(ctx, 31, 0x14A248u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A240u, 0x14A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A248u;
label_14a248:
    // 0x14a248: 0x10000009  b           . + 4 + (0x9 << 2)
label_14a24c:
    if (ctx->pc == 0x14A24Cu) {
        ctx->pc = 0x14A250u;
        goto label_14a250;
    }
    ctx->pc = 0x14A248u;
    {
        const bool branch_taken_0x14a248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a248) {
            ctx->pc = 0x14A270u;
            goto label_14a270;
        }
    }
    ctx->pc = 0x14A250u;
label_14a250:
    // 0x14a250: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a254:
    // 0x14a254: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a258:
    // 0x14a258: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a25c:
    // 0x14a25c: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x14a25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_14a260:
    // 0x14a260: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14a260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_14a264:
    // 0x14a264: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a268:
    // 0x14a268: 0xc0965d0  jal         func_259740
label_14a26c:
    if (ctx->pc == 0x14A26Cu) {
        ctx->pc = 0x14A270u;
        goto label_14a270;
    }
    ctx->pc = 0x14A268u;
    SET_GPR_U32(ctx, 31, 0x14A270u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A268u, 0x14A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A270u;
label_14a270:
    // 0x14a270: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a274:
    // 0x14a274: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14a278:
    // 0x14a278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14a27c:
    // 0x14a27c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14a280:
    // 0x14a280: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a284:
    // 0x14a284: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a288:
    // 0x14a288: 0xc096b40  jal         func_25AD00
label_14a28c:
    if (ctx->pc == 0x14A28Cu) {
        ctx->pc = 0x14A290u;
        goto label_14a290;
    }
    ctx->pc = 0x14A288u;
    SET_GPR_U32(ctx, 31, 0x14A290u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A288u, 0x14A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A290u;
label_14a290:
    // 0x14a290: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a294:
    // 0x14a294: 0xc05cd10  jal         func_173440
label_14a298:
    if (ctx->pc == 0x14A298u) {
        ctx->pc = 0x14A29Cu;
        goto label_14a29c;
    }
    ctx->pc = 0x14A294u;
    SET_GPR_U32(ctx, 31, 0x14A29Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14A294u, 0x14A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A29Cu;
label_14a29c:
    // 0x14a29c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14a2a0:
    // 0x14a2a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a2a4:
    // 0x14a2a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14a2a8:
    // 0x14a2a8: 0xc0573d8  jal         func_15CF60
label_14a2ac:
    if (ctx->pc == 0x14A2ACu) {
        ctx->pc = 0x14A2B0u;
        goto label_14a2b0;
    }
    ctx->pc = 0x14A2A8u;
    SET_GPR_U32(ctx, 31, 0x14A2B0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14A2A8u, 0x14A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2B0u;
label_14a2b0:
    // 0x14a2b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a2b4:
    // 0x14a2b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a2b8:
    // 0x14a2b8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14a2bc:
    // 0x14a2bc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14a2c0:
    // 0x14a2c0: 0xc05cf7c  jal         func_173DF0
label_14a2c4:
    if (ctx->pc == 0x14A2C4u) {
        ctx->pc = 0x14A2C8u;
        goto label_14a2c8;
    }
    ctx->pc = 0x14A2C0u;
    SET_GPR_U32(ctx, 31, 0x14A2C8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14A2C0u, 0x14A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2C8u;
label_14a2c8:
    // 0x14a2c8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14a2cc:
    // 0x14a2cc: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x14a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_14a2d0:
    // 0x14a2d0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x14a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_14a2d4:
    // 0x14a2d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14a2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a2d8:
    // 0x14a2d8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a2dc:
    // 0x14a2dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14a2dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a2e0:
    // 0x14a2e0: 0x0  nop
    ctx->pc = 0x14a2e0u;
    // NOP
label_14a2e4:
    // 0x14a2e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_14a2e8:
    if (ctx->pc == 0x14A2E8u) {
        ctx->pc = 0x14A2ECu;
        goto label_14a2ec;
    }
    ctx->pc = 0x14A2E4u;
    {
        const bool branch_taken_0x14a2e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a2e4) {
            ctx->pc = 0x14A2F8u;
            goto label_14a2f8;
        }
    }
    ctx->pc = 0x14A2ECu;
label_14a2ec:
    // 0x14a2ec: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a2f0:
    // 0x14a2f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a2f4:
    // 0x14a2f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14a2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14a2f8:
    // 0x14a2f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a2f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a2fc:
    // 0x14a2fc: 0xc097530  jal         func_25D4C0
label_14a300:
    if (ctx->pc == 0x14A300u) {
        ctx->pc = 0x14A304u;
        goto label_14a304;
    }
    ctx->pc = 0x14A2FCu;
    SET_GPR_U32(ctx, 31, 0x14A304u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A2FCu, 0x14A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A304u;
label_14a304:
    // 0x14a304: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a308:
    // 0x14a308: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14a308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_14a30c:
    // 0x14a30c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14a30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14a310:
    // 0x14a310: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14a310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_14a314:
    // 0x14a314: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_14a318:
    if (ctx->pc == 0x14A318u) {
        ctx->pc = 0x14A31Cu;
        goto label_14a31c;
    }
    ctx->pc = 0x14A314u;
    {
        const bool branch_taken_0x14a314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a314) {
            ctx->pc = 0x14A340u;
            goto label_14a340;
        }
    }
    ctx->pc = 0x14A31Cu;
label_14a31c:
    // 0x14a31c: 0xc0585dc  jal         func_161770
label_14a320:
    if (ctx->pc == 0x14A320u) {
        ctx->pc = 0x14A324u;
        goto label_14a324;
    }
    ctx->pc = 0x14A31Cu;
    SET_GPR_U32(ctx, 31, 0x14A324u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14A31Cu, 0x14A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A324u;
label_14a324:
    // 0x14a324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14a328:
    if (ctx->pc == 0x14A328u) {
        ctx->pc = 0x14A32Cu;
        goto label_14a32c;
    }
    ctx->pc = 0x14A324u;
    {
        const bool branch_taken_0x14a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a324) {
            ctx->pc = 0x14A340u;
            goto label_14a340;
        }
    }
    ctx->pc = 0x14A32Cu;
label_14a32c:
    // 0x14a32c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a330:
    // 0x14a330: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a334:
    // 0x14a334: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14a334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14a338:
    // 0x14a338: 0x10000014  b           . + 4 + (0x14 << 2)
label_14a33c:
    if (ctx->pc == 0x14A33Cu) {
        ctx->pc = 0x14A340u;
        goto label_14a340;
    }
    ctx->pc = 0x14A338u;
    {
        const bool branch_taken_0x14a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a338) {
            ctx->pc = 0x14A38Cu;
            goto label_14a38c;
        }
    }
    ctx->pc = 0x14A340u;
label_14a340:
    // 0x14a340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a344:
    // 0x14a344: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14a348:
    // 0x14a348: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_14a34c:
    if (ctx->pc == 0x14A34Cu) {
        ctx->pc = 0x14A350u;
        goto label_14a350;
    }
    ctx->pc = 0x14A348u;
    {
        const bool branch_taken_0x14a348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a348) {
            ctx->pc = 0x14A38Cu;
            goto label_14a38c;
        }
    }
    ctx->pc = 0x14A350u;
label_14a350:
    // 0x14a350: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a354:
    // 0x14a354: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a358:
    // 0x14a358: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14a358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14a35c:
    // 0x14a35c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a360:
    // 0x14a360: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a364:
    // 0x14a364: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14a364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14a368:
    // 0x14a368: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a36c:
    // 0x14a36c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14a370:
    // 0x14a370: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a374:
    // 0x14a374: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14a374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14a378:
    // 0x14a378: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a37c:
    // 0x14a37c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14a37cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14a380:
    // 0x14a380: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14a384:
    // 0x14a384: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a388:
    // 0x14a388: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14a388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14a38c:
    // 0x14a38c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14a38cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14a390:
    // 0x14a390: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14a394:
    // 0x14a394: 0x3e00008  jr          $ra
label_14a398:
    if (ctx->pc == 0x14A398u) {
        ctx->pc = 0x14A39Cu;
        goto label_fallthrough_0x14a394;
    }
    ctx->pc = 0x14A394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14a394:
    ctx->pc = 0x14A39Cu;
}
