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

// Function: entry_001b2818
// Address: 0x1b2818 - 0x1b2840
void entry_001b2818_0x1b2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2818_0x1b2818");
#endif

    ctx->pc = 0x1b2818u;

    // 0x1b2818: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x1b2818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b281c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2820: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2824: 0x0  nop
    ctx->pc = 0x1b2824u;
    // NOP
    // 0x1b2828: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2828u;
    {
        const bool branch_taken_0x1b2828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2828) {
            ctx->pc = 0x1B2840u;
            return;
        }
    }
    ctx->pc = 0x1B2830u;
    // 0x1b2830: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2834: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1b2834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1b2838: 0xafb50134  sw          $s5, 0x134($sp)
    ctx->pc = 0x1b2838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 21));
    // 0x1b283c: 0x0  nop
    ctx->pc = 0x1b283cu;
    // NOP
    ctx->pc = 0x1b2840u;
}
