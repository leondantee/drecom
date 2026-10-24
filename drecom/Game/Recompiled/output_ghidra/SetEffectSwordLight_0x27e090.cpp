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

// Function: SetEffectSwordLight
// Address: 0x27e090 - 0x27e254
void SetEffectSwordLight_0x27e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffectSwordLight_0x27e090");
#endif

    switch (ctx->pc) {
        case 0x27e0e4u: goto label_27e0e4;
        case 0x27e0f4u: goto label_27e0f4;
        case 0x27e108u: goto label_27e108;
        case 0x27e114u: goto label_27e114;
        case 0x27e12cu: goto label_27e12c;
        case 0x27e1ccu: goto label_27e1cc;
        case 0x27e238u: goto label_27e238;
        default: break;
    }

    ctx->pc = 0x27e090u;

    // 0x27e090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27e090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27e094: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x27e094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x27e098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27e09c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27e0a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e0a4: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x27e0a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27e0a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e0ac: 0x24420ff0  addiu       $v0, $v0, 0xFF0
    ctx->pc = 0x27e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4080));
    // 0x27e0b0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x27e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e0b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x27e0b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x390FF0u));
    // 0x27e0b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x27e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x27e0bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e0c0: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x27e0c4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x27e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e0c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x27e0c8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x391000u));
    // 0x27e0cc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x27e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x27e0d0: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x27e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x27e0d4: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x27e0d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27e0d8: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x27e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e0dc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x27E0DCu;
    SET_GPR_U32(ctx, 31, 0x27E0E4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x27E0DCu, 0x27E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0E4u;
label_27e0e4:
    // 0x27e0e4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27e0e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27e0e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x27e0e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e0ec: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x27E0ECu;
    SET_GPR_U32(ctx, 31, 0x27E0F4u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x27E0ECu, 0x27E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0F4u;
label_27e0f4:
    // 0x27e0f4: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x27e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x27e0f8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x27e0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x27e0fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x27e0fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e100: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x27E100u;
    SET_GPR_U32(ctx, 31, 0x27E108u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x27E100u, 0x27E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E108u;
label_27e108:
    // 0x27e108: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27e108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e10c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x27E10Cu;
    SET_GPR_U32(ctx, 31, 0x27E114u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x27E10Cu, 0x27E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E114u;
label_27e114:
    // 0x27e114: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x27e114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27e118: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e11c: 0x8c31f9fc  lw          $s1, -0x604($at)
    ctx->pc = 0x27e11cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9FCu));
    // 0x27e120: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27e120u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e124: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x27E124u;
    {
        const bool branch_taken_0x27e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e124) {
            ctx->pc = 0x27E1D0u;
            goto label_27e1d0;
        }
    }
    ctx->pc = 0x27E12Cu;
label_27e12c:
    // 0x27e12c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27e130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e134: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E134u;
    {
        const bool branch_taken_0x27e134 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x27e134) {
            ctx->pc = 0x27E150u;
            goto label_27e150;
        }
    }
    ctx->pc = 0x27E13Cu;
    // 0x27e13c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x27e13cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e140: 0x0  nop
    ctx->pc = 0x27e140u;
    // NOP
    // 0x27e144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27E148u;
    {
        const bool branch_taken_0x27e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e148) {
            ctx->pc = 0x27E16Cu;
            goto label_27e16c;
        }
    }
    ctx->pc = 0x27E150u;
label_27e150:
    // 0x27e150: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x27e150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x27e154: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x27e154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x27e158: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27e158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27e15c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e160: 0x0  nop
    ctx->pc = 0x27e160u;
    // NOP
    // 0x27e164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e168: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27e168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27e16c:
    // 0x27e16c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e170: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x27e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x27e174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e178: 0x0  nop
    ctx->pc = 0x27e178u;
    // NOP
    // 0x27e17c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27e180: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27e180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27e184: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e188: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27e188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27e18c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x27e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x27e190: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x27e190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x27e194: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x27e198: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e19c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x27e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e1a0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27e1a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e1a4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e1a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x27e1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27e1ac: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27e1acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27e1b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e1b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e1b4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e1b8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x27e1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e1bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27e1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e1c0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x27e1c0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e1c4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x27E1C4u;
    SET_GPR_U32(ctx, 31, 0x27E1CCu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x27E1C4u, 0x27E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1CCu;
label_27e1cc:
    // 0x27e1cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27e1d0:
    // 0x27e1d0: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x27e1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x27e1d4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x27E1D4u;
    {
        const bool branch_taken_0x27e1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e1d4) {
            ctx->pc = 0x27E12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e12c;
        }
    }
    ctx->pc = 0x27E1DCu;
    // 0x27e1dc: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x27e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x27e1e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27e1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e1e8: 0x0  nop
    ctx->pc = 0x27e1e8u;
    // NOP
    // 0x27e1ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27e1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27e1f0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e1f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x27e1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27e1f8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x27e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x27e1fc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x27e1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x27e200: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x27e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x27e204: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e208: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x27e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e20c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27e20cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e210: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e214: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27e214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27e218: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27e218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27e21c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e21cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e220: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27e220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e224: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x27e224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e228: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27e228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e22c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x27e22cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e230: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x27E230u;
    SET_GPR_U32(ctx, 31, 0x27E238u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x27E230u, 0x27E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E238u;
label_27e238:
    // 0x27e238: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27e238u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e23c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e23cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e248: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27e24c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E254u;
}
