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

// Function: entry_00274a88
// Address: 0x274a88 - 0x274ba0
void entry_00274a88_0x274a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274a88_0x274a88");
#endif

    switch (ctx->pc) {
        case 0x274a90u: goto label_274a90;
        case 0x274ac4u: goto label_274ac4;
        case 0x274ad0u: goto label_274ad0;
        case 0x274b68u: goto label_274b68;
        case 0x274b88u: goto label_274b88;
        default: break;
    }

    ctx->pc = 0x274a88u;

    // 0x274a88: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x274A88u;
    SET_GPR_U32(ctx, 31, 0x274A90u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x274A88u, 0x274A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A90u;
label_274a90:
    // 0x274a90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x274a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x274a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274a98: 0x0  nop
    ctx->pc = 0x274a98u;
    // NOP
    // 0x274a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274aa0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274aa4: 0xe420d2cc  swc1        $f0, -0x2D34($at)
    ctx->pc = 0x274aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2CCu, _value); } while (0); }
    // 0x274aa8: 0x24042c06  addiu       $a0, $zero, 0x2C06
    ctx->pc = 0x274aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11270));
    // 0x274aac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x274aacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274ab0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x274ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x274ab4: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x274ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x274ab8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x274ab8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274abc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x274ABCu;
    SET_GPR_U32(ctx, 31, 0x274AC4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x274ABCu, 0x274AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AC4u;
label_274ac4:
    // 0x274ac4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x274ac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274ac8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x274AC8u;
    SET_GPR_U32(ctx, 31, 0x274AD0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x274AC8u, 0x274AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AD0u;
label_274ad0:
    // 0x274ad0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x274ad0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274ad4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x274ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x274ad8: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x274ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x274adc: 0x12630030  beq         $s3, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x274ADCu;
    {
        const bool branch_taken_0x274adc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x274adc) {
            ctx->pc = 0x274BA0u;
            return;
        }
    }
    ctx->pc = 0x274AE4u;
    // 0x274ae4: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x274ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x274ae8: 0xae630100  sw          $v1, 0x100($s3)
    ctx->pc = 0x274ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 3));
    // 0x274aec: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x274aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x274af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274af4: 0x0  nop
    ctx->pc = 0x274af4u;
    // NOP
    // 0x274af8: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x274af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x274afc: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x274afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x274b00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b04: 0x0  nop
    ctx->pc = 0x274b04u;
    // NOP
    // 0x274b08: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x274b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x274b0c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x274b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x274b10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b14: 0x0  nop
    ctx->pc = 0x274b14u;
    // NOP
    // 0x274b18: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x274b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x274b1c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x274b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x274b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b24: 0x0  nop
    ctx->pc = 0x274b24u;
    // NOP
    // 0x274b28: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x274b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x274b2c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x274b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x274b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b34: 0x0  nop
    ctx->pc = 0x274b34u;
    // NOP
    // 0x274b38: 0xe6600064  swc1        $f0, 0x64($s3)
    ctx->pc = 0x274b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x274b3c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x274b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x274b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b44: 0x0  nop
    ctx->pc = 0x274b44u;
    // NOP
    // 0x274b48: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x274b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x274b4c: 0x3c02bfae  lui         $v0, 0xBFAE
    ctx->pc = 0x274b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49070 << 16));
    // 0x274b50: 0x34435727  ori         $v1, $v0, 0x5727
    ctx->pc = 0x274b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22311);
    // 0x274b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b58: 0x0  nop
    ctx->pc = 0x274b58u;
    // NOP
    // 0x274b5c: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x274b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x274b60: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274B60u;
    SET_GPR_U32(ctx, 31, 0x274B68u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274B60u, 0x274B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B68u;
label_274b68:
    // 0x274b68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x274b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x274b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x274b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x274b70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274b74: 0x0  nop
    ctx->pc = 0x274b74u;
    // NOP
    // 0x274b78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274b7c: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x274b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x274b80: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274B80u;
    SET_GPR_U32(ctx, 31, 0x274B88u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274B80u, 0x274B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B88u;
label_274b88:
    // 0x274b88: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x274b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x274b8c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x274b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x274b90: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x274b90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274b94: 0x0  nop
    ctx->pc = 0x274b94u;
    // NOP
    // 0x274b98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274b9c: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x274b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    ctx->pc = 0x274ba0u;
}
