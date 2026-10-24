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

// Function: Pl_em_dam_em0a_r2_catch_throw
// Address: 0x36a2b0 - 0x36a738
void Pl_em_dam_em0a_r2_catch_throw_0x36a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em0a_r2_catch_throw_0x36a2b0");
#endif

    switch (ctx->pc) {
        case 0x36a2b0u: goto label_36a2b0;
        case 0x36a2b4u: goto label_36a2b4;
        case 0x36a2b8u: goto label_36a2b8;
        case 0x36a2bcu: goto label_36a2bc;
        case 0x36a2c0u: goto label_36a2c0;
        case 0x36a2c4u: goto label_36a2c4;
        case 0x36a2c8u: goto label_36a2c8;
        case 0x36a2ccu: goto label_36a2cc;
        case 0x36a2d0u: goto label_36a2d0;
        case 0x36a2d4u: goto label_36a2d4;
        case 0x36a2d8u: goto label_36a2d8;
        case 0x36a2dcu: goto label_36a2dc;
        case 0x36a2e0u: goto label_36a2e0;
        case 0x36a2e4u: goto label_36a2e4;
        case 0x36a2e8u: goto label_36a2e8;
        case 0x36a2ecu: goto label_36a2ec;
        case 0x36a2f0u: goto label_36a2f0;
        case 0x36a2f4u: goto label_36a2f4;
        case 0x36a2f8u: goto label_36a2f8;
        case 0x36a2fcu: goto label_36a2fc;
        case 0x36a300u: goto label_36a300;
        case 0x36a304u: goto label_36a304;
        case 0x36a308u: goto label_36a308;
        case 0x36a30cu: goto label_36a30c;
        case 0x36a310u: goto label_36a310;
        case 0x36a314u: goto label_36a314;
        case 0x36a318u: goto label_36a318;
        case 0x36a31cu: goto label_36a31c;
        case 0x36a320u: goto label_36a320;
        case 0x36a324u: goto label_36a324;
        case 0x36a328u: goto label_36a328;
        case 0x36a32cu: goto label_36a32c;
        case 0x36a330u: goto label_36a330;
        case 0x36a334u: goto label_36a334;
        case 0x36a338u: goto label_36a338;
        case 0x36a33cu: goto label_36a33c;
        case 0x36a340u: goto label_36a340;
        case 0x36a344u: goto label_36a344;
        case 0x36a348u: goto label_36a348;
        case 0x36a34cu: goto label_36a34c;
        case 0x36a350u: goto label_36a350;
        case 0x36a354u: goto label_36a354;
        case 0x36a358u: goto label_36a358;
        case 0x36a35cu: goto label_36a35c;
        case 0x36a360u: goto label_36a360;
        case 0x36a364u: goto label_36a364;
        case 0x36a368u: goto label_36a368;
        case 0x36a36cu: goto label_36a36c;
        case 0x36a370u: goto label_36a370;
        case 0x36a374u: goto label_36a374;
        case 0x36a378u: goto label_36a378;
        case 0x36a37cu: goto label_36a37c;
        case 0x36a380u: goto label_36a380;
        case 0x36a384u: goto label_36a384;
        case 0x36a388u: goto label_36a388;
        case 0x36a38cu: goto label_36a38c;
        case 0x36a390u: goto label_36a390;
        case 0x36a394u: goto label_36a394;
        case 0x36a398u: goto label_36a398;
        case 0x36a39cu: goto label_36a39c;
        case 0x36a3a0u: goto label_36a3a0;
        case 0x36a3a4u: goto label_36a3a4;
        case 0x36a3a8u: goto label_36a3a8;
        case 0x36a3acu: goto label_36a3ac;
        case 0x36a3b0u: goto label_36a3b0;
        case 0x36a3b4u: goto label_36a3b4;
        case 0x36a3b8u: goto label_36a3b8;
        case 0x36a3bcu: goto label_36a3bc;
        case 0x36a3c0u: goto label_36a3c0;
        case 0x36a3c4u: goto label_36a3c4;
        case 0x36a3c8u: goto label_36a3c8;
        case 0x36a3ccu: goto label_36a3cc;
        case 0x36a3d0u: goto label_36a3d0;
        case 0x36a3d4u: goto label_36a3d4;
        case 0x36a3d8u: goto label_36a3d8;
        case 0x36a3dcu: goto label_36a3dc;
        case 0x36a3e0u: goto label_36a3e0;
        case 0x36a3e4u: goto label_36a3e4;
        case 0x36a3e8u: goto label_36a3e8;
        case 0x36a3ecu: goto label_36a3ec;
        case 0x36a3f0u: goto label_36a3f0;
        case 0x36a3f4u: goto label_36a3f4;
        case 0x36a3f8u: goto label_36a3f8;
        case 0x36a3fcu: goto label_36a3fc;
        case 0x36a400u: goto label_36a400;
        case 0x36a404u: goto label_36a404;
        case 0x36a408u: goto label_36a408;
        case 0x36a40cu: goto label_36a40c;
        case 0x36a410u: goto label_36a410;
        case 0x36a414u: goto label_36a414;
        case 0x36a418u: goto label_36a418;
        case 0x36a41cu: goto label_36a41c;
        case 0x36a420u: goto label_36a420;
        case 0x36a424u: goto label_36a424;
        case 0x36a428u: goto label_36a428;
        case 0x36a42cu: goto label_36a42c;
        case 0x36a430u: goto label_36a430;
        case 0x36a434u: goto label_36a434;
        case 0x36a438u: goto label_36a438;
        case 0x36a43cu: goto label_36a43c;
        case 0x36a440u: goto label_36a440;
        case 0x36a444u: goto label_36a444;
        case 0x36a448u: goto label_36a448;
        case 0x36a44cu: goto label_36a44c;
        case 0x36a450u: goto label_36a450;
        case 0x36a454u: goto label_36a454;
        case 0x36a458u: goto label_36a458;
        case 0x36a45cu: goto label_36a45c;
        case 0x36a460u: goto label_36a460;
        case 0x36a464u: goto label_36a464;
        case 0x36a468u: goto label_36a468;
        case 0x36a46cu: goto label_36a46c;
        case 0x36a470u: goto label_36a470;
        case 0x36a474u: goto label_36a474;
        case 0x36a478u: goto label_36a478;
        case 0x36a47cu: goto label_36a47c;
        case 0x36a480u: goto label_36a480;
        case 0x36a484u: goto label_36a484;
        case 0x36a488u: goto label_36a488;
        case 0x36a48cu: goto label_36a48c;
        case 0x36a490u: goto label_36a490;
        case 0x36a494u: goto label_36a494;
        case 0x36a498u: goto label_36a498;
        case 0x36a49cu: goto label_36a49c;
        case 0x36a4a0u: goto label_36a4a0;
        case 0x36a4a4u: goto label_36a4a4;
        case 0x36a4a8u: goto label_36a4a8;
        case 0x36a4acu: goto label_36a4ac;
        case 0x36a4b0u: goto label_36a4b0;
        case 0x36a4b4u: goto label_36a4b4;
        case 0x36a4b8u: goto label_36a4b8;
        case 0x36a4bcu: goto label_36a4bc;
        case 0x36a4c0u: goto label_36a4c0;
        case 0x36a4c4u: goto label_36a4c4;
        case 0x36a4c8u: goto label_36a4c8;
        case 0x36a4ccu: goto label_36a4cc;
        case 0x36a4d0u: goto label_36a4d0;
        case 0x36a4d4u: goto label_36a4d4;
        case 0x36a4d8u: goto label_36a4d8;
        case 0x36a4dcu: goto label_36a4dc;
        case 0x36a4e0u: goto label_36a4e0;
        case 0x36a4e4u: goto label_36a4e4;
        case 0x36a4e8u: goto label_36a4e8;
        case 0x36a4ecu: goto label_36a4ec;
        case 0x36a4f0u: goto label_36a4f0;
        case 0x36a4f4u: goto label_36a4f4;
        case 0x36a4f8u: goto label_36a4f8;
        case 0x36a4fcu: goto label_36a4fc;
        case 0x36a500u: goto label_36a500;
        case 0x36a504u: goto label_36a504;
        case 0x36a508u: goto label_36a508;
        case 0x36a50cu: goto label_36a50c;
        case 0x36a510u: goto label_36a510;
        case 0x36a514u: goto label_36a514;
        case 0x36a518u: goto label_36a518;
        case 0x36a51cu: goto label_36a51c;
        case 0x36a520u: goto label_36a520;
        case 0x36a524u: goto label_36a524;
        case 0x36a528u: goto label_36a528;
        case 0x36a52cu: goto label_36a52c;
        case 0x36a530u: goto label_36a530;
        case 0x36a534u: goto label_36a534;
        case 0x36a538u: goto label_36a538;
        case 0x36a53cu: goto label_36a53c;
        case 0x36a540u: goto label_36a540;
        case 0x36a544u: goto label_36a544;
        case 0x36a548u: goto label_36a548;
        case 0x36a54cu: goto label_36a54c;
        case 0x36a550u: goto label_36a550;
        case 0x36a554u: goto label_36a554;
        case 0x36a558u: goto label_36a558;
        case 0x36a55cu: goto label_36a55c;
        case 0x36a560u: goto label_36a560;
        case 0x36a564u: goto label_36a564;
        case 0x36a568u: goto label_36a568;
        case 0x36a56cu: goto label_36a56c;
        case 0x36a570u: goto label_36a570;
        case 0x36a574u: goto label_36a574;
        case 0x36a578u: goto label_36a578;
        case 0x36a57cu: goto label_36a57c;
        case 0x36a580u: goto label_36a580;
        case 0x36a584u: goto label_36a584;
        case 0x36a588u: goto label_36a588;
        case 0x36a58cu: goto label_36a58c;
        case 0x36a590u: goto label_36a590;
        case 0x36a594u: goto label_36a594;
        case 0x36a598u: goto label_36a598;
        case 0x36a59cu: goto label_36a59c;
        case 0x36a5a0u: goto label_36a5a0;
        case 0x36a5a4u: goto label_36a5a4;
        case 0x36a5a8u: goto label_36a5a8;
        case 0x36a5acu: goto label_36a5ac;
        case 0x36a5b0u: goto label_36a5b0;
        case 0x36a5b4u: goto label_36a5b4;
        case 0x36a5b8u: goto label_36a5b8;
        case 0x36a5bcu: goto label_36a5bc;
        case 0x36a5c0u: goto label_36a5c0;
        case 0x36a5c4u: goto label_36a5c4;
        case 0x36a5c8u: goto label_36a5c8;
        case 0x36a5ccu: goto label_36a5cc;
        case 0x36a5d0u: goto label_36a5d0;
        case 0x36a5d4u: goto label_36a5d4;
        case 0x36a5d8u: goto label_36a5d8;
        case 0x36a5dcu: goto label_36a5dc;
        case 0x36a5e0u: goto label_36a5e0;
        case 0x36a5e4u: goto label_36a5e4;
        case 0x36a5e8u: goto label_36a5e8;
        case 0x36a5ecu: goto label_36a5ec;
        case 0x36a5f0u: goto label_36a5f0;
        case 0x36a5f4u: goto label_36a5f4;
        case 0x36a5f8u: goto label_36a5f8;
        case 0x36a5fcu: goto label_36a5fc;
        case 0x36a600u: goto label_36a600;
        case 0x36a604u: goto label_36a604;
        case 0x36a608u: goto label_36a608;
        case 0x36a60cu: goto label_36a60c;
        case 0x36a610u: goto label_36a610;
        case 0x36a614u: goto label_36a614;
        case 0x36a618u: goto label_36a618;
        case 0x36a61cu: goto label_36a61c;
        case 0x36a620u: goto label_36a620;
        case 0x36a624u: goto label_36a624;
        case 0x36a628u: goto label_36a628;
        case 0x36a62cu: goto label_36a62c;
        case 0x36a630u: goto label_36a630;
        case 0x36a634u: goto label_36a634;
        case 0x36a638u: goto label_36a638;
        case 0x36a63cu: goto label_36a63c;
        case 0x36a640u: goto label_36a640;
        case 0x36a644u: goto label_36a644;
        case 0x36a648u: goto label_36a648;
        case 0x36a64cu: goto label_36a64c;
        case 0x36a650u: goto label_36a650;
        case 0x36a654u: goto label_36a654;
        case 0x36a658u: goto label_36a658;
        case 0x36a65cu: goto label_36a65c;
        case 0x36a660u: goto label_36a660;
        case 0x36a664u: goto label_36a664;
        case 0x36a668u: goto label_36a668;
        case 0x36a66cu: goto label_36a66c;
        case 0x36a670u: goto label_36a670;
        case 0x36a674u: goto label_36a674;
        case 0x36a678u: goto label_36a678;
        case 0x36a67cu: goto label_36a67c;
        case 0x36a680u: goto label_36a680;
        case 0x36a684u: goto label_36a684;
        case 0x36a688u: goto label_36a688;
        case 0x36a68cu: goto label_36a68c;
        case 0x36a690u: goto label_36a690;
        case 0x36a694u: goto label_36a694;
        case 0x36a698u: goto label_36a698;
        case 0x36a69cu: goto label_36a69c;
        case 0x36a6a0u: goto label_36a6a0;
        case 0x36a6a4u: goto label_36a6a4;
        case 0x36a6a8u: goto label_36a6a8;
        case 0x36a6acu: goto label_36a6ac;
        case 0x36a6b0u: goto label_36a6b0;
        case 0x36a6b4u: goto label_36a6b4;
        case 0x36a6b8u: goto label_36a6b8;
        case 0x36a6bcu: goto label_36a6bc;
        case 0x36a6c0u: goto label_36a6c0;
        case 0x36a6c4u: goto label_36a6c4;
        case 0x36a6c8u: goto label_36a6c8;
        case 0x36a6ccu: goto label_36a6cc;
        case 0x36a6d0u: goto label_36a6d0;
        case 0x36a6d4u: goto label_36a6d4;
        case 0x36a6d8u: goto label_36a6d8;
        case 0x36a6dcu: goto label_36a6dc;
        case 0x36a6e0u: goto label_36a6e0;
        case 0x36a6e4u: goto label_36a6e4;
        case 0x36a6e8u: goto label_36a6e8;
        case 0x36a6ecu: goto label_36a6ec;
        case 0x36a6f0u: goto label_36a6f0;
        case 0x36a6f4u: goto label_36a6f4;
        case 0x36a6f8u: goto label_36a6f8;
        case 0x36a6fcu: goto label_36a6fc;
        case 0x36a700u: goto label_36a700;
        case 0x36a704u: goto label_36a704;
        case 0x36a708u: goto label_36a708;
        case 0x36a70cu: goto label_36a70c;
        case 0x36a710u: goto label_36a710;
        case 0x36a714u: goto label_36a714;
        case 0x36a718u: goto label_36a718;
        case 0x36a71cu: goto label_36a71c;
        case 0x36a720u: goto label_36a720;
        case 0x36a724u: goto label_36a724;
        case 0x36a728u: goto label_36a728;
        case 0x36a72cu: goto label_36a72c;
        case 0x36a730u: goto label_36a730;
        case 0x36a734u: goto label_36a734;
        default: break;
    }

    ctx->pc = 0x36a2b0u;

