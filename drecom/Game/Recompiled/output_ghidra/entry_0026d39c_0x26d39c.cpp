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

// Function: entry_0026d39c
// Address: 0x26d39c - 0x26d3e4
void entry_0026d39c_0x26d39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d39c_0x26d39c");
#endif

    ctx->pc = 0x26d39cu;

    // 0x26d39c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d3a0: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x26d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d3a4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x26d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x26d3a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d3ac: 0x0  nop
    ctx->pc = 0x26d3acu;
    // NOP
    // 0x26d3b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26d3b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26d3b4: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x26d3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x26d3b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d3bc: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d3c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d3c4: 0x0  nop
    ctx->pc = 0x26d3c4u;
    // NOP
    // 0x26d3c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26d3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d3cc: 0x0  nop
    ctx->pc = 0x26d3ccu;
    // NOP
    // 0x26d3d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26D3D0u;
    {
        const bool branch_taken_0x26d3d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d3d0) {
            ctx->pc = 0x26D3E4u;
            return;
        }
    }
    ctx->pc = 0x26D3D8u;
    // 0x26d3d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d3dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d3e0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26d3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x26d3e4u;
}
