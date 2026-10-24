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

// Function: entry_00189ddc
// Address: 0x189ddc - 0x189e24
void entry_00189ddc_0x189ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ddc_0x189ddc");
#endif

    ctx->pc = 0x189ddcu;

    // 0x189ddc: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x189ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189de0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189de4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189de8: 0x0  nop
    ctx->pc = 0x189de8u;
    // NOP
    // 0x189dec: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x189DECu;
    {
        const bool branch_taken_0x189dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189dec) {
            ctx->pc = 0x189E44u;
            return;
        }
    }
    ctx->pc = 0x189DF4u;
    // 0x189df4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189df8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189dfc: 0x0  nop
    ctx->pc = 0x189dfcu;
    // NOP
    // 0x189e00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189e04: 0x0  nop
    ctx->pc = 0x189e04u;
    // NOP
    // 0x189e08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189E08u;
    {
        const bool branch_taken_0x189e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189e08) {
            ctx->pc = 0x189E24u;
            return;
        }
    }
    ctx->pc = 0x189E10u;
    // 0x189e10: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189e14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189e18: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x189e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x189e1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189E1Cu;
    {
        const bool branch_taken_0x189e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e1c) {
            ctx->pc = 0x189E2Cu;
            return;
        }
    }
    ctx->pc = 0x189E24u;
}
