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

// Function: entry_0027da1c
// Address: 0x27da1c - 0x27db60
void entry_0027da1c_0x27da1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027da1c_0x27da1c");
#endif

    switch (ctx->pc) {
        case 0x27da40u: goto label_27da40;
        case 0x27da4cu: goto label_27da4c;
        case 0x27da70u: goto label_27da70;
        case 0x27da94u: goto label_27da94;
        case 0x27dab8u: goto label_27dab8;
        case 0x27daecu: goto label_27daec;
        case 0x27daf8u: goto label_27daf8;
        case 0x27db54u: goto label_27db54;
        default: break;
    }

    ctx->pc = 0x27da1cu;

    // 0x27da1c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27da20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27da20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27da24: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27da28: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27da28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27da2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27da30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27da30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27da34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27da34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27da38: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DA38u;
    SET_GPR_U32(ctx, 31, 0x27DA40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DA38u, 0x27DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA40u;
label_27da40:
    // 0x27da40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27da40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27da44: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DA44u;
    SET_GPR_U32(ctx, 31, 0x27DA4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DA44u, 0x27DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA4Cu;
label_27da4c:
    // 0x27da4c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27da50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27da50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27da54: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27da58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27da5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27da5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27da60: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27da64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27da64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27da68: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27DA68u;
    SET_GPR_U32(ctx, 31, 0x27DA70u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27DA68u, 0x27DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA70u;
label_27da70:
    // 0x27da70: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27da74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27da74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27da78: 0x0  nop
    ctx->pc = 0x27da78u;
    // NOP
    // 0x27da7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27da7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27da80: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27da84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27da84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27da88: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27da88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27da8c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27DA8Cu;
    SET_GPR_U32(ctx, 31, 0x27DA94u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27DA8Cu, 0x27DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA94u;
label_27da94:
    // 0x27da94: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27da94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27da98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27da98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27da9c: 0x0  nop
    ctx->pc = 0x27da9cu;
    // NOP
    // 0x27daa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27daa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27daa4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27daa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27daa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27daac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27daacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27dab0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27DAB0u;
    SET_GPR_U32(ctx, 31, 0x27DAB8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27DAB0u, 0x27DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAB8u;
label_27dab8:
    // 0x27dab8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27dabc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27dabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27dac0: 0x0  nop
    ctx->pc = 0x27dac0u;
    // NOP
    // 0x27dac4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27dac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dac8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dacc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27daccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27dad0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27dad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27dad4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27dad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27dad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dadc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27dadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27dae0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27dae0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dae4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DAE4u;
    SET_GPR_U32(ctx, 31, 0x27DAECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DAE4u, 0x27DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAECu;
label_27daec:
    // 0x27daec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27daecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27daf0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DAF0u;
    SET_GPR_U32(ctx, 31, 0x27DAF8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DAF0u, 0x27DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAF8u;
label_27daf8:
    // 0x27daf8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dafc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27db00: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27db04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27db04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27db08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27db08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27db0c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27db10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27db10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27db14: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27db14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27db18: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27db18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x27db1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27db1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db20: 0x0  nop
    ctx->pc = 0x27db20u;
    // NOP
    // 0x27db24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27db24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27db28: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27db28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27db2c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x27db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x27db30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27db30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db34: 0x0  nop
    ctx->pc = 0x27db34u;
    // NOP
    // 0x27db38: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27db38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27db3c: 0x2404170a  addiu       $a0, $zero, 0x170A
    ctx->pc = 0x27db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5898));
    // 0x27db40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27db40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db44: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27db44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27db48: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27db48u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db4c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DB4Cu;
    SET_GPR_U32(ctx, 31, 0x27DB54u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DB4Cu, 0x27DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB54u;
label_27db54:
    // 0x27db54: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27db54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27db58: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DB58u;
    SET_GPR_U32(ctx, 31, 0x27DB60u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DB58u, 0x27DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB60u;
}
