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

// Function: entry_0026e85c
// Address: 0x26e85c - 0x26e8a0
void entry_0026e85c_0x26e85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e85c_0x26e85c");
#endif

    switch (ctx->pc) {
        case 0x26e874u: goto label_26e874;
        default: break;
    }

    ctx->pc = 0x26e85cu;

    // 0x26e85c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e860: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e864: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x26e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e868: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x26e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26e86c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x26E86Cu;
    SET_GPR_U32(ctx, 31, 0x26E874u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x26E86Cu, 0x26E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E874u;
label_26e874:
    // 0x26e874: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26e874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x26e878: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e87c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e880: 0x0  nop
    ctx->pc = 0x26e880u;
    // NOP
    // 0x26e884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e888: 0x0  nop
    ctx->pc = 0x26e888u;
    // NOP
    // 0x26e88c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26E88Cu;
    {
        const bool branch_taken_0x26e88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e88c) {
            ctx->pc = 0x26E8A0u;
            return;
        }
    }
    ctx->pc = 0x26E894u;
    // 0x26e894: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x26e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e898: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26e898u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26e89c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x26e8a0u;
}
