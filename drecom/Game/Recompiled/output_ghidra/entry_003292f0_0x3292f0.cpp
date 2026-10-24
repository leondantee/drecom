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

// Function: entry_003292f0
// Address: 0x3292f0 - 0x32931c
void entry_003292f0_0x3292f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003292f0_0x3292f0");
#endif

    ctx->pc = 0x3292f0u;

    // 0x3292f0: 0xc6615e00  lwc1        $f1, 0x5E00($s3)
    ctx->pc = 0x3292f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3292f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3292f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3292f8: 0x0  nop
    ctx->pc = 0x3292f8u;
    // NOP
    // 0x3292fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3292fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329300: 0x0  nop
    ctx->pc = 0x329300u;
    // NOP
    // 0x329304: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x329304u;
    {
        const bool branch_taken_0x329304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x329304) {
            ctx->pc = 0x32931Cu;
            return;
        }
    }
    ctx->pc = 0x32930Cu;
    // 0x32930c: 0xc6605e00  lwc1        $f0, 0x5E00($s3)
    ctx->pc = 0x32930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329310: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x329310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x329314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x329314u;
    {
        const bool branch_taken_0x329314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329314) {
            ctx->pc = 0x329328u;
            return;
        }
    }
    ctx->pc = 0x32931Cu;
}
