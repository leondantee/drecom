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

// Function: Em06_R1_atk_land
// Address: 0x199dc0 - 0x19a294
void Em06_R1_atk_land_0x199dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_atk_land_0x199dc0");
#endif

    switch (ctx->pc) {
        case 0x199dc0u: goto label_199dc0;
        case 0x199dc4u: goto label_199dc4;
        case 0x199dc8u: goto label_199dc8;
        case 0x199dccu: goto label_199dcc;
        case 0x199dd0u: goto label_199dd0;
        case 0x199dd4u: goto label_199dd4;
        case 0x199dd8u: goto label_199dd8;
        case 0x199ddcu: goto label_199ddc;
        case 0x199de0u: goto label_199de0;
        case 0x199de4u: goto label_199de4;
        case 0x199de8u: goto label_199de8;
        case 0x199decu: goto label_199dec;
        case 0x199df0u: goto label_199df0;
        case 0x199df4u: goto label_199df4;
        case 0x199df8u: goto label_199df8;
        case 0x199dfcu: goto label_199dfc;
        case 0x199e00u: goto label_199e00;
        case 0x199e04u: goto label_199e04;
        case 0x199e08u: goto label_199e08;
        case 0x199e0cu: goto label_199e0c;
        case 0x199e10u: goto label_199e10;
        case 0x199e14u: goto label_199e14;
        case 0x199e18u: goto label_199e18;
        case 0x199e1cu: goto label_199e1c;
        case 0x199e20u: goto label_199e20;
        case 0x199e24u: goto label_199e24;
        case 0x199e28u: goto label_199e28;
        case 0x199e2cu: goto label_199e2c;
        case 0x199e30u: goto label_199e30;
        case 0x199e34u: goto label_199e34;
        case 0x199e38u: goto label_199e38;
        case 0x199e3cu: goto label_199e3c;
        case 0x199e40u: goto label_199e40;
        case 0x199e44u: goto label_199e44;
        case 0x199e48u: goto label_199e48;
        case 0x199e4cu: goto label_199e4c;
        case 0x199e50u: goto label_199e50;
        case 0x199e54u: goto label_199e54;
        case 0x199e58u: goto label_199e58;
        case 0x199e5cu: goto label_199e5c;
        case 0x199e60u: goto label_199e60;
        case 0x199e64u: goto label_199e64;
        case 0x199e68u: goto label_199e68;
        case 0x199e6cu: goto label_199e6c;
        case 0x199e70u: goto label_199e70;
        case 0x199e74u: goto label_199e74;
        case 0x199e78u: goto label_199e78;
        case 0x199e7cu: goto label_199e7c;
        case 0x199e80u: goto label_199e80;
        case 0x199e84u: goto label_199e84;
        case 0x199e88u: goto label_199e88;
        case 0x199e8cu: goto label_199e8c;
        case 0x199e90u: goto label_199e90;
        case 0x199e94u: goto label_199e94;
        case 0x199e98u: goto label_199e98;
        case 0x199e9cu: goto label_199e9c;
        case 0x199ea0u: goto label_199ea0;
        case 0x199ea4u: goto label_199ea4;
        case 0x199ea8u: goto label_199ea8;
        case 0x199eacu: goto label_199eac;
        case 0x199eb0u: goto label_199eb0;
        case 0x199eb4u: goto label_199eb4;
        case 0x199eb8u: goto label_199eb8;
        case 0x199ebcu: goto label_199ebc;
        case 0x199ec0u: goto label_199ec0;
        case 0x199ec4u: goto label_199ec4;
        case 0x199ec8u: goto label_199ec8;
        case 0x199eccu: goto label_199ecc;
        case 0x199ed0u: goto label_199ed0;
        case 0x199ed4u: goto label_199ed4;
        case 0x199ed8u: goto label_199ed8;
        case 0x199edcu: goto label_199edc;
        case 0x199ee0u: goto label_199ee0;
        case 0x199ee4u: goto label_199ee4;
        case 0x199ee8u: goto label_199ee8;
        case 0x199eecu: goto label_199eec;
        case 0x199ef0u: goto label_199ef0;
        case 0x199ef4u: goto label_199ef4;
        case 0x199ef8u: goto label_199ef8;
        case 0x199efcu: goto label_199efc;
        case 0x199f00u: goto label_199f00;
        case 0x199f04u: goto label_199f04;
        case 0x199f08u: goto label_199f08;
        case 0x199f0cu: goto label_199f0c;
        case 0x199f10u: goto label_199f10;
        case 0x199f14u: goto label_199f14;
        case 0x199f18u: goto label_199f18;
        case 0x199f1cu: goto label_199f1c;
        case 0x199f20u: goto label_199f20;
        case 0x199f24u: goto label_199f24;
        case 0x199f28u: goto label_199f28;
        case 0x199f2cu: goto label_199f2c;
        case 0x199f30u: goto label_199f30;
        case 0x199f34u: goto label_199f34;
        case 0x199f38u: goto label_199f38;
        case 0x199f3cu: goto label_199f3c;
        case 0x199f40u: goto label_199f40;
        case 0x199f44u: goto label_199f44;
        case 0x199f48u: goto label_199f48;
        case 0x199f4cu: goto label_199f4c;
        case 0x199f50u: goto label_199f50;
        case 0x199f54u: goto label_199f54;
        case 0x199f58u: goto label_199f58;
        case 0x199f5cu: goto label_199f5c;
        case 0x199f60u: goto label_199f60;
        case 0x199f64u: goto label_199f64;
        case 0x199f68u: goto label_199f68;
        case 0x199f6cu: goto label_199f6c;
        case 0x199f70u: goto label_199f70;
        case 0x199f74u: goto label_199f74;
        case 0x199f78u: goto label_199f78;
        case 0x199f7cu: goto label_199f7c;
        case 0x199f80u: goto label_199f80;
        case 0x199f84u: goto label_199f84;
        case 0x199f88u: goto label_199f88;
        case 0x199f8cu: goto label_199f8c;
        case 0x199f90u: goto label_199f90;
        case 0x199f94u: goto label_199f94;
        case 0x199f98u: goto label_199f98;
        case 0x199f9cu: goto label_199f9c;
        case 0x199fa0u: goto label_199fa0;
        case 0x199fa4u: goto label_199fa4;
        case 0x199fa8u: goto label_199fa8;
        case 0x199facu: goto label_199fac;
        case 0x199fb0u: goto label_199fb0;
        case 0x199fb4u: goto label_199fb4;
        case 0x199fb8u: goto label_199fb8;
        case 0x199fbcu: goto label_199fbc;
        case 0x199fc0u: goto label_199fc0;
        case 0x199fc4u: goto label_199fc4;
        case 0x199fc8u: goto label_199fc8;
        case 0x199fccu: goto label_199fcc;
        case 0x199fd0u: goto label_199fd0;
        case 0x199fd4u: goto label_199fd4;
        case 0x199fd8u: goto label_199fd8;
        case 0x199fdcu: goto label_199fdc;
        case 0x199fe0u: goto label_199fe0;
        case 0x199fe4u: goto label_199fe4;
        case 0x199fe8u: goto label_199fe8;
        case 0x199fecu: goto label_199fec;
        case 0x199ff0u: goto label_199ff0;
        case 0x199ff4u: goto label_199ff4;
        case 0x199ff8u: goto label_199ff8;
        case 0x199ffcu: goto label_199ffc;
        case 0x19a000u: goto label_19a000;
        case 0x19a004u: goto label_19a004;
        case 0x19a008u: goto label_19a008;
        case 0x19a00cu: goto label_19a00c;
        case 0x19a010u: goto label_19a010;
        case 0x19a014u: goto label_19a014;
        case 0x19a018u: goto label_19a018;
        case 0x19a01cu: goto label_19a01c;
        case 0x19a020u: goto label_19a020;
        case 0x19a024u: goto label_19a024;
        case 0x19a028u: goto label_19a028;
        case 0x19a02cu: goto label_19a02c;
        case 0x19a030u: goto label_19a030;
        case 0x19a034u: goto label_19a034;
        case 0x19a038u: goto label_19a038;
        case 0x19a03cu: goto label_19a03c;
        case 0x19a040u: goto label_19a040;
        case 0x19a044u: goto label_19a044;
        case 0x19a048u: goto label_19a048;
        case 0x19a04cu: goto label_19a04c;
        case 0x19a050u: goto label_19a050;
        case 0x19a054u: goto label_19a054;
        case 0x19a058u: goto label_19a058;
        case 0x19a05cu: goto label_19a05c;
        case 0x19a060u: goto label_19a060;
        case 0x19a064u: goto label_19a064;
        case 0x19a068u: goto label_19a068;
        case 0x19a06cu: goto label_19a06c;
        case 0x19a070u: goto label_19a070;
        case 0x19a074u: goto label_19a074;
        case 0x19a078u: goto label_19a078;
        case 0x19a07cu: goto label_19a07c;
        case 0x19a080u: goto label_19a080;
        case 0x19a084u: goto label_19a084;
        case 0x19a088u: goto label_19a088;
        case 0x19a08cu: goto label_19a08c;
        case 0x19a090u: goto label_19a090;
        case 0x19a094u: goto label_19a094;
        case 0x19a098u: goto label_19a098;
        case 0x19a09cu: goto label_19a09c;
        case 0x19a0a0u: goto label_19a0a0;
        case 0x19a0a4u: goto label_19a0a4;
        case 0x19a0a8u: goto label_19a0a8;
        case 0x19a0acu: goto label_19a0ac;
        case 0x19a0b0u: goto label_19a0b0;
        case 0x19a0b4u: goto label_19a0b4;
        case 0x19a0b8u: goto label_19a0b8;
        case 0x19a0bcu: goto label_19a0bc;
        case 0x19a0c0u: goto label_19a0c0;
        case 0x19a0c4u: goto label_19a0c4;
        case 0x19a0c8u: goto label_19a0c8;
        case 0x19a0ccu: goto label_19a0cc;
        case 0x19a0d0u: goto label_19a0d0;
        case 0x19a0d4u: goto label_19a0d4;
        case 0x19a0d8u: goto label_19a0d8;
        case 0x19a0dcu: goto label_19a0dc;
        case 0x19a0e0u: goto label_19a0e0;
        case 0x19a0e4u: goto label_19a0e4;
        case 0x19a0e8u: goto label_19a0e8;
        case 0x19a0ecu: goto label_19a0ec;
        case 0x19a0f0u: goto label_19a0f0;
        case 0x19a0f4u: goto label_19a0f4;
        case 0x19a0f8u: goto label_19a0f8;
        case 0x19a0fcu: goto label_19a0fc;
        case 0x19a100u: goto label_19a100;
        case 0x19a104u: goto label_19a104;
        case 0x19a108u: goto label_19a108;
        case 0x19a10cu: goto label_19a10c;
        case 0x19a110u: goto label_19a110;
        case 0x19a114u: goto label_19a114;
        case 0x19a118u: goto label_19a118;
        case 0x19a11cu: goto label_19a11c;
        case 0x19a120u: goto label_19a120;
        case 0x19a124u: goto label_19a124;
        case 0x19a128u: goto label_19a128;
        case 0x19a12cu: goto label_19a12c;
        case 0x19a130u: goto label_19a130;
        case 0x19a134u: goto label_19a134;
        case 0x19a138u: goto label_19a138;
        case 0x19a13cu: goto label_19a13c;
        case 0x19a140u: goto label_19a140;
        case 0x19a144u: goto label_19a144;
        case 0x19a148u: goto label_19a148;
        case 0x19a14cu: goto label_19a14c;
        case 0x19a150u: goto label_19a150;
        case 0x19a154u: goto label_19a154;
        case 0x19a158u: goto label_19a158;
        case 0x19a15cu: goto label_19a15c;
        case 0x19a160u: goto label_19a160;
        case 0x19a164u: goto label_19a164;
        case 0x19a168u: goto label_19a168;
        case 0x19a16cu: goto label_19a16c;
        case 0x19a170u: goto label_19a170;
        case 0x19a174u: goto label_19a174;
        case 0x19a178u: goto label_19a178;
        case 0x19a17cu: goto label_19a17c;
        case 0x19a180u: goto label_19a180;
        case 0x19a184u: goto label_19a184;
        case 0x19a188u: goto label_19a188;
        case 0x19a18cu: goto label_19a18c;
        case 0x19a190u: goto label_19a190;
        case 0x19a194u: goto label_19a194;
        case 0x19a198u: goto label_19a198;
        case 0x19a19cu: goto label_19a19c;
        case 0x19a1a0u: goto label_19a1a0;
        case 0x19a1a4u: goto label_19a1a4;
        case 0x19a1a8u: goto label_19a1a8;
        case 0x19a1acu: goto label_19a1ac;
        case 0x19a1b0u: goto label_19a1b0;
        case 0x19a1b4u: goto label_19a1b4;
        case 0x19a1b8u: goto label_19a1b8;
        case 0x19a1bcu: goto label_19a1bc;
        case 0x19a1c0u: goto label_19a1c0;
        case 0x19a1c4u: goto label_19a1c4;
        case 0x19a1c8u: goto label_19a1c8;
        case 0x19a1ccu: goto label_19a1cc;
        case 0x19a1d0u: goto label_19a1d0;
        case 0x19a1d4u: goto label_19a1d4;
        case 0x19a1d8u: goto label_19a1d8;
        case 0x19a1dcu: goto label_19a1dc;
        case 0x19a1e0u: goto label_19a1e0;
        case 0x19a1e4u: goto label_19a1e4;
        case 0x19a1e8u: goto label_19a1e8;
        case 0x19a1ecu: goto label_19a1ec;
        case 0x19a1f0u: goto label_19a1f0;
        case 0x19a1f4u: goto label_19a1f4;
        case 0x19a1f8u: goto label_19a1f8;
        case 0x19a1fcu: goto label_19a1fc;
        case 0x19a200u: goto label_19a200;
        case 0x19a204u: goto label_19a204;
        case 0x19a208u: goto label_19a208;
        case 0x19a20cu: goto label_19a20c;
        case 0x19a210u: goto label_19a210;
        case 0x19a214u: goto label_19a214;
        case 0x19a218u: goto label_19a218;
        case 0x19a21cu: goto label_19a21c;
        case 0x19a220u: goto label_19a220;
        case 0x19a224u: goto label_19a224;
        case 0x19a228u: goto label_19a228;
        case 0x19a22cu: goto label_19a22c;
        case 0x19a230u: goto label_19a230;
        case 0x19a234u: goto label_19a234;
        case 0x19a238u: goto label_19a238;
        case 0x19a23cu: goto label_19a23c;
        case 0x19a240u: goto label_19a240;
        case 0x19a244u: goto label_19a244;
        case 0x19a248u: goto label_19a248;
        case 0x19a24cu: goto label_19a24c;
        case 0x19a250u: goto label_19a250;
        case 0x19a254u: goto label_19a254;
        case 0x19a258u: goto label_19a258;
        case 0x19a25cu: goto label_19a25c;
        case 0x19a260u: goto label_19a260;
        case 0x19a264u: goto label_19a264;
        case 0x19a268u: goto label_19a268;
        case 0x19a26cu: goto label_19a26c;
        case 0x19a270u: goto label_19a270;
        case 0x19a274u: goto label_19a274;
        case 0x19a278u: goto label_19a278;
        case 0x19a27cu: goto label_19a27c;
        case 0x19a280u: goto label_19a280;
        case 0x19a284u: goto label_19a284;
        case 0x19a288u: goto label_19a288;
        case 0x19a28cu: goto label_19a28c;
        case 0x19a290u: goto label_19a290;
        default: break;
    }

    ctx->pc = 0x199dc0u;

