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

// Function: Pl_r1_climb_up
// Address: 0x148ec0 - 0x149454
void Pl_r1_climb_up_0x148ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_climb_up_0x148ec0");
#endif

    switch (ctx->pc) {
        case 0x148ec0u: goto label_148ec0;
        case 0x148ec4u: goto label_148ec4;
        case 0x148ec8u: goto label_148ec8;
        case 0x148eccu: goto label_148ecc;
        case 0x148ed0u: goto label_148ed0;
        case 0x148ed4u: goto label_148ed4;
        case 0x148ed8u: goto label_148ed8;
        case 0x148edcu: goto label_148edc;
        case 0x148ee0u: goto label_148ee0;
        case 0x148ee4u: goto label_148ee4;
        case 0x148ee8u: goto label_148ee8;
        case 0x148eecu: goto label_148eec;
        case 0x148ef0u: goto label_148ef0;
        case 0x148ef4u: goto label_148ef4;
        case 0x148ef8u: goto label_148ef8;
        case 0x148efcu: goto label_148efc;
        case 0x148f00u: goto label_148f00;
        case 0x148f04u: goto label_148f04;
        case 0x148f08u: goto label_148f08;
        case 0x148f0cu: goto label_148f0c;
        case 0x148f10u: goto label_148f10;
        case 0x148f14u: goto label_148f14;
        case 0x148f18u: goto label_148f18;
        case 0x148f1cu: goto label_148f1c;
        case 0x148f20u: goto label_148f20;
        case 0x148f24u: goto label_148f24;
        case 0x148f28u: goto label_148f28;
        case 0x148f2cu: goto label_148f2c;
        case 0x148f30u: goto label_148f30;
        case 0x148f34u: goto label_148f34;
        case 0x148f38u: goto label_148f38;
        case 0x148f3cu: goto label_148f3c;
        case 0x148f40u: goto label_148f40;
        case 0x148f44u: goto label_148f44;
        case 0x148f48u: goto label_148f48;
        case 0x148f4cu: goto label_148f4c;
        case 0x148f50u: goto label_148f50;
        case 0x148f54u: goto label_148f54;
        case 0x148f58u: goto label_148f58;
        case 0x148f5cu: goto label_148f5c;
        case 0x148f60u: goto label_148f60;
        case 0x148f64u: goto label_148f64;
        case 0x148f68u: goto label_148f68;
        case 0x148f6cu: goto label_148f6c;
        case 0x148f70u: goto label_148f70;
        case 0x148f74u: goto label_148f74;
        case 0x148f78u: goto label_148f78;
        case 0x148f7cu: goto label_148f7c;
        case 0x148f80u: goto label_148f80;
        case 0x148f84u: goto label_148f84;
        case 0x148f88u: goto label_148f88;
        case 0x148f8cu: goto label_148f8c;
        case 0x148f90u: goto label_148f90;
        case 0x148f94u: goto label_148f94;
        case 0x148f98u: goto label_148f98;
        case 0x148f9cu: goto label_148f9c;
        case 0x148fa0u: goto label_148fa0;
        case 0x148fa4u: goto label_148fa4;
        case 0x148fa8u: goto label_148fa8;
        case 0x148facu: goto label_148fac;
        case 0x148fb0u: goto label_148fb0;
        case 0x148fb4u: goto label_148fb4;
        case 0x148fb8u: goto label_148fb8;
        case 0x148fbcu: goto label_148fbc;
        case 0x148fc0u: goto label_148fc0;
        case 0x148fc4u: goto label_148fc4;
        case 0x148fc8u: goto label_148fc8;
        case 0x148fccu: goto label_148fcc;
        case 0x148fd0u: goto label_148fd0;
        case 0x148fd4u: goto label_148fd4;
        case 0x148fd8u: goto label_148fd8;
        case 0x148fdcu: goto label_148fdc;
        case 0x148fe0u: goto label_148fe0;
        case 0x148fe4u: goto label_148fe4;
        case 0x148fe8u: goto label_148fe8;
        case 0x148fecu: goto label_148fec;
        case 0x148ff0u: goto label_148ff0;
        case 0x148ff4u: goto label_148ff4;
        case 0x148ff8u: goto label_148ff8;
        case 0x148ffcu: goto label_148ffc;
        case 0x149000u: goto label_149000;
        case 0x149004u: goto label_149004;
        case 0x149008u: goto label_149008;
        case 0x14900cu: goto label_14900c;
        case 0x149010u: goto label_149010;
        case 0x149014u: goto label_149014;
        case 0x149018u: goto label_149018;
        case 0x14901cu: goto label_14901c;
        case 0x149020u: goto label_149020;
        case 0x149024u: goto label_149024;
        case 0x149028u: goto label_149028;
        case 0x14902cu: goto label_14902c;
        case 0x149030u: goto label_149030;
        case 0x149034u: goto label_149034;
        case 0x149038u: goto label_149038;
        case 0x14903cu: goto label_14903c;
        case 0x149040u: goto label_149040;
        case 0x149044u: goto label_149044;
        case 0x149048u: goto label_149048;
        case 0x14904cu: goto label_14904c;
        case 0x149050u: goto label_149050;
        case 0x149054u: goto label_149054;
        case 0x149058u: goto label_149058;
        case 0x14905cu: goto label_14905c;
        case 0x149060u: goto label_149060;
        case 0x149064u: goto label_149064;
        case 0x149068u: goto label_149068;
        case 0x14906cu: goto label_14906c;
        case 0x149070u: goto label_149070;
        case 0x149074u: goto label_149074;
        case 0x149078u: goto label_149078;
        case 0x14907cu: goto label_14907c;
        case 0x149080u: goto label_149080;
        case 0x149084u: goto label_149084;
        case 0x149088u: goto label_149088;
        case 0x14908cu: goto label_14908c;
        case 0x149090u: goto label_149090;
        case 0x149094u: goto label_149094;
        case 0x149098u: goto label_149098;
        case 0x14909cu: goto label_14909c;
        case 0x1490a0u: goto label_1490a0;
        case 0x1490a4u: goto label_1490a4;
        case 0x1490a8u: goto label_1490a8;
        case 0x1490acu: goto label_1490ac;
        case 0x1490b0u: goto label_1490b0;
        case 0x1490b4u: goto label_1490b4;
        case 0x1490b8u: goto label_1490b8;
        case 0x1490bcu: goto label_1490bc;
        case 0x1490c0u: goto label_1490c0;
        case 0x1490c4u: goto label_1490c4;
        case 0x1490c8u: goto label_1490c8;
        case 0x1490ccu: goto label_1490cc;
        case 0x1490d0u: goto label_1490d0;
        case 0x1490d4u: goto label_1490d4;
        case 0x1490d8u: goto label_1490d8;
        case 0x1490dcu: goto label_1490dc;
        case 0x1490e0u: goto label_1490e0;
        case 0x1490e4u: goto label_1490e4;
        case 0x1490e8u: goto label_1490e8;
        case 0x1490ecu: goto label_1490ec;
        case 0x1490f0u: goto label_1490f0;
        case 0x1490f4u: goto label_1490f4;
        case 0x1490f8u: goto label_1490f8;
        case 0x1490fcu: goto label_1490fc;
        case 0x149100u: goto label_149100;
        case 0x149104u: goto label_149104;
        case 0x149108u: goto label_149108;
        case 0x14910cu: goto label_14910c;
        case 0x149110u: goto label_149110;
        case 0x149114u: goto label_149114;
        case 0x149118u: goto label_149118;
        case 0x14911cu: goto label_14911c;
        case 0x149120u: goto label_149120;
        case 0x149124u: goto label_149124;
        case 0x149128u: goto label_149128;
        case 0x14912cu: goto label_14912c;
        case 0x149130u: goto label_149130;
        case 0x149134u: goto label_149134;
        case 0x149138u: goto label_149138;
        case 0x14913cu: goto label_14913c;
        case 0x149140u: goto label_149140;
        case 0x149144u: goto label_149144;
        case 0x149148u: goto label_149148;
        case 0x14914cu: goto label_14914c;
        case 0x149150u: goto label_149150;
        case 0x149154u: goto label_149154;
        case 0x149158u: goto label_149158;
        case 0x14915cu: goto label_14915c;
        case 0x149160u: goto label_149160;
        case 0x149164u: goto label_149164;
        case 0x149168u: goto label_149168;
        case 0x14916cu: goto label_14916c;
        case 0x149170u: goto label_149170;
        case 0x149174u: goto label_149174;
        case 0x149178u: goto label_149178;
        case 0x14917cu: goto label_14917c;
        case 0x149180u: goto label_149180;
        case 0x149184u: goto label_149184;
        case 0x149188u: goto label_149188;
        case 0x14918cu: goto label_14918c;
        case 0x149190u: goto label_149190;
        case 0x149194u: goto label_149194;
        case 0x149198u: goto label_149198;
        case 0x14919cu: goto label_14919c;
        case 0x1491a0u: goto label_1491a0;
        case 0x1491a4u: goto label_1491a4;
        case 0x1491a8u: goto label_1491a8;
        case 0x1491acu: goto label_1491ac;
        case 0x1491b0u: goto label_1491b0;
        case 0x1491b4u: goto label_1491b4;
        case 0x1491b8u: goto label_1491b8;
        case 0x1491bcu: goto label_1491bc;
        case 0x1491c0u: goto label_1491c0;
        case 0x1491c4u: goto label_1491c4;
        case 0x1491c8u: goto label_1491c8;
        case 0x1491ccu: goto label_1491cc;
        case 0x1491d0u: goto label_1491d0;
        case 0x1491d4u: goto label_1491d4;
        case 0x1491d8u: goto label_1491d8;
        case 0x1491dcu: goto label_1491dc;
        case 0x1491e0u: goto label_1491e0;
        case 0x1491e4u: goto label_1491e4;
        case 0x1491e8u: goto label_1491e8;
        case 0x1491ecu: goto label_1491ec;
        case 0x1491f0u: goto label_1491f0;
        case 0x1491f4u: goto label_1491f4;
        case 0x1491f8u: goto label_1491f8;
        case 0x1491fcu: goto label_1491fc;
        case 0x149200u: goto label_149200;
        case 0x149204u: goto label_149204;
        case 0x149208u: goto label_149208;
        case 0x14920cu: goto label_14920c;
        case 0x149210u: goto label_149210;
        case 0x149214u: goto label_149214;
        case 0x149218u: goto label_149218;
        case 0x14921cu: goto label_14921c;
        case 0x149220u: goto label_149220;
        case 0x149224u: goto label_149224;
        case 0x149228u: goto label_149228;
        case 0x14922cu: goto label_14922c;
        case 0x149230u: goto label_149230;
        case 0x149234u: goto label_149234;
        case 0x149238u: goto label_149238;
        case 0x14923cu: goto label_14923c;
        case 0x149240u: goto label_149240;
        case 0x149244u: goto label_149244;
        case 0x149248u: goto label_149248;
        case 0x14924cu: goto label_14924c;
        case 0x149250u: goto label_149250;
        case 0x149254u: goto label_149254;
        case 0x149258u: goto label_149258;
        case 0x14925cu: goto label_14925c;
        case 0x149260u: goto label_149260;
        case 0x149264u: goto label_149264;
        case 0x149268u: goto label_149268;
        case 0x14926cu: goto label_14926c;
        case 0x149270u: goto label_149270;
        case 0x149274u: goto label_149274;
        case 0x149278u: goto label_149278;
        case 0x14927cu: goto label_14927c;
        case 0x149280u: goto label_149280;
        case 0x149284u: goto label_149284;
        case 0x149288u: goto label_149288;
        case 0x14928cu: goto label_14928c;
        case 0x149290u: goto label_149290;
        case 0x149294u: goto label_149294;
        case 0x149298u: goto label_149298;
        case 0x14929cu: goto label_14929c;
        case 0x1492a0u: goto label_1492a0;
        case 0x1492a4u: goto label_1492a4;
        case 0x1492a8u: goto label_1492a8;
        case 0x1492acu: goto label_1492ac;
        case 0x1492b0u: goto label_1492b0;
        case 0x1492b4u: goto label_1492b4;
        case 0x1492b8u: goto label_1492b8;
        case 0x1492bcu: goto label_1492bc;
        case 0x1492c0u: goto label_1492c0;
        case 0x1492c4u: goto label_1492c4;
        case 0x1492c8u: goto label_1492c8;
        case 0x1492ccu: goto label_1492cc;
        case 0x1492d0u: goto label_1492d0;
        case 0x1492d4u: goto label_1492d4;
        case 0x1492d8u: goto label_1492d8;
        case 0x1492dcu: goto label_1492dc;
        case 0x1492e0u: goto label_1492e0;
        case 0x1492e4u: goto label_1492e4;
        case 0x1492e8u: goto label_1492e8;
        case 0x1492ecu: goto label_1492ec;
        case 0x1492f0u: goto label_1492f0;
        case 0x1492f4u: goto label_1492f4;
        case 0x1492f8u: goto label_1492f8;
        case 0x1492fcu: goto label_1492fc;
        case 0x149300u: goto label_149300;
        case 0x149304u: goto label_149304;
        case 0x149308u: goto label_149308;
        case 0x14930cu: goto label_14930c;
        case 0x149310u: goto label_149310;
        case 0x149314u: goto label_149314;
        case 0x149318u: goto label_149318;
        case 0x14931cu: goto label_14931c;
        case 0x149320u: goto label_149320;
        case 0x149324u: goto label_149324;
        case 0x149328u: goto label_149328;
        case 0x14932cu: goto label_14932c;
        case 0x149330u: goto label_149330;
        case 0x149334u: goto label_149334;
        case 0x149338u: goto label_149338;
        case 0x14933cu: goto label_14933c;
        case 0x149340u: goto label_149340;
        case 0x149344u: goto label_149344;
        case 0x149348u: goto label_149348;
        case 0x14934cu: goto label_14934c;
        case 0x149350u: goto label_149350;
        case 0x149354u: goto label_149354;
        case 0x149358u: goto label_149358;
        case 0x14935cu: goto label_14935c;
        case 0x149360u: goto label_149360;
        case 0x149364u: goto label_149364;
        case 0x149368u: goto label_149368;
        case 0x14936cu: goto label_14936c;
        case 0x149370u: goto label_149370;
        case 0x149374u: goto label_149374;
        case 0x149378u: goto label_149378;
        case 0x14937cu: goto label_14937c;
        case 0x149380u: goto label_149380;
        case 0x149384u: goto label_149384;
        case 0x149388u: goto label_149388;
        case 0x14938cu: goto label_14938c;
        case 0x149390u: goto label_149390;
        case 0x149394u: goto label_149394;
        case 0x149398u: goto label_149398;
        case 0x14939cu: goto label_14939c;
        case 0x1493a0u: goto label_1493a0;
        case 0x1493a4u: goto label_1493a4;
        case 0x1493a8u: goto label_1493a8;
        case 0x1493acu: goto label_1493ac;
        case 0x1493b0u: goto label_1493b0;
        case 0x1493b4u: goto label_1493b4;
        case 0x1493b8u: goto label_1493b8;
        case 0x1493bcu: goto label_1493bc;
        case 0x1493c0u: goto label_1493c0;
        case 0x1493c4u: goto label_1493c4;
        case 0x1493c8u: goto label_1493c8;
        case 0x1493ccu: goto label_1493cc;
        case 0x1493d0u: goto label_1493d0;
        case 0x1493d4u: goto label_1493d4;
        case 0x1493d8u: goto label_1493d8;
        case 0x1493dcu: goto label_1493dc;
        case 0x1493e0u: goto label_1493e0;
        case 0x1493e4u: goto label_1493e4;
        case 0x1493e8u: goto label_1493e8;
        case 0x1493ecu: goto label_1493ec;
        case 0x1493f0u: goto label_1493f0;
        case 0x1493f4u: goto label_1493f4;
        case 0x1493f8u: goto label_1493f8;
        case 0x1493fcu: goto label_1493fc;
        case 0x149400u: goto label_149400;
        case 0x149404u: goto label_149404;
        case 0x149408u: goto label_149408;
        case 0x14940cu: goto label_14940c;
        case 0x149410u: goto label_149410;
        case 0x149414u: goto label_149414;
        case 0x149418u: goto label_149418;
        case 0x14941cu: goto label_14941c;
        case 0x149420u: goto label_149420;
        case 0x149424u: goto label_149424;
        case 0x149428u: goto label_149428;
        case 0x14942cu: goto label_14942c;
        case 0x149430u: goto label_149430;
        case 0x149434u: goto label_149434;
        case 0x149438u: goto label_149438;
        case 0x14943cu: goto label_14943c;
        case 0x149440u: goto label_149440;
        case 0x149444u: goto label_149444;
        case 0x149448u: goto label_149448;
        case 0x14944cu: goto label_14944c;
        case 0x149450u: goto label_149450;
        default: break;
    }

    ctx->pc = 0x148ec0u;

