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

// Function: Set_effect_em02_nikuhen
// Address: 0x3127c0 - 0x312b2c
void Set_effect_em02_nikuhen_0x3127c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em02_nikuhen_0x3127c0");
#endif

    switch (ctx->pc) {
        case 0x312894u: goto label_312894;
        case 0x31291cu: goto label_31291c;
        case 0x3129f8u: goto label_3129f8;
        case 0x312ac4u: goto label_312ac4;
        case 0x312ae4u: goto label_312ae4;
        case 0x312b08u: goto label_312b08;
        default: break;
    }

    ctx->pc = 0x3127c0u;

    // 0x3127c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3127c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3127c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x3127c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x3127c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3127c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3127cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3127ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3127d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3127d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3127d4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3127d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x3127d8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x3127d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x3127dc: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x3127dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x3127e0: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x3127e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x3127e4: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x3127e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x3127e8: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x3127e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3127ec: 0xe7ad0070  swc1        $f13, 0x70($sp)
    ctx->pc = 0x3127ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3127f0: 0xafa90078  sw          $t1, 0x78($sp)
    ctx->pc = 0x3127f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 9));
    // 0x3127f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3127f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3127f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3127f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3127fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3127fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312800: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312808: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31280c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x31280cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x312810: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312814: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312818: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31281c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31281cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312824: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x312824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x312828: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x312828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x31282c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x312830: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312834: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x312834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x312838: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31283c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x312840: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x312840u;
    {
        const bool branch_taken_0x312840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312840) {
            ctx->pc = 0x312854u;
            goto label_312854;
        }
    }
    ctx->pc = 0x312848u;
    // 0x312848: 0x24110036  addiu       $s1, $zero, 0x36
    ctx->pc = 0x312848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x31284c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31284Cu;
    {
        const bool branch_taken_0x31284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31284c) {
            ctx->pc = 0x312858u;
            goto label_312858;
        }
    }
    ctx->pc = 0x312854u;
label_312854:
    // 0x312854: 0x24110038  addiu       $s1, $zero, 0x38
    ctx->pc = 0x312854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_312858:
    // 0x312858: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x312858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31285c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31285Cu;
    {
        const bool branch_taken_0x31285c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31285c) {
            ctx->pc = 0x3128A0u;
            goto label_3128a0;
        }
    }
    ctx->pc = 0x312864u;
    // 0x312864: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x312864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x312868: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x312868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31286c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312870: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x312870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x312874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312878: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x312878u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31287c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x31287cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312880: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x312880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312884: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x312884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x312888: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x312888u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31288c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31288Cu;
    SET_GPR_U32(ctx, 31, 0x312894u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31288Cu, 0x312894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312894u;
label_312894:
    // 0x312894: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x312894u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312898: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x312898u;
    {
        const bool branch_taken_0x312898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312898) {
            ctx->pc = 0x312920u;
            goto label_312920;
        }
    }
    ctx->pc = 0x3128A0u;
label_3128a0:
    // 0x3128a0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3128a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3128a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3128a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3128a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3128a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3128ac: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3128acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3128b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3128b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3128b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3128b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3128b8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3128b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3128bc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3128bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3128c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3128c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3128c4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3128c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3128c8: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x3128c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3128cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3128ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3128d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3128d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3128d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3128d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3128d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3128d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3128dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3128dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3128e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3128e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3128e4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x3128e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3128e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3128e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3128ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3128ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3128f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3128f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3128f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3128f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3128f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3128f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3128fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3128fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312900: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x312900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312904: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312908: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x312908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x31290c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31290cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312910: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x312910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x312914: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x312914u;
    SET_GPR_U32(ctx, 31, 0x31291Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x312914u, 0x31291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31291Cu;
label_31291c:
    // 0x31291c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31291cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_312920:
    // 0x312920: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x312920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x312924: 0x1622001d  bne         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x312924u;
    {
        const bool branch_taken_0x312924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x312924) {
            ctx->pc = 0x31299Cu;
            goto label_31299c;
        }
    }
    ctx->pc = 0x31292Cu;
    // 0x31292c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x31292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x312930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312934: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x312934u;
    {
        const bool branch_taken_0x312934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x312934) {
            ctx->pc = 0x31299Cu;
            goto label_31299c;
        }
    }
    ctx->pc = 0x31293Cu;
    // 0x31293c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31293cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312940: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312940u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312944: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312948: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31294c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312954: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x312954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x312958: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31295c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x31295cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312960: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312964: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31296c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x31296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x312970: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x312970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x312974: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x312974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x312978: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31297c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x31297cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x312980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x312984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x312988: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x312988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31298c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312990: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x312990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x312994: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x312994u;
    {
        const bool branch_taken_0x312994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312994) {
            ctx->pc = 0x3129F0u;
            goto label_3129f0;
        }
    }
    ctx->pc = 0x31299Cu;