label_36a2b0:
    // 0x36a2b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_36a2b4:
    // 0x36a2b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x36a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_36a2b8:
    // 0x36a2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36a2bc:
    // 0x36a2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36a2c0:
    // 0x36a2c0: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x36a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_36a2c4:
    // 0x36a2c4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x36a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_36a2c8:
    // 0x36a2c8: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x36a2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_36a2cc:
    // 0x36a2cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a2d0:
    // 0x36a2d0: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x36a2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
label_36a2d4:
    // 0x36a2d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a2d8:
    // 0x36a2d8: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x36a2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_36a2dc:
    // 0x36a2dc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x36a2dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_36a2e0:
    // 0x36a2e0: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x36a2e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_36a2e4:
    // 0x36a2e4: 0x1020010e  beqz        $at, . + 4 + (0x10E << 2)
label_36a2e8:
    if (ctx->pc == 0x36A2E8u) {
        ctx->pc = 0x36A2ECu;
        goto label_36a2ec;
    }
    ctx->pc = 0x36A2E4u;
    {
        const bool branch_taken_0x36a2e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a2e4) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A2ECu;
label_36a2ec:
    // 0x36a2ec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_36a2f0:
    // 0x36a2f0: 0x24642b50  addiu       $a0, $v1, 0x2B50
    ctx->pc = 0x36a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11088));
