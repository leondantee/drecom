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

// Function: entry_00311a84
// Address: 0x311a84 - 0x311be8
void entry_00311a84_0x311a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311a84_0x311a84");
#endif

    switch (ctx->pc) {
        case 0x311a90u: goto label_311a90;
        case 0x311b00u: goto label_311b00;
        case 0x311b74u: goto label_311b74;
        default: break;
    }

    ctx->pc = 0x311a84u;

    // 0x311a84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x311a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311a88: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x311A88u;
    SET_GPR_U32(ctx, 31, 0x311A90u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x311A88u, 0x311A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A90u;
label_311a90:
    // 0x311a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a94: 0x0  nop
    ctx->pc = 0x311a94u;
    // NOP
    // 0x311a98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x311a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x311a9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311aa0: 0x0  nop
    ctx->pc = 0x311aa0u;
    // NOP
    // 0x311aa4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x311aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x311aa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311aac: 0x0  nop
    ctx->pc = 0x311aacu;
    // NOP
    // 0x311ab0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x311ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x311ab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311abc: 0x0  nop
    ctx->pc = 0x311abcu;
    // NOP
    // 0x311ac0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x311ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x311ac4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x311ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311ac8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x311ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x311acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311ad0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x311ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311ad4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x311ad4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311ad8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x311ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x311adc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x311adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311ae0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x311ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311ae4: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x311ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x311ae8: 0xc7ae0064  lwc1        $f14, 0x64($sp)
    ctx->pc = 0x311ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x311aec: 0xc7af0068  lwc1        $f15, 0x68($sp)
    ctx->pc = 0x311aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x311af0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x311af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311af4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x311af4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311af8: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x311AF8u;
    SET_GPR_U32(ctx, 31, 0x311B00u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x311AF8u, 0x311B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B00u;
label_311b00:
    // 0x311b00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b04: 0x0  nop
    ctx->pc = 0x311b04u;
    // NOP
    // 0x311b08: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x311b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x311b0c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x311b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x311b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b14: 0x0  nop
    ctx->pc = 0x311b14u;
    // NOP
    // 0x311b18: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x311b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x311b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b20: 0x0  nop
    ctx->pc = 0x311b20u;
    // NOP
    // 0x311b24: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x311b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x311b28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b30: 0x0  nop
    ctx->pc = 0x311b30u;
    // NOP
    // 0x311b34: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x311b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x311b38: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x311b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311b3c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x311b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x311b40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311b44: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x311b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311b48: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x311b48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311b4c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x311b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x311b50: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x311b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311b54: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x311b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311b58: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x311b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x311b5c: 0xc7ae0064  lwc1        $f14, 0x64($sp)
    ctx->pc = 0x311b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x311b60: 0xc7af0068  lwc1        $f15, 0x68($sp)
    ctx->pc = 0x311b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x311b64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x311b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311b68: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x311b68u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311b6c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x311B6Cu;
    SET_GPR_U32(ctx, 31, 0x311B74u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x311B6Cu, 0x311B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B74u;
label_311b74:
    // 0x311b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b78: 0x0  nop
    ctx->pc = 0x311b78u;
    // NOP
    // 0x311b7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x311b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x311b80: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x311b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x311b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b88: 0x0  nop
    ctx->pc = 0x311b88u;
    // NOP
    // 0x311b8c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x311b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x311b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b94: 0x0  nop
    ctx->pc = 0x311b94u;
    // NOP
    // 0x311b98: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x311b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x311b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311ba4: 0x0  nop
    ctx->pc = 0x311ba4u;
    // NOP
    // 0x311ba8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x311ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x311bac: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x311bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311bb0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x311bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x311bb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311bb8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x311bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311bbc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x311bbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311bc0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x311bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x311bc4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x311bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311bc8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x311bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311bcc: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x311bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x311bd0: 0xc7ae0064  lwc1        $f14, 0x64($sp)
    ctx->pc = 0x311bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x311bd4: 0xc7af0068  lwc1        $f15, 0x68($sp)
    ctx->pc = 0x311bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x311bd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x311bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311bdc: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x311bdcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311be0: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x311BE0u;
    SET_GPR_U32(ctx, 31, 0x311BE8u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x311BE0u, 0x311BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BE8u;
}
