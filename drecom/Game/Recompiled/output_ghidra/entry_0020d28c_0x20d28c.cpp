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

// Function: entry_0020d28c
// Address: 0x20d28c - 0x20d2d0
void entry_0020d28c_0x20d28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d28c_0x20d28c");
#endif

    switch (ctx->pc) {
        case 0x20d2a4u: goto label_20d2a4;
        default: break;
    }

    ctx->pc = 0x20d28cu;

    // 0x20d28c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d290: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d294: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20d298: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x20d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20d29c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x20D29Cu;
    SET_GPR_U32(ctx, 31, 0x20D2A4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x20D29Cu, 0x20D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2A4u;
label_20d2a4:
    // 0x20d2a4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x20d2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x20d2a8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x20d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d2ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d2b0: 0x0  nop
    ctx->pc = 0x20d2b0u;
    // NOP
    // 0x20d2b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20d2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d2b8: 0x0  nop
    ctx->pc = 0x20d2b8u;
    // NOP
    // 0x20d2bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20D2BCu;
    {
        const bool branch_taken_0x20d2bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d2bc) {
            ctx->pc = 0x20D2D0u;
            return;
        }
    }
    ctx->pc = 0x20D2C4u;
    // 0x20d2c4: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x20d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d2c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20d2c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20d2cc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x20d2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x20d2d0u;
}
