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

// Function: entry_001a0148
// Address: 0x1a0148 - 0x1a0178
void entry_001a0148_0x1a0148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0148_0x1a0148");
#endif

    ctx->pc = 0x1a0148u;

    // 0x1a0148: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a0148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a014c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a014cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0150: 0x0  nop
    ctx->pc = 0x1a0150u;
    // NOP
    // 0x1a0154: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0158: 0x0  nop
    ctx->pc = 0x1a0158u;
    // NOP
    // 0x1a015c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A015Cu;
    {
        const bool branch_taken_0x1a015c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a015c) {
            ctx->pc = 0x1A0178u;
            return;
        }
    }
    ctx->pc = 0x1A0164u;
    // 0x1a0164: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a0164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0168: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a0168u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a016c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1a016cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1a0170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0170u;
    {
        const bool branch_taken_0x1a0170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0170) {
            ctx->pc = 0x1A0180u;
            return;
        }
    }
    ctx->pc = 0x1A0178u;
}
