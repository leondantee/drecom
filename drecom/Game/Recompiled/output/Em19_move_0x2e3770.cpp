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

// Function: Em19_move
// Address: 0x2e3770 - 0x2e38e4
void Em19_move_0x2e3770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_move_0x2e3770");
#endif

    switch (ctx->pc) {
        case 0x2e3770u: goto label_2e3770;
        case 0x2e3774u: goto label_2e3774;
        case 0x2e3778u: goto label_2e3778;
        case 0x2e377cu: goto label_2e377c;
        case 0x2e3780u: goto label_2e3780;
        case 0x2e3784u: goto label_2e3784;
        case 0x2e3788u: goto label_2e3788;
        case 0x2e378cu: goto label_2e378c;
        case 0x2e3790u: goto label_2e3790;
        case 0x2e3794u: goto label_2e3794;
        case 0x2e3798u: goto label_2e3798;
        case 0x2e379cu: goto label_2e379c;
        case 0x2e37a0u: goto label_2e37a0;
        case 0x2e37a4u: goto label_2e37a4;
        case 0x2e37a8u: goto label_2e37a8;
        case 0x2e37acu: goto label_2e37ac;
        case 0x2e37b0u: goto label_2e37b0;
        case 0x2e37b4u: goto label_2e37b4;
        case 0x2e37b8u: goto label_2e37b8;
        case 0x2e37bcu: goto label_2e37bc;
        case 0x2e37c0u: goto label_2e37c0;
        case 0x2e37c4u: goto label_2e37c4;
        case 0x2e37c8u: goto label_2e37c8;
        case 0x2e37ccu: goto label_2e37cc;
        case 0x2e37d0u: goto label_2e37d0;
        case 0x2e37d4u: goto label_2e37d4;
        case 0x2e37d8u: goto label_2e37d8;
        case 0x2e37dcu: goto label_2e37dc;
        case 0x2e37e0u: goto label_2e37e0;
        case 0x2e37e4u: goto label_2e37e4;
        case 0x2e37e8u: goto label_2e37e8;
        case 0x2e37ecu: goto label_2e37ec;
        case 0x2e37f0u: goto label_2e37f0;
        case 0x2e37f4u: goto label_2e37f4;
        case 0x2e37f8u: goto label_2e37f8;
        case 0x2e37fcu: goto label_2e37fc;
        case 0x2e3800u: goto label_2e3800;
        case 0x2e3804u: goto label_2e3804;
        case 0x2e3808u: goto label_2e3808;
        case 0x2e380cu: goto label_2e380c;
        case 0x2e3810u: goto label_2e3810;
        case 0x2e3814u: goto label_2e3814;
        case 0x2e3818u: goto label_2e3818;
        case 0x2e381cu: goto label_2e381c;
        case 0x2e3820u: goto label_2e3820;
        case 0x2e3824u: goto label_2e3824;
        case 0x2e3828u: goto label_2e3828;
        case 0x2e382cu: goto label_2e382c;
        case 0x2e3830u: goto label_2e3830;
        case 0x2e3834u: goto label_2e3834;
        case 0x2e3838u: goto label_2e3838;
        case 0x2e383cu: goto label_2e383c;
        case 0x2e3840u: goto label_2e3840;
        case 0x2e3844u: goto label_2e3844;
        case 0x2e3848u: goto label_2e3848;
        case 0x2e384cu: goto label_2e384c;
        case 0x2e3850u: goto label_2e3850;
        case 0x2e3854u: goto label_2e3854;
        case 0x2e3858u: goto label_2e3858;
        case 0x2e385cu: goto label_2e385c;
        case 0x2e3860u: goto label_2e3860;
        case 0x2e3864u: goto label_2e3864;
        case 0x2e3868u: goto label_2e3868;
        case 0x2e386cu: goto label_2e386c;
        case 0x2e3870u: goto label_2e3870;
        case 0x2e3874u: goto label_2e3874;
        case 0x2e3878u: goto label_2e3878;
        case 0x2e387cu: goto label_2e387c;
        case 0x2e3880u: goto label_2e3880;
        case 0x2e3884u: goto label_2e3884;
        case 0x2e3888u: goto label_2e3888;
        case 0x2e388cu: goto label_2e388c;
        case 0x2e3890u: goto label_2e3890;
        case 0x2e3894u: goto label_2e3894;
        case 0x2e3898u: goto label_2e3898;
        case 0x2e389cu: goto label_2e389c;
        case 0x2e38a0u: goto label_2e38a0;
        case 0x2e38a4u: goto label_2e38a4;
        case 0x2e38a8u: goto label_2e38a8;
        case 0x2e38acu: goto label_2e38ac;
        case 0x2e38b0u: goto label_2e38b0;
        case 0x2e38b4u: goto label_2e38b4;
        case 0x2e38b8u: goto label_2e38b8;
        case 0x2e38bcu: goto label_2e38bc;
        case 0x2e38c0u: goto label_2e38c0;
        case 0x2e38c4u: goto label_2e38c4;
        case 0x2e38c8u: goto label_2e38c8;
        case 0x2e38ccu: goto label_2e38cc;
        case 0x2e38d0u: goto label_2e38d0;
        case 0x2e38d4u: goto label_2e38d4;
        case 0x2e38d8u: goto label_2e38d8;
        case 0x2e38dcu: goto label_2e38dc;
        case 0x2e38e0u: goto label_2e38e0;
        default: break;
    }

    ctx->pc = 0x2e3770u;