label_199dc0:
    // 0x199dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_199dc4:
    // 0x199dc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x199dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_199dc8:
    // 0x199dc8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x199dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_199dcc:
    // 0x199dcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199dd0:
    // 0x199dd0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x199dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_199dd4:
    // 0x199dd4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x199dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_199dd8:
    // 0x199dd8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x199dd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_199ddc:
    // 0x199ddc: 0x10200129  beqz        $at, . + 4 + (0x129 << 2)
label_199de0:
    if (ctx->pc == 0x199DE0u) {
        ctx->pc = 0x199DE4u;
        goto label_199de4;
    }
    ctx->pc = 0x199DDCu;
    {
        const bool branch_taken_0x199ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ddc) {
            ctx->pc = 0x19A284u;
            goto label_19a284;
        }
    }
    ctx->pc = 0x199DE4u;
label_199de4:
    // 0x199de4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x199de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_199de8:
    // 0x199de8: 0x2464ee10  addiu       $a0, $v1, -0x11F0
    ctx->pc = 0x199de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962704));
label_199dec:
    // 0x199dec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x199decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_199df0:
    // 0x199df0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_199df4:
    // 0x199df4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199df8:
    // 0x199df8: 0x600008  jr          $v1
label_199dfc:
    if (ctx->pc == 0x199DFCu) {
        ctx->pc = 0x199E00u;
        goto label_199e00;
    }
    ctx->pc = 0x199DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199DF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x199E00u;
