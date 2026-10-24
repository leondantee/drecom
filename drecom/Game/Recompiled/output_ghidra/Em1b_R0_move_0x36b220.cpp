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

// Function: Em1b_R0_move
// Address: 0x36b220 - 0x36b674
void Em1b_R0_move_0x36b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R0_move_0x36b220");
#endif

    switch (ctx->pc) {
        case 0x36b220u: goto label_36b220;
        case 0x36b224u: goto label_36b224;
        case 0x36b228u: goto label_36b228;
        case 0x36b22cu: goto label_36b22c;
        case 0x36b230u: goto label_36b230;
        case 0x36b234u: goto label_36b234;
        case 0x36b238u: goto label_36b238;
        case 0x36b23cu: goto label_36b23c;
        case 0x36b240u: goto label_36b240;
        case 0x36b244u: goto label_36b244;
        case 0x36b248u: goto label_36b248;
        case 0x36b24cu: goto label_36b24c;
        case 0x36b250u: goto label_36b250;
        case 0x36b254u: goto label_36b254;
        case 0x36b258u: goto label_36b258;
        case 0x36b25cu: goto label_36b25c;
        case 0x36b260u: goto label_36b260;
        case 0x36b264u: goto label_36b264;
        case 0x36b268u: goto label_36b268;
        case 0x36b26cu: goto label_36b26c;
        case 0x36b270u: goto label_36b270;
        case 0x36b274u: goto label_36b274;
        case 0x36b278u: goto label_36b278;
        case 0x36b27cu: goto label_36b27c;
        case 0x36b280u: goto label_36b280;
        case 0x36b284u: goto label_36b284;
        case 0x36b288u: goto label_36b288;
        case 0x36b28cu: goto label_36b28c;
        case 0x36b290u: goto label_36b290;
        case 0x36b294u: goto label_36b294;
        case 0x36b298u: goto label_36b298;
        case 0x36b29cu: goto label_36b29c;
        case 0x36b2a0u: goto label_36b2a0;
        case 0x36b2a4u: goto label_36b2a4;
        case 0x36b2a8u: goto label_36b2a8;
        case 0x36b2acu: goto label_36b2ac;
        case 0x36b2b0u: goto label_36b2b0;
        case 0x36b2b4u: goto label_36b2b4;
        case 0x36b2b8u: goto label_36b2b8;
        case 0x36b2bcu: goto label_36b2bc;
        case 0x36b2c0u: goto label_36b2c0;
        case 0x36b2c4u: goto label_36b2c4;
        case 0x36b2c8u: goto label_36b2c8;
        case 0x36b2ccu: goto label_36b2cc;
        case 0x36b2d0u: goto label_36b2d0;
        case 0x36b2d4u: goto label_36b2d4;
        case 0x36b2d8u: goto label_36b2d8;
        case 0x36b2dcu: goto label_36b2dc;
        case 0x36b2e0u: goto label_36b2e0;
        case 0x36b2e4u: goto label_36b2e4;
        case 0x36b2e8u: goto label_36b2e8;
        case 0x36b2ecu: goto label_36b2ec;
        case 0x36b2f0u: goto label_36b2f0;
        case 0x36b2f4u: goto label_36b2f4;
        case 0x36b2f8u: goto label_36b2f8;
        case 0x36b2fcu: goto label_36b2fc;
        case 0x36b300u: goto label_36b300;
        case 0x36b304u: goto label_36b304;
        case 0x36b308u: goto label_36b308;
        case 0x36b30cu: goto label_36b30c;
        case 0x36b310u: goto label_36b310;
        case 0x36b314u: goto label_36b314;
        case 0x36b318u: goto label_36b318;
        case 0x36b31cu: goto label_36b31c;
        case 0x36b320u: goto label_36b320;
        case 0x36b324u: goto label_36b324;
        case 0x36b328u: goto label_36b328;
        case 0x36b32cu: goto label_36b32c;
        case 0x36b330u: goto label_36b330;
        case 0x36b334u: goto label_36b334;
        case 0x36b338u: goto label_36b338;
        case 0x36b33cu: goto label_36b33c;
        case 0x36b340u: goto label_36b340;
        case 0x36b344u: goto label_36b344;
        case 0x36b348u: goto label_36b348;
        case 0x36b34cu: goto label_36b34c;
        case 0x36b350u: goto label_36b350;
        case 0x36b354u: goto label_36b354;
        case 0x36b358u: goto label_36b358;
        case 0x36b35cu: goto label_36b35c;
        case 0x36b360u: goto label_36b360;
        case 0x36b364u: goto label_36b364;
        case 0x36b368u: goto label_36b368;
        case 0x36b36cu: goto label_36b36c;
        case 0x36b370u: goto label_36b370;
        case 0x36b374u: goto label_36b374;
        case 0x36b378u: goto label_36b378;
        case 0x36b37cu: goto label_36b37c;
        case 0x36b380u: goto label_36b380;
        case 0x36b384u: goto label_36b384;
        case 0x36b388u: goto label_36b388;
        case 0x36b38cu: goto label_36b38c;
        case 0x36b390u: goto label_36b390;
        case 0x36b394u: goto label_36b394;
        case 0x36b398u: goto label_36b398;
        case 0x36b39cu: goto label_36b39c;
        case 0x36b3a0u: goto label_36b3a0;
        case 0x36b3a4u: goto label_36b3a4;
        case 0x36b3a8u: goto label_36b3a8;
        case 0x36b3acu: goto label_36b3ac;
        case 0x36b3b0u: goto label_36b3b0;
        case 0x36b3b4u: goto label_36b3b4;
        case 0x36b3b8u: goto label_36b3b8;
        case 0x36b3bcu: goto label_36b3bc;
        case 0x36b3c0u: goto label_36b3c0;
        case 0x36b3c4u: goto label_36b3c4;
        case 0x36b3c8u: goto label_36b3c8;
        case 0x36b3ccu: goto label_36b3cc;
        case 0x36b3d0u: goto label_36b3d0;
        case 0x36b3d4u: goto label_36b3d4;
        case 0x36b3d8u: goto label_36b3d8;
        case 0x36b3dcu: goto label_36b3dc;
        case 0x36b3e0u: goto label_36b3e0;
        case 0x36b3e4u: goto label_36b3e4;
        case 0x36b3e8u: goto label_36b3e8;
        case 0x36b3ecu: goto label_36b3ec;
        case 0x36b3f0u: goto label_36b3f0;
        case 0x36b3f4u: goto label_36b3f4;
        case 0x36b3f8u: goto label_36b3f8;
        case 0x36b3fcu: goto label_36b3fc;
        case 0x36b400u: goto label_36b400;
        case 0x36b404u: goto label_36b404;
        case 0x36b408u: goto label_36b408;
        case 0x36b40cu: goto label_36b40c;
        case 0x36b410u: goto label_36b410;
        case 0x36b414u: goto label_36b414;
        case 0x36b418u: goto label_36b418;
        case 0x36b41cu: goto label_36b41c;
        case 0x36b420u: goto label_36b420;
        case 0x36b424u: goto label_36b424;
        case 0x36b428u: goto label_36b428;
        case 0x36b42cu: goto label_36b42c;
        case 0x36b430u: goto label_36b430;
        case 0x36b434u: goto label_36b434;
        case 0x36b438u: goto label_36b438;
        case 0x36b43cu: goto label_36b43c;
        case 0x36b440u: goto label_36b440;
        case 0x36b444u: goto label_36b444;
        case 0x36b448u: goto label_36b448;
        case 0x36b44cu: goto label_36b44c;
        case 0x36b450u: goto label_36b450;
        case 0x36b454u: goto label_36b454;
        case 0x36b458u: goto label_36b458;
        case 0x36b45cu: goto label_36b45c;
        case 0x36b460u: goto label_36b460;
        case 0x36b464u: goto label_36b464;
        case 0x36b468u: goto label_36b468;
        case 0x36b46cu: goto label_36b46c;
        case 0x36b470u: goto label_36b470;
        case 0x36b474u: goto label_36b474;
        case 0x36b478u: goto label_36b478;
        case 0x36b47cu: goto label_36b47c;
        case 0x36b480u: goto label_36b480;
        case 0x36b484u: goto label_36b484;
        case 0x36b488u: goto label_36b488;
        case 0x36b48cu: goto label_36b48c;
        case 0x36b490u: goto label_36b490;
        case 0x36b494u: goto label_36b494;
        case 0x36b498u: goto label_36b498;
        case 0x36b49cu: goto label_36b49c;
        case 0x36b4a0u: goto label_36b4a0;
        case 0x36b4a4u: goto label_36b4a4;
        case 0x36b4a8u: goto label_36b4a8;
        case 0x36b4acu: goto label_36b4ac;
        case 0x36b4b0u: goto label_36b4b0;
        case 0x36b4b4u: goto label_36b4b4;
        case 0x36b4b8u: goto label_36b4b8;
        case 0x36b4bcu: goto label_36b4bc;
        case 0x36b4c0u: goto label_36b4c0;
        case 0x36b4c4u: goto label_36b4c4;
        case 0x36b4c8u: goto label_36b4c8;
        case 0x36b4ccu: goto label_36b4cc;
        case 0x36b4d0u: goto label_36b4d0;
        case 0x36b4d4u: goto label_36b4d4;
        case 0x36b4d8u: goto label_36b4d8;
        case 0x36b4dcu: goto label_36b4dc;
        case 0x36b4e0u: goto label_36b4e0;
        case 0x36b4e4u: goto label_36b4e4;
        case 0x36b4e8u: goto label_36b4e8;
        case 0x36b4ecu: goto label_36b4ec;
        case 0x36b4f0u: goto label_36b4f0;
        case 0x36b4f4u: goto label_36b4f4;
        case 0x36b4f8u: goto label_36b4f8;
        case 0x36b4fcu: goto label_36b4fc;
        case 0x36b500u: goto label_36b500;
        case 0x36b504u: goto label_36b504;
        case 0x36b508u: goto label_36b508;
        case 0x36b50cu: goto label_36b50c;
        case 0x36b510u: goto label_36b510;
        case 0x36b514u: goto label_36b514;
        case 0x36b518u: goto label_36b518;
        case 0x36b51cu: goto label_36b51c;
        case 0x36b520u: goto label_36b520;
        case 0x36b524u: goto label_36b524;
        case 0x36b528u: goto label_36b528;
        case 0x36b52cu: goto label_36b52c;
        case 0x36b530u: goto label_36b530;
        case 0x36b534u: goto label_36b534;
        case 0x36b538u: goto label_36b538;
        case 0x36b53cu: goto label_36b53c;
        case 0x36b540u: goto label_36b540;
        case 0x36b544u: goto label_36b544;
        case 0x36b548u: goto label_36b548;
        case 0x36b54cu: goto label_36b54c;
        case 0x36b550u: goto label_36b550;
        case 0x36b554u: goto label_36b554;
        case 0x36b558u: goto label_36b558;
        case 0x36b55cu: goto label_36b55c;
        case 0x36b560u: goto label_36b560;
        case 0x36b564u: goto label_36b564;
        case 0x36b568u: goto label_36b568;
        case 0x36b56cu: goto label_36b56c;
        case 0x36b570u: goto label_36b570;
        case 0x36b574u: goto label_36b574;
        case 0x36b578u: goto label_36b578;
        case 0x36b57cu: goto label_36b57c;
        case 0x36b580u: goto label_36b580;
        case 0x36b584u: goto label_36b584;
        case 0x36b588u: goto label_36b588;
        case 0x36b58cu: goto label_36b58c;
        case 0x36b590u: goto label_36b590;
        case 0x36b594u: goto label_36b594;
        case 0x36b598u: goto label_36b598;
        case 0x36b59cu: goto label_36b59c;
        case 0x36b5a0u: goto label_36b5a0;
        case 0x36b5a4u: goto label_36b5a4;
        case 0x36b5a8u: goto label_36b5a8;
        case 0x36b5acu: goto label_36b5ac;
        case 0x36b5b0u: goto label_36b5b0;
        case 0x36b5b4u: goto label_36b5b4;
        case 0x36b5b8u: goto label_36b5b8;
        case 0x36b5bcu: goto label_36b5bc;
        case 0x36b5c0u: goto label_36b5c0;
        case 0x36b5c4u: goto label_36b5c4;
        case 0x36b5c8u: goto label_36b5c8;
        case 0x36b5ccu: goto label_36b5cc;
        case 0x36b5d0u: goto label_36b5d0;
        case 0x36b5d4u: goto label_36b5d4;
        case 0x36b5d8u: goto label_36b5d8;
        case 0x36b5dcu: goto label_36b5dc;
        case 0x36b5e0u: goto label_36b5e0;
        case 0x36b5e4u: goto label_36b5e4;
        case 0x36b5e8u: goto label_36b5e8;
        case 0x36b5ecu: goto label_36b5ec;
        case 0x36b5f0u: goto label_36b5f0;
        case 0x36b5f4u: goto label_36b5f4;
        case 0x36b5f8u: goto label_36b5f8;
        case 0x36b5fcu: goto label_36b5fc;
        case 0x36b600u: goto label_36b600;
        case 0x36b604u: goto label_36b604;
        case 0x36b608u: goto label_36b608;
        case 0x36b60cu: goto label_36b60c;
        case 0x36b610u: goto label_36b610;
        case 0x36b614u: goto label_36b614;
        case 0x36b618u: goto label_36b618;
        case 0x36b61cu: goto label_36b61c;
        case 0x36b620u: goto label_36b620;
        case 0x36b624u: goto label_36b624;
        case 0x36b628u: goto label_36b628;
        case 0x36b62cu: goto label_36b62c;
        case 0x36b630u: goto label_36b630;
        case 0x36b634u: goto label_36b634;
        case 0x36b638u: goto label_36b638;
        case 0x36b63cu: goto label_36b63c;
        case 0x36b640u: goto label_36b640;
        case 0x36b644u: goto label_36b644;
        case 0x36b648u: goto label_36b648;
        case 0x36b64cu: goto label_36b64c;
        case 0x36b650u: goto label_36b650;
        case 0x36b654u: goto label_36b654;
        case 0x36b658u: goto label_36b658;
        case 0x36b65cu: goto label_36b65c;
        case 0x36b660u: goto label_36b660;
        case 0x36b664u: goto label_36b664;
        case 0x36b668u: goto label_36b668;
        case 0x36b66cu: goto label_36b66c;
        case 0x36b670u: goto label_36b670;
        default: break;
    }

    ctx->pc = 0x36b220u;