label_148ec0:
    // 0x148ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x148ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_148ec4:
    // 0x148ec4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x148ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_148ec8:
    // 0x148ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_148ecc:
    // 0x148ecc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x148eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_148ed0:
    // 0x148ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148ed4:
    // 0x148ed4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x148ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_148ed8:
    // 0x148ed8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x148ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_148edc:
    // 0x148edc: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x148edcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_148ee0:
    // 0x148ee0: 0x10200157  beqz        $at, . + 4 + (0x157 << 2)
label_148ee4:
    if (ctx->pc == 0x148EE4u) {
        ctx->pc = 0x148EE8u;
        goto label_148ee8;
    }
    ctx->pc = 0x148EE0u;
    {
        const bool branch_taken_0x148ee0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ee0) {
            ctx->pc = 0x149440u;
            goto label_149440;
        }
    }
    ctx->pc = 0x148EE8u;
label_148ee8:
    // 0x148ee8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x148ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_148eec:
    // 0x148eec: 0x2464e7c0  addiu       $a0, $v1, -0x1840
    ctx->pc = 0x148eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961088));
label_148ef0:
    // 0x148ef0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x148ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_148ef4:
    // 0x148ef4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_148ef8:
    // 0x148ef8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_148efc:
    // 0x148efc: 0x600008  jr          $v1
