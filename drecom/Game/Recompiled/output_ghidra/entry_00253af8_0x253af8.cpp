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

// Function: entry_00253af8
// Address: 0x253af8 - 0x253c38
void entry_00253af8_0x253af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253af8_0x253af8");
#endif

    switch (ctx->pc) {
        case 0x253b28u: goto label_253b28;
        case 0x253b5cu: goto label_253b5c;
        case 0x253ba0u: goto label_253ba0;
        case 0x253bacu: goto label_253bac;
        case 0x253bc8u: goto label_253bc8;
        case 0x253bfcu: goto label_253bfc;
        default: break;
    }

    ctx->pc = 0x253af8u;

    // 0x253af8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253afc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x253afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253b00: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x253b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x253b04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253b08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x253b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x253b0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253b10: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253b14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253b14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253b18: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253b1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253b20: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x253B20u;
    SET_GPR_U32(ctx, 31, 0x253B28u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x253B20u, 0x253B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B28u;
label_253b28:
    // 0x253b28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x253b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x253b2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253b30: 0x0  nop
    ctx->pc = 0x253b30u;
    // NOP
    // 0x253b34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253b38: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x253b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x253b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b40: 0x0  nop
    ctx->pc = 0x253b40u;
    // NOP
    // 0x253b44: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x253b44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253b48: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253b50: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253b54: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253B54u;
    SET_GPR_U32(ctx, 31, 0x253B5Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253B54u, 0x253B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B5Cu;
label_253b5c:
    // 0x253b5c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253b60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253b64: 0x0  nop
    ctx->pc = 0x253b64u;
    // NOP
    // 0x253b68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253b6c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x253b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253b74: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253b78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x253b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x253b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b80: 0x0  nop
    ctx->pc = 0x253b80u;
    // NOP
    // 0x253b84: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253b88: 0x24045f01  addiu       $a0, $zero, 0x5F01
    ctx->pc = 0x253b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24321));
    // 0x253b8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253b8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253b90: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253b94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253b94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253b98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253B98u;
    SET_GPR_U32(ctx, 31, 0x253BA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253B98u, 0x253BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BA0u;
label_253ba0:
    // 0x253ba0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253ba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253ba4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253BA4u;
    SET_GPR_U32(ctx, 31, 0x253BACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253BA4u, 0x253BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BACu;
label_253bac:
    // 0x253bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253bb0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253bb4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253bb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253bb8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253bbc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253bc0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x253BC0u;
    SET_GPR_U32(ctx, 31, 0x253BC8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x253BC0u, 0x253BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BC8u;
label_253bc8:
    // 0x253bc8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x253bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x253bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253bd0: 0x0  nop
    ctx->pc = 0x253bd0u;
    // NOP
    // 0x253bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253bd8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x253bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x253bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253be0: 0x0  nop
    ctx->pc = 0x253be0u;
    // NOP
    // 0x253be4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x253be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253be8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253bec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253bf0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253bf4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253BF4u;
    SET_GPR_U32(ctx, 31, 0x253BFCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253BF4u, 0x253BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BFCu;
label_253bfc:
    // 0x253bfc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253c00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253c04: 0x0  nop
    ctx->pc = 0x253c04u;
    // NOP
    // 0x253c08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253c0c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x253c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253c10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253c14: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253c18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x253c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x253c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c20: 0x0  nop
    ctx->pc = 0x253c20u;
    // NOP
    // 0x253c24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253c28: 0x24045f02  addiu       $a0, $zero, 0x5F02
    ctx->pc = 0x253c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24322));
    // 0x253c2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253c2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253c30: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253c34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253c34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x253c38u;
}