label_36b220:
    // 0x36b220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36b224:
    // 0x36b224: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x36b224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_36b228:
    // 0x36b228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36b22c:
    // 0x36b22c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_36b230:
    // 0x36b230: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b234:
    // 0x36b234: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36b234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_36b238:
    // 0x36b238: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36b238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_36b23c:
    // 0x36b23c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36b240:
    // 0x36b240: 0x106200fc  beq         $v1, $v0, . + 4 + (0xFC << 2)
label_36b244:
    if (ctx->pc == 0x36B244u) {
        ctx->pc = 0x36B248u;
        goto label_36b248;
    }
    ctx->pc = 0x36B240u;
    {
        const bool branch_taken_0x36b240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36b240) {
            ctx->pc = 0x36B634u;
            goto label_36b634;
        }
    }
    ctx->pc = 0x36B248u;
label_36b248:
    // 0x36b248: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x36b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_36b24c:
    // 0x36b24c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36b24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_36b250:
    // 0x36b250: 0x24022d03  addiu       $v0, $zero, 0x2D03
    ctx->pc = 0x36b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11523));
label_36b254:
    // 0x36b254: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x36b254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_36b258:
    // 0x36b258: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b25c:
    // 0x36b25c: 0x24452b70  addiu       $a1, $v0, 0x2B70
    ctx->pc = 0x36b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11120));
