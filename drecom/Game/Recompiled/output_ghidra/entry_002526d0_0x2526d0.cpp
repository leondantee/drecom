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

// Function: entry_002526d0
// Address: 0x2526d0 - 0x252718
void entry_002526d0_0x2526d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002526d0_0x2526d0");
#endif

    ctx->pc = 0x2526d0u;

    // 0x2526d0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2526d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526d4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2526d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2526d8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2526d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2526dc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2526dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2526e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2526e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2526e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2526e8: 0x0  nop
    ctx->pc = 0x2526e8u;
    // NOP
    // 0x2526ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2526ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2526f0: 0x0  nop
    ctx->pc = 0x2526f0u;
    // NOP
    // 0x2526f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2526F4u;
    {
        const bool branch_taken_0x2526f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2526f4) {
            ctx->pc = 0x252718u;
            return;
        }
    }
    ctx->pc = 0x2526FCu;
    // 0x2526fc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2526fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252700: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x252700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252704: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252708: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252708u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25270c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x25270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x252710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252710u;
    {
        const bool branch_taken_0x252710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252710) {
            ctx->pc = 0x252728u;
            return;
        }
    }
    ctx->pc = 0x252718u;
}
