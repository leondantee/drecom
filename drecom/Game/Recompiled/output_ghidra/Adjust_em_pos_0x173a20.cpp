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

// Function: Adjust_em_pos
// Address: 0x173a20 - 0x173b10
void Adjust_em_pos_0x173a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Adjust_em_pos_0x173a20");
#endif

    switch (ctx->pc) {
        case 0x173a48u: goto label_173a48;
        case 0x173a6cu: goto label_173a6c;
        case 0x173ab0u: goto label_173ab0;
        case 0x173ac0u: goto label_173ac0;
        case 0x173ae4u: goto label_173ae4;
        case 0x173b00u: goto label_173b00;
        default: break;
    }

    ctx->pc = 0x173a20u;

    // 0x173a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173a24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x173a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x173a28: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x173a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x173a2c: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x173a2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x173a30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173a34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173a38: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x173a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x173a3c: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x173a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173a40: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x173A40u;
    SET_GPR_U32(ctx, 31, 0x173A48u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x173A48u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173A48u) { return; }
    ctx->pc = 0x173A48u;
label_173a48:
    // 0x173a48: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x173a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173a4c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x173a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173a50: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x173a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173a54: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x173a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173a58: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x173a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173a5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173a60: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x173a60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x173a64: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x173A64u;
    SET_GPR_U32(ctx, 31, 0x173A6Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x173A64u, 0x173A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A6Cu;
label_173a6c:
    // 0x173a6c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x173a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x173a70: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x173a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173a74: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x173a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x173a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173a7c: 0x0  nop
    ctx->pc = 0x173a7cu;
    // NOP
    // 0x173a80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x173a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173a84: 0x0  nop
    ctx->pc = 0x173a84u;
    // NOP
    // 0x173a88: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x173A88u;
    {
        const bool branch_taken_0x173a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173a88) {
            ctx->pc = 0x173AC8u;
            goto label_173ac8;
        }
    }
    ctx->pc = 0x173A90u;
    // 0x173a90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x173a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173a94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173a98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173a9c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x173a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x173aa0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x173aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173aa4: 0x244612a0  addiu       $a2, $v0, 0x12A0
    ctx->pc = 0x173aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x173aa8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x173AA8u;
    SET_GPR_U32(ctx, 31, 0x173AB0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x173AA8u, 0x173AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AB0u;
label_173ab0:
    // 0x173ab0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ab4: 0x244412a0  addiu       $a0, $v0, 0x12A0
    ctx->pc = 0x173ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x173ab8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x173AB8u;
    SET_GPR_U32(ctx, 31, 0x173AC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x173AB8u, 0x173AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AC0u;
label_173ac0:
    // 0x173ac0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x173AC0u;
    {
        const bool branch_taken_0x173ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ac0) {
            ctx->pc = 0x173B00u;
            goto label_173b00;
        }
    }
    ctx->pc = 0x173AC8u;
label_173ac8:
    // 0x173ac8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173acc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ad0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x173ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173ad4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x173ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x173ad8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x173ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173adc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x173ADCu;
    SET_GPR_U32(ctx, 31, 0x173AE4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x173ADCu, 0x173AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AE4u;
label_173ae4:
    // 0x173ae4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ae8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173aec: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x173aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x173af0: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x173af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x173af4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x173af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173af8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x173AF8u;
    SET_GPR_U32(ctx, 31, 0x173B00u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x173AF8u, 0x173B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B00u;
label_173b00:
    // 0x173b00: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173b00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x173b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173b08: 0x3e00008  jr          $ra
    ctx->pc = 0x173B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173B10u;
}
