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

// Function: entry_00252e50
// Address: 0x252e50 - 0x252e98
void entry_00252e50_0x252e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252e50_0x252e50");
#endif

    ctx->pc = 0x252e50u;

    // 0x252e50: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x252e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e54: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x252e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x252e58: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x252e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e5c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252e60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252e68: 0x0  nop
    ctx->pc = 0x252e68u;
    // NOP
    // 0x252e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e70: 0x0  nop
    ctx->pc = 0x252e70u;
    // NOP
    // 0x252e74: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252E74u;
    {
        const bool branch_taken_0x252e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252e74) {
            ctx->pc = 0x252E98u;
            return;
        }
    }
    ctx->pc = 0x252E7Cu;
    // 0x252e7c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x252e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e80: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252e88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252e8c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x252e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x252e90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252E90u;
    {
        const bool branch_taken_0x252e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e90) {
            ctx->pc = 0x252EA8u;
            return;
        }
    }
    ctx->pc = 0x252E98u;
}
