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

// Function: Pl_r1_hi_jump
// Address: 0x14a3a0 - 0x14a81c
void Pl_r1_hi_jump_0x14a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_hi_jump_0x14a3a0");
#endif

    switch (ctx->pc) {
        case 0x14a3a0u: goto label_14a3a0;
        case 0x14a3a4u: goto label_14a3a4;
        case 0x14a3a8u: goto label_14a3a8;
        case 0x14a3acu: goto label_14a3ac;
        case 0x14a3b0u: goto label_14a3b0;
        case 0x14a3b4u: goto label_14a3b4;
        case 0x14a3b8u: goto label_14a3b8;
        case 0x14a3bcu: goto label_14a3bc;
        case 0x14a3c0u: goto label_14a3c0;
        case 0x14a3c4u: goto label_14a3c4;
        case 0x14a3c8u: goto label_14a3c8;
        case 0x14a3ccu: goto label_14a3cc;
        case 0x14a3d0u: goto label_14a3d0;
        case 0x14a3d4u: goto label_14a3d4;
        case 0x14a3d8u: goto label_14a3d8;
        case 0x14a3dcu: goto label_14a3dc;
        case 0x14a3e0u: goto label_14a3e0;
        case 0x14a3e4u: goto label_14a3e4;
        case 0x14a3e8u: goto label_14a3e8;
        case 0x14a3ecu: goto label_14a3ec;
        case 0x14a3f0u: goto label_14a3f0;
        case 0x14a3f4u: goto label_14a3f4;
        case 0x14a3f8u: goto label_14a3f8;
        case 0x14a3fcu: goto label_14a3fc;
        case 0x14a400u: goto label_14a400;
        case 0x14a404u: goto label_14a404;
        case 0x14a408u: goto label_14a408;
        case 0x14a40cu: goto label_14a40c;
        case 0x14a410u: goto label_14a410;
        case 0x14a414u: goto label_14a414;
        case 0x14a418u: goto label_14a418;
        case 0x14a41cu: goto label_14a41c;
        case 0x14a420u: goto label_14a420;
        case 0x14a424u: goto label_14a424;
        case 0x14a428u: goto label_14a428;
        case 0x14a42cu: goto label_14a42c;
        case 0x14a430u: goto label_14a430;
        case 0x14a434u: goto label_14a434;
        case 0x14a438u: goto label_14a438;
        case 0x14a43cu: goto label_14a43c;
        case 0x14a440u: goto label_14a440;
        case 0x14a444u: goto label_14a444;
        case 0x14a448u: goto label_14a448;
        case 0x14a44cu: goto label_14a44c;
        case 0x14a450u: goto label_14a450;
        case 0x14a454u: goto label_14a454;
        case 0x14a458u: goto label_14a458;
        case 0x14a45cu: goto label_14a45c;
        case 0x14a460u: goto label_14a460;
        case 0x14a464u: goto label_14a464;
        case 0x14a468u: goto label_14a468;
        case 0x14a46cu: goto label_14a46c;
        case 0x14a470u: goto label_14a470;
        case 0x14a474u: goto label_14a474;
        case 0x14a478u: goto label_14a478;
        case 0x14a47cu: goto label_14a47c;
        case 0x14a480u: goto label_14a480;
        case 0x14a484u: goto label_14a484;
        case 0x14a488u: goto label_14a488;
        case 0x14a48cu: goto label_14a48c;
        case 0x14a490u: goto label_14a490;
        case 0x14a494u: goto label_14a494;
        case 0x14a498u: goto label_14a498;
        case 0x14a49cu: goto label_14a49c;
        case 0x14a4a0u: goto label_14a4a0;
        case 0x14a4a4u: goto label_14a4a4;
        case 0x14a4a8u: goto label_14a4a8;
        case 0x14a4acu: goto label_14a4ac;
        case 0x14a4b0u: goto label_14a4b0;
        case 0x14a4b4u: goto label_14a4b4;
        case 0x14a4b8u: goto label_14a4b8;
        case 0x14a4bcu: goto label_14a4bc;
        case 0x14a4c0u: goto label_14a4c0;
        case 0x14a4c4u: goto label_14a4c4;
        case 0x14a4c8u: goto label_14a4c8;
        case 0x14a4ccu: goto label_14a4cc;
        case 0x14a4d0u: goto label_14a4d0;
        case 0x14a4d4u: goto label_14a4d4;
        case 0x14a4d8u: goto label_14a4d8;
        case 0x14a4dcu: goto label_14a4dc;
        case 0x14a4e0u: goto label_14a4e0;
        case 0x14a4e4u: goto label_14a4e4;
        case 0x14a4e8u: goto label_14a4e8;
        case 0x14a4ecu: goto label_14a4ec;
        case 0x14a4f0u: goto label_14a4f0;
        case 0x14a4f4u: goto label_14a4f4;
        case 0x14a4f8u: goto label_14a4f8;
        case 0x14a4fcu: goto label_14a4fc;
        case 0x14a500u: goto label_14a500;
        case 0x14a504u: goto label_14a504;
        case 0x14a508u: goto label_14a508;
        case 0x14a50cu: goto label_14a50c;
        case 0x14a510u: goto label_14a510;
        case 0x14a514u: goto label_14a514;
        case 0x14a518u: goto label_14a518;
        case 0x14a51cu: goto label_14a51c;
        case 0x14a520u: goto label_14a520;
        case 0x14a524u: goto label_14a524;
        case 0x14a528u: goto label_14a528;
        case 0x14a52cu: goto label_14a52c;
        case 0x14a530u: goto label_14a530;
        case 0x14a534u: goto label_14a534;
        case 0x14a538u: goto label_14a538;
        case 0x14a53cu: goto label_14a53c;
        case 0x14a540u: goto label_14a540;
        case 0x14a544u: goto label_14a544;
        case 0x14a548u: goto label_14a548;
        case 0x14a54cu: goto label_14a54c;
        case 0x14a550u: goto label_14a550;
        case 0x14a554u: goto label_14a554;
        case 0x14a558u: goto label_14a558;
        case 0x14a55cu: goto label_14a55c;
        case 0x14a560u: goto label_14a560;
        case 0x14a564u: goto label_14a564;
        case 0x14a568u: goto label_14a568;
        case 0x14a56cu: goto label_14a56c;
        case 0x14a570u: goto label_14a570;
        case 0x14a574u: goto label_14a574;
        case 0x14a578u: goto label_14a578;
        case 0x14a57cu: goto label_14a57c;
        case 0x14a580u: goto label_14a580;
        case 0x14a584u: goto label_14a584;
        case 0x14a588u: goto label_14a588;
        case 0x14a58cu: goto label_14a58c;
        case 0x14a590u: goto label_14a590;
        case 0x14a594u: goto label_14a594;
        case 0x14a598u: goto label_14a598;
        case 0x14a59cu: goto label_14a59c;
        case 0x14a5a0u: goto label_14a5a0;
        case 0x14a5a4u: goto label_14a5a4;
        case 0x14a5a8u: goto label_14a5a8;
        case 0x14a5acu: goto label_14a5ac;
        case 0x14a5b0u: goto label_14a5b0;
        case 0x14a5b4u: goto label_14a5b4;
        case 0x14a5b8u: goto label_14a5b8;
        case 0x14a5bcu: goto label_14a5bc;
        case 0x14a5c0u: goto label_14a5c0;
        case 0x14a5c4u: goto label_14a5c4;
        case 0x14a5c8u: goto label_14a5c8;
        case 0x14a5ccu: goto label_14a5cc;
        case 0x14a5d0u: goto label_14a5d0;
        case 0x14a5d4u: goto label_14a5d4;
        case 0x14a5d8u: goto label_14a5d8;
        case 0x14a5dcu: goto label_14a5dc;
        case 0x14a5e0u: goto label_14a5e0;
        case 0x14a5e4u: goto label_14a5e4;
        case 0x14a5e8u: goto label_14a5e8;
        case 0x14a5ecu: goto label_14a5ec;
        case 0x14a5f0u: goto label_14a5f0;
        case 0x14a5f4u: goto label_14a5f4;
        case 0x14a5f8u: goto label_14a5f8;
        case 0x14a5fcu: goto label_14a5fc;
        case 0x14a600u: goto label_14a600;
        case 0x14a604u: goto label_14a604;
        case 0x14a608u: goto label_14a608;
        case 0x14a60cu: goto label_14a60c;
        case 0x14a610u: goto label_14a610;
        case 0x14a614u: goto label_14a614;
        case 0x14a618u: goto label_14a618;
        case 0x14a61cu: goto label_14a61c;
        case 0x14a620u: goto label_14a620;
        case 0x14a624u: goto label_14a624;
        case 0x14a628u: goto label_14a628;
        case 0x14a62cu: goto label_14a62c;
        case 0x14a630u: goto label_14a630;
        case 0x14a634u: goto label_14a634;
        case 0x14a638u: goto label_14a638;
        case 0x14a63cu: goto label_14a63c;
        case 0x14a640u: goto label_14a640;
        case 0x14a644u: goto label_14a644;
        case 0x14a648u: goto label_14a648;
        case 0x14a64cu: goto label_14a64c;
        case 0x14a650u: goto label_14a650;
        case 0x14a654u: goto label_14a654;
        case 0x14a658u: goto label_14a658;
        case 0x14a65cu: goto label_14a65c;
        case 0x14a660u: goto label_14a660;
        case 0x14a664u: goto label_14a664;
        case 0x14a668u: goto label_14a668;
        case 0x14a66cu: goto label_14a66c;
        case 0x14a670u: goto label_14a670;
        case 0x14a674u: goto label_14a674;
        case 0x14a678u: goto label_14a678;
        case 0x14a67cu: goto label_14a67c;
        case 0x14a680u: goto label_14a680;
        case 0x14a684u: goto label_14a684;
        case 0x14a688u: goto label_14a688;
        case 0x14a68cu: goto label_14a68c;
        case 0x14a690u: goto label_14a690;
        case 0x14a694u: goto label_14a694;
        case 0x14a698u: goto label_14a698;
        case 0x14a69cu: goto label_14a69c;
        case 0x14a6a0u: goto label_14a6a0;
        case 0x14a6a4u: goto label_14a6a4;
        case 0x14a6a8u: goto label_14a6a8;
        case 0x14a6acu: goto label_14a6ac;
        case 0x14a6b0u: goto label_14a6b0;
        case 0x14a6b4u: goto label_14a6b4;
        case 0x14a6b8u: goto label_14a6b8;
        case 0x14a6bcu: goto label_14a6bc;
        case 0x14a6c0u: goto label_14a6c0;
        case 0x14a6c4u: goto label_14a6c4;
        case 0x14a6c8u: goto label_14a6c8;
        case 0x14a6ccu: goto label_14a6cc;
        case 0x14a6d0u: goto label_14a6d0;
        case 0x14a6d4u: goto label_14a6d4;
        case 0x14a6d8u: goto label_14a6d8;
        case 0x14a6dcu: goto label_14a6dc;
        case 0x14a6e0u: goto label_14a6e0;
        case 0x14a6e4u: goto label_14a6e4;
        case 0x14a6e8u: goto label_14a6e8;
        case 0x14a6ecu: goto label_14a6ec;
        case 0x14a6f0u: goto label_14a6f0;
        case 0x14a6f4u: goto label_14a6f4;
        case 0x14a6f8u: goto label_14a6f8;
        case 0x14a6fcu: goto label_14a6fc;
        case 0x14a700u: goto label_14a700;
        case 0x14a704u: goto label_14a704;
        case 0x14a708u: goto label_14a708;
        case 0x14a70cu: goto label_14a70c;
        case 0x14a710u: goto label_14a710;
        case 0x14a714u: goto label_14a714;
        case 0x14a718u: goto label_14a718;
        case 0x14a71cu: goto label_14a71c;
        case 0x14a720u: goto label_14a720;
        case 0x14a724u: goto label_14a724;
        case 0x14a728u: goto label_14a728;
        case 0x14a72cu: goto label_14a72c;
        case 0x14a730u: goto label_14a730;
        case 0x14a734u: goto label_14a734;
        case 0x14a738u: goto label_14a738;
        case 0x14a73cu: goto label_14a73c;
        case 0x14a740u: goto label_14a740;
        case 0x14a744u: goto label_14a744;
        case 0x14a748u: goto label_14a748;
        case 0x14a74cu: goto label_14a74c;
        case 0x14a750u: goto label_14a750;
        case 0x14a754u: goto label_14a754;
        case 0x14a758u: goto label_14a758;
        case 0x14a75cu: goto label_14a75c;
        case 0x14a760u: goto label_14a760;
        case 0x14a764u: goto label_14a764;
        case 0x14a768u: goto label_14a768;
        case 0x14a76cu: goto label_14a76c;
        case 0x14a770u: goto label_14a770;
        case 0x14a774u: goto label_14a774;
        case 0x14a778u: goto label_14a778;
        case 0x14a77cu: goto label_14a77c;
        case 0x14a780u: goto label_14a780;
        case 0x14a784u: goto label_14a784;
        case 0x14a788u: goto label_14a788;
        case 0x14a78cu: goto label_14a78c;
        case 0x14a790u: goto label_14a790;
        case 0x14a794u: goto label_14a794;
        case 0x14a798u: goto label_14a798;
        case 0x14a79cu: goto label_14a79c;
        case 0x14a7a0u: goto label_14a7a0;
        case 0x14a7a4u: goto label_14a7a4;
        case 0x14a7a8u: goto label_14a7a8;
        case 0x14a7acu: goto label_14a7ac;
        case 0x14a7b0u: goto label_14a7b0;
        case 0x14a7b4u: goto label_14a7b4;
        case 0x14a7b8u: goto label_14a7b8;
        case 0x14a7bcu: goto label_14a7bc;
        case 0x14a7c0u: goto label_14a7c0;
        case 0x14a7c4u: goto label_14a7c4;
        case 0x14a7c8u: goto label_14a7c8;
        case 0x14a7ccu: goto label_14a7cc;
        case 0x14a7d0u: goto label_14a7d0;
        case 0x14a7d4u: goto label_14a7d4;
        case 0x14a7d8u: goto label_14a7d8;
        case 0x14a7dcu: goto label_14a7dc;
        case 0x14a7e0u: goto label_14a7e0;
        case 0x14a7e4u: goto label_14a7e4;
        case 0x14a7e8u: goto label_14a7e8;
        case 0x14a7ecu: goto label_14a7ec;
        case 0x14a7f0u: goto label_14a7f0;
        case 0x14a7f4u: goto label_14a7f4;
        case 0x14a7f8u: goto label_14a7f8;
        case 0x14a7fcu: goto label_14a7fc;
        case 0x14a800u: goto label_14a800;
        case 0x14a804u: goto label_14a804;
        case 0x14a808u: goto label_14a808;
        case 0x14a80cu: goto label_14a80c;
        case 0x14a810u: goto label_14a810;
        case 0x14a814u: goto label_14a814;
        case 0x14a818u: goto label_14a818;
        default: break;
    }

    ctx->pc = 0x14a3a0u;