label_199e00:
    // 0x199e00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e04:
    // 0x199e04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e08:
    // 0x199e08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x199e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_199e0c:
    // 0x199e0c: 0x24063c06  addiu       $a2, $zero, 0x3C06
    ctx->pc = 0x199e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15366));
label_199e10:
    // 0x199e10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199e14:
    // 0x199e14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x199e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_199e18:
    // 0x199e18: 0xc0965d0  jal         func_259740
label_199e1c:
    if (ctx->pc == 0x199E1Cu) {
        ctx->pc = 0x199E20u;
        goto label_199e20;
    }
    ctx->pc = 0x199E18u;
    SET_GPR_U32(ctx, 31, 0x199E20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x199E18u, 0x199E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E20u;
label_199e20:
    // 0x199e20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e24:
    // 0x199e24: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x199e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_199e28:
    // 0x199e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_199e2c:
    // 0x199e2c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x199e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_199e30:
    // 0x199e30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e34:
    // 0x199e34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x199e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199e38:
    // 0x199e38: 0xc096b40  jal         func_25AD00
label_199e3c:
    if (ctx->pc == 0x199E3Cu) {
        ctx->pc = 0x199E40u;
        goto label_199e40;
    }
    ctx->pc = 0x199E38u;
    SET_GPR_U32(ctx, 31, 0x199E40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x199E38u, 0x199E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E40u;
label_199e40:
    // 0x199e40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e44:
    // 0x199e44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e48:
    // 0x199e48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e4c:
    // 0x199e4c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x199e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_199e50:
    // 0x199e50: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x199e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_199e54:
    // 0x199e54: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x199e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199e58:
    // 0x199e58: 0xc040ed8  jal         func_103B60
label_199e5c:
    if (ctx->pc == 0x199E5Cu) {
        ctx->pc = 0x199E60u;
        goto label_199e60;
    }
    ctx->pc = 0x199E58u;
    SET_GPR_U32(ctx, 31, 0x199E60u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x199E60u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x199E60u) { return; }
    ctx->pc = 0x199E60u;
label_199e60:
    // 0x199e60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e64:
    // 0x199e64: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x199e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199e68:
    // 0x199e68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_199e6c:
    // 0x199e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199e70:
    // 0x199e70: 0x0  nop
    ctx->pc = 0x199e70u;
    // NOP
label_199e74:
    // 0x199e74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_199e78:
    // 0x199e78: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x199e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_199e7c:
    // 0x199e7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199e80:
    // 0x199e80: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x199e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199e84:
    // 0x199e84: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x199e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_199e88:
    // 0x199e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199e8c:
    // 0x199e8c: 0x0  nop
    ctx->pc = 0x199e8cu;
    // NOP
label_199e90:
    // 0x199e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199e94:
    // 0x199e94: 0x0  nop
    ctx->pc = 0x199e94u;
    // NOP
label_199e98:
    // 0x199e98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_199e9c:
    if (ctx->pc == 0x199E9Cu) {
        ctx->pc = 0x199EA0u;
        goto label_199ea0;
    }
    ctx->pc = 0x199E98u;
    {
        const bool branch_taken_0x199e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199e98) {
            ctx->pc = 0x199EB0u;
            goto label_199eb0;
        }
    }
    ctx->pc = 0x199EA0u;
label_199ea0:
    // 0x199ea0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_199ea4:
    // 0x199ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199ea8:
    // 0x199ea8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199eac:
    // 0x199eac: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x199eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_199eb0:
    // 0x199eb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199eb4:
    // 0x199eb4: 0xc05cd10  jal         func_173440
label_199eb8:
    if (ctx->pc == 0x199EB8u) {
        ctx->pc = 0x199EBCu;
        goto label_199ebc;
    }
    ctx->pc = 0x199EB4u;
    SET_GPR_U32(ctx, 31, 0x199EBCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199EB4u, 0x199EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EBCu;
label_199ebc:
    // 0x199ebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199ec0:
    // 0x199ec0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199ec4:
    // 0x199ec4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199ec8:
    // 0x199ec8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199ecc:
    // 0x199ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_199ed0:
    // 0x199ed0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199ed4:
    // 0x199ed4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199ed8:
    // 0x199ed8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199edc:
    // 0x199edc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199ee0:
    // 0x199ee0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199ee4:
    // 0x199ee4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_199ee8:
    // 0x199ee8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x199ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_199eec:
    // 0x199eec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199ef0:
    // 0x199ef0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199ef4:
    // 0x199ef4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_199ef8:
    // 0x199ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199efc:
    // 0x199efc: 0x0  nop
    ctx->pc = 0x199efcu;
    // NOP
label_199f00:
    // 0x199f00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199f04:
    // 0x199f04: 0x0  nop
    ctx->pc = 0x199f04u;
    // NOP
label_199f08:
    // 0x199f08: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_199f0c:
    if (ctx->pc == 0x199F0Cu) {
        ctx->pc = 0x199F10u;
        goto label_199f10;
    }
    ctx->pc = 0x199F08u;
    {
        const bool branch_taken_0x199f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199f08) {
            ctx->pc = 0x199F30u;
            goto label_199f30;
        }
    }
    ctx->pc = 0x199F10u;
label_199f10:
    // 0x199f10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f14:
    // 0x199f14: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x199f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199f18:
    // 0x199f18: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x199f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_199f1c:
    // 0x199f1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x199f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_199f20:
    // 0x199f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199f24:
    // 0x199f24: 0x0  nop
    ctx->pc = 0x199f24u;
    // NOP
label_199f28:
    // 0x199f28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199f28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_199f2c:
    // 0x199f2c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x199f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_199f30:
    // 0x199f30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f34:
    // 0x199f34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_199f38:
    // 0x199f38: 0xc05cec4  jal         func_173B10
label_199f3c:
    if (ctx->pc == 0x199F3Cu) {
        ctx->pc = 0x199F40u;
        goto label_199f40;
    }
    ctx->pc = 0x199F38u;
    SET_GPR_U32(ctx, 31, 0x199F40u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x199F38u, 0x199F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F40u;
label_199f40:
    // 0x199f40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f44:
    // 0x199f44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f48:
    // 0x199f48: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x199f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_199f4c:
    // 0x199f4c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x199f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_199f50:
    // 0x199f50: 0xc05cf7c  jal         func_173DF0
label_199f54:
    if (ctx->pc == 0x199F54u) {
        ctx->pc = 0x199F58u;
        goto label_199f58;
    }
    ctx->pc = 0x199F50u;
    SET_GPR_U32(ctx, 31, 0x199F58u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x199F50u, 0x199F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F58u;
label_199f58:
    // 0x199f58: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x199f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_199f5c:
    // 0x199f5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f60:
    // 0x199f60: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x199f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199f64:
    // 0x199f64: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199f68:
    // 0x199f68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199f6c:
    // 0x199f6c: 0x0  nop
    ctx->pc = 0x199f6cu;
    // NOP
label_199f70:
    // 0x199f70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_199f74:
    if (ctx->pc == 0x199F74u) {
        ctx->pc = 0x199F78u;
        goto label_199f78;
    }
    ctx->pc = 0x199F70u;
    {
        const bool branch_taken_0x199f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199f70) {
            ctx->pc = 0x199F84u;
            goto label_199f84;
        }
    }
    ctx->pc = 0x199F78u;
label_199f78:
    // 0x199f78: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199f7c:
    // 0x199f7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f80:
    // 0x199f80: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199f84:
    // 0x199f84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f88:
    // 0x199f88: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x199f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f8c:
    // 0x199f8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199f90:
    // 0x199f90: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x199f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
label_199f94:
    // 0x199f94: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x199f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_199f98:
    // 0x199f98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199f9c:
    // 0x199f9c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_199fa0:
    // 0x199fa0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x199fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199fa4:
    // 0x199fa4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x199fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_199fa8:
    // 0x199fa8: 0xc05c848  jal         func_172120
label_199fac:
    if (ctx->pc == 0x199FACu) {
        ctx->pc = 0x199FB0u;
        goto label_199fb0;
    }
    ctx->pc = 0x199FA8u;
    SET_GPR_U32(ctx, 31, 0x199FB0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199FA8u, 0x199FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FB0u;
label_199fb0:
    // 0x199fb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199fb4:
    // 0x199fb4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199fb8:
    // 0x199fb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199fb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_199fbc:
    // 0x199fbc: 0xc058fec  jal         func_163FB0
label_199fc0:
    if (ctx->pc == 0x199FC0u) {
        ctx->pc = 0x199FC4u;
        goto label_199fc4;
    }
    ctx->pc = 0x199FBCu;
    SET_GPR_U32(ctx, 31, 0x199FC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199FBCu, 0x199FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FC4u;
label_199fc4:
    // 0x199fc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199fc8:
    // 0x199fc8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_199fcc:
    // 0x199fcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199fd0:
    // 0x199fd0: 0xc0974c8  jal         func_25D320
label_199fd4:
    if (ctx->pc == 0x199FD4u) {
        ctx->pc = 0x199FD8u;
        goto label_199fd8;
    }
    ctx->pc = 0x199FD0u;
    SET_GPR_U32(ctx, 31, 0x199FD8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x199FD0u, 0x199FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FD8u;
label_199fd8:
    // 0x199fd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199fdc:
    // 0x199fdc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x199fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_199fe0:
    // 0x199fe0: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_199fe4:
    if (ctx->pc == 0x199FE4u) {
        ctx->pc = 0x199FE8u;
        goto label_199fe8;
    }
    ctx->pc = 0x199FE0u;
    {
        const bool branch_taken_0x199fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199fe0) {
            ctx->pc = 0x19A284u;
            goto label_19a284;
        }
    }
    ctx->pc = 0x199FE8u;
label_199fe8:
    // 0x199fe8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199fec:
    // 0x199fec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x199fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_199ff0:
    // 0x199ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199ff4:
    // 0x199ff4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x199ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_199ff8:
    // 0x199ff8: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_199ffc:
    if (ctx->pc == 0x199FFCu) {
        ctx->pc = 0x19A000u;
        goto label_19a000;
    }
    ctx->pc = 0x199FF8u;
    {
        const bool branch_taken_0x199ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ff8) {
            ctx->pc = 0x19A284u;
            goto label_19a284;
        }
    }
    ctx->pc = 0x19A000u;
label_19a000:
    // 0x19a000: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a004:
    // 0x19a004: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a008:
    // 0x19a008: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19a008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_19a00c:
    // 0x19a00c: 0x24061e2d  addiu       $a2, $zero, 0x1E2D
    ctx->pc = 0x19a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7725));
label_19a010:
    // 0x19a010: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a014:
    // 0x19a014: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_19a018:
    // 0x19a018: 0xc0965d0  jal         func_259740
label_19a01c:
    if (ctx->pc == 0x19A01Cu) {
        ctx->pc = 0x19A020u;
        goto label_19a020;
    }
    ctx->pc = 0x19A018u;
    SET_GPR_U32(ctx, 31, 0x19A020u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19A018u, 0x19A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A020u;
label_19a020:
    // 0x19a020: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a024:
    // 0x19a024: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19a024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_19a028:
    // 0x19a028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19a02c:
    // 0x19a02c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_19a030:
    // 0x19a030: 0x10000094  b           . + 4 + (0x94 << 2)
label_19a034:
    if (ctx->pc == 0x19A034u) {
        ctx->pc = 0x19A038u;
        goto label_19a038;
    }
    ctx->pc = 0x19A030u;
    {
        const bool branch_taken_0x19a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a030) {
            ctx->pc = 0x19A284u;
            goto label_19a284;
        }
    }
    ctx->pc = 0x19A038u;
label_19a038:
    // 0x19a038: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a03c:
    // 0x19a03c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a040:
    // 0x19a040: 0xc096b40  jal         func_25AD00
label_19a044:
    if (ctx->pc == 0x19A044u) {
        ctx->pc = 0x19A048u;
        goto label_19a048;
    }
    ctx->pc = 0x19A040u;
    SET_GPR_U32(ctx, 31, 0x19A048u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19A040u, 0x19A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A048u;
label_19a048:
    // 0x19a048: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a04c:
    // 0x19a04c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a050:
    // 0x19a050: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a054:
    // 0x19a054: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19a054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_19a058:
    // 0x19a058: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_19a05c:
    // 0x19a05c: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19a060:
    // 0x19a060: 0xc040ed8  jal         func_103B60
label_19a064:
    if (ctx->pc == 0x19A064u) {
        ctx->pc = 0x19A068u;
        goto label_19a068;
    }
    ctx->pc = 0x19A060u;
    SET_GPR_U32(ctx, 31, 0x19A068u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19A068u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A068u) { return; }
    ctx->pc = 0x19A068u;
label_19a068:
    // 0x19a068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a06c:
    // 0x19a06c: 0xc05cd10  jal         func_173440
label_19a070:
    if (ctx->pc == 0x19A070u) {
        ctx->pc = 0x19A074u;
        goto label_19a074;
    }
    ctx->pc = 0x19A06Cu;
    SET_GPR_U32(ctx, 31, 0x19A074u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19A06Cu, 0x19A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A074u;
label_19a074:
    // 0x19a074: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a078:
    // 0x19a078: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a07c:
    // 0x19a07c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a080:
    // 0x19a080: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a084:
    // 0x19a084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19a084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19a088:
    // 0x19a088: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19a088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19a08c:
    // 0x19a08c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a090:
    // 0x19a090: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a094:
    // 0x19a094: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a098:
    // 0x19a098: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a09c:
    // 0x19a09c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19a09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19a0a0:
    // 0x19a0a0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_19a0a4:
    // 0x19a0a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a0a8:
    // 0x19a0a8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a0ac:
    // 0x19a0ac: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x19a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_19a0b0:
    // 0x19a0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a0b4:
    // 0x19a0b4: 0x0  nop
    ctx->pc = 0x19a0b4u;
    // NOP
label_19a0b8:
    // 0x19a0b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a0b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19a0bc:
    // 0x19a0bc: 0x0  nop
    ctx->pc = 0x19a0bcu;
    // NOP
label_19a0c0:
    // 0x19a0c0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_19a0c4:
    if (ctx->pc == 0x19A0C4u) {
        ctx->pc = 0x19A0C8u;
        goto label_19a0c8;
    }
    ctx->pc = 0x19A0C0u;
    {
        const bool branch_taken_0x19a0c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a0c0) {
            ctx->pc = 0x19A0E8u;
            goto label_19a0e8;
        }
    }
    ctx->pc = 0x19A0C8u;
label_19a0c8:
    // 0x19a0c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a0cc:
    // 0x19a0cc: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x19a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a0d0:
    // 0x19a0d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19a0d4:
    // 0x19a0d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19a0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19a0d8:
    // 0x19a0d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a0dc:
    // 0x19a0dc: 0x0  nop
    ctx->pc = 0x19a0dcu;
    // NOP
label_19a0e0:
    // 0x19a0e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19a0e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19a0e4:
    // 0x19a0e4: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x19a0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_19a0e8:
    // 0x19a0e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a0ec:
    // 0x19a0ec: 0x904209de  lbu         $v0, 0x9DE($v0)
    ctx->pc = 0x19a0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2526)));
