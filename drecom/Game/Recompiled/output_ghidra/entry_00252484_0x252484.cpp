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

// Function: entry_00252484
// Address: 0x252484 - 0x2524cc
void entry_00252484_0x252484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252484_0x252484");
#endif

    ctx->pc = 0x252484u;

    // 0x252484: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x252484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252488: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x252488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x25248c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x25248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252490: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x252490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252494: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252494u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25249c: 0x0  nop
    ctx->pc = 0x25249cu;
    // NOP
    // 0x2524a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2524a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2524a4: 0x0  nop
    ctx->pc = 0x2524a4u;
    // NOP
    // 0x2524a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2524A8u;
    {
        const bool branch_taken_0x2524a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2524a8) {
            ctx->pc = 0x2524CCu;
            return;
        }
    }
    ctx->pc = 0x2524B0u;
    // 0x2524b0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2524b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2524b4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2524b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2524b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2524bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2524bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2524c0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2524c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2524c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2524C4u;
    {
        const bool branch_taken_0x2524c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2524c4) {
            ctx->pc = 0x2524DCu;
            return;
        }
    }
    ctx->pc = 0x2524CCu;
}
