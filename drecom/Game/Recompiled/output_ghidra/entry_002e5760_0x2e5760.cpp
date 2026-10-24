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

// Function: entry_002e5760
// Address: 0x2e5760 - 0x2e57c8
void entry_002e5760_0x2e5760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5760_0x2e5760");
#endif

    ctx->pc = 0x2e5760u;

    // 0x2e5760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5764: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e576c: 0x0  nop
    ctx->pc = 0x2e576cu;
    // NOP
    // 0x2e5770: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5774: 0x0  nop
    ctx->pc = 0x2e5774u;
    // NOP
    // 0x2e5778: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5778u;
    {
        const bool branch_taken_0x2e5778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5778) {
            ctx->pc = 0x2E57C8u;
            return;
        }
    }
    ctx->pc = 0x2E5780u;
    // 0x2e5780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5784: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2e5784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5788: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e578c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e578cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5790: 0x0  nop
    ctx->pc = 0x2e5790u;
    // NOP
    // 0x2e5794: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e5798: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e5798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e579c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57a0: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e57a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e57a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e57a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e57a8: 0x0  nop
    ctx->pc = 0x2e57a8u;
    // NOP
    // 0x2e57ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e57acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e57b0: 0x0  nop
    ctx->pc = 0x2e57b0u;
    // NOP
    // 0x2e57b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E57B4u;
    {
        const bool branch_taken_0x2e57b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e57b4) {
            ctx->pc = 0x2E57C8u;
            return;
        }
    }
    ctx->pc = 0x2E57BCu;
    // 0x2e57bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e57bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e57c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57c4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e57c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x2e57c8u;
}
