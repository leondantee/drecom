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

// Function: entry_0026edac
// Address: 0x26edac - 0x26edf0
void entry_0026edac_0x26edac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026edac_0x26edac");
#endif

    switch (ctx->pc) {
        case 0x26edc4u: goto label_26edc4;
        default: break;
    }

    ctx->pc = 0x26edacu;

    // 0x26edac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26edb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26edb4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x26edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26edb8: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x26edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26edbc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x26EDBCu;
    SET_GPR_U32(ctx, 31, 0x26EDC4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x26EDBCu, 0x26EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDC4u;
label_26edc4:
    // 0x26edc4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26edc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x26edc8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26edcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26edccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26edd0: 0x0  nop
    ctx->pc = 0x26edd0u;
    // NOP
    // 0x26edd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26edd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26edd8: 0x0  nop
    ctx->pc = 0x26edd8u;
    // NOP
    // 0x26eddc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26EDDCu;
    {
        const bool branch_taken_0x26eddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26eddc) {
            ctx->pc = 0x26EDF0u;
            return;
        }
    }
    ctx->pc = 0x26EDE4u;
    // 0x26ede4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x26ede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ede8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26ede8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26edec: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26edecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x26edf0u;
}