label_14a3a0:
    // 0x14a3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14a3a4:
    // 0x14a3a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_14a3a8:
    // 0x14a3a8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14a3ac:
    // 0x14a3ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a3b0:
    // 0x14a3b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14a3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14a3b4:
    // 0x14a3b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14a3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14a3b8:
    // 0x14a3b8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x14a3b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_14a3bc:
    // 0x14a3bc: 0x10200113  beqz        $at, . + 4 + (0x113 << 2)
label_14a3c0:
    if (ctx->pc == 0x14A3C0u) {
        ctx->pc = 0x14A3C4u;
        goto label_14a3c4;
    }
    ctx->pc = 0x14A3BCu;
    {
        const bool branch_taken_0x14a3bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a3bc) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A3C4u;
label_14a3c4:
    // 0x14a3c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14a3c8:
    // 0x14a3c8: 0x2464e840  addiu       $a0, $v1, -0x17C0
    ctx->pc = 0x14a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961216));
label_14a3cc:
    // 0x14a3cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14a3d0:
    // 0x14a3d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14a3d4:
    // 0x14a3d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14a3d8:
    // 0x14a3d8: 0x600008  jr          $v1
label_14a3dc:
    if (ctx->pc == 0x14A3DCu) {
        ctx->pc = 0x14A3E0u;
        goto label_14a3e0;
    }
    ctx->pc = 0x14A3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A3D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14A3E0u;
