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

// Function: entry_002465e8
// Address: 0x2465e8 - 0x24671c
void entry_002465e8_0x2465e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002465e8_0x2465e8");
#endif

    switch (ctx->pc) {
        case 0x246638u: goto label_246638;
        case 0x246640u: goto label_246640;
        case 0x24666cu: goto label_24666c;
        case 0x2466f0u: goto label_2466f0;
        case 0x2466fcu: goto label_2466fc;
        default: break;
    }

    ctx->pc = 0x2465e8u;

    // 0x2465e8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2465e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2465ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2465ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2465f0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2465f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2465f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2465f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2465f8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2465f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2465fc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2465fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x246600: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x246600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x246604: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x246604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x246608: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x246608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24660c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x24660cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x246610: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x246610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x246614: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x246614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x246618: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x246618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24661c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x24661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x246620: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x246624: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246624u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246628: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x246628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x24662c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24662cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246630: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x246630u;
    SET_GPR_U32(ctx, 31, 0x246638u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246630u, 0x246638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246638u;
label_246638:
    // 0x246638: 0xc067648  jal         func_19D920
    ctx->pc = 0x246638u;
    SET_GPR_U32(ctx, 31, 0x246640u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x246638u, 0x246640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246640u;
label_246640:
    // 0x246640: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x246640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x246644: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x246644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x246648: 0x0  nop
    ctx->pc = 0x246648u;
    // NOP
    // 0x24664c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24664cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x246650: 0x3c05c3eb  lui         $a1, 0xC3EB
    ctx->pc = 0x246650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50155 << 16));
    // 0x246654: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x246654u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246658: 0x0  nop
    ctx->pc = 0x246658u;
    // NOP
    // 0x24665c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24665cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246660: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x246660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x246664: 0xc067648  jal         func_19D920
    ctx->pc = 0x246664u;
    SET_GPR_U32(ctx, 31, 0x24666Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x246664u, 0x24666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24666Cu;
label_24666c:
    // 0x24666c: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x24666cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x246670: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x246670u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x246674: 0x0  nop
    ctx->pc = 0x246674u;
    // NOP
    // 0x246678: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x246678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24667c: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x24667cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
    // 0x246680: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x246680u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246684: 0x0  nop
    ctx->pc = 0x246684u;
    // NOP
    // 0x246688: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x246688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24668c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x246690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246694: 0x0  nop
    ctx->pc = 0x246694u;
    // NOP
    // 0x246698: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x246698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24669c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x24669cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2466a0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2466a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2466a4: 0x0  nop
    ctx->pc = 0x2466a4u;
    // NOP
    // 0x2466a8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2466a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2466ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2466acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2466b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2466b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2466b4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2466b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2466b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2466b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2466bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2466bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2466c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2466c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2466c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2466c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2466c8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2466c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2466cc: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2466ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2466d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2466d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2466d4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2466d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2466d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2466d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2466dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2466dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2466e0: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x2466e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x2466e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2466e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2466e8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2466E8u;
    SET_GPR_U32(ctx, 31, 0x2466F0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2466E8u, 0x2466F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466F0u;
label_2466f0:
    // 0x2466f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2466f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2466f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2466F4u;
    SET_GPR_U32(ctx, 31, 0x2466FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2466F4u, 0x2466FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466FCu;
label_2466fc:
    // 0x2466fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2466fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x246700: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x246700u;
    {
        const bool branch_taken_0x246700 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x246700) {
            ctx->pc = 0x24671Cu;
            return;
        }
    }
    ctx->pc = 0x246708u;
    // 0x246708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24670c: 0x0  nop
    ctx->pc = 0x24670cu;
    // NOP
    // 0x246710: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x246710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x246714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246714u;
    {
        const bool branch_taken_0x246714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246714) {
            ctx->pc = 0x246738u;
            return;
        }
    }
    ctx->pc = 0x24671Cu;
}