label_148f00:
    if (ctx->pc == 0x148F00u) {
        ctx->pc = 0x148F04u;
        goto label_148f04;
    }
    ctx->pc = 0x148EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148EFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x148F04u;
label_148f04:
    // 0x148f04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f08:
    // 0x148f08: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x148f08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_148f0c:
    // 0x148f0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f10:
    // 0x148f10: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x148f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_148f14:
    // 0x148f14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f18:
    // 0x148f18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x148f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_148f1c:
    // 0x148f1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x148f1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_148f20:
    // 0x148f20: 0x3c02447c  lui         $v0, 0x447C
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17532 << 16));
label_148f24:
    // 0x148f24: 0x3442208b  ori         $v0, $v0, 0x208B
    ctx->pc = 0x148f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8331);
label_148f28:
    // 0x148f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148f2c:
    // 0x148f2c: 0x0  nop
    ctx->pc = 0x148f2cu;
    // NOP
label_148f30:
    // 0x148f30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x148f30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_148f34:
    // 0x148f34: 0x3c02433e  lui         $v0, 0x433E
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17214 << 16));
label_148f38:
    // 0x148f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148f3c:
    // 0x148f3c: 0x0  nop
    ctx->pc = 0x148f3cu;
    // NOP
label_148f40:
    // 0x148f40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x148f40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_148f44:
    // 0x148f44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f48:
    // 0x148f48: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x148f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_148f4c:
    // 0x148f4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f50:
    // 0x148f50: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x148f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
