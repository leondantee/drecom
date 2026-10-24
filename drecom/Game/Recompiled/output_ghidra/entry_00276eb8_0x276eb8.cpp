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

// Function: entry_00276eb8
// Address: 0x276eb8 - 0x277030
void entry_00276eb8_0x276eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276eb8_0x276eb8");
#endif

    switch (ctx->pc) {
        case 0x276efcu: goto label_276efc;
        case 0x276f08u: goto label_276f08;
        case 0x276f2cu: goto label_276f2c;
        case 0x276f50u: goto label_276f50;
        case 0x276f74u: goto label_276f74;
        case 0x276fb8u: goto label_276fb8;
        case 0x276fc4u: goto label_276fc4;
        case 0x277020u: goto label_277020;
        case 0x27702cu: goto label_27702c;
        default: break;
    }

    ctx->pc = 0x276eb8u;

    // 0x276eb8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276ebc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276ec0: 0x2442d240  addiu       $v0, $v0, -0x2DC0
    ctx->pc = 0x276ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x276ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276ec8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x276ec8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276ecc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x276eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276ed0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x276ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x276ed4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x276ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x276ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276edc: 0x0  nop
    ctx->pc = 0x276edcu;
    // NOP
    // 0x276ee0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x276ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x276ee4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x276ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x276ee8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276ee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276eec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x276eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276ef0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276ef0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276ef4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276EF4u;
    SET_GPR_U32(ctx, 31, 0x276EFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276EF4u, 0x276EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EFCu;
label_276efc:
    // 0x276efc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276f00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276F00u;
    SET_GPR_U32(ctx, 31, 0x276F08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276F00u, 0x276F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F08u;
label_276f08:
    // 0x276f08: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276f0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276f10: 0x2442d240  addiu       $v0, $v0, -0x2DC0
    ctx->pc = 0x276f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x276f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276f18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x276f18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276f1c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x276f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276f20: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x276f20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x276f24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276F24u;
    SET_GPR_U32(ctx, 31, 0x276F2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276F24u, 0x276F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F2Cu;
label_276f2c:
    // 0x276f2c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x276f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x276f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276f34: 0x0  nop
    ctx->pc = 0x276f34u;
    // NOP
    // 0x276f38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276f3c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x276f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276f40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276f44: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x276f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x276f48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276F48u;
    SET_GPR_U32(ctx, 31, 0x276F50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276F48u, 0x276F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F50u;
label_276f50:
    // 0x276f50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x276f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x276f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276f58: 0x0  nop
    ctx->pc = 0x276f58u;
    // NOP
    // 0x276f5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276f60: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x276f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276f68: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x276f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x276f6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276F6Cu;
    SET_GPR_U32(ctx, 31, 0x276F74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276F6Cu, 0x276F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F74u;
label_276f74:
    // 0x276f74: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x276f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x276f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276f7c: 0x0  nop
    ctx->pc = 0x276f7cu;
    // NOP
    // 0x276f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276f84: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x276f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276f8c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x276f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x276f90: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x276f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x276f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276f98: 0x0  nop
    ctx->pc = 0x276f98u;
    // NOP
    // 0x276f9c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x276f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x276fa0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x276fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x276fa4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276fa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276fa8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x276fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276fac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276facu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276fb0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276FB0u;
    SET_GPR_U32(ctx, 31, 0x276FB8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276FB0u, 0x276FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FB8u;
label_276fb8:
    // 0x276fb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276fb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276fbc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276FBCu;
    SET_GPR_U32(ctx, 31, 0x276FC4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276FBCu, 0x276FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FC4u;
label_276fc4:
    // 0x276fc4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276fc8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276fcc: 0x2442d240  addiu       $v0, $v0, -0x2DC0
    ctx->pc = 0x276fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x276fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276fd4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x276fd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276fd8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x276fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276fdc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x276fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x276fe0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x276fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276fe4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x276fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x276fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276fec: 0x0  nop
    ctx->pc = 0x276fecu;
    // NOP
    // 0x276ff0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x276ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276ff4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x276ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x276ff8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x276ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x276ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277000: 0x0  nop
    ctx->pc = 0x277000u;
    // NOP
    // 0x277004: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x277004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x277008: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x277008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27700c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27700cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277010: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277014: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277014u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277018: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277018u;
    SET_GPR_U32(ctx, 31, 0x277020u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277018u, 0x277020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277020u;
label_277020:
    // 0x277020: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277024: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277024u;
    SET_GPR_U32(ctx, 31, 0x27702Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277024u, 0x27702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27702Cu;
label_27702c:
    // 0x27702c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27702cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x277030u;
}
