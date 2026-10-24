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

// Function: entry_0027d6e8
// Address: 0x27d6e8 - 0x27d7c8
void entry_0027d6e8_0x27d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d6e8_0x27d6e8");
#endif

    switch (ctx->pc) {
        case 0x27d70cu: goto label_27d70c;
        case 0x27d718u: goto label_27d718;
        case 0x27d73cu: goto label_27d73c;
        case 0x27d760u: goto label_27d760;
        case 0x27d784u: goto label_27d784;
        case 0x27d7b8u: goto label_27d7b8;
        case 0x27d7c4u: goto label_27d7c4;
        default: break;
    }

    ctx->pc = 0x27d6e8u;

    // 0x27d6e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d6ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d6f0: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x27d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x27d6f4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27d6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d6f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d6fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d6fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d700: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d700u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d704: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D704u;
    SET_GPR_U32(ctx, 31, 0x27D70Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D704u, 0x27D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D70Cu;
label_27d70c:
    // 0x27d70c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d70cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d710: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D710u;
    SET_GPR_U32(ctx, 31, 0x27D718u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D710u, 0x27D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D718u;
label_27d718:
    // 0x27d718: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d71c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d720: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x27d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x27d724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d728: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d72c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d730: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d730u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d734: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D734u;
    SET_GPR_U32(ctx, 31, 0x27D73Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D734u, 0x27D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D73Cu;
label_27d73c:
    // 0x27d73c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d744: 0x0  nop
    ctx->pc = 0x27d744u;
    // NOP
    // 0x27d748: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d74c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27d74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d754: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27d754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27d758: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D758u;
    SET_GPR_U32(ctx, 31, 0x27D760u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D758u, 0x27D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D760u;
label_27d760:
    // 0x27d760: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d768: 0x0  nop
    ctx->pc = 0x27d768u;
    // NOP
    // 0x27d76c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d770: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d778: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d77c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D77Cu;
    SET_GPR_U32(ctx, 31, 0x27D784u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D77Cu, 0x27D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D784u;
label_27d784:
    // 0x27d784: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d78c: 0x0  nop
    ctx->pc = 0x27d78cu;
    // NOP
    // 0x27d790: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d794: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d79c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27d79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27d7a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d7a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d7a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d7a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d7ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d7acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d7b0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D7B0u;
    SET_GPR_U32(ctx, 31, 0x27D7B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D7B0u, 0x27D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7B8u;
label_27d7b8:
    // 0x27d7b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d7b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d7bc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D7BCu;
    SET_GPR_U32(ctx, 31, 0x27D7C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D7BCu, 0x27D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7C4u;
label_27d7c4:
    // 0x27d7c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x27d7c8u;
}
