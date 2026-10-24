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

// Function: R10a_evt_satsuei
// Address: 0x2735a0 - 0x273778
void R10a_evt_satsuei_0x2735a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_satsuei_0x2735a0");
#endif

    switch (ctx->pc) {
        case 0x2735ccu: goto label_2735cc;
        case 0x2735ecu: goto label_2735ec;
        case 0x2735f4u: goto label_2735f4;
        case 0x2736acu: goto label_2736ac;
        case 0x2736f8u: goto label_2736f8;
        case 0x27372cu: goto label_27372c;
        case 0x273760u: goto label_273760;
        default: break;
    }

    ctx->pc = 0x2735a0u;

    // 0x2735a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2735a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2735a4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2735a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2735a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2735a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2735ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2735acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2735b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2735b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2735b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2735b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2735b8: 0x8c31bb48  lw          $s1, -0x44B8($at)
    ctx->pc = 0x2735b8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB48u));
    // 0x2735bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2735bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2735c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2735c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2735c4: 0xc067de8  jal         func_19F7A0
    ctx->pc = 0x2735C4u;
    SET_GPR_U32(ctx, 31, 0x2735CCu);
    ctx->pc = 0x19F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F7A0u, 0x2735C4u, 0x2735CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735CCu;
label_2735cc:
    // 0x2735cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2735ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2735d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2735d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2735d4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2735d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2735d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2735d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2735dc: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2735dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2735e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2735e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2735e4: 0xc055700  jal         func_155C00
    ctx->pc = 0x2735E4u;
    SET_GPR_U32(ctx, 31, 0x2735ECu);
    ctx->pc = 0x155C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155C00u, 0x2735E4u, 0x2735ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735ECu;
label_2735ec:
    // 0x2735ec: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2735ECu;
    {
        const bool branch_taken_0x2735ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2735ec) {
            ctx->pc = 0x273730u;
            goto label_273730;
        }
    }
    ctx->pc = 0x2735F4u;
label_2735f4:
    // 0x2735f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2735f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2735f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2735f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2735fc: 0x2842019a  slti        $v0, $v0, 0x19A
    ctx->pc = 0x2735fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)410) ? 1 : 0);
    // 0x273600: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x273600u;
    {
        const bool branch_taken_0x273600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273600) {
            ctx->pc = 0x2736F8u;
            goto label_2736f8;
        }
    }
    ctx->pc = 0x273608u;
    // 0x273608: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x273608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x27360c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27360cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273610: 0x284101b4  slti        $at, $v0, 0x1B4
    ctx->pc = 0x273610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)436) ? 1 : 0);
    // 0x273614: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x273614u;
    {
        const bool branch_taken_0x273614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x273614) {
            ctx->pc = 0x2736F8u;
            goto label_2736f8;
        }
    }
    ctx->pc = 0x27361Cu;
    // 0x27361c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27361cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x273620: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x273620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x273624: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x273624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x273628: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x273628u;
    {
        const bool branch_taken_0x273628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273628) {
            ctx->pc = 0x2736F8u;
            goto label_2736f8;
        }
    }
    ctx->pc = 0x273630u;
    // 0x273630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273634: 0x0  nop
    ctx->pc = 0x273634u;
    // NOP
    // 0x273638: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x273638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27363c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27363cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273640: 0x0  nop
    ctx->pc = 0x273640u;
    // NOP
    // 0x273644: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x273644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x273648: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x273648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27364c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27364cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273650: 0x0  nop
    ctx->pc = 0x273650u;
    // NOP
    // 0x273654: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x273654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x273658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x273658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27365c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273660: 0x0  nop
    ctx->pc = 0x273660u;
    // NOP
    // 0x273664: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x273664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x273668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27366c: 0x0  nop
    ctx->pc = 0x27366cu;
    // NOP
    // 0x273670: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x273670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x273674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273678: 0x0  nop
    ctx->pc = 0x273678u;
    // NOP
    // 0x27367c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27367cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x273680: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x273680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x273684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x273684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273688: 0x0  nop
    ctx->pc = 0x273688u;
    // NOP
    // 0x27368c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27368cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x273690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x273690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x273694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x273694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273698: 0x0  nop
    ctx->pc = 0x273698u;
    // NOP
    // 0x27369c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27369cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2736a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2736a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2736a4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2736A4u;
    SET_GPR_U32(ctx, 31, 0x2736ACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2736A4u, 0x2736ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736ACu;
label_2736ac:
    // 0x2736ac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2736acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2736b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2736b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2736b4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2736b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2736b8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2736b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2736bc: 0x24449240  addiu       $a0, $v0, -0x6DC0
    ctx->pc = 0x2736bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x2736c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2736c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2736c4: 0x24479240  addiu       $a3, $v0, -0x6DC0
    ctx->pc = 0x2736c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x2736c8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2736c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2736cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2736ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2736d0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2736d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2736d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2736d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2736d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2736d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2736dc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2736dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2736e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2736e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2736e4: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2736e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2736e8: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x2736e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2736ec: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2736ecu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2736f0: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2736F0u;
    SET_GPR_U32(ctx, 31, 0x2736F8u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2736F0u, 0x2736F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736F8u;
label_2736f8:
    // 0x2736f8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x2736f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2736fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2736fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x273700: 0x2402015e  addiu       $v0, $zero, 0x15E
    ctx->pc = 0x273700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x273704: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273704u;
    {
        const bool branch_taken_0x273704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273704) {
            ctx->pc = 0x273720u;
            goto label_273720;
        }
    }
    ctx->pc = 0x27370Cu;
    // 0x27370c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x273710: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x273710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x273714: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x273714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x273718: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x273718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x27371c: 0x0  nop
    ctx->pc = 0x27371cu;
    // NOP
label_273720:
    // 0x273720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273724: 0xc084964  jal         func_212590
    ctx->pc = 0x273724u;
    SET_GPR_U32(ctx, 31, 0x27372Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x273724u, 0x27372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27372Cu;
label_27372c:
    // 0x27372c: 0x0  nop
    ctx->pc = 0x27372cu;
    // NOP
label_273730:
    // 0x273730: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x273730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273734: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x273734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273738: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x273738u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x27373c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27373cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273740: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273744: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x273744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273748: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27374c: 0x284201e0  slti        $v0, $v0, 0x1E0
    ctx->pc = 0x27374cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)480) ? 1 : 0);
    // 0x273750: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x273750u;
    {
        const bool branch_taken_0x273750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273750) {
            ctx->pc = 0x2735F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2735f4;
        }
    }
    ctx->pc = 0x273758u;
    // 0x273758: 0xc084934  jal         func_2124D0
    ctx->pc = 0x273758u;
    SET_GPR_U32(ctx, 31, 0x273760u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x273758u, 0x273760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273760u;
label_273760:
    // 0x273760: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x273760u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273764: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x273764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273768: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27376c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27376cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x273770: 0x3e00008  jr          $ra
    ctx->pc = 0x273770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273778u;
}