label_148f54:
    // 0x148f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x148f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_148f58:
    // 0x148f58: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x148f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_148f5c:
    // 0x148f5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x148f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_148f60:
    // 0x148f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f64:
    // 0x148f64: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x148f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_148f68:
    // 0x148f68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x148f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f6c:
    // 0x148f6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f70:
    // 0x148f70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_148f74:
    // 0x148f74: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x148f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
label_148f78:
    // 0x148f78: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x148f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_148f7c:
    // 0x148f7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_148f80:
    // 0x148f80: 0xc0965d0  jal         func_259740
label_148f84:
    if (ctx->pc == 0x148F84u) {
        ctx->pc = 0x148F88u;
        goto label_148f88;
    }
    ctx->pc = 0x148F80u;
    SET_GPR_U32(ctx, 31, 0x148F88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148F80u, 0x148F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F88u;
label_148f88:
    // 0x148f88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f8c:
    // 0x148f8c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x148f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_148f90:
    // 0x148f90: 0xc058b98  jal         func_162E60
label_148f94:
    if (ctx->pc == 0x148F94u) {
        ctx->pc = 0x148F98u;
        goto label_148f98;
    }
    ctx->pc = 0x148F90u;
    SET_GPR_U32(ctx, 31, 0x148F98u);
    ctx->pc = 0x162E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162E60u, 0x148F90u, 0x148F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F98u;
label_148f98:
    // 0x148f98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x148f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148f9c:
    // 0x148f9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148fa0:
    // 0x148fa0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x148fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_148fa4:
    // 0x148fa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x148fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_148fa8:
    // 0x148fa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x148fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_148fac:
    // 0x148fac: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x148facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
label_148fb0:
    // 0x148fb0: 0x24651b40  addiu       $a1, $v1, 0x1B40
    ctx->pc = 0x148fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_148fb4:
    // 0x148fb4: 0xc040ed8  jal         func_103B60
label_148fb8:
    if (ctx->pc == 0x148FB8u) {
        ctx->pc = 0x148FBCu;
        goto label_148fbc;
    }
    ctx->pc = 0x148FB4u;
    SET_GPR_U32(ctx, 31, 0x148FBCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x148FBCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x148FBCu) { return; }
    ctx->pc = 0x148FBCu;
label_148fbc:
    // 0x148fbc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x148fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_148fc0:
    // 0x148fc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148fc4:
    // 0x148fc4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x148fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_148fc8:
    // 0x148fc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148fcc:
    // 0x148fcc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_148fd0:
    // 0x148fd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_148fd4:
    // 0x148fd4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x148fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148fd8:
    // 0x148fd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148fdc:
    // 0x148fdc: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x148fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
label_148fe0:
    // 0x148fe0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x148fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_148fe4:
    // 0x148fe4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x148fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_148fe8:
    // 0x148fe8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x148fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_148fec:
    // 0x148fec: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_148ff0:
    if (ctx->pc == 0x148FF0u) {
        ctx->pc = 0x148FF4u;
        goto label_148ff4;
    }
    ctx->pc = 0x148FECu;
    {
        const bool branch_taken_0x148fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148fec) {
            ctx->pc = 0x149044u;
            goto label_149044;
        }
    }
    ctx->pc = 0x148FF4u;
