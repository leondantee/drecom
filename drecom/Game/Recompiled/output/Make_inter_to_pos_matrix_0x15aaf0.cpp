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

// Function: Make_inter_to_pos_matrix
// Address: 0x15aaf0 - 0x15aba8
void Make_inter_to_pos_matrix_0x15aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Make_inter_to_pos_matrix_0x15aaf0");
#endif

    switch (ctx->pc) {
        case 0x15ab1cu: goto label_15ab1c;
        case 0x15ab40u: goto label_15ab40;
        case 0x15ab54u: goto label_15ab54;
        case 0x15ab6cu: goto label_15ab6c;
        case 0x15ab80u: goto label_15ab80;
        case 0x15ab94u: goto label_15ab94;
        default: break;
    }

    ctx->pc = 0x15aaf0u;

    // 0x15aaf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15aaf4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15aaf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15aafc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x15aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15ab00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15ab04: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x15ab04u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x15ab08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ab0c: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x15ab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x15ab10: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15ab10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x15ab14: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15AB14u;
    SET_GPR_U32(ctx, 31, 0x15AB1Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15AB14u, 0x15AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB1Cu;
label_15ab1c:
    // 0x15ab1c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ab20: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ab24: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15ab24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15ab28: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ab2c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ab30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15ab30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15ab34: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15ab34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15ab38: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15AB38u;
    SET_GPR_U32(ctx, 31, 0x15AB40u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15AB38u, 0x15AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB40u;
label_15ab40:
    // 0x15ab40: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ab44: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x15ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ab48: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x15ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ab4c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15AB4Cu;
    SET_GPR_U32(ctx, 31, 0x15AB54u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15AB4Cu, 0x15AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB54u;
label_15ab54:
    // 0x15ab54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15ab54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15ab58: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15ab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15ab5c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x15ab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ab60: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x15ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ab64: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15AB64u;
    SET_GPR_U32(ctx, 31, 0x15AB6Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15AB64u, 0x15AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB6Cu;
label_15ab6c:
    // 0x15ab6c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15ab6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15ab70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ab74: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x15ab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ab78: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x15AB78u;
    SET_GPR_U32(ctx, 31, 0x15AB80u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x15AB78u, 0x15AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB80u;
label_15ab80:
    // 0x15ab80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ab84: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ab88: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x15ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ab8c: 0xc067808  jal         func_19E020
    ctx->pc = 0x15AB8Cu;
    SET_GPR_U32(ctx, 31, 0x15AB94u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x15AB8Cu, 0x15AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB94u;
label_15ab94:
    // 0x15ab94: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15ab94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ab98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ab98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ab9c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15ab9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15aba0: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ABA8u;
}