label_14a3e0:
    // 0x14a3e0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14a3e4:
    // 0x14a3e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a3e8:
    // 0x14a3e8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14a3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_14a3ec:
    // 0x14a3ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a3f0:
    // 0x14a3f0: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x14a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a3f4:
    // 0x14a3f4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14a3f8:
    // 0x14a3f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a3fc:
    // 0x14a3fc: 0x0  nop
    ctx->pc = 0x14a3fcu;
    // NOP
label_14a400:
    // 0x14a400: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x14a400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14a404:
    // 0x14a404: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a408:
    // 0x14a408: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a40c:
    // 0x14a40c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14a40cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14a410:
    // 0x14a410: 0x3c024426  lui         $v0, 0x4426
    ctx->pc = 0x14a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17446 << 16));
label_14a414:
    // 0x14a414: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14a418:
    // 0x14a418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a41c:
    // 0x14a41c: 0x0  nop
    ctx->pc = 0x14a41cu;
    // NOP
label_14a420:
    // 0x14a420: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14a420u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14a424:
    // 0x14a424: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a428:
    // 0x14a428: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14a428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_14a42c:
    // 0x14a42c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a430:
    // 0x14a430: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x14a430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_14a434:
    // 0x14a434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14a434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a438:
    // 0x14a438: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x14a438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a43c:
    // 0x14a43c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14a43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14a440:
    // 0x14a440: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a444:
    // 0x14a444: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14a448:
    // 0x14a448: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a44c:
    // 0x14a44c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a450:
    // 0x14a450: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a454:
    // 0x14a454: 0x24060a03  addiu       $a2, $zero, 0xA03
    ctx->pc = 0x14a454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2563));
