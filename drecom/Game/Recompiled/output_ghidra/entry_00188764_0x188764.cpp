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

// Function: entry_00188764
// Address: 0x188764 - 0x1887a0
void entry_00188764_0x188764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188764_0x188764");
#endif

    ctx->pc = 0x188764u;

    // 0x188764: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x188764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188768: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x188768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x18876c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x18876cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x188770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188774: 0x0  nop
    ctx->pc = 0x188774u;
    // NOP
    // 0x188778: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18877c: 0x0  nop
    ctx->pc = 0x18877cu;
    // NOP
    // 0x188780: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x188780u;
    {
        const bool branch_taken_0x188780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188780) {
            ctx->pc = 0x1887A0u;
            return;
        }
    }
    ctx->pc = 0x188788u;
    // 0x188788: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x188788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18878c: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x18878cu;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188790: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x188790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x188794: 0xa38080b4  sb          $zero, -0x7F4C($gp)
    ctx->pc = 0x188794u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 0));
    // 0x188798: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x188798u;
    {
        const bool branch_taken_0x188798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188798) {
            ctx->pc = 0x18885Cu;
            return;
        }
    }
    ctx->pc = 0x1887A0u;
}