label_36b260:
    // 0x36b260: 0xc059b14  jal         func_166C50
label_36b264:
    if (ctx->pc == 0x36B264u) {
        ctx->pc = 0x36B268u;
        goto label_36b268;
    }
    ctx->pc = 0x36B260u;
    SET_GPR_U32(ctx, 31, 0x36B268u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x36B260u, 0x36B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B268u;
label_36b268:
    // 0x36b268: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b26c:
    // 0x36b26c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36b26cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_36b270:
    // 0x36b270: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36b270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_36b274:
    // 0x36b274: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b278:
    // 0x36b278: 0x8c421340  lw          $v0, 0x1340($v0)
    ctx->pc = 0x36b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
label_36b27c:
    // 0x36b27c: 0x106200ed  beq         $v1, $v0, . + 4 + (0xED << 2)
label_36b280:
    if (ctx->pc == 0x36B280u) {
        ctx->pc = 0x36B284u;
        goto label_36b284;
    }
    ctx->pc = 0x36B27Cu;
    {
        const bool branch_taken_0x36b27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36b27c) {
            ctx->pc = 0x36B634u;
            goto label_36b634;
        }
    }
    ctx->pc = 0x36B284u;
label_36b284:
    // 0x36b284: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b288:
    // 0x36b288: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36b288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_36b28c:
    // 0x36b28c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_36b290:
    if (ctx->pc == 0x36B290u) {
        ctx->pc = 0x36B294u;
        goto label_36b294;
    }
    ctx->pc = 0x36B28Cu;
    {
        const bool branch_taken_0x36b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b28c) {
            ctx->pc = 0x36B460u;
            goto label_36b460;
        }
    }
    ctx->pc = 0x36B294u;
