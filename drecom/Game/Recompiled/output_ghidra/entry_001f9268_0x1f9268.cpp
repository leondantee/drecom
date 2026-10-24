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

// Function: entry_001f9268
// Address: 0x1f9268 - 0x1f9290
void entry_001f9268_0x1f9268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9268_0x1f9268");
#endif

    ctx->pc = 0x1f9268u;

    // 0x1f9268: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f9268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f926c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9270: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f9270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f9274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9278: 0x0  nop
    ctx->pc = 0x1f9278u;
    // NOP
    // 0x1f927c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F927Cu;
    {
        const bool branch_taken_0x1f927c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f927c) {
            ctx->pc = 0x1F9290u;
            return;
        }
    }
    ctx->pc = 0x1F9284u;
    // 0x1f9284: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f9284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9288: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f9288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f928c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x1f9290u;
}