label_2e3770:
    // 0x2e3770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e3774:
    // 0x2e3774: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e3774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_2e3778:
    // 0x2e3778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e377c:
    // 0x2e377c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e377cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_2e3780:
    // 0x2e3780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e3780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e3784:
    // 0x2e3784: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x2e3784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2e3788:
    // 0x2e3788: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e3788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e378c:
    // 0x2e378c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e378cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2e3790:
    // 0x2e3790: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2e3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_2e3794:
    // 0x2e3794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e3798:
    // 0x2e3798: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e3798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2e379c:
    // 0x2e379c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e379cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2e37a0:
    // 0x2e37a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e37a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e37a4:
    // 0x2e37a4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2e37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2e37a8:
    // 0x2e37a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e37a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2e37ac:
    // 0x2e37ac: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2e37acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2e37b0:
    // 0x2e37b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e37b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e37b4:
    // 0x2e37b4: 0xc0b9e28  jal         func_2E78A0
label_2e37b8:
    if (ctx->pc == 0x2E37B8u) {
        ctx->pc = 0x2E37BCu;
        goto label_2e37bc;
    }
    ctx->pc = 0x2E37B4u;
    SET_GPR_U32(ctx, 31, 0x2E37BCu);
    ctx->pc = 0x2E78A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E78A0u, 0x2E37B4u, 0x2E37BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37BCu;
label_2e37bc:
    // 0x2e37bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e37c0:
    // 0x2e37c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e37c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e37c4:
    // 0x2e37c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e37c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e37c8:
    // 0x2e37c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e37c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e37cc:
    // 0x2e37cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e37d0:
    // 0x2e37d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e37d4:
    // 0x2e37d4: 0x24428ba0  addiu       $v0, $v0, -0x7460
    ctx->pc = 0x2e37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937504));
label_2e37d8:
    // 0x2e37d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e37dc:
    // 0x2e37dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e37e0:
    // 0x2e37e0: 0x40f809  jalr        $v0
label_2e37e4:
    if (ctx->pc == 0x2E37E4u) {
        ctx->pc = 0x2E37E8u;
        goto label_2e37e8;
    }
    ctx->pc = 0x2E37E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E37E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E37E0u, 0x2E37E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E37E8u;
label_2e37e8:
    // 0x2e37e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e37e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e37ec:
    // 0x2e37ec: 0xc0b9314  jal         func_2E4C50
label_2e37f0:
    if (ctx->pc == 0x2E37F0u) {
        ctx->pc = 0x2E37F4u;
        goto label_2e37f4;
    }
    ctx->pc = 0x2E37ECu;
    SET_GPR_U32(ctx, 31, 0x2E37F4u);
    ctx->pc = 0x2E4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4C50u, 0x2E37ECu, 0x2E37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37F4u;
label_2e37f4:
    // 0x2e37f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e37f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e37f8:
    // 0x2e37f8: 0xc0b91c8  jal         func_2E4720
label_2e37fc:
    if (ctx->pc == 0x2E37FCu) {
        ctx->pc = 0x2E3800u;
        goto label_2e3800;
    }
    ctx->pc = 0x2E37F8u;
    SET_GPR_U32(ctx, 31, 0x2E3800u);
    ctx->pc = 0x2E4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4720u, 0x2E37F8u, 0x2E3800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3800u;
label_2e3800:
    // 0x2e3800: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e3800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e3804:
    // 0x2e3804: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2e3804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e3808:
    // 0x2e3808: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2e3808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2e380c:
    // 0x2e380c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_2e3810:
    if (ctx->pc == 0x2E3810u) {
        ctx->pc = 0x2E3814u;
        goto label_2e3814;
    }
    ctx->pc = 0x2E380Cu;
    {
        const bool branch_taken_0x2e380c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e380c) {
            ctx->pc = 0x2E38D0u;
            goto label_2e38d0;
        }
    }
    ctx->pc = 0x2E3814u;
label_2e3814:
    // 0x2e3814: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e3814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e3818:
    // 0x2e3818: 0xc0b8ff0  jal         func_2E3FC0
label_2e381c:
    if (ctx->pc == 0x2E381Cu) {
        ctx->pc = 0x2E3820u;
        goto label_2e3820;
    }
    ctx->pc = 0x2E3818u;
    SET_GPR_U32(ctx, 31, 0x2E3820u);
    ctx->pc = 0x2E3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3FC0u, 0x2E3818u, 0x2E3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3820u;
