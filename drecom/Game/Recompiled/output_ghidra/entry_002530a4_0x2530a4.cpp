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

// Function: entry_002530a4
// Address: 0x2530a4 - 0x2530ec
void entry_002530a4_0x2530a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002530a4_0x2530a4");
#endif

    ctx->pc = 0x2530a4u;

    // 0x2530a4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2530a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530a8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2530a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2530ac: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2530acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2530b0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2530b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2530b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2530b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2530b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2530bc: 0x0  nop
    ctx->pc = 0x2530bcu;
    // NOP
    // 0x2530c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2530c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2530c4: 0x0  nop
    ctx->pc = 0x2530c4u;
    // NOP
    // 0x2530c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2530C8u;
    {
        const bool branch_taken_0x2530c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2530c8) {
            ctx->pc = 0x2530ECu;
            return;
        }
    }
    ctx->pc = 0x2530D0u;
    // 0x2530d0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2530d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2530d4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2530d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2530d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2530dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2530dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2530e0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2530e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2530e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2530E4u;
    {
        const bool branch_taken_0x2530e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2530e4) {
            ctx->pc = 0x2530FCu;
            return;
        }
    }
    ctx->pc = 0x2530ECu;
}
