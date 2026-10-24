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

// Function: entry_002fca48
// Address: 0x2fca48 - 0x2fcc38
void entry_002fca48_0x2fca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fca48_0x2fca48");
#endif

    switch (ctx->pc) {
        case 0x2fca70u: goto label_2fca70;
        case 0x2fca94u: goto label_2fca94;
        case 0x2fcac0u: goto label_2fcac0;
        case 0x2fcaecu: goto label_2fcaec;
        case 0x2fcb10u: goto label_2fcb10;
        case 0x2fcb3cu: goto label_2fcb3c;
        case 0x2fcb68u: goto label_2fcb68;
        case 0x2fcb8cu: goto label_2fcb8c;
        case 0x2fcbb8u: goto label_2fcbb8;
        case 0x2fcbe4u: goto label_2fcbe4;
        case 0x2fcc08u: goto label_2fcc08;
        case 0x2fcc34u: goto label_2fcc34;
        default: break;
    }

    ctx->pc = 0x2fca48u;

    // 0x2fca48: 0x16263c  dsll32      $a0, $s6, 24
    ctx->pc = 0x2fca48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fca4c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fca4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fca50: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x2fca50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fca54: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x2fca54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fca58: 0x24a31600  addiu       $v1, $a1, 0x1600
    ctx->pc = 0x2fca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    // 0x2fca5c: 0x78720000  lq          $s2, 0x0($v1)
    ctx->pc = 0x2fca5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fca60: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2fca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fca64: 0x7c720000  sq          $s2, 0x0($v1)
    ctx->pc = 0x2fca64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 18));
    // 0x2fca68: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCA68u;
    SET_GPR_U32(ctx, 31, 0x2FCA70u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCA68u, 0x2FCA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA70u;
label_2fca70:
    // 0x2fca70: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fca70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fca74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fca74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fca78: 0x0  nop
    ctx->pc = 0x2fca78u;
    // NOP
    // 0x2fca7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fca7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fca80: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fca84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fca84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fca88: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fca8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCA8Cu;
    SET_GPR_U32(ctx, 31, 0x2FCA94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCA8Cu, 0x2FCA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA94u;
label_2fca94:
    // 0x2fca94: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fca94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fca98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fca98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fca9c: 0x0  nop
    ctx->pc = 0x2fca9cu;
    // NOP
    // 0x2fcaa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcaa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcaa4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcaa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcaac: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fcab0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fcab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcab4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2fcab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2fcab8: 0xc0c4f74  jal         func_313DD0
    ctx->pc = 0x2FCAB8u;
    SET_GPR_U32(ctx, 31, 0x2FCAC0u);
    ctx->pc = 0x313DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD0u, 0x2FCAB8u, 0x2FCAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCAC0u;
label_2fcac0:
    // 0x2fcac0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fcac0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcac4: 0x16263c  dsll32      $a0, $s6, 24
    ctx->pc = 0x2fcac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fcac8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fcac8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fcacc: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x2fcaccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fcad0: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2fcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2fcad4: 0x24631620  addiu       $v1, $v1, 0x1620
    ctx->pc = 0x2fcad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5664));
    // 0x2fcad8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fcad8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcadc: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2fcadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcae0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fcae0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fcae4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCAE4u;
    SET_GPR_U32(ctx, 31, 0x2FCAECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCAE4u, 0x2FCAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCAECu;
label_2fcaec:
    // 0x2fcaec: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x2fcaecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcaf0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2fcaf0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcaf4: 0x0  nop
    ctx->pc = 0x2fcaf4u;
    // NOP
    // 0x2fcaf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcafc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcb00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcb00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcb04: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fcb08: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCB08u;
    SET_GPR_U32(ctx, 31, 0x2FCB10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCB08u, 0x2FCB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB10u;
label_2fcb10:
    // 0x2fcb10: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcb14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcb14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcb18: 0x0  nop
    ctx->pc = 0x2fcb18u;
    // NOP
    // 0x2fcb1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcb20: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcb24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcb24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcb28: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fcb2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fcb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcb30: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2fcb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2fcb34: 0xc0c4f74  jal         func_313DD0
    ctx->pc = 0x2FCB34u;
    SET_GPR_U32(ctx, 31, 0x2FCB3Cu);
    ctx->pc = 0x313DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD0u, 0x2FCB34u, 0x2FCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB3Cu;
label_2fcb3c:
    // 0x2fcb3c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fcb3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcb40: 0x161e3c  dsll32      $v1, $s6, 24
    ctx->pc = 0x2fcb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fcb44: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fcb44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fcb48: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fcb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fcb4c: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2fcb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fcb50: 0x24831640  addiu       $v1, $a0, 0x1640
    ctx->pc = 0x2fcb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5696));
    // 0x2fcb54: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fcb54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcb58: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2fcb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcb5c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2fcb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2fcb60: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCB60u;
    SET_GPR_U32(ctx, 31, 0x2FCB68u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCB60u, 0x2FCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB68u;
label_2fcb68:
    // 0x2fcb68: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcb6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcb70: 0x0  nop
    ctx->pc = 0x2fcb70u;
    // NOP
    // 0x2fcb74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcb74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcb78: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcb7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcb80: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fcb84: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCB84u;
    SET_GPR_U32(ctx, 31, 0x2FCB8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCB84u, 0x2FCB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB8Cu;
label_2fcb8c:
    // 0x2fcb8c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcb90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcb90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcb94: 0x0  nop
    ctx->pc = 0x2fcb94u;
    // NOP
    // 0x2fcb98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcb98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcb9c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcba0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcba4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fcba8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fcba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcbac: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2fcbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2fcbb0: 0xc0c4f74  jal         func_313DD0
    ctx->pc = 0x2FCBB0u;
    SET_GPR_U32(ctx, 31, 0x2FCBB8u);
    ctx->pc = 0x313DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD0u, 0x2FCBB0u, 0x2FCBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBB8u;
label_2fcbb8:
    // 0x2fcbb8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fcbb8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcbbc: 0x161e3c  dsll32      $v1, $s6, 24
    ctx->pc = 0x2fcbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fcbc0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fcbc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fcbc4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fcbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fcbc8: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2fcbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fcbcc: 0x24831660  addiu       $v1, $a0, 0x1660
    ctx->pc = 0x2fcbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5728));
    // 0x2fcbd0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fcbd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcbd4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2fcbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcbd8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2fcbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2fcbdc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCBDCu;
    SET_GPR_U32(ctx, 31, 0x2FCBE4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCBDCu, 0x2FCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBE4u;
label_2fcbe4:
    // 0x2fcbe4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcbe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcbe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcbec: 0x0  nop
    ctx->pc = 0x2fcbecu;
    // NOP
    // 0x2fcbf0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcbf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcbf4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcbf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcbf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcbfc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fcc00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCC00u;
    SET_GPR_U32(ctx, 31, 0x2FCC08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCC00u, 0x2FCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC08u;
label_2fcc08:
    // 0x2fcc08: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcc0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcc0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcc10: 0x0  nop
    ctx->pc = 0x2fcc10u;
    // NOP
    // 0x2fcc14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcc14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcc18: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcc1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcc1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcc20: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fcc24: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fcc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcc28: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2fcc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2fcc2c: 0xc0c4f74  jal         func_313DD0
    ctx->pc = 0x2FCC2Cu;
    SET_GPR_U32(ctx, 31, 0x2FCC34u);
    ctx->pc = 0x313DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD0u, 0x2FCC2Cu, 0x2FCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC34u;
label_2fcc34:
    // 0x2fcc34: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fcc34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fcc38u;
}