label_36a2f4:
    // 0x36a2f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x36a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_36a2f8:
    // 0x36a2f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_36a2fc:
    // 0x36a2fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36a300:
    // 0x36a300: 0x600008  jr          $v1
label_36a304:
    if (ctx->pc == 0x36A304u) {
        ctx->pc = 0x36A308u;
        goto label_36a308;
    }
    ctx->pc = 0x36A300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A300u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x36A308u;
label_36a308:
    // 0x36a308: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36a30c:
    // 0x36a30c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_36a310:
    // 0x36a310: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_36a314:
    // 0x36a314: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36a314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a318:
    // 0x36a318: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a31c:
    // 0x36a31c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_36a320:
    // 0x36a320: 0xc0965d0  jal         func_259740
label_36a324:
    if (ctx->pc == 0x36A324u) {
        ctx->pc = 0x36A328u;
        goto label_36a328;
    }
    ctx->pc = 0x36A320u;
    SET_GPR_U32(ctx, 31, 0x36A328u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A320u, 0x36A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A328u;
label_36a328:
    // 0x36a328: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a32c:
    // 0x36a32c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_36a330:
    // 0x36a330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36a334:
    // 0x36a334: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36a338:
    // 0x36a338: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a33c:
    // 0x36a33c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a33cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a340:
    // 0x36a340: 0xc096b40  jal         func_25AD00
label_36a344:
    if (ctx->pc == 0x36A344u) {
        ctx->pc = 0x36A348u;
        goto label_36a348;
    }
    ctx->pc = 0x36A340u;
    SET_GPR_U32(ctx, 31, 0x36A348u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A340u, 0x36A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A348u;
label_36a348:
    // 0x36a348: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a34c:
    // 0x36a34c: 0xc05cd10  jal         func_173440
label_36a350:
    if (ctx->pc == 0x36A350u) {
        ctx->pc = 0x36A354u;
        goto label_36a354;
    }
    ctx->pc = 0x36A34Cu;
    SET_GPR_U32(ctx, 31, 0x36A354u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A34Cu, 0x36A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A354u;
label_36a354:
    // 0x36a354: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a358:
    // 0x36a358: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36a35c:
    // 0x36a35c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_36a360:
    // 0x36a360: 0xc040c9e  jal         func_103278
label_36a364:
    if (ctx->pc == 0x36A364u) {
        ctx->pc = 0x36A368u;
        goto label_36a368;
    }
    ctx->pc = 0x36A360u;
    SET_GPR_U32(ctx, 31, 0x36A368u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36A368u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36A368u) { return; }
    ctx->pc = 0x36A368u;
label_36a368:
    // 0x36a368: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36a36c:
    // 0x36a36c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a370:
    // 0x36a370: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_36a374:
    // 0x36a374: 0xc0573d8  jal         func_15CF60
label_36a378:
    if (ctx->pc == 0x36A378u) {
        ctx->pc = 0x36A37Cu;
        goto label_36a37c;
    }
    ctx->pc = 0x36A374u;
    SET_GPR_U32(ctx, 31, 0x36A37Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A374u, 0x36A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A37Cu;
label_36a37c:
    // 0x36a37c: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36a380:
    // 0x36a380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a384:
    // 0x36a384: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36a384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_36a388:
    // 0x36a388: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a38c:
    // 0x36a38c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36a390:
    // 0x36a390: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_36a394:
    // 0x36a394: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36a394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36a398:
    // 0x36a398: 0xc0675b0  jal         func_19D6C0
label_36a39c:
    if (ctx->pc == 0x36A39Cu) {
        ctx->pc = 0x36A3A0u;
        goto label_36a3a0;
    }
    ctx->pc = 0x36A398u;
    SET_GPR_U32(ctx, 31, 0x36A3A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36A398u, 0x36A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3A0u;
label_36a3a0:
    // 0x36a3a0: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x36a3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36a3a4:
    // 0x36a3a4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36a3a8:
    // 0x36a3a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_36a3ac:
    // 0x36a3ac: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x36a3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
label_36a3b0:
    // 0x36a3b0: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x36a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36a3b4:
    // 0x36a3b4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36a3b8:
    // 0x36a3b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_36a3bc:
    // 0x36a3bc: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x36a3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
label_36a3c0:
    // 0x36a3c0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a3c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a3c4:
    // 0x36a3c4: 0xc097530  jal         func_25D4C0
label_36a3c8:
    if (ctx->pc == 0x36A3C8u) {
        ctx->pc = 0x36A3CCu;
        goto label_36a3cc;
    }
    ctx->pc = 0x36A3C4u;
    SET_GPR_U32(ctx, 31, 0x36A3CCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A3C4u, 0x36A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3CCu;
label_36a3cc:
    // 0x36a3cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a3d0:
    // 0x36a3d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_36a3d4:
    // 0x36a3d4: 0x106000d2  beqz        $v1, . + 4 + (0xD2 << 2)
label_36a3d8:
    if (ctx->pc == 0x36A3D8u) {
        ctx->pc = 0x36A3DCu;
        goto label_36a3dc;
    }
    ctx->pc = 0x36A3D4u;
    {
        const bool branch_taken_0x36a3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a3d4) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A3DCu;
label_36a3dc:
    // 0x36a3dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a3e0:
    // 0x36a3e0: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36a3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_36a3e4:
    // 0x36a3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_36a3e8:
    // 0x36a3e8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x36a3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_36a3ec:
    // 0x36a3ec: 0x100000cc  b           . + 4 + (0xCC << 2)
label_36a3f0:
    if (ctx->pc == 0x36A3F0u) {
        ctx->pc = 0x36A3F4u;
        goto label_36a3f4;
    }
    ctx->pc = 0x36A3ECu;
    {
        const bool branch_taken_0x36a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a3ec) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A3F4u;
label_36a3f4:
    // 0x36a3f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36a3f8:
    // 0x36a3f8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_36a3fc:
    // 0x36a3fc: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_36a400:
    // 0x36a400: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x36a400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36a404:
    // 0x36a404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a408:
    // 0x36a408: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_36a40c:
    // 0x36a40c: 0xc0965d0  jal         func_259740
label_36a410:
    if (ctx->pc == 0x36A410u) {
        ctx->pc = 0x36A414u;
        goto label_36a414;
    }
    ctx->pc = 0x36A40Cu;
    SET_GPR_U32(ctx, 31, 0x36A414u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A40Cu, 0x36A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A414u;
label_36a414:
    // 0x36a414: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a418:
    // 0x36a418: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x36a418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36a41c:
    // 0x36a41c: 0xc047fe2  jal         func_11FF88
label_36a420:
    if (ctx->pc == 0x36A420u) {
        ctx->pc = 0x36A424u;
        goto label_36a424;
    }
    ctx->pc = 0x36A41Cu;
    SET_GPR_U32(ctx, 31, 0x36A424u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x36A41Cu, 0x36A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A424u;
label_36a424:
    // 0x36a424: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x36a424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
label_36a428:
    // 0x36a428: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x36a428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
label_36a42c:
    // 0x36a42c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x36a42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_36a430:
    // 0x36a430: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x36a430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_36a434:
    // 0x36a434: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x36a434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_36a438:
    // 0x36a438: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36a438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_36a43c:
    // 0x36a43c: 0xc047ad6  jal         func_11EB58
label_36a440:
    if (ctx->pc == 0x36A440u) {
        ctx->pc = 0x36A444u;
        goto label_36a444;
    }
    ctx->pc = 0x36A43Cu;
    SET_GPR_U32(ctx, 31, 0x36A444u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x36A43Cu, 0x36A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A444u;
label_36a444:
    // 0x36a444: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36a444u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_36a448:
    // 0x36a448: 0xc047ce4  jal         func_11F390
label_36a44c:
    if (ctx->pc == 0x36A44Cu) {
        ctx->pc = 0x36A450u;
        goto label_36a450;
    }
    ctx->pc = 0x36A448u;
    SET_GPR_U32(ctx, 31, 0x36A450u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x36A448u, 0x36A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A450u;
label_36a450:
    // 0x36a450: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x36a450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_36a454:
    // 0x36a454: 0xc058fec  jal         func_163FB0
label_36a458:
    if (ctx->pc == 0x36A458u) {
        ctx->pc = 0x36A45Cu;
        goto label_36a45c;
    }
    ctx->pc = 0x36A454u;
    SET_GPR_U32(ctx, 31, 0x36A45Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36A454u, 0x36A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A45Cu;
label_36a45c:
    // 0x36a45c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a460:
    // 0x36a460: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36a460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_36a464:
    // 0x36a464: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a468:
    // 0x36a468: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_36a46c:
    // 0x36a46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36a470:
    // 0x36a470: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36a474:
    // 0x36a474: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a478:
    // 0x36a478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a47c:
    // 0x36a47c: 0xc096b40  jal         func_25AD00
label_36a480:
    if (ctx->pc == 0x36A480u) {
        ctx->pc = 0x36A484u;
        goto label_36a484;
    }
    ctx->pc = 0x36A47Cu;
    SET_GPR_U32(ctx, 31, 0x36A484u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A47Cu, 0x36A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A484u;
label_36a484:
    // 0x36a484: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a488:
    // 0x36a488: 0xc05cd10  jal         func_173440
label_36a48c:
    if (ctx->pc == 0x36A48Cu) {
        ctx->pc = 0x36A490u;
        goto label_36a490;
    }
    ctx->pc = 0x36A488u;
    SET_GPR_U32(ctx, 31, 0x36A490u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A488u, 0x36A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A490u;
label_36a490:
    // 0x36a490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36a494:
    // 0x36a494: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a498:
    // 0x36a498: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a49c:
    // 0x36a49c: 0xc0573d8  jal         func_15CF60
label_36a4a0:
    if (ctx->pc == 0x36A4A0u) {
        ctx->pc = 0x36A4A4u;
        goto label_36a4a4;
    }
    ctx->pc = 0x36A49Cu;
    SET_GPR_U32(ctx, 31, 0x36A4A4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A49Cu, 0x36A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4A4u;
label_36a4a4:
    // 0x36a4a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a4a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a4a8:
    // 0x36a4a8: 0xc097530  jal         func_25D4C0
label_36a4ac:
    if (ctx->pc == 0x36A4ACu) {
        ctx->pc = 0x36A4B0u;
        goto label_36a4b0;
    }
    ctx->pc = 0x36A4A8u;
    SET_GPR_U32(ctx, 31, 0x36A4B0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A4A8u, 0x36A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4B0u;
label_36a4b0:
    // 0x36a4b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a4b4:
    // 0x36a4b4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x36a4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_36a4b8:
    // 0x36a4b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36a4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_36a4bc:
    // 0x36a4bc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x36a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_36a4c0:
    // 0x36a4c0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_36a4c4:
    if (ctx->pc == 0x36A4C4u) {
        ctx->pc = 0x36A4C8u;
        goto label_36a4c8;
    }
    ctx->pc = 0x36A4C0u;
    {
        const bool branch_taken_0x36a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a4c0) {
            ctx->pc = 0x36A544u;
            goto label_36a544;
        }
    }
    ctx->pc = 0x36A4C8u;
label_36a4c8:
    // 0x36a4c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a4cc:
    // 0x36a4cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a4d0:
    // 0x36a4d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36a4d4:
    // 0x36a4d4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x36a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_36a4d8:
    // 0x36a4d8: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x36a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_36a4dc:
    // 0x36a4dc: 0xc0675b0  jal         func_19D6C0
label_36a4e0:
    if (ctx->pc == 0x36A4E0u) {
        ctx->pc = 0x36A4E4u;
        goto label_36a4e4;
    }
    ctx->pc = 0x36A4DCu;
    SET_GPR_U32(ctx, 31, 0x36A4E4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36A4DCu, 0x36A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4E4u;
label_36a4e4:
    // 0x36a4e4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x36a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36a4e8:
    // 0x36a4e8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36a4ec:
    // 0x36a4ec: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x36a4ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_36a4f0:
    // 0x36a4f0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x36a4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36a4f4:
    // 0x36a4f4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36a4f8:
    // 0x36a4f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36a4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_36a4fc:
    // 0x36a4fc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x36a4fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_36a500:
    // 0x36a500: 0xc06757c  jal         func_19D5F0
label_36a504:
    if (ctx->pc == 0x36A504u) {
        ctx->pc = 0x36A508u;
        goto label_36a508;
    }
    ctx->pc = 0x36A500u;
    SET_GPR_U32(ctx, 31, 0x36A508u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x36A500u, 0x36A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A508u;
label_36a508:
    // 0x36a508: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36a508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_36a50c:
    // 0x36a50c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x36a50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36a510:
    // 0x36a510: 0x3c034185  lui         $v1, 0x4185
    ctx->pc = 0x36a510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16773 << 16));
label_36a514:
    // 0x36a514: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x36a514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
label_36a518:
    // 0x36a518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36a518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36a51c:
    // 0x36a51c: 0x0  nop
    ctx->pc = 0x36a51cu;
    // NOP
label_36a520:
    // 0x36a520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36a520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36a524:
    // 0x36a524: 0x0  nop
    ctx->pc = 0x36a524u;
    // NOP
label_36a528:
    // 0x36a528: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_36a52c:
    if (ctx->pc == 0x36A52Cu) {
        ctx->pc = 0x36A530u;
        goto label_36a530;
    }
    ctx->pc = 0x36A528u;
    {
        const bool branch_taken_0x36a528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36a528) {
            ctx->pc = 0x36A544u;
            goto label_36a544;
        }
    }
    ctx->pc = 0x36A530u;
label_36a530:
    // 0x36a530: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x36a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_36a534:
    // 0x36a534: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a538:
    // 0x36a538: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x36a538u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_36a53c:
    // 0x36a53c: 0x10000078  b           . + 4 + (0x78 << 2)
label_36a540:
    if (ctx->pc == 0x36A540u) {
        ctx->pc = 0x36A544u;
        goto label_36a544;
    }
    ctx->pc = 0x36A53Cu;
    {
        const bool branch_taken_0x36a53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a53c) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A544u;
label_36a544:
    // 0x36a544: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a548:
    // 0x36a548: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_36a54c:
    // 0x36a54c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
label_36a550:
    if (ctx->pc == 0x36A550u) {
        ctx->pc = 0x36A554u;
        goto label_36a554;
    }
    ctx->pc = 0x36A54Cu;
    {
        const bool branch_taken_0x36a54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a54c) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A554u;
label_36a554:
    // 0x36a554: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a558:
    // 0x36a558: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36a558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_36a55c:
    // 0x36a55c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_36a560:
    // 0x36a560: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x36a560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_36a564:
    // 0x36a564: 0x1000006e  b           . + 4 + (0x6E << 2)
label_36a568:
    if (ctx->pc == 0x36A568u) {
        ctx->pc = 0x36A56Cu;
        goto label_36a56c;
    }
    ctx->pc = 0x36A564u;
    {
        const bool branch_taken_0x36a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a564) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A56Cu;
label_36a56c:
    // 0x36a56c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36a570:
    // 0x36a570: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_36a574:
    // 0x36a574: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_36a578:
    // 0x36a578: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x36a578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_36a57c:
    // 0x36a57c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a580:
    // 0x36a580: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_36a584:
    // 0x36a584: 0xc0965d0  jal         func_259740
label_36a588:
    if (ctx->pc == 0x36A588u) {
        ctx->pc = 0x36A58Cu;
        goto label_36a58c;
    }
    ctx->pc = 0x36A584u;
    SET_GPR_U32(ctx, 31, 0x36A58Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A584u, 0x36A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A58Cu;
label_36a58c:
    // 0x36a58c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a590:
    // 0x36a590: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_36a594:
    // 0x36a594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36a598:
    // 0x36a598: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36a59c:
    // 0x36a59c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a5a0:
    // 0x36a5a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a5a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a5a4:
    // 0x36a5a4: 0xc096b40  jal         func_25AD00
label_36a5a8:
    if (ctx->pc == 0x36A5A8u) {
        ctx->pc = 0x36A5ACu;
        goto label_36a5ac;
    }
    ctx->pc = 0x36A5A4u;
    SET_GPR_U32(ctx, 31, 0x36A5ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A5A4u, 0x36A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5ACu;
label_36a5ac:
    // 0x36a5ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a5b0:
    // 0x36a5b0: 0xc05cd10  jal         func_173440
label_36a5b4:
    if (ctx->pc == 0x36A5B4u) {
        ctx->pc = 0x36A5B8u;
        goto label_36a5b8;
    }
    ctx->pc = 0x36A5B0u;
    SET_GPR_U32(ctx, 31, 0x36A5B8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A5B0u, 0x36A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5B8u;
label_36a5b8:
    // 0x36a5b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36a5bc:
    // 0x36a5bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a5c0:
    // 0x36a5c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a5c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a5c4:
    // 0x36a5c4: 0xc0573d8  jal         func_15CF60
label_36a5c8:
    if (ctx->pc == 0x36A5C8u) {
        ctx->pc = 0x36A5CCu;
        goto label_36a5cc;
    }
    ctx->pc = 0x36A5C4u;
    SET_GPR_U32(ctx, 31, 0x36A5CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A5C4u, 0x36A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5CCu;
label_36a5cc:
    // 0x36a5cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a5ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a5d0:
    // 0x36a5d0: 0xc097530  jal         func_25D4C0
label_36a5d4:
    if (ctx->pc == 0x36A5D4u) {
        ctx->pc = 0x36A5D8u;
        goto label_36a5d8;
    }
    ctx->pc = 0x36A5D0u;
    SET_GPR_U32(ctx, 31, 0x36A5D8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A5D0u, 0x36A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5D8u;
label_36a5d8:
    // 0x36a5d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a5dc:
    // 0x36a5dc: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x36a5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_36a5e0:
    // 0x36a5e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_36a5e4:
    // 0x36a5e4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x36a5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_36a5e8:
    // 0x36a5e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_36a5ec:
    if (ctx->pc == 0x36A5ECu) {
        ctx->pc = 0x36A5F0u;
        goto label_36a5f0;
    }
    ctx->pc = 0x36A5E8u;
    {
        const bool branch_taken_0x36a5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a5e8) {
            ctx->pc = 0x36A610u;
            goto label_36a610;
        }
    }
    ctx->pc = 0x36A5F0u;
label_36a5f0:
    // 0x36a5f0: 0xc0585dc  jal         func_161770
label_36a5f4:
    if (ctx->pc == 0x36A5F4u) {
        ctx->pc = 0x36A5F8u;
        goto label_36a5f8;
    }
    ctx->pc = 0x36A5F0u;
    SET_GPR_U32(ctx, 31, 0x36A5F8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x36A5F0u, 0x36A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5F8u;
label_36a5f8:
    // 0x36a5f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_36a5fc:
    if (ctx->pc == 0x36A5FCu) {
        ctx->pc = 0x36A600u;
        goto label_36a600;
    }
    ctx->pc = 0x36A5F8u;
    {
        const bool branch_taken_0x36a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a5f8) {
            ctx->pc = 0x36A610u;
            goto label_36a610;
        }
    }
    ctx->pc = 0x36A600u;
label_36a600:
    // 0x36a600: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a604:
    // 0x36a604: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x36a604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_36a608:
    // 0x36a608: 0x10000045  b           . + 4 + (0x45 << 2)
label_36a60c:
    if (ctx->pc == 0x36A60Cu) {
        ctx->pc = 0x36A610u;
        goto label_36a610;
    }
    ctx->pc = 0x36A608u;
    {
        const bool branch_taken_0x36a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a608) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A610u;
label_36a610:
    // 0x36a610: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a614:
    // 0x36a614: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_36a618:
    // 0x36a618: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_36a61c:
    if (ctx->pc == 0x36A61Cu) {
        ctx->pc = 0x36A620u;
        goto label_36a620;
    }
    ctx->pc = 0x36A618u;
    {
        const bool branch_taken_0x36a618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a618) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A620u;
label_36a620:
    // 0x36a620: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a624:
    // 0x36a624: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x36a624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_36a628:
    // 0x36a628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36a628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a62c:
    // 0x36a62c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a630:
    // 0x36a630: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36a630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_36a634:
    // 0x36a634: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a638:
    // 0x36a638: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36a638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_36a63c:
    // 0x36a63c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a640:
    // 0x36a640: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36a640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_36a644:
    // 0x36a644: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a648:
    // 0x36a648: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36a648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_36a64c:
    // 0x36a64c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x36a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_36a650:
    // 0x36a650: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a654:
    // 0x36a654: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36a654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_36a658:
    // 0x36a658: 0x10000031  b           . + 4 + (0x31 << 2)
label_36a65c:
    if (ctx->pc == 0x36A65Cu) {
        ctx->pc = 0x36A660u;
        goto label_36a660;
    }
    ctx->pc = 0x36A658u;
    {
        const bool branch_taken_0x36a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a658) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A660u;
label_36a660:
    // 0x36a660: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36a664:
    // 0x36a664: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_36a668:
    // 0x36a668: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_36a66c:
    // 0x36a66c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36a670:
    // 0x36a670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a674:
    // 0x36a674: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_36a678:
    // 0x36a678: 0xc0965d0  jal         func_259740
label_36a67c:
    if (ctx->pc == 0x36A67Cu) {
        ctx->pc = 0x36A680u;
        goto label_36a680;
    }
    ctx->pc = 0x36A678u;
    SET_GPR_U32(ctx, 31, 0x36A680u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A678u, 0x36A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A680u;
label_36a680:
    // 0x36a680: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a684:
    // 0x36a684: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_36a688:
    // 0x36a688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36a68c:
    // 0x36a68c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36a690:
    // 0x36a690: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a694:
    // 0x36a694: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a698:
    // 0x36a698: 0xc096b40  jal         func_25AD00
label_36a69c:
    if (ctx->pc == 0x36A69Cu) {
        ctx->pc = 0x36A6A0u;
        goto label_36a6a0;
    }
    ctx->pc = 0x36A698u;
    SET_GPR_U32(ctx, 31, 0x36A6A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A698u, 0x36A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6A0u;
label_36a6a0:
    // 0x36a6a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a6a4:
    // 0x36a6a4: 0xc05cd10  jal         func_173440
label_36a6a8:
    if (ctx->pc == 0x36A6A8u) {
        ctx->pc = 0x36A6ACu;
        goto label_36a6ac;
    }
    ctx->pc = 0x36A6A4u;
    SET_GPR_U32(ctx, 31, 0x36A6ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A6A4u, 0x36A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6ACu;
label_36a6ac:
    // 0x36a6ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36a6b0:
    // 0x36a6b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a6b4:
    // 0x36a6b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a6b8:
    // 0x36a6b8: 0xc0573d8  jal         func_15CF60
label_36a6bc:
    if (ctx->pc == 0x36A6BCu) {
        ctx->pc = 0x36A6C0u;
        goto label_36a6c0;
    }
    ctx->pc = 0x36A6B8u;
    SET_GPR_U32(ctx, 31, 0x36A6C0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A6B8u, 0x36A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6C0u;
label_36a6c0:
    // 0x36a6c0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36a6c4:
    // 0x36a6c4: 0xc097530  jal         func_25D4C0
label_36a6c8:
    if (ctx->pc == 0x36A6C8u) {
        ctx->pc = 0x36A6CCu;
        goto label_36a6cc;
    }
    ctx->pc = 0x36A6C4u;
    SET_GPR_U32(ctx, 31, 0x36A6CCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A6C4u, 0x36A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6CCu;
label_36a6cc:
    // 0x36a6cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a6d0:
    // 0x36a6d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_36a6d4:
    // 0x36a6d4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_36a6d8:
    if (ctx->pc == 0x36A6D8u) {
        ctx->pc = 0x36A6DCu;
        goto label_36a6dc;
    }
    ctx->pc = 0x36A6D4u;
    {
        const bool branch_taken_0x36a6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a6d4) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A6DCu;
label_36a6dc:
    // 0x36a6dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_36a6e0:
    // 0x36a6e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a6e4:
    // 0x36a6e4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x36a6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_36a6e8:
    // 0x36a6e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a6ec:
    // 0x36a6ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a6f0:
    // 0x36a6f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36a6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_36a6f4:
    // 0x36a6f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a6f8:
    // 0x36a6f8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36a6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_36a6fc:
    // 0x36a6fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a700:
    // 0x36a700: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36a700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_36a704:
    // 0x36a704: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a708:
    // 0x36a708: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36a708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_36a70c:
    // 0x36a70c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_36a710:
    // 0x36a710: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_36a714:
    // 0x36a714: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36a714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_36a718:
    // 0x36a718: 0x10000001  b           . + 4 + (0x1 << 2)
label_36a71c:
    if (ctx->pc == 0x36A71Cu) {
        ctx->pc = 0x36A720u;
        goto label_36a720;
    }
    ctx->pc = 0x36A718u;
    {
        const bool branch_taken_0x36a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a718) {
            ctx->pc = 0x36A720u;
            goto label_36a720;
        }
    }
    ctx->pc = 0x36A720u;
label_36a720:
    // 0x36a720: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36a720u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36a724:
    // 0x36a724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36a728:
    // 0x36a728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36a72c:
    // 0x36a72c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x36a72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_36a730:
    // 0x36a730: 0x3e00008  jr          $ra
label_36a734:
    if (ctx->pc == 0x36A734u) {
        ctx->pc = 0x36A738u;
        goto label_fallthrough_0x36a730;
    }
    ctx->pc = 0x36A730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36a730:
    ctx->pc = 0x36A738u;
}
