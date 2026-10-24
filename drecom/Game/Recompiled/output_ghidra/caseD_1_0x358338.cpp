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

// Function: caseD_1
// Address: 0x358338 - 0x35846c
void caseD_1_0x358338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x358338");
#endif

    switch (ctx->pc) {
        case 0x35840cu: goto label_35840c;
        case 0x358418u: goto label_358418;
        default: break;
    }

    ctx->pc = 0x358338u;

    // 0x358338: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35833c: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x35833cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x358340: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x358340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x358344: 0x14600144  bnez        $v1, . + 4 + (0x144 << 2)
    ctx->pc = 0x358344u;
    {
        const bool branch_taken_0x358344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358344) {
            ctx->pc = 0x358858u;
            return;
        }
    }
    ctx->pc = 0x35834Cu;
    // 0x35834c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358350: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x358350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x358354: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x358354u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358358: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35835c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35835cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x358360: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358364: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x358364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x358368: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x358368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35836c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x358370: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358374: 0x34441600  ori         $a0, $v0, 0x1600
    ctx->pc = 0x358374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5632);
    // 0x358378: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35837c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358380: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358384: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358388: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35838c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358390: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358394: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x358394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358398: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35839c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3583a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3583a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3583a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3583a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3583a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3583a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3583ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3583acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3583b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3583b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3583b4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3583b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3583b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3583b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3583bc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3583bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3583c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3583c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3583c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3583c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3583c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3583c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3583cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3583ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3583d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3583d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3583d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3583d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3583d8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3583d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3583dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3583dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3583e0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3583e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3583e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3583e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3583e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3583e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3583ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3583ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3583f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3583f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3583f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3583f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3583f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3583f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3583fc: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x3583fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x358400: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358404: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x358404u;
    SET_GPR_U32(ctx, 31, 0x35840Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x358404u, 0x35840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35840Cu;
label_35840c:
    // 0x35840c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35840cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358410: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x358410u;
    SET_GPR_U32(ctx, 31, 0x358418u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358410u, 0x358418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358418u;
label_358418:
    // 0x358418: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358418u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35841c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x35841cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358420: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358424: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x358424u;
    {
        const bool branch_taken_0x358424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358424) {
            ctx->pc = 0x3584C0u;
            return;
        }
    }
    ctx->pc = 0x35842Cu;
    // 0x35842c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358430: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358434: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x358434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x358438: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35843c: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x35843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358440: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x358440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x358444: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358448: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x358448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35844c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x358450: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358450u;
    {
        const bool branch_taken_0x358450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x358450) {
            ctx->pc = 0x35846Cu;
            return;
        }
    }
    ctx->pc = 0x358458u;
    // 0x358458: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35845c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x35845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x358460: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x358460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x358464: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x358464u;
    {
        const bool branch_taken_0x358464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x358464) {
            ctx->pc = 0x358474u;
            return;
        }
    }
    ctx->pc = 0x35846Cu;
}