label_14a458:
    // 0x14a458: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14a458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_14a45c:
    // 0x14a45c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a460:
    // 0x14a460: 0xc0965d0  jal         func_259740
label_14a464:
    if (ctx->pc == 0x14A464u) {
        ctx->pc = 0x14A468u;
        goto label_14a468;
    }
    ctx->pc = 0x14A460u;
    SET_GPR_U32(ctx, 31, 0x14A468u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A460u, 0x14A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A468u;
label_14a468:
    // 0x14a468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a46c:
    // 0x14a46c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x14a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_14a470:
    // 0x14a470: 0xc058b98  jal         func_162E60
label_14a474:
    if (ctx->pc == 0x14A474u) {
        ctx->pc = 0x14A478u;
        goto label_14a478;
    }
    ctx->pc = 0x14A470u;
    SET_GPR_U32(ctx, 31, 0x14A478u);
    ctx->pc = 0x162E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162E60u, 0x14A470u, 0x14A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A478u;
label_14a478:
    // 0x14a478: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x14a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_14a47c:
    // 0x14a47c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_14a480:
    // 0x14a480: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14a480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14a484:
    // 0x14a484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a488:
    // 0x14a488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a48c:
    // 0x14a48c: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x14a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_14a490:
    // 0x14a490: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_14a494:
    // 0x14a494: 0xc040ed8  jal         func_103B60
label_14a498:
    if (ctx->pc == 0x14A498u) {
        ctx->pc = 0x14A49Cu;
        goto label_14a49c;
    }
    ctx->pc = 0x14A494u;
    SET_GPR_U32(ctx, 31, 0x14A49Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x14A49Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14A49Cu) { return; }
    ctx->pc = 0x14A49Cu;
label_14a49c:
    // 0x14a49c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14a4a0:
    // 0x14a4a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a4a4:
    // 0x14a4a4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14a4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_14a4a8:
    // 0x14a4a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a4ac:
    // 0x14a4ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14a4b0:
    // 0x14a4b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14a4b4:
    // 0x14a4b4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14a4b8:
    // 0x14a4b8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_14a4bc:
    // 0x14a4bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14a4c0:
    // 0x14a4c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14a4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14a4c4:
    // 0x14a4c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a4c8:
    // 0x14a4c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a4cc:
    // 0x14a4cc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14a4d0:
    // 0x14a4d0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14a4d4:
    // 0x14a4d4: 0xc058f50  jal         func_163D40
label_14a4d8:
    if (ctx->pc == 0x14A4D8u) {
        ctx->pc = 0x14A4DCu;
        goto label_14a4dc;
    }
    ctx->pc = 0x14A4D4u;
    SET_GPR_U32(ctx, 31, 0x14A4DCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14A4D4u, 0x14A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4DCu;
label_14a4dc:
    // 0x14a4dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a4e0:
    // 0x14a4e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14a4e4:
    // 0x14a4e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a4e8:
    // 0x14a4e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a4e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a4ec:
    // 0x14a4ec: 0xc096b40  jal         func_25AD00
label_14a4f0:
    if (ctx->pc == 0x14A4F0u) {
        ctx->pc = 0x14A4F4u;
        goto label_14a4f4;
    }
    ctx->pc = 0x14A4ECu;
    SET_GPR_U32(ctx, 31, 0x14A4F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A4ECu, 0x14A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4F4u;
label_14a4f4:
    // 0x14a4f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a4f8:
    // 0x14a4f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a4fc:
    // 0x14a4fc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14a500:
    // 0x14a500: 0xc05cd58  jal         func_173560
label_14a504:
    if (ctx->pc == 0x14A504u) {
        ctx->pc = 0x14A508u;
        goto label_14a508;
    }
    ctx->pc = 0x14A500u;
    SET_GPR_U32(ctx, 31, 0x14A508u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14A500u, 0x14A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A508u;
label_14a508:
    // 0x14a508: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14a50c:
    // 0x14a50c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a510:
    // 0x14a510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a514:
    // 0x14a514: 0xc057480  jal         func_15D200
label_14a518:
    if (ctx->pc == 0x14A518u) {
        ctx->pc = 0x14A51Cu;
        goto label_14a51c;
    }
    ctx->pc = 0x14A514u;
    SET_GPR_U32(ctx, 31, 0x14A51Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x14A514u, 0x14A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A51Cu;
label_14a51c:
    // 0x14a51c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a520:
    // 0x14a520: 0xc097530  jal         func_25D4C0
label_14a524:
    if (ctx->pc == 0x14A524u) {
        ctx->pc = 0x14A528u;
        goto label_14a528;
    }
    ctx->pc = 0x14A520u;
    SET_GPR_U32(ctx, 31, 0x14A528u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A520u, 0x14A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A528u;
label_14a528:
    // 0x14a528: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a52c:
    // 0x14a52c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14a530:
    // 0x14a530: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
label_14a534:
    if (ctx->pc == 0x14A534u) {
        ctx->pc = 0x14A538u;
        goto label_14a538;
    }
    ctx->pc = 0x14A530u;
    {
        const bool branch_taken_0x14a530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a530) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A538u;
label_14a538:
    // 0x14a538: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a53c:
    // 0x14a53c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14a53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14a540:
    // 0x14a540: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14a544:
    // 0x14a544: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14a544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_14a548:
    // 0x14a548: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_14a54c:
    if (ctx->pc == 0x14A54Cu) {
        ctx->pc = 0x14A550u;
        goto label_14a550;
    }
    ctx->pc = 0x14A548u;
    {
        const bool branch_taken_0x14a548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a548) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A550u;
label_14a550:
    // 0x14a550: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a554:
    // 0x14a554: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a558:
    // 0x14a558: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a55c:
    // 0x14a55c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14a55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14a560:
    // 0x14a560: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14a560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a564:
    // 0x14a564: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a568:
    // 0x14a568: 0xc0965d0  jal         func_259740
label_14a56c:
    if (ctx->pc == 0x14A56Cu) {
        ctx->pc = 0x14A570u;
        goto label_14a570;
    }
    ctx->pc = 0x14A568u;
    SET_GPR_U32(ctx, 31, 0x14A570u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A568u, 0x14A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A570u;
label_14a570:
    // 0x14a570: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a574:
    // 0x14a574: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14a578:
    // 0x14a578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14a57c:
    // 0x14a57c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a57cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14a580:
    // 0x14a580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a584:
    // 0x14a584: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a588:
    // 0x14a588: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x14a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_14a58c:
    // 0x14a58c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14a590:
    // 0x14a590: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14a590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14a594:
    // 0x14a594: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x14a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14a598:
    // 0x14a598: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14a59c:
    // 0x14a59c: 0xc058f50  jal         func_163D40
label_14a5a0:
    if (ctx->pc == 0x14A5A0u) {
        ctx->pc = 0x14A5A4u;
        goto label_14a5a4;
    }
    ctx->pc = 0x14A59Cu;
    SET_GPR_U32(ctx, 31, 0x14A5A4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14A59Cu, 0x14A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5A4u;
label_14a5a4:
    // 0x14a5a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a5a8:
    // 0x14a5a8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14a5ac:
    // 0x14a5ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a5b0:
    // 0x14a5b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a5b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a5b4:
    // 0x14a5b4: 0xc096b40  jal         func_25AD00
label_14a5b8:
    if (ctx->pc == 0x14A5B8u) {
        ctx->pc = 0x14A5BCu;
        goto label_14a5bc;
    }
    ctx->pc = 0x14A5B4u;
    SET_GPR_U32(ctx, 31, 0x14A5BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A5B4u, 0x14A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5BCu;
label_14a5bc:
    // 0x14a5bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a5c0:
    // 0x14a5c0: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x14a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a5c4:
    // 0x14a5c4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x14a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_14a5c8:
    // 0x14a5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a5cc:
    // 0x14a5cc: 0x0  nop
    ctx->pc = 0x14a5ccu;
    // NOP
label_14a5d0:
    // 0x14a5d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14a5d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14a5d4:
    // 0x14a5d4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x14a5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_14a5d8:
    // 0x14a5d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a5dc:
    // 0x14a5dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a5e0:
    // 0x14a5e0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14a5e4:
    // 0x14a5e4: 0xc05cd58  jal         func_173560
label_14a5e8:
    if (ctx->pc == 0x14A5E8u) {
        ctx->pc = 0x14A5ECu;
        goto label_14a5ec;
    }
    ctx->pc = 0x14A5E4u;
    SET_GPR_U32(ctx, 31, 0x14A5ECu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14A5E4u, 0x14A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5ECu;
label_14a5ec:
    // 0x14a5ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14a5f0:
    // 0x14a5f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a5f4:
    // 0x14a5f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14a5f8:
    // 0x14a5f8: 0xc0573d8  jal         func_15CF60
label_14a5fc:
    if (ctx->pc == 0x14A5FCu) {
        ctx->pc = 0x14A600u;
        goto label_14a600;
    }
    ctx->pc = 0x14A5F8u;
    SET_GPR_U32(ctx, 31, 0x14A600u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14A5F8u, 0x14A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A600u;
label_14a600:
    // 0x14a600: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a604:
    // 0x14a604: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14a604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14a608:
    // 0x14a608: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_14a60c:
    if (ctx->pc == 0x14A60Cu) {
        ctx->pc = 0x14A610u;
        goto label_14a610;
    }
    ctx->pc = 0x14A608u;
    {
        const bool branch_taken_0x14a608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a608) {
            ctx->pc = 0x14A640u;
            goto label_14a640;
        }
    }
    ctx->pc = 0x14A610u;
label_14a610:
    // 0x14a610: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a614:
    // 0x14a614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a618:
    // 0x14a618: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a61c:
    // 0x14a61c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x14a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_14a620:
    // 0x14a620: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14a620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14a624:
    // 0x14a624: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x14a624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_14a628:
    // 0x14a628: 0xc0675a8  jal         func_19D6A0
label_14a62c:
    if (ctx->pc == 0x14A62Cu) {
        ctx->pc = 0x14A630u;
        goto label_14a630;
    }
    ctx->pc = 0x14A628u;
    SET_GPR_U32(ctx, 31, 0x14A630u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x14A628u, 0x14A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A630u;
label_14a630:
    // 0x14a630: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a634:
    // 0x14a634: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14a634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_14a638:
    // 0x14a638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14a63c:
    // 0x14a63c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14a63cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_14a640:
    // 0x14a640: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a644:
    // 0x14a644: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a648:
    // 0x14a648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a64c:
    // 0x14a64c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a650:
    // 0x14a650: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14a654:
    // 0x14a654: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14a654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14a658:
    // 0x14a658: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a65c:
    // 0x14a65c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a660:
    // 0x14a660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a664:
    // 0x14a664: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a668:
    // 0x14a668: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14a66c:
    // 0x14a66c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14a670:
    // 0x14a670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a674:
    // 0x14a674: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a678:
    // 0x14a678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14a678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a67c:
    // 0x14a67c: 0x0  nop
    ctx->pc = 0x14a67cu;
    // NOP
label_14a680:
    // 0x14a680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14a680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a684:
    // 0x14a684: 0x0  nop
    ctx->pc = 0x14a684u;
    // NOP
label_14a688:
    // 0x14a688: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_14a68c:
    if (ctx->pc == 0x14A68Cu) {
        ctx->pc = 0x14A690u;
        goto label_14a690;
    }
    ctx->pc = 0x14A688u;
    {
        const bool branch_taken_0x14a688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a688) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A690u;
label_14a690:
    // 0x14a690: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a694:
    // 0x14a694: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a698:
    // 0x14a698: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14a69c:
    // 0x14a69c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14a69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14a6a0:
    // 0x14a6a0: 0xc05cf7c  jal         func_173DF0
label_14a6a4:
    if (ctx->pc == 0x14A6A4u) {
        ctx->pc = 0x14A6A8u;
        goto label_14a6a8;
    }
    ctx->pc = 0x14A6A0u;
    SET_GPR_U32(ctx, 31, 0x14A6A8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14A6A0u, 0x14A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6A8u;
label_14a6a8:
    // 0x14a6a8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14a6ac:
    // 0x14a6ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a6b0:
    // 0x14a6b0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x14a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a6b4:
    // 0x14a6b4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a6b8:
    // 0x14a6b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14a6b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a6bc:
    // 0x14a6bc: 0x0  nop
    ctx->pc = 0x14a6bcu;
    // NOP
label_14a6c0:
    // 0x14a6c0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_14a6c4:
    if (ctx->pc == 0x14A6C4u) {
        ctx->pc = 0x14A6C8u;
        goto label_14a6c8;
    }
    ctx->pc = 0x14A6C0u;
    {
        const bool branch_taken_0x14a6c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a6c0) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A6C8u;
label_14a6c8:
    // 0x14a6c8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a6cc:
    // 0x14a6cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a6d0:
    // 0x14a6d0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x14a6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_14a6d4:
    // 0x14a6d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14a6d8:
    // 0x14a6d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a6dc:
    // 0x14a6dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14a6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_14a6e0:
    // 0x14a6e0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_14a6e4:
    if (ctx->pc == 0x14A6E4u) {
        ctx->pc = 0x14A6E8u;
        goto label_14a6e8;
    }
    ctx->pc = 0x14A6E0u;
    {
        const bool branch_taken_0x14a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a6e0) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A6E8u;
label_14a6e8:
    // 0x14a6e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a6e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a6ec:
    // 0x14a6ec: 0xc097530  jal         func_25D4C0
label_14a6f0:
    if (ctx->pc == 0x14A6F0u) {
        ctx->pc = 0x14A6F4u;
        goto label_14a6f4;
    }
    ctx->pc = 0x14A6ECu;
    SET_GPR_U32(ctx, 31, 0x14A6F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A6ECu, 0x14A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6F4u;
label_14a6f4:
    // 0x14a6f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a6f8:
    // 0x14a6f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14a6fc:
    // 0x14a6fc: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_14a700:
    if (ctx->pc == 0x14A700u) {
        ctx->pc = 0x14A704u;
        goto label_14a704;
    }
    ctx->pc = 0x14A6FCu;
    {
        const bool branch_taken_0x14a6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a6fc) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A704u;
label_14a704:
    // 0x14a704: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14a704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14a708:
    // 0x14a708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a70c:
    // 0x14a70c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14a70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_14a710:
    // 0x14a710: 0x1000003e  b           . + 4 + (0x3E << 2)
label_14a714:
    if (ctx->pc == 0x14A714u) {
        ctx->pc = 0x14A718u;
        goto label_14a718;
    }
    ctx->pc = 0x14A710u;
    {
        const bool branch_taken_0x14a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a710) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A718u;
label_14a718:
    // 0x14a718: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a71c:
    // 0x14a71c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a720:
    // 0x14a720: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a724:
    // 0x14a724: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14a728:
    // 0x14a728: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a72c:
    // 0x14a72c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a730:
    // 0x14a730: 0xc0965d0  jal         func_259740
label_14a734:
    if (ctx->pc == 0x14A734u) {
        ctx->pc = 0x14A738u;
        goto label_14a738;
    }
    ctx->pc = 0x14A730u;
    SET_GPR_U32(ctx, 31, 0x14A738u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A730u, 0x14A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A738u;
label_14a738:
    // 0x14a738: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a73c:
    // 0x14a73c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14a740:
    // 0x14a740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14a744:
    // 0x14a744: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14a748:
    // 0x14a748: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a74c:
    // 0x14a74c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a750:
    // 0x14a750: 0xc096b40  jal         func_25AD00
label_14a754:
    if (ctx->pc == 0x14A754u) {
        ctx->pc = 0x14A758u;
        goto label_14a758;
    }
    ctx->pc = 0x14A750u;
    SET_GPR_U32(ctx, 31, 0x14A758u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A750u, 0x14A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A758u;
label_14a758:
    // 0x14a758: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a75c:
    // 0x14a75c: 0xc05cd10  jal         func_173440
label_14a760:
    if (ctx->pc == 0x14A760u) {
        ctx->pc = 0x14A764u;
        goto label_14a764;
    }
    ctx->pc = 0x14A75Cu;
    SET_GPR_U32(ctx, 31, 0x14A764u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14A75Cu, 0x14A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A764u;
label_14a764:
    // 0x14a764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14a768:
    // 0x14a768: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a76c:
    // 0x14a76c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a76cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a770:
    // 0x14a770: 0xc0573d8  jal         func_15CF60
label_14a774:
    if (ctx->pc == 0x14A774u) {
        ctx->pc = 0x14A778u;
        goto label_14a778;
    }
    ctx->pc = 0x14A770u;
    SET_GPR_U32(ctx, 31, 0x14A778u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14A770u, 0x14A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A778u;
label_14a778:
    // 0x14a778: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a77c:
    // 0x14a77c: 0xc097530  jal         func_25D4C0
label_14a780:
    if (ctx->pc == 0x14A780u) {
        ctx->pc = 0x14A784u;
        goto label_14a784;
    }
    ctx->pc = 0x14A77Cu;
    SET_GPR_U32(ctx, 31, 0x14A784u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A77Cu, 0x14A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A784u;
label_14a784:
    // 0x14a784: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a788:
    // 0x14a788: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14a788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_14a78c:
    // 0x14a78c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14a78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14a790:
    // 0x14a790: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14a790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_14a794:
    // 0x14a794: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_14a798:
    if (ctx->pc == 0x14A798u) {
        ctx->pc = 0x14A79Cu;
        goto label_14a79c;
    }
    ctx->pc = 0x14A794u;
    {
        const bool branch_taken_0x14a794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a794) {
            ctx->pc = 0x14A7C0u;
            goto label_14a7c0;
        }
    }
    ctx->pc = 0x14A79Cu;
label_14a79c:
    // 0x14a79c: 0xc0585dc  jal         func_161770
label_14a7a0:
    if (ctx->pc == 0x14A7A0u) {
        ctx->pc = 0x14A7A4u;
        goto label_14a7a4;
    }
    ctx->pc = 0x14A79Cu;
    SET_GPR_U32(ctx, 31, 0x14A7A4u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14A79Cu, 0x14A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7A4u;
label_14a7a4:
    // 0x14a7a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14a7a8:
    if (ctx->pc == 0x14A7A8u) {
        ctx->pc = 0x14A7ACu;
        goto label_14a7ac;
    }
    ctx->pc = 0x14A7A4u;
    {
        const bool branch_taken_0x14a7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7a4) {
            ctx->pc = 0x14A7C0u;
            goto label_14a7c0;
        }
    }
    ctx->pc = 0x14A7ACu;
label_14a7ac:
    // 0x14a7ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a7b0:
    // 0x14a7b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a7b4:
    // 0x14a7b4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14a7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14a7b8:
    // 0x14a7b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_14a7bc:
    if (ctx->pc == 0x14A7BCu) {
        ctx->pc = 0x14A7C0u;
        goto label_14a7c0;
    }
    ctx->pc = 0x14A7B8u;
    {
        const bool branch_taken_0x14a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7b8) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A7C0u;
label_14a7c0:
    // 0x14a7c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a7c4:
    // 0x14a7c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14a7c8:
    // 0x14a7c8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_14a7cc:
    if (ctx->pc == 0x14A7CCu) {
        ctx->pc = 0x14A7D0u;
        goto label_14a7d0;
    }
    ctx->pc = 0x14A7C8u;
    {
        const bool branch_taken_0x14a7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7c8) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A7D0u;
label_14a7d0:
    // 0x14a7d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a7d4:
    // 0x14a7d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a7d8:
    // 0x14a7d8: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14a7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14a7dc:
    // 0x14a7dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a7e0:
    // 0x14a7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a7e4:
    // 0x14a7e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14a7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14a7e8:
    // 0x14a7e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a7ec:
    // 0x14a7ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14a7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14a7f0:
    // 0x14a7f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a7f4:
    // 0x14a7f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14a7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14a7f8:
    // 0x14a7f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a7fc:
    // 0x14a7fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14a7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14a800:
    // 0x14a800: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14a800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14a804:
    // 0x14a804: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a808:
    // 0x14a808: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14a808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14a80c:
    // 0x14a80c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14a80cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14a810:
    // 0x14a810: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14a814:
    // 0x14a814: 0x3e00008  jr          $ra
label_14a818:
    if (ctx->pc == 0x14A818u) {
        ctx->pc = 0x14A81Cu;
        goto label_fallthrough_0x14a814;
    }
    ctx->pc = 0x14A814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14a814:
    ctx->pc = 0x14A81Cu;
}
