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

// Function: caseD_2
// Address: 0x3584d8 - 0x35860c
void caseD_2_0x3584d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x3584d8");
#endif

    switch (ctx->pc) {
        case 0x3585acu: goto label_3585ac;
        case 0x3585b8u: goto label_3585b8;
        default: break;
    }

    ctx->pc = 0x3584d8u;

    // 0x3584d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3584d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3584dc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3584dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3584e0: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x3584e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3584e4: 0x146000dc  bnez        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x3584E4u;
    {
        const bool branch_taken_0x3584e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3584e4) {
            ctx->pc = 0x358858u;
            return;
        }
    }
    ctx->pc = 0x3584ECu;
    // 0x3584ec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3584ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3584f0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x3584f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3584f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3584f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3584f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3584f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3584fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3584fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x358500: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358504: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x358504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x358508: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x358508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35850c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35850cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x358510: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358514: 0x34441600  ori         $a0, $v0, 0x1600
    ctx->pc = 0x358514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5632);
    // 0x358518: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35851c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35851cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358520: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358524: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358528: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35852c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358530: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358534: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x358534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358538: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35853c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35853cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358540: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358544: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358548: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35854c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35854cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358550: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358554: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x358554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x358558: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35855c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x35855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x358560: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358564: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358568: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35856c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358574: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358578: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x358578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35857c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358580: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x358580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x358584: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358588: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35858c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358590: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358598: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35859c: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x35859cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3585a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3585a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3585a4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x3585A4u;
    SET_GPR_U32(ctx, 31, 0x3585ACu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x3585A4u, 0x3585ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585ACu;
label_3585ac:
    // 0x3585ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3585acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3585b0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x3585B0u;
    SET_GPR_U32(ctx, 31, 0x3585B8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x3585B0u, 0x3585B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585B8u;
label_3585b8:
    // 0x3585b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3585b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3585bc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3585bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3585c0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3585c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3585c4: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3585C4u;
    {
        const bool branch_taken_0x3585c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3585c4) {
            ctx->pc = 0x358660u;
            return;
        }
    }
    ctx->pc = 0x3585CCu;
    // 0x3585cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3585ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3585d0: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x3585d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3585d4: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x3585d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x3585d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3585d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3585dc: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x3585dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3585e0: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x3585e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x3585e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3585e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3585e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3585e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3585ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3585ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3585f0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3585F0u;
    {
        const bool branch_taken_0x3585f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3585f0) {
            ctx->pc = 0x35860Cu;
            return;
        }
    }
    ctx->pc = 0x3585F8u;
    // 0x3585f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3585f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3585fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3585fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x358600: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x358600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x358604: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x358604u;
    {
        const bool branch_taken_0x358604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x358604) {
            ctx->pc = 0x358614u;
            return;
        }
    }
    ctx->pc = 0x35860Cu;
}