label_36b294:
    // 0x36b294: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b298:
    // 0x36b298: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x36b298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6812)));
label_36b29c:
    // 0x36b29c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x36b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_36b2a0:
    // 0x36b2a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x36b2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_36b2a4:
    // 0x36b2a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b2a8:
    // 0x36b2a8: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x36b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6812), GPR_U32(ctx, 2));
label_36b2ac:
    // 0x36b2ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b2b0:
    // 0x36b2b0: 0xc05db9c  jal         func_176E70
label_36b2b4:
    if (ctx->pc == 0x36B2B4u) {
        ctx->pc = 0x36B2B8u;
        goto label_36b2b8;
    }
    ctx->pc = 0x36B2B0u;
    SET_GPR_U32(ctx, 31, 0x36B2B8u);
    ctx->pc = 0x176E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E70u, 0x36B2B0u, 0x36B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2B8u;
label_36b2b8:
    // 0x36b2b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b2bc:
    // 0x36b2bc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x36b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_36b2c0:
    // 0x36b2c0: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x36b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_36b2c4:
    // 0x36b2c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36b2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36b2c8:
    // 0x36b2c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b2cc:
    // 0x36b2cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b2d0:
    // 0x36b2d0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x36b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_36b2d4:
    // 0x36b2d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b2d8:
    // 0x36b2d8: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b2dc:
    // 0x36b2dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b2e0:
    // 0x36b2e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b2e4:
    // 0x36b2e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b2e8:
    // 0x36b2e8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b2ec:
    // 0x36b2ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b2f0:
    // 0x36b2f0: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b2f4:
    // 0x36b2f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36b2f8:
    // 0x36b2f8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_36b2fc:
    // 0x36b2fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b300:
    // 0x36b300: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_36b304:
    // 0x36b304: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b308:
    // 0x36b308: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b30c:
    // 0x36b30c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b310:
    // 0x36b310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36b310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36b314:
    // 0x36b314: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b318:
    // 0x36b318: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b31c:
    // 0x36b31c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b320:
    // 0x36b320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b324:
    // 0x36b324: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b328:
    // 0x36b328: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36b32c:
    // 0x36b32c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_36b330:
    // 0x36b330: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b334:
    // 0x36b334: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_36b338:
    // 0x36b338: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b33c:
    // 0x36b33c: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b33cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b340:
    // 0x36b340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b344:
    // 0x36b344: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x36b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_36b348:
    // 0x36b348: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b34c:
    // 0x36b34c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b350:
    // 0x36b350: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b354:
    // 0x36b354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b358:
    // 0x36b358: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b35c:
    // 0x36b35c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36b360:
    // 0x36b360: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_36b364:
    // 0x36b364: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b368:
    // 0x36b368: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_36b36c:
    // 0x36b36c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b370:
    // 0x36b370: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b374:
    // 0x36b374: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b378:
    // 0x36b378: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x36b378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_36b37c:
    // 0x36b37c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b380:
    // 0x36b380: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b384:
    // 0x36b384: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b388:
    // 0x36b388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b38c:
    // 0x36b38c: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b390:
    // 0x36b390: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36b394:
    // 0x36b394: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_36b398:
    // 0x36b398: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b39c:
    // 0x36b39c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_36b3a0:
    // 0x36b3a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b3a4:
    // 0x36b3a4: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b3a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b3a8:
    // 0x36b3a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b3ac:
    // 0x36b3ac: 0x2450000b  addiu       $s0, $v0, 0xB
    ctx->pc = 0x36b3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
