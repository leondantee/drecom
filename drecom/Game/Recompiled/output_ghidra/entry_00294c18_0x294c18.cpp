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

// Function: entry_00294c18
// Address: 0x294c18 - 0x294c50
void entry_00294c18_0x294c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294c18_0x294c18");
#endif

    ctx->pc = 0x294c18u;

    // 0x294c18: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x294c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c1c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x294c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294c20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x294c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x294c24: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x294c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x294c28: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x294c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c30: 0x0  nop
    ctx->pc = 0x294c30u;
    // NOP
    // 0x294c34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x294c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294c38: 0x0  nop
    ctx->pc = 0x294c38u;
    // NOP
    // 0x294c3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x294C3Cu;
    {
        const bool branch_taken_0x294c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294c3c) {
            ctx->pc = 0x294C50u;
            return;
        }
    }
    ctx->pc = 0x294C44u;
    // 0x294c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c48: 0x0  nop
    ctx->pc = 0x294c48u;
    // NOP
    // 0x294c4c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x294c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    ctx->pc = 0x294c50u;
}
