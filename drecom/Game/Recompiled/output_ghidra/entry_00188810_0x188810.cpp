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

// Function: entry_00188810
// Address: 0x188810 - 0x18884c
void entry_00188810_0x188810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188810_0x188810");
#endif

    ctx->pc = 0x188810u;

    // 0x188810: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x188810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188814: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x188814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x188818: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x188818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x18881c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18881cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188820: 0x0  nop
    ctx->pc = 0x188820u;
    // NOP
    // 0x188824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188828: 0x0  nop
    ctx->pc = 0x188828u;
    // NOP
    // 0x18882c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18882Cu;
    {
        const bool branch_taken_0x18882c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18882c) {
            ctx->pc = 0x18884Cu;
            return;
        }
    }
    ctx->pc = 0x188834u;
    // 0x188834: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x188834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x188838: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x188838u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18883c: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x18883cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x188840: 0xa38080b4  sb          $zero, -0x7F4C($gp)
    ctx->pc = 0x188840u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 0));
    // 0x188844: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x188844u;
    {
        const bool branch_taken_0x188844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188844) {
            ctx->pc = 0x18885Cu;
            return;
        }
    }
    ctx->pc = 0x18884Cu;
}
