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

// Function: entry_00253994
// Address: 0x253994 - 0x253af8
void entry_00253994_0x253994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253994_0x253994");
#endif

    switch (ctx->pc) {
        case 0x2539b0u: goto label_2539b0;
        case 0x2539e4u: goto label_2539e4;
        case 0x253a2cu: goto label_253a2c;
        case 0x253a38u: goto label_253a38;
        case 0x253a54u: goto label_253a54;
        case 0x253a88u: goto label_253a88;
        case 0x253ad0u: goto label_253ad0;
        case 0x253adcu: goto label_253adc;
        default: break;
    }

    ctx->pc = 0x253994u;

    // 0x253994: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253998: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25399c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25399cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2539a0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2539a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2539a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2539a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2539a8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2539A8u;
    SET_GPR_U32(ctx, 31, 0x2539B0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2539A8u, 0x2539B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539B0u;
label_2539b0:
    // 0x2539b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2539b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2539b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2539b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2539b8: 0x0  nop
    ctx->pc = 0x2539b8u;
    // NOP
    // 0x2539bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2539bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2539c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2539c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2539c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2539c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2539c8: 0x0  nop
    ctx->pc = 0x2539c8u;
    // NOP
    // 0x2539cc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2539ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2539d0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2539d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2539d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2539d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2539d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2539d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2539dc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2539DCu;
    SET_GPR_U32(ctx, 31, 0x2539E4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2539DCu, 0x2539E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539E4u;
label_2539e4:
    // 0x2539e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2539e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2539e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2539e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2539ec: 0x0  nop
    ctx->pc = 0x2539ecu;
    // NOP
    // 0x2539f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2539f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2539f4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2539f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2539f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2539f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2539fc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2539fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253a00: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x253a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x253a04: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x253a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x253a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a0c: 0x0  nop
    ctx->pc = 0x253a0cu;
    // NOP
    // 0x253a10: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253a14: 0x24045f01  addiu       $a0, $zero, 0x5F01
    ctx->pc = 0x253a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24321));
    // 0x253a18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253a18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253a1c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253a20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253a20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253a24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253A24u;
    SET_GPR_U32(ctx, 31, 0x253A2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253A24u, 0x253A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A2Cu;
label_253a2c:
    // 0x253a2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253a2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253a30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253A30u;
    SET_GPR_U32(ctx, 31, 0x253A38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253A30u, 0x253A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A38u;
label_253a38:
    // 0x253a38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253a3c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253a40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253a40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253a44: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253a48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253a48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253a4c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x253A4Cu;
    SET_GPR_U32(ctx, 31, 0x253A54u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x253A4Cu, 0x253A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A54u;
label_253a54:
    // 0x253a54: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253a58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253a5c: 0x0  nop
    ctx->pc = 0x253a5cu;
    // NOP
    // 0x253a60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253a64: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a6c: 0x0  nop
    ctx->pc = 0x253a6cu;
    // NOP
    // 0x253a70: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x253a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253a74: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x253a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x253a7c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253a80: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253A80u;
    SET_GPR_U32(ctx, 31, 0x253A88u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253A80u, 0x253A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A88u;
label_253a88:
    // 0x253a88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x253a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x253a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253a90: 0x0  nop
    ctx->pc = 0x253a90u;
    // NOP
    // 0x253a94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253a98: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x253a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x253a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x253aa0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253aa4: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x253aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x253aa8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x253aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x253aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253ab0: 0x0  nop
    ctx->pc = 0x253ab0u;
    // NOP
    // 0x253ab4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253ab8: 0x24045f02  addiu       $a0, $zero, 0x5F02
    ctx->pc = 0x253ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24322));
    // 0x253abc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253abcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253ac0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253ac4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253ac4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253ac8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253AC8u;
    SET_GPR_U32(ctx, 31, 0x253AD0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253AC8u, 0x253AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AD0u;
label_253ad0:
    // 0x253ad0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253ad0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253ad4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253AD4u;
    SET_GPR_U32(ctx, 31, 0x253ADCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253AD4u, 0x253ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253ADCu;
label_253adc:
    // 0x253adc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x253adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253ae0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x253ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253ae4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x253ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x253ae8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x253ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253aec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x253aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x253af0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x253AF0u;
    {
        const bool branch_taken_0x253af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253af0) {
            ctx->pc = 0x253C4Cu;
            return;
        }
    }
    ctx->pc = 0x253AF8u;
}
