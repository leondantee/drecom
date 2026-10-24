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

// Function: caseD_11
// Address: 0x1cfdc8 - 0x1cfe40
void caseD_11_0x1cfdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x1cfdc8");
#endif

    switch (ctx->pc) {
        case 0x1cfdf4u: goto label_1cfdf4;
        default: break;
    }

    ctx->pc = 0x1cfdc8u;

    // 0x1cfdc8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfdcc: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1cfdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cfdd0: 0x3c078040  lui         $a3, 0x8040
    ctx->pc = 0x1cfdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32832 << 16));
    // 0x1cfdd4: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1cfdd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1cfdd8: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1cfdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x1cfddc: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cfddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfde0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1cfde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cfde4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfde8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfde8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfdec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CFDECu;
    SET_GPR_U32(ctx, 31, 0x1CFDF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CFDECu, 0x1CFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDF4u;
label_1cfdf4:
    // 0x1cfdf4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1cfdf4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfdf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfdfc: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cfdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfe00: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x1cfe00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x1cfe04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cfe04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfe08: 0x0  nop
    ctx->pc = 0x1cfe08u;
    // NOP
    // 0x1cfe0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfe0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cfe10: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cfe10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1cfe14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfe18: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cfe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfe1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfe1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfe20: 0x0  nop
    ctx->pc = 0x1cfe20u;
    // NOP
    // 0x1cfe24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfe24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfe28: 0x0  nop
    ctx->pc = 0x1cfe28u;
    // NOP
    // 0x1cfe2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFE2Cu;
    {
        const bool branch_taken_0x1cfe2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfe2c) {
            ctx->pc = 0x1CFE40u;
            return;
        }
    }
    ctx->pc = 0x1CFE34u;
    // 0x1cfe34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfe34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfe38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfe3c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cfe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1cfe40u;
}