label_36b3b0:
    // 0x36b3b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_36b3b4:
    if (ctx->pc == 0x36B3B4u) {
        ctx->pc = 0x36B3B8u;
        goto label_36b3b8;
    }
    ctx->pc = 0x36B3B0u;
    {
        const bool branch_taken_0x36b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b3b0) {
            ctx->pc = 0x36B3E0u;
            goto label_36b3e0;
        }
    }
    ctx->pc = 0x36B3B8u;
label_36b3b8:
    // 0x36b3b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36b3bc:
    // 0x36b3bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b3c0:
    // 0x36b3c0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b3c4:
    // 0x36b3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b3c8:
    // 0x36b3c8: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b3cc:
    // 0x36b3cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_36b3d0:
    // 0x36b3d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_36b3d4:
    // 0x36b3d4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_36b3d8:
    // 0x36b3d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36b3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36b3dc:
    // 0x36b3dc: 0x0  nop
    ctx->pc = 0x36b3dcu;
    // NOP
label_36b3e0:
    // 0x36b3e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b3e4:
    // 0x36b3e4: 0x9022e651  lbu         $v0, -0x19AF($at)
    ctx->pc = 0x36b3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960721)));
label_36b3e8:
    // 0x36b3e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b3ec:
    // 0x36b3ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x36b3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_36b3f0:
    // 0x36b3f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_36b3f4:
    if (ctx->pc == 0x36B3F4u) {
        ctx->pc = 0x36B3F8u;
        goto label_36b3f8;
    }
    ctx->pc = 0x36B3F0u;
    {
        const bool branch_taken_0x36b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b3f0) {
            ctx->pc = 0x36B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b3b8;
        }
    }
    ctx->pc = 0x36B3F8u;
