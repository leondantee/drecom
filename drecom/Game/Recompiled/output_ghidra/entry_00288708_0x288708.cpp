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

// Function: entry_00288708
// Address: 0x288708 - 0x288a18
void entry_00288708_0x288708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00288708_0x288708");
#endif

    switch (ctx->pc) {
        case 0x288790u: goto label_288790;
        case 0x2887ccu: goto label_2887cc;
        case 0x2887fcu: goto label_2887fc;
        case 0x28882cu: goto label_28882c;
        case 0x288964u: goto label_288964;
        case 0x2889e8u: goto label_2889e8;
        default: break;
    }

    ctx->pc = 0x288708u;

    // 0x288708: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x288708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28870c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x28870cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288710: 0xe93023  subu        $a2, $a3, $t1
    ctx->pc = 0x288710u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x288714: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x288714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x288718: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x288718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28871c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288720: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x288720u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x288724: 0xafaa013c  sw          $t2, 0x13C($sp)
    ctx->pc = 0x288724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 10));
    // 0x288728: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x288728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28872c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x288730: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x288730u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288734: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x288734u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288738: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x288738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28873c: 0x70e0f628  paddub      $fp, $a3, $zero
    ctx->pc = 0x28873cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288740: 0x8fab0140  lw          $t3, 0x140($sp)
    ctx->pc = 0x288740u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x288744: 0x26b1021  addu        $v0, $s3, $t3
    ctx->pc = 0x288744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x288748: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x288748u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28874c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x28874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x288750: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x288750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x288754: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x288754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x288758: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x288758u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x28875c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x28875cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288760: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288764: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x288764u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x288768: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x288768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28876c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28876cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288770: 0x0  nop
    ctx->pc = 0x288770u;
    // NOP
    // 0x288774: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x288774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288778: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x288778u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28877c: 0x0  nop
    ctx->pc = 0x28877cu;
    // NOP
    // 0x288780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x288780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288784: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x288784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288788: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288788u;
    SET_GPR_U32(ctx, 31, 0x288790u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288788u, 0x288790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288790u;
label_288790:
    // 0x288790: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x288790u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288794: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x288794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x288798: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x288798u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28879c: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x28879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2887a0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2887a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2887a4: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x2887a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x2887a8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2887a8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2887ac: 0x0  nop
    ctx->pc = 0x2887acu;
    // NOP
    // 0x2887b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2887b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2887b4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2887b4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2887b8: 0x0  nop
    ctx->pc = 0x2887b8u;
    // NOP
    // 0x2887bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2887bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2887c0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2887c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2887c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2887C4u;
    SET_GPR_U32(ctx, 31, 0x2887CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2887C4u, 0x2887CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887CCu;
label_2887cc:
    // 0x2887cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2887ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2887d0: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x2887d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2887d4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2887d4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2887d8: 0x0  nop
    ctx->pc = 0x2887d8u;
    // NOP
    // 0x2887dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2887dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2887e0: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x2887e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x2887e4: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x2887e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x2887e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2887e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2887ec: 0x0  nop
    ctx->pc = 0x2887ecu;
    // NOP
    // 0x2887f0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2887f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2887f4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2887F4u;
    SET_GPR_U32(ctx, 31, 0x2887FCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2887F4u, 0x2887FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887FCu;
label_2887fc:
    // 0x2887fc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2887fcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288800: 0x71409e28  paddub      $s3, $t2, $zero
    ctx->pc = 0x288800u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x288804: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x288804u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288808: 0x0  nop
    ctx->pc = 0x288808u;
    // NOP
    // 0x28880c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28880cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288810: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x288810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x288814: 0x3469cccd  ori         $t1, $v1, 0xCCCD
    ctx->pc = 0x288814u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x288818: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x288818u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28881c: 0x0  nop
    ctx->pc = 0x28881cu;
    // NOP
    // 0x288820: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x288820u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x288824: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288824u;
    SET_GPR_U32(ctx, 31, 0x28882Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288824u, 0x28882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28882Cu;
label_28882c:
    // 0x28882c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28882cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288830: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x288830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x288834: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x288834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x288838: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x288838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x28883c: 0x34642b16  ori         $a0, $v1, 0x2B16
    ctx->pc = 0x28883cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x288840: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x288840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x288844: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x288844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288848: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x288848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28884c: 0x34e50040  ori         $a1, $a3, 0x40
    ctx->pc = 0x28884cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x288850: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x288850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x288854: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x288854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288858: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x288858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28885c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288860: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x288860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x288864: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x288864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x288868: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x288868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x28886c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x28886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x288870: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x288870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x288874: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x288874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288878: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28887c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x28887cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288880: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x288880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x288884: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x288884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288888: 0xe44825  or          $t1, $a3, $a0
    ctx->pc = 0x288888u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x28888c: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x28888cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x288890: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x288890u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x288894: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x288894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288898: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x288898u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x28889c: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x28889cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2888a0: 0x53200  sll         $a2, $a1, 8
    ctx->pc = 0x2888a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2888a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2888a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2888a8: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x2888a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2888ac: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2888acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2888b0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2888b4: 0x35600  sll         $t2, $v1, 24
    ctx->pc = 0x2888b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2888b8: 0x1473025  or          $a2, $t2, $a3
    ctx->pc = 0x2888b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x2888bc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2888bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2888c0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2888c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2888c4: 0x135900  sll         $t3, $s3, 4
    ctx->pc = 0x2888c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2888c8: 0x25657000  addiu       $a1, $t3, 0x7000
    ctx->pc = 0x2888c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 28672));
    // 0x2888cc: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x2888ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2888d0: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x2888d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2888d4: 0x24c47900  addiu       $a0, $a2, 0x7900
    ctx->pc = 0x2888d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x2888d8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2888d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2888dc: 0x1223025  or          $a2, $t1, $v0
    ctx->pc = 0x2888dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2888e0: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x2888e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2888e4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2888e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x2888e8: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x2888e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2888ec: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x2888ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2888f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2888f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2888f4: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x2888f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2888f8: 0x24c87000  addiu       $t0, $a2, 0x7000
    ctx->pc = 0x2888f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x2888fc: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x2888fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x288900: 0x8fa90130  lw          $t1, 0x130($sp)
    ctx->pc = 0x288900u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x288904: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x288904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x288908: 0x24867900  addiu       $a2, $a0, 0x7900
    ctx->pc = 0x288908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x28890c: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x28890cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288910: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x288910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x288914: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x288914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x288918: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x288918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x28891c: 0x3404fff9  ori         $a0, $zero, 0xFFF9
    ctx->pc = 0x28891cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x288920: 0x26080028  addiu       $t0, $s0, 0x28
    ctx->pc = 0x288920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x288924: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x288924u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x288928: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x288928u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28892c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x28892cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x288930: 0x24e300a3  addiu       $v1, $a3, 0xA3
    ctx->pc = 0x288930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 163));
    // 0x288934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x288934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x288938: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x288938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28893c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x28893cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x288940: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x288940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x288944: 0x246bcca0  addiu       $t3, $v1, -0x3360
    ctx->pc = 0x288944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x288948: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x288948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x28894c: 0xae0a0008  sw          $t2, 0x8($s0)
    ctx->pc = 0x28894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    // 0x288950: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x288950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288954: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x288954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288958: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x288958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x28895c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28895Cu;
    SET_GPR_U32(ctx, 31, 0x288964u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28895Cu, 0x288964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288964u;
label_288964:
    // 0x288964: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288964u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288968: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x288968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x28896c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x28896cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x288970: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x288970u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x288974: 0x34c81009  ori         $t0, $a2, 0x1009
    ctx->pc = 0x288974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x288978: 0xae880004  sw          $t0, 0x4($s4)
    ctx->pc = 0x288978u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 8));
    // 0x28897c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288980: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x288980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288984: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x288984u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x288988: 0x64138  dsll        $t0, $a2, 4
    ctx->pc = 0x288988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 4);
    // 0x28898c: 0x3507000a  ori         $a3, $t0, 0xA
    ctx->pc = 0x28898cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
    // 0x288990: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x288990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288994: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x288994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x288998: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x288998u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28899c: 0x343b8  dsll        $t0, $v1, 14
    ctx->pc = 0x28899cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 14);
    // 0x2889a0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2889a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2889a4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2889a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2889a8: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x2889a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2889ac: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2889acu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2889b0: 0x81e38  dsll        $v1, $t0, 24
    ctx->pc = 0x2889b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 24);
    // 0x2889b4: 0x674025  or          $t0, $v1, $a3
    ctx->pc = 0x2889b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2889b8: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x2889b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2889bc: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x2889bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2889c0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2889c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2889c4: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x2889c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x2889c8: 0xc89825  or          $s3, $a2, $t0
    ctx->pc = 0x2889c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2889cc: 0xfe930008  sd          $s3, 0x8($s4)
    ctx->pc = 0x2889ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 19));
    // 0x2889d0: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x2889d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2889d4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2889d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2889d8: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2889d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2889dc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2889dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2889e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2889E0u;
    SET_GPR_U32(ctx, 31, 0x2889E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2889E0u, 0x2889E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889E8u;
label_2889e8:
    // 0x2889e8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x2889e8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2889ec: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2889ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2889f0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2889f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2889f4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2889f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2889f8: 0x2615002c  addiu       $s5, $s0, 0x2C
    ctx->pc = 0x2889f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2889fc: 0x72a08628  paddub      $s0, $s5, $zero
    ctx->pc = 0x2889fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x288a00: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x288a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288a04: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x288a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x288a08: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x288a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x288a0c: 0x26e60001  addiu       $a2, $s7, 0x1
    ctx->pc = 0x288a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x288a10: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x288a10u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288a14: 0x0  nop
    ctx->pc = 0x288a14u;
    // NOP
    ctx->pc = 0x288a18u;
}
