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

// Function: entry_0027ea98
// Address: 0x27ea98 - 0x27ec10
void entry_0027ea98_0x27ea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ea98_0x27ea98");
#endif

    switch (ctx->pc) {
        case 0x27eadcu: goto label_27eadc;
        case 0x27eae8u: goto label_27eae8;
        case 0x27eb0cu: goto label_27eb0c;
        case 0x27eb30u: goto label_27eb30;
        case 0x27eb54u: goto label_27eb54;
        case 0x27eb98u: goto label_27eb98;
        case 0x27eba4u: goto label_27eba4;
        case 0x27ec00u: goto label_27ec00;
        case 0x27ec0cu: goto label_27ec0c;
        default: break;
    }

    ctx->pc = 0x27ea98u;

    // 0x27ea98: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27ea9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27eaa0: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27eaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27eaa8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27eaa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27eaac: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27eab0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27eab0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27eab4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27eab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27eab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eabc: 0x0  nop
    ctx->pc = 0x27eabcu;
    // NOP
    // 0x27eac0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27eac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27eac4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27eac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27eac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27eacc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27eaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ead0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ead0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ead4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EAD4u;
    SET_GPR_U32(ctx, 31, 0x27EADCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EAD4u, 0x27EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EADCu;
label_27eadc:
    // 0x27eadc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27eadcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27eae0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EAE0u;
    SET_GPR_U32(ctx, 31, 0x27EAE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EAE0u, 0x27EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAE8u;
label_27eae8:
    // 0x27eae8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27eaec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27eaf0: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27eaf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27eaf8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27eaf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27eafc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27eb00: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27eb04: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27EB04u;
    SET_GPR_U32(ctx, 31, 0x27EB0Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27EB04u, 0x27EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB0Cu;
label_27eb0c:
    // 0x27eb0c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27eb10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27eb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eb14: 0x0  nop
    ctx->pc = 0x27eb14u;
    // NOP
    // 0x27eb18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27eb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27eb1c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27eb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27eb24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27eb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27eb28: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27EB28u;
    SET_GPR_U32(ctx, 31, 0x27EB30u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27EB28u, 0x27EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB30u;
label_27eb30:
    // 0x27eb30: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27eb34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27eb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eb38: 0x0  nop
    ctx->pc = 0x27eb38u;
    // NOP
    // 0x27eb3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27eb3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27eb40: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27eb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27eb48: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27eb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27eb4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27EB4Cu;
    SET_GPR_U32(ctx, 31, 0x27EB54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27EB4Cu, 0x27EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB54u;
label_27eb54:
    // 0x27eb54: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27eb58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27eb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eb5c: 0x0  nop
    ctx->pc = 0x27eb5cu;
    // NOP
    // 0x27eb60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27eb60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27eb64: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27eb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27eb6c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27eb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27eb70: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x27eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x27eb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27eb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eb78: 0x0  nop
    ctx->pc = 0x27eb78u;
    // NOP
    // 0x27eb7c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27eb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27eb80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27eb84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27eb84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27eb88: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27eb8c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27eb8cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27eb90: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EB90u;
    SET_GPR_U32(ctx, 31, 0x27EB98u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EB90u, 0x27EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB98u;
label_27eb98:
    // 0x27eb98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27eb98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27eb9c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EB9Cu;
    SET_GPR_U32(ctx, 31, 0x27EBA4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EB9Cu, 0x27EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBA4u;
label_27eba4:
    // 0x27eba4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27eba8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27ebac: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27ebb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ebb4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27ebb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ebb8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ebbc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27ebc0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ebc4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x27ebc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ebc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ebcc: 0x0  nop
    ctx->pc = 0x27ebccu;
    // NOP
    // 0x27ebd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ebd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ebd4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27ebd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27ebd8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x27ebdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ebdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ebe0: 0x0  nop
    ctx->pc = 0x27ebe0u;
    // NOP
    // 0x27ebe4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27ebe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27ebe8: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x27ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27ebec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ebecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ebf0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ebf4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ebf4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ebf8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EBF8u;
    SET_GPR_U32(ctx, 31, 0x27EC00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EBF8u, 0x27EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC00u;
label_27ec00:
    // 0x27ec00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27ec00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27ec04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EC04u;
    SET_GPR_U32(ctx, 31, 0x27EC0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EC04u, 0x27EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC0Cu;
label_27ec0c:
    // 0x27ec0c: 0x0  nop
    ctx->pc = 0x27ec0cu;
    // NOP
    ctx->pc = 0x27ec10u;
}