label_148ff4:
    // 0x148ff4: 0xc067694  jal         func_19DA50
label_148ff8:
    if (ctx->pc == 0x148FF8u) {
        ctx->pc = 0x148FFCu;
        goto label_148ffc;
    }
    ctx->pc = 0x148FF4u;
    SET_GPR_U32(ctx, 31, 0x148FFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x148FF4u, 0x148FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FFCu;
label_148ffc:
    // 0x148ffc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x148ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_149000:
    // 0x149000: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x149000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_149004:
    // 0x149004: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x149004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_149008:
    // 0x149008: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x149008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14900c:
    // 0x14900c: 0x244252d8  addiu       $v0, $v0, 0x52D8
    ctx->pc = 0x14900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21208));
label_149010:
    // 0x149010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_149014:
    // 0x149014: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x149014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_149018:
    // 0x149018: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x149018u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14901c:
    // 0x14901c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_149020:
    // 0x149020: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x149020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_149024:
    // 0x149024: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x149024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149028:
    // 0x149028: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14902c:
    // 0x14902c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_149030:
    // 0x149030: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x149030u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_149034:
    // 0x149034: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x149034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_149038:
    // 0x149038: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x149038u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14903c:
    // 0x14903c: 0xc067b18  jal         func_19EC60
label_149040:
    if (ctx->pc == 0x149040u) {
        ctx->pc = 0x149044u;
        goto label_149044;
    }
    ctx->pc = 0x14903Cu;
    SET_GPR_U32(ctx, 31, 0x149044u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14903Cu, 0x149044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149044u;
label_149044:
    // 0x149044: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_149048:
    // 0x149048: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14904c:
    // 0x14904c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14904cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_149050:
    // 0x149050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149054:
    // 0x149054: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149058:
    // 0x149058: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x149058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14905c:
    // 0x14905c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_149060:
    // 0x149060: 0xc058f50  jal         func_163D40
label_149064:
    if (ctx->pc == 0x149064u) {
        ctx->pc = 0x149068u;
        goto label_149068;
    }
    ctx->pc = 0x149060u;
    SET_GPR_U32(ctx, 31, 0x149068u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149060u, 0x149068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149068u;
label_149068:
    // 0x149068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14906c:
    // 0x14906c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_149070:
    // 0x149070: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149074:
    // 0x149074: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149074u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149078:
    // 0x149078: 0xc096b40  jal         func_25AD00
label_14907c:
    if (ctx->pc == 0x14907Cu) {
        ctx->pc = 0x149080u;
        goto label_149080;
    }
    ctx->pc = 0x149078u;
    SET_GPR_U32(ctx, 31, 0x149080u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149078u, 0x149080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149080u;
label_149080:
    // 0x149080: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149084:
    // 0x149084: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149088:
    // 0x149088: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14908c:
    // 0x14908c: 0xc05cd58  jal         func_173560
label_149090:
    if (ctx->pc == 0x149090u) {
        ctx->pc = 0x149094u;
        goto label_149094;
    }
    ctx->pc = 0x14908Cu;
    SET_GPR_U32(ctx, 31, 0x149094u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14908Cu, 0x149094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149094u;
label_149094:
    // 0x149094: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149098:
    // 0x149098: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14909c:
    // 0x14909c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14909cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1490a0:
    // 0x1490a0: 0xc0573d8  jal         func_15CF60
label_1490a4:
    if (ctx->pc == 0x1490A4u) {
        ctx->pc = 0x1490A8u;
        goto label_1490a8;
    }
    ctx->pc = 0x1490A0u;
    SET_GPR_U32(ctx, 31, 0x1490A8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1490A0u, 0x1490A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490A8u;
label_1490a8:
    // 0x1490a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1490a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1490ac:
    // 0x1490ac: 0xc097530  jal         func_25D4C0
label_1490b0:
    if (ctx->pc == 0x1490B0u) {
        ctx->pc = 0x1490B4u;
        goto label_1490b4;
    }
    ctx->pc = 0x1490ACu;
    SET_GPR_U32(ctx, 31, 0x1490B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1490ACu, 0x1490B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490B4u;
label_1490b4:
    // 0x1490b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1490b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1490b8:
    // 0x1490b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1490b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1490bc:
    // 0x1490bc: 0x106000e0  beqz        $v1, . + 4 + (0xE0 << 2)
label_1490c0:
    if (ctx->pc == 0x1490C0u) {
        ctx->pc = 0x1490C4u;
        goto label_1490c4;
    }
    ctx->pc = 0x1490BCu;
    {
        const bool branch_taken_0x1490bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490bc) {
            ctx->pc = 0x149440u;
            goto label_149440;
        }
    }
    ctx->pc = 0x1490C4u;
label_1490c4:
    // 0x1490c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1490c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1490c8:
    // 0x1490c8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1490c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1490cc:
    // 0x1490cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1490ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1490d0:
    // 0x1490d0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1490d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1490d4:
    // 0x1490d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1490d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1490d8:
    // 0x1490d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1490d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1490dc:
    // 0x1490dc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1490dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1490e0:
    // 0x1490e0: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_1490e4:
    if (ctx->pc == 0x1490E4u) {
        ctx->pc = 0x1490E8u;
        goto label_1490e8;
    }
    ctx->pc = 0x1490E0u;
    {
        const bool branch_taken_0x1490e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490e0) {
            ctx->pc = 0x149440u;
            goto label_149440;
        }
    }
    ctx->pc = 0x1490E8u;
label_1490e8:
    // 0x1490e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1490e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1490ec:
    // 0x1490ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1490ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1490f0:
    // 0x1490f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1490f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1490f4:
    // 0x1490f4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1490f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1490f8:
    // 0x1490f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1490f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1490fc:
    // 0x1490fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1490fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149100:
    // 0x149100: 0xc0965d0  jal         func_259740
label_149104:
    if (ctx->pc == 0x149104u) {
        ctx->pc = 0x149108u;
        goto label_149108;
    }
    ctx->pc = 0x149100u;
    SET_GPR_U32(ctx, 31, 0x149108u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149100u, 0x149108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149108u;
label_149108:
    // 0x149108: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14910c:
    // 0x14910c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14910cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149110:
    // 0x149110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_149114:
    // 0x149114: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_149118:
    // 0x149118: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_14911c:
    // 0x14911c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_149120:
    // 0x149120: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x149120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_149124:
    // 0x149124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149128:
    // 0x149128: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14912c:
    // 0x14912c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149130:
    // 0x149130: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x149130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_149134:
    // 0x149134: 0xc058f50  jal         func_163D40
label_149138:
    if (ctx->pc == 0x149138u) {
        ctx->pc = 0x14913Cu;
        goto label_14913c;
    }
    ctx->pc = 0x149134u;
    SET_GPR_U32(ctx, 31, 0x14913Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149134u, 0x14913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14913Cu;
label_14913c:
    // 0x14913c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149140:
    // 0x149140: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x149140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_149144:
    // 0x149144: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149148:
    // 0x149148: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14914c:
    // 0x14914c: 0xc096b40  jal         func_25AD00
label_149150:
    if (ctx->pc == 0x149150u) {
        ctx->pc = 0x149154u;
        goto label_149154;
    }
    ctx->pc = 0x14914Cu;
    SET_GPR_U32(ctx, 31, 0x149154u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14914Cu, 0x149154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149154u;
label_149154:
    // 0x149154: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149158:
    // 0x149158: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x149158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14915c:
    // 0x14915c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149160:
    // 0x149160: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x149160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149164:
    // 0x149164: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_149168:
    // 0x149168: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14916c:
    // 0x14916c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149170:
    // 0x149170: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149174:
    // 0x149174: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149178:
    // 0x149178: 0xc05cd58  jal         func_173560
label_14917c:
    if (ctx->pc == 0x14917Cu) {
        ctx->pc = 0x149180u;
        goto label_149180;
    }
    ctx->pc = 0x149178u;
    SET_GPR_U32(ctx, 31, 0x149180u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x149178u, 0x149180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149180u;
label_149180:
    // 0x149180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149184:
    // 0x149184: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x149184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_149188:
    // 0x149188: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_14918c:
    if (ctx->pc == 0x14918Cu) {
        ctx->pc = 0x149190u;
        goto label_149190;
    }
    ctx->pc = 0x149188u;
    {
        const bool branch_taken_0x149188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149188) {
            ctx->pc = 0x1491C0u;
            goto label_1491c0;
        }
    }
    ctx->pc = 0x149190u;
label_149190:
    // 0x149190: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149194:
    // 0x149194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149198:
    // 0x149198: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14919c:
    // 0x14919c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x14919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1491a0:
    // 0x1491a0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1491a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1491a4:
    // 0x1491a4: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x1491a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_1491a8:
    // 0x1491a8: 0xc0675a8  jal         func_19D6A0
label_1491ac:
    if (ctx->pc == 0x1491ACu) {
        ctx->pc = 0x1491B0u;
        goto label_1491b0;
    }
    ctx->pc = 0x1491A8u;
    SET_GPR_U32(ctx, 31, 0x1491B0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1491A8u, 0x1491B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491B0u;
label_1491b0:
    // 0x1491b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1491b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1491b4:
    // 0x1491b4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1491b8:
    // 0x1491b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1491b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1491bc:
    // 0x1491bc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1491bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_1491c0:
    // 0x1491c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1491c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1491c4:
    // 0x1491c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1491c8:
    // 0x1491c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1491c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1491cc:
    // 0x1491cc: 0xc0573d8  jal         func_15CF60
label_1491d0:
    if (ctx->pc == 0x1491D0u) {
        ctx->pc = 0x1491D4u;
        goto label_1491d4;
    }
    ctx->pc = 0x1491CCu;
    SET_GPR_U32(ctx, 31, 0x1491D4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1491CCu, 0x1491D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491D4u;
label_1491d4:
    // 0x1491d4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1491d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1491d8:
    // 0x1491d8: 0xc097530  jal         func_25D4C0
label_1491dc:
    if (ctx->pc == 0x1491DCu) {
        ctx->pc = 0x1491E0u;
        goto label_1491e0;
    }
    ctx->pc = 0x1491D8u;
    SET_GPR_U32(ctx, 31, 0x1491E0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1491D8u, 0x1491E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491E0u;
label_1491e0:
    // 0x1491e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1491e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1491e4:
    // 0x1491e4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1491e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1491e8:
    // 0x1491e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1491ec:
    // 0x1491ec: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1491ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1491f0:
    // 0x1491f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1491f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1491f4:
    // 0x1491f4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1491f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1491f8:
    // 0x1491f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1491f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1491fc:
    // 0x1491fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1491fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_149200:
    // 0x149200: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_149204:
    if (ctx->pc == 0x149204u) {
        ctx->pc = 0x149208u;
        goto label_149208;
    }
    ctx->pc = 0x149200u;
    {
        const bool branch_taken_0x149200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149200) {
            ctx->pc = 0x149440u;
            goto label_149440;
        }
    }
    ctx->pc = 0x149208u;
label_149208:
    // 0x149208: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14920c:
    // 0x14920c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14920cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_149210:
    // 0x149210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_149214:
    // 0x149214: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x149214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_149218:
    // 0x149218: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14921c:
    // 0x14921c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x14921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149220:
    // 0x149220: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149224:
    // 0x149224: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x149224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_149228:
    // 0x149228: 0x10000085  b           . + 4 + (0x85 << 2)
label_14922c:
    if (ctx->pc == 0x14922Cu) {
        ctx->pc = 0x149230u;
        goto label_149230;
    }
    ctx->pc = 0x149228u;
    {
        const bool branch_taken_0x149228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149228) {
            ctx->pc = 0x149440u;
            goto label_149440;
        }
    }
    ctx->pc = 0x149230u;
label_149230:
    // 0x149230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149234:
    // 0x149234: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149238:
    // 0x149238: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14923c:
    // 0x14923c: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x14923cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_149240:
    // 0x149240: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149244:
    // 0x149244: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149248:
    // 0x149248: 0xc0965d0  jal         func_259740
label_14924c:
    if (ctx->pc == 0x14924Cu) {
        ctx->pc = 0x149250u;
        goto label_149250;
    }
    ctx->pc = 0x149248u;
    SET_GPR_U32(ctx, 31, 0x149250u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149248u, 0x149250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149250u;
label_149250:
    // 0x149250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149254:
    // 0x149254: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149258:
    // 0x149258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14925c:
    // 0x14925c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14925cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_149260:
    // 0x149260: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149264:
    // 0x149264: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149264u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149268:
    // 0x149268: 0xc096b40  jal         func_25AD00
label_14926c:
    if (ctx->pc == 0x14926Cu) {
        ctx->pc = 0x149270u;
        goto label_149270;
    }
    ctx->pc = 0x149268u;
    SET_GPR_U32(ctx, 31, 0x149270u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149268u, 0x149270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149270u;
label_149270:
    // 0x149270: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149274:
    // 0x149274: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x149274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
label_149278:
    // 0x149278: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x149278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14927c:
    // 0x14927c: 0x2841006e  slti        $at, $v0, 0x6E
    ctx->pc = 0x14927cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)110) ? 1 : 0);
label_149280:
    // 0x149280: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_149284:
    if (ctx->pc == 0x149284u) {
        ctx->pc = 0x149288u;
        goto label_149288;
    }
    ctx->pc = 0x149280u;
    {
        const bool branch_taken_0x149280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149280) {
            ctx->pc = 0x1492A4u;
            goto label_1492a4;
        }
    }
    ctx->pc = 0x149288u;
label_149288:
    // 0x149288: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14928c:
    // 0x14928c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x14928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149290:
    // 0x149290: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x149290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_149294:
    // 0x149294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149298:
    // 0x149298: 0x0  nop
    ctx->pc = 0x149298u;
    // NOP
label_14929c:
    // 0x14929c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14929cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1492a0:
    // 0x1492a0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1492a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1492a4:
    // 0x1492a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1492a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1492a8:
    // 0x1492a8: 0xc05cd10  jal         func_173440
label_1492ac:
    if (ctx->pc == 0x1492ACu) {
        ctx->pc = 0x1492B0u;
        goto label_1492b0;
    }
    ctx->pc = 0x1492A8u;
    SET_GPR_U32(ctx, 31, 0x1492B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1492A8u, 0x1492B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492B0u;
label_1492b0:
    // 0x1492b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1492b4:
    // 0x1492b4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1492b8:
    // 0x1492b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1492b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1492bc:
    // 0x1492bc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1492bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1492c0:
    // 0x1492c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1492c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1492c4:
    // 0x1492c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1492c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1492c8:
    // 0x1492c8: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x1492c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1492cc:
    // 0x1492cc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1492ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1492d0:
    // 0x1492d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1492d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1492d4:
    // 0x1492d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1492d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1492d8:
    // 0x1492d8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1492d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1492dc:
    // 0x1492dc: 0xc05cf7c  jal         func_173DF0
label_1492e0:
    if (ctx->pc == 0x1492E0u) {
        ctx->pc = 0x1492E4u;
        goto label_1492e4;
    }
    ctx->pc = 0x1492DCu;
    SET_GPR_U32(ctx, 31, 0x1492E4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1492DCu, 0x1492E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492E4u;
label_1492e4:
    // 0x1492e4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1492e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1492e8:
    // 0x1492e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1492e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1492ec:
    // 0x1492ec: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x1492ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1492f0:
    // 0x1492f0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1492f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1492f4:
    // 0x1492f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1492f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1492f8:
    // 0x1492f8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1492f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1492fc:
    // 0x1492fc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1492fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149300:
    // 0x149300: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x149300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
label_149304:
    // 0x149304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149308:
    // 0x149308: 0x0  nop
    ctx->pc = 0x149308u;
    // NOP
label_14930c:
    // 0x14930c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14930cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_149310:
    // 0x149310: 0x0  nop
    ctx->pc = 0x149310u;
    // NOP
label_149314:
    // 0x149314: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_149318:
    if (ctx->pc == 0x149318u) {
        ctx->pc = 0x14931Cu;
        goto label_14931c;
    }
    ctx->pc = 0x149314u;
    {
        const bool branch_taken_0x149314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149314) {
            ctx->pc = 0x149334u;
            goto label_149334;
        }
    }
    ctx->pc = 0x14931Cu;
label_14931c:
    // 0x14931c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149320:
    // 0x149320: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x149320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149324:
    // 0x149324: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x149324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149328:
    // 0x149328: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14932c:
    // 0x14932c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149330:
    // 0x149330: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_149334:
    // 0x149334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149338:
    // 0x149338: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14933c:
    // 0x14933c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_149340:
    // 0x149340: 0xc0573d8  jal         func_15CF60
label_149344:
    if (ctx->pc == 0x149344u) {
        ctx->pc = 0x149348u;
        goto label_149348;
    }
    ctx->pc = 0x149340u;
    SET_GPR_U32(ctx, 31, 0x149348u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x149340u, 0x149348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149348u;
label_149348:
    // 0x149348: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14934c:
    // 0x14934c: 0xc097530  jal         func_25D4C0
label_149350:
    if (ctx->pc == 0x149350u) {
        ctx->pc = 0x149354u;
        goto label_149354;
    }
    ctx->pc = 0x14934Cu;
    SET_GPR_U32(ctx, 31, 0x149354u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14934Cu, 0x149354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149354u;
label_149354:
    // 0x149354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149358:
    // 0x149358: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x149358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_14935c:
    // 0x14935c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_149360:
    // 0x149360: 0x2861008f  slti        $at, $v1, 0x8F
    ctx->pc = 0x149360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)143) ? 1 : 0);
label_149364:
    // 0x149364: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_149368:
    if (ctx->pc == 0x149368u) {
        ctx->pc = 0x14936Cu;
        goto label_14936c;
    }
    ctx->pc = 0x149364u;
    {
        const bool branch_taken_0x149364 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149364) {
            ctx->pc = 0x1493C8u;
            goto label_1493c8;
        }
    }
    ctx->pc = 0x14936Cu;
label_14936c:
    // 0x14936c: 0xc057acc  jal         func_15EB30
label_149370:
    if (ctx->pc == 0x149370u) {
        ctx->pc = 0x149374u;
        goto label_149374;
    }
    ctx->pc = 0x14936Cu;
    SET_GPR_U32(ctx, 31, 0x149374u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14936Cu, 0x149374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149374u;
label_149374:
    // 0x149374: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_149378:
    if (ctx->pc == 0x149378u) {
        ctx->pc = 0x14937Cu;
        goto label_14937c;
    }
    ctx->pc = 0x149374u;
    {
        const bool branch_taken_0x149374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149374) {
            ctx->pc = 0x1493C8u;
            goto label_1493c8;
        }
    }
    ctx->pc = 0x14937Cu;
label_14937c:
    // 0x14937c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_149380:
    // 0x149380: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149384:
    // 0x149384: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_149388:
    // 0x149388: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x149388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14938c:
    // 0x14938c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x14938cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_149390:
    // 0x149390: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x149390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_149394:
    // 0x149394: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x149394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_149398:
    // 0x149398: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_14939c:
    // 0x14939c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1493a0:
    // 0x1493a0: 0xc4611b30  lwc1        $f1, 0x1B30($v1)
    ctx->pc = 0x1493a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1493a4:
    // 0x1493a4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1493a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1493a8:
    // 0x1493a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1493a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1493ac:
    // 0x1493ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1493b0:
    // 0x1493b0: 0xe4601b30  swc1        $f0, 0x1B30($v1)
    ctx->pc = 0x1493b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6960), bits); }
label_1493b4:
    // 0x1493b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1493b8:
    // 0x1493b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1493bc:
    // 0x1493bc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1493bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1493c0:
    // 0x1493c0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1493c4:
    if (ctx->pc == 0x1493C4u) {
        ctx->pc = 0x1493C8u;
        goto label_1493c8;
    }
    ctx->pc = 0x1493C0u;
    {
        const bool branch_taken_0x1493c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493c0) {
            ctx->pc = 0x149440u;
            goto label_149440;
        }
    }
    ctx->pc = 0x1493C8u;
label_1493c8:
    // 0x1493c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1493cc:
    // 0x1493cc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1493ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1493d0:
    // 0x1493d0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1493d4:
    if (ctx->pc == 0x1493D4u) {
        ctx->pc = 0x1493D8u;
        goto label_1493d8;
    }
    ctx->pc = 0x1493D0u;
    {
        const bool branch_taken_0x1493d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493d0) {
            ctx->pc = 0x149440u;
            goto label_149440;
        }
    }
    ctx->pc = 0x1493D8u;
