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

// Function: entry_002d2a14
// Address: 0x2d2a14 - 0x2d2ae0
void entry_002d2a14_0x2d2a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2a14_0x2d2a14");
#endif

    switch (ctx->pc) {
        case 0x2d2a50u: goto label_2d2a50;
        case 0x2d2a94u: goto label_2d2a94;
        default: break;
    }

    ctx->pc = 0x2d2a14u;

    // 0x2d2a14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2a18: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d2a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2a1c: 0x3c024289  lui         $v0, 0x4289
    ctx->pc = 0x2d2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17033 << 16));
    // 0x2d2a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2a24: 0x0  nop
    ctx->pc = 0x2d2a24u;
    // NOP
    // 0x2d2a28: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2d2a28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2a2c: 0x0  nop
    ctx->pc = 0x2d2a2cu;
    // NOP
    // 0x2d2a30: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x2D2A30u;
    {
        const bool branch_taken_0x2d2a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a30) {
            ctx->pc = 0x2D2AE0u;
            return;
        }
    }
    ctx->pc = 0x2D2A38u;
    // 0x2d2a38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2a3c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2a40: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2d2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d2a44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d2a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2a48: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2D2A48u;
    SET_GPR_U32(ctx, 31, 0x2D2A50u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2D2A48u, 0x2D2A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A50u;
label_2d2a50:
    // 0x2d2a50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2a54: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2d2a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2a58: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x2d2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x2d2a5c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d2a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2d2a60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d2a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2a64: 0x0  nop
    ctx->pc = 0x2d2a64u;
    // NOP
    // 0x2d2a68: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2d2a68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d2a6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d2a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2a70: 0x0  nop
    ctx->pc = 0x2d2a70u;
    // NOP
    // 0x2d2a74: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2D2A74u;
    {
        const bool branch_taken_0x2d2a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a74) {
            ctx->pc = 0x2D2AE0u;
            return;
        }
    }
    ctx->pc = 0x2D2A7Cu;
    // 0x2d2a7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2a80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2a84: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2d2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d2a88: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2a8c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2D2A8Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A94u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2D2A8Cu, 0x2D2A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A94u;
label_2d2a94:
    // 0x2d2a94: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x2d2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x2d2a98: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d2a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2d2a9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d2a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2aa0: 0x0  nop
    ctx->pc = 0x2d2aa0u;
    // NOP
    // 0x2d2aa4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d2aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d2aa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2aac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2d2ab0: 0x3c024289  lui         $v0, 0x4289
    ctx->pc = 0x2d2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17033 << 16));
    // 0x2d2ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2ab8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2abc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d2ac0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2d2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2d2ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2ac8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2acc: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2d2accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2d2ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2ad4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2ad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2adc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d2adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d2ae0u;
}
