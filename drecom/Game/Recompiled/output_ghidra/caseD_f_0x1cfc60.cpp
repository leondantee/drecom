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

// Function: caseD_f
// Address: 0x1cfc60 - 0x1cfcd0
void caseD_f_0x1cfc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1cfc60");
#endif

    switch (ctx->pc) {
        case 0x1cfc84u: goto label_1cfc84;
        default: break;
    }

    ctx->pc = 0x1cfc60u;

    // 0x1cfc60: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cfc60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfc64: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1cfc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1cfc68: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1cfc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1cfc6c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cfc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cfc70: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1cfc70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1cfc74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfc78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfc7c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CFC7Cu, 0x1CFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC84u;
label_1cfc84:
    // 0x1cfc84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cfc84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfc88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfc8c: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1cfc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfc90: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1cfc94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfc94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfc98: 0x0  nop
    ctx->pc = 0x1cfc98u;
    // NOP
    // 0x1cfc9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cfca0: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1cfca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x1cfca4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfca8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cfca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfcac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfcb0: 0x0  nop
    ctx->pc = 0x1cfcb0u;
    // NOP
    // 0x1cfcb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfcb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfcb8: 0x0  nop
    ctx->pc = 0x1cfcb8u;
    // NOP
    // 0x1cfcbc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFCBCu;
    {
        const bool branch_taken_0x1cfcbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfcbc) {
            ctx->pc = 0x1CFCD0u;
            return;
        }
    }
    ctx->pc = 0x1CFCC4u;
    // 0x1cfcc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfcc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfcc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfccc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cfcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1cfcd0u;
}