label_19a0f0:
    // 0x19a0f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19a0f4:
    // 0x19a0f4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19a0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_19a0f8:
    // 0x19a0f8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19a0fc:
    if (ctx->pc == 0x19A0FCu) {
        ctx->pc = 0x19A100u;
        goto label_19a100;
    }
    ctx->pc = 0x19A0F8u;
    {
        const bool branch_taken_0x19a0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a0f8) {
            ctx->pc = 0x19A15Cu;
            goto label_19a15c;
        }
    }
    ctx->pc = 0x19A100u;
label_19a100:
    // 0x19a100: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a104:
    // 0x19a104: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a108:
    // 0x19a108: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x19a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_19a10c:
    // 0x19a10c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x19a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_19a110:
    // 0x19a110: 0xc05cf7c  jal         func_173DF0
label_19a114:
    if (ctx->pc == 0x19A114u) {
        ctx->pc = 0x19A118u;
        goto label_19a118;
    }
    ctx->pc = 0x19A110u;
    SET_GPR_U32(ctx, 31, 0x19A118u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19A110u, 0x19A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A118u;
label_19a118:
    // 0x19a118: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x19a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_19a11c:
    // 0x19a11c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a120:
    // 0x19a120: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19a124:
    // 0x19a124: 0xc05cec4  jal         func_173B10
label_19a128:
    if (ctx->pc == 0x19A128u) {
        ctx->pc = 0x19A12Cu;
        goto label_19a12c;
    }
    ctx->pc = 0x19A124u;
    SET_GPR_U32(ctx, 31, 0x19A12Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19A124u, 0x19A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A12Cu;
label_19a12c:
    // 0x19a12c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a130:
    // 0x19a130: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a134:
    // 0x19a134: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x19a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a138:
    // 0x19a138: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19a13c:
    // 0x19a13c: 0x0  nop
    ctx->pc = 0x19a13cu;
    // NOP
label_19a140:
    // 0x19a140: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_19a144:
    if (ctx->pc == 0x19A144u) {
        ctx->pc = 0x19A148u;
        goto label_19a148;
    }
    ctx->pc = 0x19A140u;
    {
        const bool branch_taken_0x19a140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a140) {
            ctx->pc = 0x19A180u;
            goto label_19a180;
        }
    }
    ctx->pc = 0x19A148u;
label_19a148:
    // 0x19a148: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x19a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a14c:
    // 0x19a14c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a150:
    // 0x19a150: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19a150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19a154:
    // 0x19a154: 0x1000000a  b           . + 4 + (0xA << 2)
label_19a158:
    if (ctx->pc == 0x19A158u) {
        ctx->pc = 0x19A15Cu;
        goto label_19a15c;
    }
    ctx->pc = 0x19A154u;
    {
        const bool branch_taken_0x19a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a154) {
            ctx->pc = 0x19A180u;
            goto label_19a180;
        }
    }
    ctx->pc = 0x19A15Cu;
