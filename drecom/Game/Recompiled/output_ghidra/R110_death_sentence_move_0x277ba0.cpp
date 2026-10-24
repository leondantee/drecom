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

// Function: R110_death_sentence_move
// Address: 0x277ba0 - 0x277c40
void R110_death_sentence_move_0x277ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R110_death_sentence_move_0x277ba0");
#endif

    switch (ctx->pc) {
        case 0x277bb8u: goto label_277bb8;
        case 0x277c1cu: goto label_277c1c;
        case 0x277c2cu: goto label_277c2c;
        default: break;
    }

    ctx->pc = 0x277ba0u;

    // 0x277ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277ba4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x277ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x277ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x277bac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277bb0: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x277bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x277bb4: 0x0  nop
    ctx->pc = 0x277bb4u;
    // NOP
label_277bb8:
    // 0x277bb8: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x277bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277bbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x277bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x277bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277bc4: 0x0  nop
    ctx->pc = 0x277bc4u;
    // NOP
    // 0x277bc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x277bcc: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x277bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x277bd0: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x277bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277bd4: 0x3c02c5a1  lui         $v0, 0xC5A1
    ctx->pc = 0x277bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50593 << 16));
    // 0x277bd8: 0x344258e1  ori         $v0, $v0, 0x58E1
    ctx->pc = 0x277bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22753);
    // 0x277bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277be0: 0x0  nop
    ctx->pc = 0x277be0u;
    // NOP
    // 0x277be4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277be8: 0x0  nop
    ctx->pc = 0x277be8u;
    // NOP
    // 0x277bec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x277BECu;
    {
        const bool branch_taken_0x277bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277bec) {
            ctx->pc = 0x277C10u;
            goto label_277c10;
        }
    }
    ctx->pc = 0x277BF4u;
    // 0x277bf4: 0x3c02c5a1  lui         $v0, 0xC5A1
    ctx->pc = 0x277bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50593 << 16));
    // 0x277bf8: 0x344258e1  ori         $v0, $v0, 0x58E1
    ctx->pc = 0x277bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22753);
    // 0x277bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277c00: 0x0  nop
    ctx->pc = 0x277c00u;
    // NOP
    // 0x277c04: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x277c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x277c08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x277C08u;
    {
        const bool branch_taken_0x277c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c08) {
            ctx->pc = 0x277C24u;
            goto label_277c24;
        }
    }
    ctx->pc = 0x277C10u;
label_277c10:
    // 0x277c10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277c14: 0xc084964  jal         func_212590
    ctx->pc = 0x277C14u;
    SET_GPR_U32(ctx, 31, 0x277C1Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x277C14u, 0x277C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C1Cu;
label_277c1c:
    // 0x277c1c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x277C1Cu;
    {
        const bool branch_taken_0x277c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c1c) {
            ctx->pc = 0x277BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277bb8;
        }
    }
    ctx->pc = 0x277C24u;
label_277c24:
    // 0x277c24: 0xc084934  jal         func_2124D0
    ctx->pc = 0x277C24u;
    SET_GPR_U32(ctx, 31, 0x277C2Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x277C24u, 0x277C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C2Cu;
label_277c2c:
    // 0x277c2c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x277c2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277c34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x277c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277c38: 0x3e00008  jr          $ra
    ctx->pc = 0x277C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277C40u;
}
