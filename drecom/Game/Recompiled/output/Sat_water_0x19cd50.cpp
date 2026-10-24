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

// Function: Sat_water
// Address: 0x19cd50 - 0x19ce00
void Sat_water_0x19cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_water_0x19cd50");
#endif

    ctx->pc = 0x19cd50u;

    // 0x19cd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cd54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19cd58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cd5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x19cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x19cd60: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x19cd60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19cd64: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19cd68: 0x2450fb90  addiu       $s0, $v0, -0x470
    ctx->pc = 0x19cd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966160));
    // 0x19cd6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFB90u));
    // 0x19cd70: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cd74: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cd78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cd78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cd7c: 0x0  nop
    ctx->pc = 0x19cd7cu;
    // NOP
    // 0x19cd80: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x19CD80u;
    {
        const bool branch_taken_0x19cd80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cd80) {
            ctx->pc = 0x19CDE8u;
            goto label_19cde8;
        }
    }
    ctx->pc = 0x19CD88u;
    // 0x19cd88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cd8c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x19cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19cd90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19cd94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19CD94u;
    {
        const bool branch_taken_0x19cd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd94) {
            ctx->pc = 0x19CDCCu;
            goto label_19cdcc;
        }
    }
    ctx->pc = 0x19CD9Cu;
    // 0x19cd9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cda0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x19cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cda4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cda8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cdac: 0x0  nop
    ctx->pc = 0x19cdacu;
    // NOP
    // 0x19cdb0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x19CDB0u;
    {
        const bool branch_taken_0x19cdb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cdb0) {
            ctx->pc = 0x19CDE8u;
            goto label_19cde8;
        }
    }
    ctx->pc = 0x19CDB8u;
    // 0x19cdb8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cdbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cdc0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x19cdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x19cdc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CDC4u;
    {
        const bool branch_taken_0x19cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cdc4) {
            ctx->pc = 0x19CDE8u;
            goto label_19cde8;
        }
    }
    ctx->pc = 0x19CDCCu;
label_19cdcc:
    // 0x19cdcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cdd0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x19cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19cdd4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19cdd8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x19cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x19cddc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19cddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cde0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cde4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x19cde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_19cde8:
    // 0x19cde8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cdec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cdecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cdf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cdf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cdf4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19cdf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CE00u;
}