label_19a15c:
    // 0x19a15c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a160:
    // 0x19a160: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x19a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
label_19a164:
    // 0x19a164: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19a164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_19a168:
    // 0x19a168: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_19a16c:
    // 0x19a16c: 0xac821344  sw          $v0, 0x1344($a0)
    ctx->pc = 0x19a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 2));
label_19a170:
    // 0x19a170: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a174:
    // 0x19a174: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19a174u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19a178:
    // 0x19a178: 0xc05cec4  jal         func_173B10
label_19a17c:
    if (ctx->pc == 0x19A17Cu) {
        ctx->pc = 0x19A180u;
        goto label_19a180;
    }
    ctx->pc = 0x19A178u;
    SET_GPR_U32(ctx, 31, 0x19A180u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19A178u, 0x19A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A180u;
label_19a180:
    // 0x19a180: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a184:
    // 0x19a184: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x19a184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a188:
    // 0x19a188: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a18c:
    // 0x19a18c: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x19a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
label_19a190:
    // 0x19a190: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_19a194:
    // 0x19a194: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a198:
    // 0x19a198: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x19a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_19a19c:
    // 0x19a19c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x19a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19a1a0:
    // 0x19a1a0: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x19a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_19a1a4:
    // 0x19a1a4: 0xc05c848  jal         func_172120
label_19a1a8:
    if (ctx->pc == 0x19A1A8u) {
        ctx->pc = 0x19A1ACu;
        goto label_19a1ac;
    }
    ctx->pc = 0x19A1A4u;
    SET_GPR_U32(ctx, 31, 0x19A1ACu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x19A1A4u, 0x19A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1ACu;
label_19a1ac:
    // 0x19a1ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a1b0:
    // 0x19a1b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a1b4:
    // 0x19a1b4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x19a1b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19a1b8:
    // 0x19a1b8: 0xc058fec  jal         func_163FB0
label_19a1bc:
    if (ctx->pc == 0x19A1BCu) {
        ctx->pc = 0x19A1C0u;
        goto label_19a1c0;
    }
    ctx->pc = 0x19A1B8u;
    SET_GPR_U32(ctx, 31, 0x19A1C0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x19A1B8u, 0x19A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1C0u;
label_19a1c0:
    // 0x19a1c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a1c4:
    // 0x19a1c4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x19a1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_19a1c8:
    // 0x19a1c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a1cc:
    // 0x19a1cc: 0xc0974c8  jal         func_25D320
label_19a1d0:
    if (ctx->pc == 0x19A1D0u) {
        ctx->pc = 0x19A1D4u;
        goto label_19a1d4;
    }
    ctx->pc = 0x19A1CCu;
    SET_GPR_U32(ctx, 31, 0x19A1D4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19A1CCu, 0x19A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1D4u;
label_19a1d4:
    // 0x19a1d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a1d8:
    // 0x19a1d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19a1d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_19a1dc:
    // 0x19a1dc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_19a1e0:
    if (ctx->pc == 0x19A1E0u) {
        ctx->pc = 0x19A1E4u;
        goto label_19a1e4;
    }
    ctx->pc = 0x19A1DCu;
    {
        const bool branch_taken_0x19a1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1dc) {
            ctx->pc = 0x19A284u;
            goto label_19a284;
        }
    }
    ctx->pc = 0x19A1E4u;
label_19a1e4:
    // 0x19a1e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a1e8:
    // 0x19a1e8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19a1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_19a1ec:
    // 0x19a1ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19a1f0:
    // 0x19a1f0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19a1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_19a1f4:
    // 0x19a1f4: 0x10000023  b           . + 4 + (0x23 << 2)
label_19a1f8:
    if (ctx->pc == 0x19A1F8u) {
        ctx->pc = 0x19A1FCu;
        goto label_19a1fc;
    }
    ctx->pc = 0x19A1F4u;
    {
        const bool branch_taken_0x19a1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1f4) {
            ctx->pc = 0x19A284u;
            goto label_19a284;
        }
    }
    ctx->pc = 0x19A1FCu;
label_19a1fc:
    // 0x19a1fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a200:
    // 0x19a200: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a204:
    // 0x19a204: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_19a208:
    // 0x19a208: 0x24061e15  addiu       $a2, $zero, 0x1E15
    ctx->pc = 0x19a208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7701));
