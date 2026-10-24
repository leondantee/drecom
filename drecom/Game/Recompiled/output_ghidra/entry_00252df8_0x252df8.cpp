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

// Function: entry_00252df8
// Address: 0x252df8 - 0x252e40
void entry_00252df8_0x252df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252df8_0x252df8");
#endif

    ctx->pc = 0x252df8u;

    // 0x252df8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252dfc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x252dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x252e00: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x252e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e04: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252e08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252e10: 0x0  nop
    ctx->pc = 0x252e10u;
    // NOP
    // 0x252e14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e18: 0x0  nop
    ctx->pc = 0x252e18u;
    // NOP
    // 0x252e1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252E1Cu;
    {
        const bool branch_taken_0x252e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252e1c) {
            ctx->pc = 0x252E40u;
            return;
        }
    }
    ctx->pc = 0x252E24u;
    // 0x252e24: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x252e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e28: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252e30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252e34: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x252e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x252e38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252E38u;
    {
        const bool branch_taken_0x252e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e38) {
            ctx->pc = 0x252E50u;
            return;
        }
    }
    ctx->pc = 0x252E40u;
}