label_1493d8:
    // 0x1493d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1493d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1493dc:
    // 0x1493dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1493e0:
    // 0x1493e0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1493e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1493e4:
    // 0x1493e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1493e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1493e8:
    // 0x1493e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1493ec:
    // 0x1493ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1493ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1493f0:
    // 0x1493f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1493f4:
    // 0x1493f4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1493f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1493f8:
    // 0x1493f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1493fc:
    // 0x1493fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1493fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_149400:
    // 0x149400: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149404:
    // 0x149404: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x149404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_149408:
    // 0x149408: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x149408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14940c:
    // 0x14940c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149410:
    // 0x149410: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_149414:
    // 0x149414: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x149414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_149418:
    // 0x149418: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x149418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_14941c:
    // 0x14941c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14941cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_149420:
    // 0x149420: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x149420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_149424:
    // 0x149424: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_149428:
    // 0x149428: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14942c:
    // 0x14942c: 0xc4611b30  lwc1        $f1, 0x1B30($v1)
    ctx->pc = 0x14942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149430:
    // 0x149430: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x149430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149434:
    // 0x149434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_149438:
    // 0x149438: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14943c:
    // 0x14943c: 0xe4601b30  swc1        $f0, 0x1B30($v1)
    ctx->pc = 0x14943cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6960), bits); }
label_149440:
    // 0x149440: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x149440u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_149444:
    // 0x149444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_149448:
    // 0x149448: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x149448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14944c:
    // 0x14944c: 0x3e00008  jr          $ra
label_149450:
    if (ctx->pc == 0x149450u) {
        ctx->pc = 0x149454u;
        goto label_fallthrough_0x14944c;
    }
    ctx->pc = 0x14944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14944c:
    ctx->pc = 0x149454u;
}