label_31299c:
    // 0x31299c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3129a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3129a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3129a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3129a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3129a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3129a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3129ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3129acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3129b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3129b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3129b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3129b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3129b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3129b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3129bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3129bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3129c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3129c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3129c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3129c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3129c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3129c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3129cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3129ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3129d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3129d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3129d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3129d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3129d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3129d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3129dc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3129dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3129e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3129e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3129e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3129e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3129e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3129e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3129ec: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x3129ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
label_3129f0:
    // 0x3129f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x3129F0u;
    SET_GPR_U32(ctx, 31, 0x3129F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3129F0u, 0x3129F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129F8u;
label_3129f8:
    // 0x3129f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3129f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3129fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3129fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312a00: 0x0  nop
    ctx->pc = 0x312a00u;
    // NOP
    // 0x312a04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x312a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312a08: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x312a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x312a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a10: 0x0  nop
    ctx->pc = 0x312a10u;
    // NOP
    // 0x312a14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312a18: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x312a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x312a1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a24: 0x0  nop
    ctx->pc = 0x312a24u;
    // NOP
    // 0x312a28: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x312a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x312a2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a34: 0x0  nop
    ctx->pc = 0x312a34u;
    // NOP
    // 0x312a38: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x312a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x312a3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a44: 0x0  nop
    ctx->pc = 0x312a44u;
    // NOP
    // 0x312a48: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x312a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x312a4c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a54: 0x0  nop
    ctx->pc = 0x312a54u;
    // NOP
    // 0x312a58: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x312a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x312a5c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x312a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x312a60: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x312a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x312a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a68: 0x0  nop
    ctx->pc = 0x312a68u;
    // NOP
    // 0x312a6c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x312a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x312a70: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x312a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a74: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x312a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x312a78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x312a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312a7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x312a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a80: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x312a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x312a84: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x312a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312a88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x312a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a8c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x312a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x312a90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x312a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312a94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x312a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a98: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x312a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x312a9c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x312a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312aa0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x312aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x312aa4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x312aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312aa8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x312aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x312aac: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x312aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312ab0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x312ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x312ab4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x312ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x312ab8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x312ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x312abc: 0xc067648  jal         func_19D920
    ctx->pc = 0x312ABCu;
    SET_GPR_U32(ctx, 31, 0x312AC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312ABCu, 0x312AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312AC4u;
label_312ac4:
    // 0x312ac4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x312ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x312ac8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312ad0: 0x0  nop
    ctx->pc = 0x312ad0u;
    // NOP
    // 0x312ad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312ad8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x312ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x312adc: 0xc067648  jal         func_19D920
    ctx->pc = 0x312ADCu;
    SET_GPR_U32(ctx, 31, 0x312AE4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312ADCu, 0x312AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312AE4u;
label_312ae4:
    // 0x312ae4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x312ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x312ae8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312aec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312af0: 0x0  nop
    ctx->pc = 0x312af0u;
    // NOP
    // 0x312af4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312af8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x312af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x312afc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x312afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x312b00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x312B00u;
    SET_GPR_U32(ctx, 31, 0x312B08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x312B00u, 0x312B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B08u;
label_312b08:
    // 0x312b08: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x312b08u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312b0c: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x312b0cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x312b10: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x312b10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x312b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312b20: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x312b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312b24: 0x3e00008  jr          $ra
    ctx->pc = 0x312B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312B2Cu;
}