label_2e3820:
    // 0x2e3820: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e3820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e3824:
    // 0x2e3824: 0xc0b9e78  jal         func_2E79E0
label_2e3828:
    if (ctx->pc == 0x2E3828u) {
        ctx->pc = 0x2E382Cu;
        goto label_2e382c;
    }
    ctx->pc = 0x2E3824u;
    SET_GPR_U32(ctx, 31, 0x2E382Cu);
    ctx->pc = 0x2E79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E79E0u, 0x2E3824u, 0x2E382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E382Cu;
label_2e382c:
    // 0x2e382c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e382cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e3830:
    // 0x2e3830: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e3830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e3834:
    // 0x2e3834: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e3834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2e3838:
    // 0x2e3838: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e3838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2e383c:
    // 0x2e383c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_2e3840:
    if (ctx->pc == 0x2E3840u) {
        ctx->pc = 0x2E3844u;
        goto label_2e3844;
    }
    ctx->pc = 0x2E383Cu;
    {
        const bool branch_taken_0x2e383c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e383c) {
            ctx->pc = 0x2E3890u;
            goto label_2e3890;
        }
    }
    ctx->pc = 0x2E3844u;
label_2e3844:
    // 0x2e3844: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e3844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e3848:
    // 0x2e3848: 0xc0b90d0  jal         func_2E4340
label_2e384c:
    if (ctx->pc == 0x2E384Cu) {
        ctx->pc = 0x2E3850u;
        goto label_2e3850;
    }
    ctx->pc = 0x2E3848u;
    SET_GPR_U32(ctx, 31, 0x2E3850u);
    ctx->pc = 0x2E4340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4340u, 0x2E3848u, 0x2E3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3850u;
label_2e3850:
    // 0x2e3850: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e3850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e3854:
    // 0x2e3854: 0xc0b9148  jal         func_2E4520
label_2e3858:
    if (ctx->pc == 0x2E3858u) {
        ctx->pc = 0x2E385Cu;
        goto label_2e385c;
    }
    ctx->pc = 0x2E3854u;
    SET_GPR_U32(ctx, 31, 0x2E385Cu);
    ctx->pc = 0x2E4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4520u, 0x2E3854u, 0x2E385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E385Cu;
label_2e385c:
    // 0x2e385c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2e385cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_2e3860:
    // 0x2e3860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e3860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3864:
    // 0x2e3864: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e3864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2e3868:
    // 0x2e3868: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e3868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e386c:
    // 0x2e386c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e386cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2e3870:
    // 0x2e3870: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e3870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2e3874:
    // 0x2e3874: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e3874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_2e3878:
    // 0x2e3878: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e3878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2e387c:
    // 0x2e387c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e387cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e3880:
    // 0x2e3880: 0xc0c9438  jal         func_3250E0
label_2e3884:
    if (ctx->pc == 0x2E3884u) {
        ctx->pc = 0x2E3888u;
        goto label_2e3888;
    }
    ctx->pc = 0x2E3880u;
    SET_GPR_U32(ctx, 31, 0x2E3888u);
    ctx->pc = 0x3250E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3250E0u, 0x2E3880u, 0x2E3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3888u;
label_2e3888:
    // 0x2e3888: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e388c:
    if (ctx->pc == 0x2E388Cu) {
        ctx->pc = 0x2E3890u;
        goto label_2e3890;
    }
    ctx->pc = 0x2E3888u;
    {
        const bool branch_taken_0x2e3888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3888) {
            ctx->pc = 0x2E38D0u;
            goto label_2e38d0;
        }
    }
    ctx->pc = 0x2E3890u;
label_2e3890:
    // 0x2e3890: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e3890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2e3894:
    // 0x2e3894: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2e3894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2e3898:
    // 0x2e3898: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e3898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2e389c:
    // 0x2e389c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e38a0:
    // 0x2e38a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2e38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e38a4:
    // 0x2e38a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e38a8:
    // 0x2e38a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e38ac:
    // 0x2e38ac: 0xac600204  sw          $zero, 0x204($v1)
    ctx->pc = 0x2e38acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 0));
label_2e38b0:
    // 0x2e38b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e38b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2e38b4:
    // 0x2e38b4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2e38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2e38b8:
    // 0x2e38b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2e38bc:
    // 0x2e38bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e38c0:
    // 0x2e38c0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2e38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e38c4:
    // 0x2e38c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2e38c8:
    // 0x2e38c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e38cc:
    // 0x2e38cc: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2e38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2e38d0:
    // 0x2e38d0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e38d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e38d4:
    // 0x2e38d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e38d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e38d8:
    // 0x2e38d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e38dc:
    // 0x2e38dc: 0x3e00008  jr          $ra
label_2e38e0:
    if (ctx->pc == 0x2E38E0u) {
        ctx->pc = 0x2E38E4u;
        goto label_fallthrough_0x2e38dc;
    }
    ctx->pc = 0x2E38DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E38DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e38dc:
    ctx->pc = 0x2E38E4u;
}
