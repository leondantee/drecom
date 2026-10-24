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

// Function: Make_pos_to_inter_matrix
// Address: 0x15abb0 - 0x15ac68
void Make_pos_to_inter_matrix_0x15abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Make_pos_to_inter_matrix_0x15abb0");
#endif

    switch (ctx->pc) {
        case 0x15abdcu: goto label_15abdc;
        case 0x15ac00u: goto label_15ac00;
        case 0x15ac14u: goto label_15ac14;
        case 0x15ac2cu: goto label_15ac2c;
        case 0x15ac40u: goto label_15ac40;
        case 0x15ac54u: goto label_15ac54;
        default: break;
    }

    ctx->pc = 0x15abb0u;

    // 0x15abb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15abb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15abb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15abbc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x15abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15abc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15abc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15abc4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x15abc4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x15abc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15abcc: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x15abccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x15abd0: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x15abd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x15abd4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15ABD4u;
    SET_GPR_U32(ctx, 31, 0x15ABDCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15ABD4u, 0x15ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ABDCu;
label_15abdc:
    // 0x15abdc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abe0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15abe4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15abe4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15abe8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15abf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15abf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15abf4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15abf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15abf8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15ABF8u;
    SET_GPR_U32(ctx, 31, 0x15AC00u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15ABF8u, 0x15AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC00u;
label_15ac00:
    // 0x15ac00: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15ac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ac04: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x15ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ac08: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x15ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ac0c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15AC0Cu;
    SET_GPR_U32(ctx, 31, 0x15AC14u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15AC0Cu, 0x15AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC14u;
label_15ac14:
    // 0x15ac14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15ac14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15ac18: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15ac18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15ac1c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x15ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ac20: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x15ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ac24: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15AC24u;
    SET_GPR_U32(ctx, 31, 0x15AC2Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15AC24u, 0x15AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC2Cu;
label_15ac2c:
    // 0x15ac2c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15ac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15ac30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ac34: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x15ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ac38: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x15AC38u;
    SET_GPR_U32(ctx, 31, 0x15AC40u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x15AC38u, 0x15AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC40u;
label_15ac40:
    // 0x15ac40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ac44: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ac48: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x15ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ac4c: 0xc067808  jal         func_19E020
    ctx->pc = 0x15AC4Cu;
    SET_GPR_U32(ctx, 31, 0x15AC54u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x15AC4Cu, 0x15AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC54u;
label_15ac54:
    // 0x15ac54: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15ac54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ac58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ac58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ac5c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15ac5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ac60: 0x3e00008  jr          $ra
    ctx->pc = 0x15AC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AC68u;
}