label_36b3f8:
    // 0x36b3f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b3fc:
    // 0x36b3fc: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b400:
    // 0x36b400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b404:
    // 0x36b404: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x36b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
label_36b408:
    // 0x36b408: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b40c:
    // 0x36b40c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b410:
    // 0x36b410: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b414:
    // 0x36b414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b418:
    // 0x36b418: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b41c:
    // 0x36b41c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_36b420:
    // 0x36b420: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_36b424:
    // 0x36b424: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_36b428:
    // 0x36b428: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b42c:
    // 0x36b42c: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b430:
    // 0x36b430: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b434:
    // 0x36b434: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x36b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
label_36b438:
    // 0x36b438: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b43c:
    // 0x36b43c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b440:
    // 0x36b440: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b444:
    // 0x36b444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b448:
    // 0x36b448: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b44c:
    // 0x36b44c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_36b450:
    // 0x36b450: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_36b454:
    // 0x36b454: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_36b458:
    // 0x36b458: 0x10000071  b           . + 4 + (0x71 << 2)
label_36b45c:
    if (ctx->pc == 0x36B45Cu) {
        ctx->pc = 0x36B460u;
        goto label_36b460;
    }
    ctx->pc = 0x36B458u;
    {
        const bool branch_taken_0x36b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b458) {
            ctx->pc = 0x36B620u;
            goto label_36b620;
        }
    }
    ctx->pc = 0x36B460u;
