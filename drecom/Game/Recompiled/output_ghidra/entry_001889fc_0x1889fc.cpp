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

// Function: entry_001889fc
// Address: 0x1889fc - 0x188a1c
void entry_001889fc_0x1889fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001889fc_0x1889fc");
#endif

    ctx->pc = 0x1889fcu;

    // 0x1889fc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1889fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188a00: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x188a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188a08: 0x0  nop
    ctx->pc = 0x188a08u;
    // NOP
    // 0x188a0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188A0Cu;
    {
        const bool branch_taken_0x188a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188a0c) {
            ctx->pc = 0x188A1Cu;
            return;
        }
    }
    ctx->pc = 0x188A14u;
    // 0x188a14: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x188a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a18: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x188a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x188a1cu;
}
