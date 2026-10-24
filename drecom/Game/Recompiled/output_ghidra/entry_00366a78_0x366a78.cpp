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

// Function: entry_00366a78
// Address: 0x366a78 - 0x366adc
void entry_00366a78_0x366a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366a78_0x366a78");
#endif

    switch (ctx->pc) {
        case 0x366a88u: goto label_366a88;
        case 0x366a94u: goto label_366a94;
        default: break;
    }

    ctx->pc = 0x366a78u;

    // 0x366a78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a7c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x366a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x366a80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366A80u;
    SET_GPR_U32(ctx, 31, 0x366A88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366A80u, 0x366A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A88u;
label_366a88:
    // 0x366a88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a8c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366A8Cu;
    SET_GPR_U32(ctx, 31, 0x366A94u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366A8Cu, 0x366A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A94u;
label_366a94:
    // 0x366a94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a98: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x366a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366a9c: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x366a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
    // 0x366aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366aa4: 0x0  nop
    ctx->pc = 0x366aa4u;
    // NOP
    // 0x366aa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x366aa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x366aac: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x366aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x366ab0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ab4: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x366ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366abc: 0x0  nop
    ctx->pc = 0x366abcu;
    // NOP
    // 0x366ac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x366ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366ac4: 0x0  nop
    ctx->pc = 0x366ac4u;
    // NOP
    // 0x366ac8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x366AC8u;
    {
        const bool branch_taken_0x366ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x366ac8) {
            ctx->pc = 0x366ADCu;
            return;
        }
    }
    ctx->pc = 0x366AD0u;
    // 0x366ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366ad4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ad8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x366ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x366adcu;
}