label_19a20c:
    // 0x19a20c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a210:
    // 0x19a210: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19a210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_19a214:
    // 0x19a214: 0xc0965d0  jal         func_259740
label_19a218:
    if (ctx->pc == 0x19A218u) {
        ctx->pc = 0x19A21Cu;
        goto label_19a21c;
    }
    ctx->pc = 0x19A214u;
    SET_GPR_U32(ctx, 31, 0x19A21Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19A214u, 0x19A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A21Cu;
label_19a21c:
    // 0x19a21c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a220:
    // 0x19a220: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19a220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_19a224:
    // 0x19a224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19a228:
    // 0x19a228: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19a228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_19a22c:
    // 0x19a22c: 0x10000015  b           . + 4 + (0x15 << 2)
label_19a230:
    if (ctx->pc == 0x19A230u) {
        ctx->pc = 0x19A234u;
        goto label_19a234;
    }
    ctx->pc = 0x19A22Cu;
    {
        const bool branch_taken_0x19a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a22c) {
            ctx->pc = 0x19A284u;
            goto label_19a284;
        }
    }
    ctx->pc = 0x19A234u;
label_19a234:
    // 0x19a234: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a238:
    // 0x19a238: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a23c:
    // 0x19a23c: 0xc096b40  jal         func_25AD00
