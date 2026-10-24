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

// Function: entry_002d4a08
// Address: 0x2d4a08 - 0x2d4aec
void entry_002d4a08_0x2d4a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4a08_0x2d4a08");
#endif

    switch (ctx->pc) {
        case 0x2d4a40u: goto label_2d4a40;
        case 0x2d4a74u: goto label_2d4a74;
        case 0x2d4aa8u: goto label_2d4aa8;
        case 0x2d4adcu: goto label_2d4adc;
        default: break;
    }

    ctx->pc = 0x2d4a08u;

    // 0x2d4a08: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d4a0c: 0x244287a0  addiu       $v0, $v0, -0x7860
    ctx->pc = 0x2d4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936480));
    // 0x2d4a10: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4a14: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d4a14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3987A0u));
    // 0x2d4a18: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d4a18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d4a1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4a24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a28: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4a2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4a30: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4a34: 0x24478be0  addiu       $a3, $v0, -0x7420
    ctx->pc = 0x2d4a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937568));
    // 0x2d4a38: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4A38u;
    SET_GPR_U32(ctx, 31, 0x2D4A40u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4A38u, 0x2D4A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A40u;
label_2d4a40:
    // 0x2d4a40: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2d4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2d4a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4a48: 0x0  nop
    ctx->pc = 0x2d4a48u;
    // NOP
    // 0x2d4a4c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d4a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a54: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4a58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a5c: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4a60: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4a64: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4a68: 0x24478be0  addiu       $a3, $v0, -0x7420
    ctx->pc = 0x2d4a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937568));
    // 0x2d4a6c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4A6Cu;
    SET_GPR_U32(ctx, 31, 0x2D4A74u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4A6Cu, 0x2D4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A74u;
label_2d4a74:
    // 0x2d4a74: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2d4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2d4a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4a7c: 0x0  nop
    ctx->pc = 0x2d4a7cu;
    // NOP
    // 0x2d4a80: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d4a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4a84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4a8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a90: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4a94: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4a98: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4a9c: 0x24478be0  addiu       $a3, $v0, -0x7420
    ctx->pc = 0x2d4a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937568));
    // 0x2d4aa0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4AA0u;
    SET_GPR_U32(ctx, 31, 0x2D4AA8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4AA0u, 0x2D4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AA8u;
label_2d4aa8:
    // 0x2d4aa8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d4aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4ab0: 0x0  nop
    ctx->pc = 0x2d4ab0u;
    // NOP
    // 0x2d4ab4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d4ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4ab8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4abc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4ac0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4ac4: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4ac8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4acc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4ad0: 0x24478be0  addiu       $a3, $v0, -0x7420
    ctx->pc = 0x2d4ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937568));
    // 0x2d4ad4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4AD4u;
    SET_GPR_U32(ctx, 31, 0x2D4ADCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4AD4u, 0x2D4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4ADCu;
label_2d4adc:
    // 0x2d4adc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4ae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d4ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4ae4: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D4AE4u;
    SET_GPR_U32(ctx, 31, 0x2D4AECu);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D4AE4u, 0x2D4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AECu;
}
