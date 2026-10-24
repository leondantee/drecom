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

// Function: caseD_3
// Address: 0x358678 - 0x3587b4
void caseD_3_0x358678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x358678");
#endif

    switch (ctx->pc) {
        case 0x358754u: goto label_358754;
        case 0x358760u: goto label_358760;
        default: break;
    }

    ctx->pc = 0x358678u;

    // 0x358678: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35867c: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x35867cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x358680: 0x28a60007  slti        $a2, $a1, 0x7
    ctx->pc = 0x358680u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x358684: 0x14c00074  bnez        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x358684u;
    {
        const bool branch_taken_0x358684 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x358684) {
            ctx->pc = 0x358858u;
            return;
        }
    }
    ctx->pc = 0x35868Cu;
    // 0x35868c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358690: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x358690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x358694: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x358694u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358698: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x358698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35869c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x35869cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3586a0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3586a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3586a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3586a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3586a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3586a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3586ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3586acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3586b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3586b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3586b4: 0x34621600  ori         $v0, $v1, 0x1600
    ctx->pc = 0x3586b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5632);
    // 0x3586b8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3586b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3586bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3586bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3586c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3586c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3586c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3586c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3586c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3586c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3586cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3586ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3586d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3586d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3586d4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3586d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3586d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3586d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3586dc: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3586dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3586e0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3586e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3586e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3586e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3586e8: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x3586e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x3586ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3586ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3586f0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3586f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3586f4: 0xe34025  or          $t0, $a3, $v1
    ctx->pc = 0x3586f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3586f8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x3586f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3586fc: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x3586fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x358700: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x358700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x358704: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x358704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x358708: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x358708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35870c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x35870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x358710: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x358714: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x358714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x358718: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x358718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35871c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358720: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x358720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x358724: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x358724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x358728: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x358728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x35872c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x35872cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358730: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x358730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x358734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x358738: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x358738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x35873c: 0xa33825  or          $a3, $a1, $v1
    ctx->pc = 0x35873cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x358740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358744: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x358744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x358748: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358748u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35874c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x35874Cu;
    SET_GPR_U32(ctx, 31, 0x358754u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x35874Cu, 0x358754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358754u;
label_358754:
    // 0x358754: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358758: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x358758u;
    SET_GPR_U32(ctx, 31, 0x358760u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358758u, 0x358760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358760u;
label_358760:
    // 0x358760: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358760u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358764: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358768: 0x34660011  ori         $a2, $v1, 0x11
    ctx->pc = 0x358768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x35876c: 0x12060027  beq         $s0, $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x35876Cu;
    {
        const bool branch_taken_0x35876c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x35876c) {
            ctx->pc = 0x35880Cu;
            return;
        }
    }
    ctx->pc = 0x358774u;
    // 0x358774: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358778: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35877c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x35877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x358780: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358784: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358788: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x358788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x35878c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358790: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x358790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x358794: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x358794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x358798: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358798u;
    {
        const bool branch_taken_0x358798 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x358798) {
            ctx->pc = 0x3587B4u;
            return;
        }
    }
    ctx->pc = 0x3587A0u;
    // 0x3587a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3587a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3587a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3587a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3587a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3587a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3587ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3587ACu;
    {
        const bool branch_taken_0x3587ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3587ac) {
            ctx->pc = 0x3587BCu;
            return;
        }
    }
    ctx->pc = 0x3587B4u;
}