label_19a240:
    if (ctx->pc == 0x19A240u) {
        ctx->pc = 0x19A244u;
        goto label_19a244;
    }
    ctx->pc = 0x19A23Cu;
    SET_GPR_U32(ctx, 31, 0x19A244u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19A23Cu, 0x19A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A244u;
label_19a244:
    // 0x19a244: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a248:
    // 0x19a248: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a24c:
    // 0x19a24c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a250:
    // 0x19a250: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_19a254:
    // 0x19a254: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_19a258:
    // 0x19a258: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19a25c:
    // 0x19a25c: 0xc040ed8  jal         func_103B60
label_19a260:
    if (ctx->pc == 0x19A260u) {
        ctx->pc = 0x19A264u;
        goto label_19a264;
    }
    ctx->pc = 0x19A25Cu;
    SET_GPR_U32(ctx, 31, 0x19A264u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19A264u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A264u) { return; }
    ctx->pc = 0x19A264u;
label_19a264:
    // 0x19a264: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a268:
    // 0x19a268: 0xc05cd10  jal         func_173440
label_19a26c:
    if (ctx->pc == 0x19A26Cu) {
        ctx->pc = 0x19A270u;
        goto label_19a270;
    }
    ctx->pc = 0x19A268u;
    SET_GPR_U32(ctx, 31, 0x19A270u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19A268u, 0x19A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A270u;
label_19a270:
    // 0x19a270: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a274:
    // 0x19a274: 0xc0974c8  jal         func_25D320
label_19a278:
    if (ctx->pc == 0x19A278u) {
        ctx->pc = 0x19A27Cu;
        goto label_19a27c;
    }
    ctx->pc = 0x19A274u;
    SET_GPR_U32(ctx, 31, 0x19A27Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19A274u, 0x19A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A27Cu;
label_19a27c:
    // 0x19a27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19a280:
    // 0x19a280: 0x0  nop
    ctx->pc = 0x19a280u;
    // NOP
label_19a284:
    // 0x19a284: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19a284u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19a288:
    // 0x19a288: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19a28c:
    // 0x19a28c: 0x3e00008  jr          $ra
label_19a290:
    if (ctx->pc == 0x19A290u) {
        ctx->pc = 0x19A294u;
        goto label_fallthrough_0x19a28c;
    }
    ctx->pc = 0x19A28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a28c:
    ctx->pc = 0x19A294u;
}
