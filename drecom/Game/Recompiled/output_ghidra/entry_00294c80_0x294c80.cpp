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

// Function: entry_00294c80
// Address: 0x294c80 - 0x294cb8
void entry_00294c80_0x294c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294c80_0x294c80");
#endif

    ctx->pc = 0x294c80u;

    // 0x294c80: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x294c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c84: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x294c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294c88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x294c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x294c8c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x294c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x294c90: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x294c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c98: 0x0  nop
    ctx->pc = 0x294c98u;
    // NOP
    // 0x294c9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x294c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294ca0: 0x0  nop
    ctx->pc = 0x294ca0u;
    // NOP
    // 0x294ca4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x294CA4u;
    {
        const bool branch_taken_0x294ca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294ca4) {
            ctx->pc = 0x294CB8u;
            return;
        }
    }
    ctx->pc = 0x294CACu;
    // 0x294cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294cb0: 0x0  nop
    ctx->pc = 0x294cb0u;
    // NOP
    // 0x294cb4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x294cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->pc = 0x294cb8u;
}
