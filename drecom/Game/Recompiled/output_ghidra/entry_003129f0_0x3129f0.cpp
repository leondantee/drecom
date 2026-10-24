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

// Function: entry_003129f0
// Address: 0x3129f0 - 0x312b2c
void entry_003129f0_0x3129f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003129f0_0x3129f0");
#endif

    switch (ctx->pc) {
        case 0x3129f8u: goto label_3129f8;
        case 0x312ac4u: goto label_312ac4;
        case 0x312ae4u: goto label_312ae4;
        case 0x312b08u: goto label_312b08;
        default: break;
    }

    ctx->pc = 0x3129f0u;

    // 0x3129f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x3129F0u;
    SET_GPR_U32(ctx, 31, 0x3129F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3129F0u, 0x3129F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129F8u;
label_3129f8:
    // 0x3129f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3129f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3129fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3129fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312a00: 0x0  nop
    ctx->pc = 0x312a00u;
    // NOP
    // 0x312a04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x312a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312a08: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x312a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x312a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a10: 0x0  nop
    ctx->pc = 0x312a10u;
    // NOP
    // 0x312a14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312a18: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x312a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x312a1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a24: 0x0  nop
    ctx->pc = 0x312a24u;
    // NOP
    // 0x312a28: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x312a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x312a2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a34: 0x0  nop
    ctx->pc = 0x312a34u;
    // NOP
    // 0x312a38: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x312a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x312a3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a44: 0x0  nop
    ctx->pc = 0x312a44u;
    // NOP
    // 0x312a48: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x312a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x312a4c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a54: 0x0  nop
    ctx->pc = 0x312a54u;
    // NOP
    // 0x312a58: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x312a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x312a5c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x312a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x312a60: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x312a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x312a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a68: 0x0  nop
    ctx->pc = 0x312a68u;
    // NOP
    // 0x312a6c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x312a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x312a70: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x312a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a74: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x312a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x312a78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x312a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312a7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x312a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a80: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x312a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x312a84: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x312a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312a88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x312a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a8c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x312a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x312a90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x312a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312a94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x312a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a98: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x312a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x312a9c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x312a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312aa0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x312aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x312aa4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x312aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312aa8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x312aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x312aac: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x312aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312ab0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x312ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x312ab4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x312ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x312ab8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x312ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x312abc: 0xc067648  jal         func_19D920
    ctx->pc = 0x312ABCu;
    SET_GPR_U32(ctx, 31, 0x312AC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312ABCu, 0x312AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312AC4u;
label_312ac4:
    // 0x312ac4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x312ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x312ac8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312ad0: 0x0  nop
    ctx->pc = 0x312ad0u;
    // NOP
    // 0x312ad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312ad8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x312ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x312adc: 0xc067648  jal         func_19D920
    ctx->pc = 0x312ADCu;
    SET_GPR_U32(ctx, 31, 0x312AE4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312ADCu, 0x312AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312AE4u;
label_312ae4:
    // 0x312ae4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x312ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x312ae8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312aec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312af0: 0x0  nop
    ctx->pc = 0x312af0u;
    // NOP
    // 0x312af4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312af8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x312af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x312afc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x312afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x312b00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x312B00u;
    SET_GPR_U32(ctx, 31, 0x312B08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x312B00u, 0x312B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B08u;
label_312b08:
    // 0x312b08: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x312b08u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312b0c: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x312b0cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x312b10: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x312b10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x312b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312b20: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x312b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312b24: 0x3e00008  jr          $ra
    ctx->pc = 0x312B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312B2Cu;
}