label_36b460:
    // 0x36b460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b464:
    // 0x36b464: 0x8c221a9c  lw          $v0, 0x1A9C($at)
    ctx->pc = 0x36b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6812)));
label_36b468:
    // 0x36b468: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x36b468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
label_36b46c:
    // 0x36b46c: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x36b46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
label_36b470:
    // 0x36b470: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b474:
    // 0x36b474: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x36b474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6812), GPR_U32(ctx, 2));
label_36b478:
    // 0x36b478: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36b478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36b47c:
    // 0x36b47c: 0xc05db9c  jal         func_176E70
label_36b480:
    if (ctx->pc == 0x36B480u) {
        ctx->pc = 0x36B484u;
        goto label_36b484;
    }
    ctx->pc = 0x36B47Cu;
    SET_GPR_U32(ctx, 31, 0x36B484u);
    ctx->pc = 0x176E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E70u, 0x36B47Cu, 0x36B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B484u;
label_36b484:
    // 0x36b484: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b488:
    // 0x36b488: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x36b488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_36b48c:
    // 0x36b48c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x36b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_36b490:
    // 0x36b490: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x36b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_36b494:
    // 0x36b494: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b498:
    // 0x36b498: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x36b498u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_36b49c:
    // 0x36b49c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36b49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_36b4a0:
    // 0x36b4a0: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x36b4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20241), (uint8_t)GPR_U32(ctx, 0));
label_36b4a4:
    // 0x36b4a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b4a8:
    // 0x36b4a8: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b4ac:
    // 0x36b4ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b4b0:
    // 0x36b4b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b4b4:
    // 0x36b4b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b4b8:
    // 0x36b4b8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b4bc:
    // 0x36b4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b4c0:
    // 0x36b4c0: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b4c4:
    // 0x36b4c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_36b4c8:
    // 0x36b4c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_36b4cc:
    // 0x36b4cc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_36b4d0:
    // 0x36b4d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b4d4:
    // 0x36b4d4: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b4d8:
    // 0x36b4d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b4dc:
    // 0x36b4dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36b4e0:
    // 0x36b4e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b4e4:
    // 0x36b4e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b4e8:
    // 0x36b4e8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b4ec:
    // 0x36b4ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b4f0:
    // 0x36b4f0: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b4f4:
    // 0x36b4f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_36b4f8:
    // 0x36b4f8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_36b4fc:
    // 0x36b4fc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_36b500:
    // 0x36b500: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b504:
    // 0x36b504: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b508:
    // 0x36b508: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b50c:
    // 0x36b50c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x36b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_36b510:
    // 0x36b510: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b514:
    // 0x36b514: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b518:
    // 0x36b518: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b51c:
    // 0x36b51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b520:
    // 0x36b520: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b524:
    // 0x36b524: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_36b528:
    // 0x36b528: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_36b52c:
    // 0x36b52c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_36b530:
    // 0x36b530: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b534:
    // 0x36b534: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b538:
    // 0x36b538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b53c:
    // 0x36b53c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x36b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_36b540:
    // 0x36b540: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b544:
    // 0x36b544: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b548:
    // 0x36b548: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b54c:
    // 0x36b54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b550:
    // 0x36b550: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b554:
    // 0x36b554: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_36b558:
    // 0x36b558: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_36b55c:
    // 0x36b55c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_36b560:
    // 0x36b560: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b564:
    // 0x36b564: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b568:
    // 0x36b568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b56c:
    // 0x36b56c: 0x2450000b  addiu       $s0, $v0, 0xB
    ctx->pc = 0x36b56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
label_36b570:
    // 0x36b570: 0x1000000b  b           . + 4 + (0xB << 2)
