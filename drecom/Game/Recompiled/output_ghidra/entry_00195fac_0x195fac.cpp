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

// Function: entry_00195fac
// Address: 0x195fac - 0x195fdc
void entry_00195fac_0x195fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195fac_0x195fac");
#endif

    ctx->pc = 0x195facu;

    // 0x195fac: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x195facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195fb4: 0x0  nop
    ctx->pc = 0x195fb4u;
    // NOP
    // 0x195fb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195fbc: 0x0  nop
    ctx->pc = 0x195fbcu;
    // NOP
    // 0x195fc0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x195FC0u;
    {
        const bool branch_taken_0x195fc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195fc0) {
            ctx->pc = 0x195FDCu;
            return;
        }
    }
    ctx->pc = 0x195FC8u;
    // 0x195fc8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x195fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195fcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195fccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195fd0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x195fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x195fd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195FD4u;
    {
        const bool branch_taken_0x195fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195fd4) {
            ctx->pc = 0x195FE4u;
            return;
        }
    }
    ctx->pc = 0x195FDCu;
}
