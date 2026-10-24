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

// Function: entry_003749f0
// Address: 0x3749f0 - 0x374ae8
void entry_003749f0_0x3749f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003749f0_0x3749f0");
#endif

    switch (ctx->pc) {
        case 0x374a40u: goto label_374a40;
        case 0x374a60u: goto label_374a60;
        case 0x374ab4u: goto label_374ab4;
        case 0x374ad4u: goto label_374ad4;
        default: break;
    }

    ctx->pc = 0x3749f0u;

    // 0x3749f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3749f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3749f4: 0x0  nop
    ctx->pc = 0x3749f4u;
    // NOP
    // 0x3749f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3749f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3749fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3749fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a00: 0x0  nop
    ctx->pc = 0x374a00u;
    // NOP
    // 0x374a04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x374a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x374a08: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x374a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x374a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a10: 0x0  nop
    ctx->pc = 0x374a10u;
    // NOP
    // 0x374a14: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x374a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x374a18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x374a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x374a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a20: 0x0  nop
    ctx->pc = 0x374a20u;
    // NOP
    // 0x374a24: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x374a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x374a28: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374a2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x374a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374a30: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x374a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374a34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x374a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374a38: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x374A38u;
    SET_GPR_U32(ctx, 31, 0x374A40u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x374A40u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374A40u) { return; }
    ctx->pc = 0x374A40u;
label_374a40:
    // 0x374a40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374a44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x374a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374a48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x374a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x374a4c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x374a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x374a50: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x374a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374a54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x374a54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374a58: 0xc059e1c  jal         func_167870
    ctx->pc = 0x374A58u;
    SET_GPR_U32(ctx, 31, 0x374A60u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x374A58u, 0x374A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A60u;
label_374a60:
    // 0x374a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a64: 0x0  nop
    ctx->pc = 0x374a64u;
    // NOP
    // 0x374a68: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x374a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x374a6c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x374a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x374a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a74: 0x0  nop
    ctx->pc = 0x374a74u;
    // NOP
    // 0x374a78: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x374a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x374a7c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x374a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x374a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a84: 0x0  nop
    ctx->pc = 0x374a84u;
    // NOP
    // 0x374a88: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x374a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x374a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x374a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x374a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a94: 0x0  nop
    ctx->pc = 0x374a94u;
    // NOP
    // 0x374a98: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x374a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x374a9c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374aa0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x374aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374aa4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x374aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374aa8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x374aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374aac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x374AACu;
    SET_GPR_U32(ctx, 31, 0x374AB4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x374AB4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374AB4u) { return; }
    ctx->pc = 0x374AB4u;
label_374ab4:
    // 0x374ab4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374ab8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x374ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374abc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x374abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x374ac0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x374ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x374ac4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x374ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374ac8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x374ac8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374acc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x374ACCu;
    SET_GPR_U32(ctx, 31, 0x374AD4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x374ACCu, 0x374AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374AD4u;
label_374ad4:
    // 0x374ad4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x374ad4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374adc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x374adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x374ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x374AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374AE8u;
}