label_36b574:
    if (ctx->pc == 0x36B574u) {
        ctx->pc = 0x36B578u;
        goto label_36b578;
    }
    ctx->pc = 0x36B570u;
    {
        const bool branch_taken_0x36b570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b570) {
            ctx->pc = 0x36B5A0u;
            goto label_36b5a0;
        }
    }
    ctx->pc = 0x36B578u;
label_36b578:
    // 0x36b578: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36b578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36b57c:
    // 0x36b57c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b580:
    // 0x36b580: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b584:
    // 0x36b584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b588:
    // 0x36b588: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b58c:
    // 0x36b58c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36b590:
    // 0x36b590: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_36b594:
    // 0x36b594: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b598:
    // 0x36b598: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_36b59c:
    // 0x36b59c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36b59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36b5a0:
    // 0x36b5a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b5a4:
    // 0x36b5a4: 0x9022e651  lbu         $v0, -0x19AF($at)
    ctx->pc = 0x36b5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960721)));
label_36b5a8:
    // 0x36b5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b5ac:
    // 0x36b5ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x36b5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_36b5b0:
    // 0x36b5b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_36b5b4:
    if (ctx->pc == 0x36B5B4u) {
        ctx->pc = 0x36B5B8u;
        goto label_36b5b8;
    }
    ctx->pc = 0x36B5B0u;
    {
        const bool branch_taken_0x36b5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b5b0) {
            ctx->pc = 0x36B578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b578;
        }
    }
    ctx->pc = 0x36B5B8u;
label_36b5b8:
    // 0x36b5b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b5bc:
    // 0x36b5bc: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b5c0:
    // 0x36b5c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b5c4:
    // 0x36b5c4: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x36b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
label_36b5c8:
    // 0x36b5c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b5cc:
    // 0x36b5cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b5d0:
    // 0x36b5d0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b5d4:
    // 0x36b5d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b5d8:
    // 0x36b5d8: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b5dc:
    // 0x36b5dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36b5e0:
    // 0x36b5e0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_36b5e4:
    // 0x36b5e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b5e8:
    // 0x36b5e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_36b5ec:
    // 0x36b5ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_36b5f0:
    // 0x36b5f0: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960722)));
label_36b5f4:
    // 0x36b5f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b5f8:
    // 0x36b5f8: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x36b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
label_36b5fc:
    // 0x36b5fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b600:
    // 0x36b600: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_36b604:
    // 0x36b604: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_36b608:
    // 0x36b608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b60c:
    // 0x36b60c: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_36b610:
    // 0x36b610: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36b614:
    // 0x36b614: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_36b618:
    // 0x36b618: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b61c:
    // 0x36b61c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_36b620:
    // 0x36b620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b624:
    // 0x36b624: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36b624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_36b628:
    // 0x36b628: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36b628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_36b62c:
    // 0x36b62c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b630:
    // 0x36b630: 0xac431340  sw          $v1, 0x1340($v0)
    ctx->pc = 0x36b630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 3));
label_36b634:
    // 0x36b634: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36b634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b638:
    // 0x36b638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b63c:
    // 0x36b63c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36b63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_36b640:
    // 0x36b640: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_36b644:
    // 0x36b644: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b648:
    // 0x36b648: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b64c:
    // 0x36b64c: 0x2442b1f0  addiu       $v0, $v0, -0x4E10
    ctx->pc = 0x36b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947312));
label_36b650:
    // 0x36b650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b654:
    // 0x36b654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b658:
    // 0x36b658: 0x40f809  jalr        $v0
label_36b65c:
    if (ctx->pc == 0x36B65Cu) {
        ctx->pc = 0x36B660u;
        goto label_36b660;
    }
    ctx->pc = 0x36B658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B660u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B658u, 0x36B660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B660u;
label_36b660:
    // 0x36b660: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36b660u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36b664:
    // 0x36b664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36b668:
    // 0x36b668: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36b66c:
    // 0x36b66c: 0x3e00008  jr          $ra
label_36b670:
    if (ctx->pc == 0x36B670u) {
        ctx->pc = 0x36B674u;
        goto label_fallthrough_0x36b66c;
    }
    ctx->pc = 0x36B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36b66c:
    ctx->pc = 0x36B674u;
}
