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

// Function: caseD_6
// Address: 0x280794 - 0x280940
void caseD_6_0x280794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x280794");
#endif

    switch (ctx->pc) {
        case 0x280804u: goto label_280804;
        case 0x280828u: goto label_280828;
        case 0x280850u: goto label_280850;
        case 0x280884u: goto label_280884;
        case 0x280890u: goto label_280890;
        case 0x2808acu: goto label_2808ac;
        case 0x2808d0u: goto label_2808d0;
        case 0x2808f8u: goto label_2808f8;
        case 0x28092cu: goto label_28092c;
        case 0x280938u: goto label_280938;
        default: break;
    }

    ctx->pc = 0x280794u;

    // 0x280794: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280798: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280798u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28079c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28079cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2807a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2807a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2807a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2807a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2807a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2807ac: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2807acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2807b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2807b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2807b4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2807b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2807b8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2807b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2807bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2807bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2807c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2807c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2807c4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2807c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2807c8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2807c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2807cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2807d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2807d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2807d4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2807d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2807d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2807d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2807dc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2807dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2807e0: 0x146001d5  bnez        $v1, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x2807E0u;
    {
        const bool branch_taken_0x2807e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2807e0) {
            ctx->pc = 0x280F38u;
            return;
        }
    }
    ctx->pc = 0x2807E8u;
    // 0x2807e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2807e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2807ec: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x2807ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x2807f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2807f0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392090u));
    // 0x2807f4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2807f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2807f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2807f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2807fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2807FCu;
    SET_GPR_U32(ctx, 31, 0x280804u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2807FCu, 0x280804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280804u;
label_280804:
    // 0x280804: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28080c: 0x0  nop
    ctx->pc = 0x28080cu;
    // NOP
    // 0x280810: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280814: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28081c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x28081cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280820: 0xc067648  jal         func_19D920
    ctx->pc = 0x280820u;
    SET_GPR_U32(ctx, 31, 0x280828u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280820u, 0x280828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280828u;
label_280828:
    // 0x280828: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x280828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x28082c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x28082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280834: 0x0  nop
    ctx->pc = 0x280834u;
    // NOP
    // 0x280838: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28083c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280840: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280844: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280848: 0xc067648  jal         func_19D920
    ctx->pc = 0x280848u;
    SET_GPR_U32(ctx, 31, 0x280850u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280848u, 0x280850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280850u;
label_280850:
    // 0x280850: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280858: 0x0  nop
    ctx->pc = 0x280858u;
    // NOP
    // 0x28085c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28085cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280860: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280864: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280868: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28086c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x28086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x280870: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280870u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280874: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280878: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280878u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28087c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28087Cu;
    SET_GPR_U32(ctx, 31, 0x280884u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28087Cu, 0x280884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280884u;
label_280884:
    // 0x280884: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280888: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280888u;
    SET_GPR_U32(ctx, 31, 0x280890u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280888u, 0x280890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280890u;
label_280890:
    // 0x280890: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280894: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x280894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x280898: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280898u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392090u));
    // 0x28089c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2808a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2808a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2808a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2808A4u;
    SET_GPR_U32(ctx, 31, 0x2808ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2808A4u, 0x2808ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808ACu;
label_2808ac:
    // 0x2808ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2808acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2808b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2808b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2808b4: 0x0  nop
    ctx->pc = 0x2808b4u;
    // NOP
    // 0x2808b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2808b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2808bc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2808bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2808c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2808c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2808c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2808c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2808c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2808C8u;
    SET_GPR_U32(ctx, 31, 0x2808D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2808C8u, 0x2808D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808D0u;
label_2808d0:
    // 0x2808d0: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x2808d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x2808d4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2808d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2808d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2808d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2808dc: 0x0  nop
    ctx->pc = 0x2808dcu;
    // NOP
    // 0x2808e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2808e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2808e4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2808e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2808e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2808e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2808ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2808ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2808f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2808F0u;
    SET_GPR_U32(ctx, 31, 0x2808F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2808F0u, 0x2808F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808F8u;
label_2808f8:
    // 0x2808f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2808f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2808fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2808fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280900: 0x0  nop
    ctx->pc = 0x280900u;
    // NOP
    // 0x280904: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280908: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28090c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28090cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280910: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280914: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x280914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x280918: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28091c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x28091cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280920: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280920u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280924: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280924u;
    SET_GPR_U32(ctx, 31, 0x28092Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280924u, 0x28092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28092Cu;
label_28092c:
    // 0x28092c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28092cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280930: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280930u;
    SET_GPR_U32(ctx, 31, 0x280938u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280930u, 0x280938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280938u;
label_280938:
    // 0x280938: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x280938u;
    {
        const bool branch_taken_0x280938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280938) {
            ctx->pc = 0x280F38u;
            return;
        }
    }
    ctx->pc = 0x280940u;
}
