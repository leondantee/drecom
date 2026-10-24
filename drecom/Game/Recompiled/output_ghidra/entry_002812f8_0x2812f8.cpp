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

// Function: entry_002812f8
// Address: 0x2812f8 - 0x281440
void entry_002812f8_0x2812f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002812f8_0x2812f8");
#endif

    switch (ctx->pc) {
        case 0x28131cu: goto label_28131c;
        case 0x281328u: goto label_281328;
        case 0x28134cu: goto label_28134c;
        case 0x281370u: goto label_281370;
        case 0x281394u: goto label_281394;
        case 0x2813c8u: goto label_2813c8;
        case 0x2813d4u: goto label_2813d4;
        case 0x281430u: goto label_281430;
        case 0x28143cu: goto label_28143c;
        default: break;
    }

    ctx->pc = 0x2812f8u;

    // 0x2812f8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2812f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2812fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2812fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281300: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x281300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
    // 0x281304: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281308: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x281308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x28130c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28130cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281310: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281310u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281314: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281314u;
    SET_GPR_U32(ctx, 31, 0x28131Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281314u, 0x28131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28131Cu;
label_28131c:
    // 0x28131c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28131cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281320: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281320u;
    SET_GPR_U32(ctx, 31, 0x281328u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281320u, 0x281328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281328u;
label_281328:
    // 0x281328: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28132c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281330: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x281330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
    // 0x281334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281338: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281338u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28133c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281340: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x281340u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281344: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281344u;
    SET_GPR_U32(ctx, 31, 0x28134Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281344u, 0x28134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28134Cu;
label_28134c:
    // 0x28134c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281354: 0x0  nop
    ctx->pc = 0x281354u;
    // NOP
    // 0x281358: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28135c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281360: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281364: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x281364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x281368: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281368u;
    SET_GPR_U32(ctx, 31, 0x281370u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281368u, 0x281370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281370u;
label_281370:
    // 0x281370: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281378: 0x0  nop
    ctx->pc = 0x281378u;
    // NOP
    // 0x28137c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28137cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281380: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x281380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281388: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28138c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x28138Cu;
    SET_GPR_U32(ctx, 31, 0x281394u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x28138Cu, 0x281394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281394u;
label_281394:
    // 0x281394: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28139c: 0x0  nop
    ctx->pc = 0x28139cu;
    // NOP
    // 0x2813a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2813a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2813a4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2813a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2813a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2813a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2813ac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2813acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2813b0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2813b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2813b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2813b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2813b8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2813b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2813bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2813bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2813c0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2813C0u;
    SET_GPR_U32(ctx, 31, 0x2813C8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2813C0u, 0x2813C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813C8u;
label_2813c8:
    // 0x2813c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2813c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2813cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2813CCu;
    SET_GPR_U32(ctx, 31, 0x2813D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2813CCu, 0x2813D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813D4u;
label_2813d4:
    // 0x2813d4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2813d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2813d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2813d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2813dc: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x2813dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
    // 0x2813e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2813e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2813e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2813e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2813e8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2813e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2813ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2813ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2813f0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2813f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2813f4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2813f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2813f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2813f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2813fc: 0x0  nop
    ctx->pc = 0x2813fcu;
    // NOP
    // 0x281400: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x281400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281404: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281408: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28140c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28140cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281410: 0x0  nop
    ctx->pc = 0x281410u;
    // NOP
    // 0x281414: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x281414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x281418: 0x2404171d  addiu       $a0, $zero, 0x171D
    ctx->pc = 0x281418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5917));
    // 0x28141c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28141cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281420: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281424: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281424u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281428: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281428u;
    SET_GPR_U32(ctx, 31, 0x281430u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281428u, 0x281430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281430u;
label_281430:
    // 0x281430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281434: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281434u;
    SET_GPR_U32(ctx, 31, 0x28143Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281434u, 0x28143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28143Cu;
label_28143c:
    // 0x28143c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28143cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x281440u;
}
