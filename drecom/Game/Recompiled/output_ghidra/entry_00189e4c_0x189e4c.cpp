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

// Function: entry_00189e4c
// Address: 0x189e4c - 0x189e7c
void entry_00189e4c_0x189e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189e4c_0x189e4c");
#endif

    ctx->pc = 0x189e4cu;

    // 0x189e4c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189e54: 0x0  nop
    ctx->pc = 0x189e54u;
    // NOP
    // 0x189e58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189e5c: 0x0  nop
    ctx->pc = 0x189e5cu;
    // NOP
    // 0x189e60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189E60u;
    {
        const bool branch_taken_0x189e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189e60) {
            ctx->pc = 0x189E7Cu;
            return;
        }
    }
    ctx->pc = 0x189E68u;
    // 0x189e68: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189e6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189e70: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x189e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x189e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189E74u;
    {
        const bool branch_taken_0x189e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e74) {
            ctx->pc = 0x189E84u;
            return;
        }
    }
    ctx->pc = 0x189E7Cu;
}
