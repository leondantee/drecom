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

// Function: entry_001cb968
// Address: 0x1cb968 - 0x1cb9a8
void entry_001cb968_0x1cb968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb968_0x1cb968");
#endif

    ctx->pc = 0x1cb968u;

    // 0x1cb968: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1cb968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb96c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb974: 0x0  nop
    ctx->pc = 0x1cb974u;
    // NOP
    // 0x1cb978: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb97c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1cb97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x1cb980: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1cb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb988: 0x0  nop
    ctx->pc = 0x1cb988u;
    // NOP
    // 0x1cb98c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb990: 0x0  nop
    ctx->pc = 0x1cb990u;
    // NOP
    // 0x1cb994: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB994u;
    {
        const bool branch_taken_0x1cb994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb994) {
            ctx->pc = 0x1CB9A8u;
            return;
        }
    }
    ctx->pc = 0x1CB99Cu;
    // 0x1cb99c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb99cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb9a0: 0x0  nop
    ctx->pc = 0x1cb9a0u;
    // NOP
    // 0x1cb9a4: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1cb9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    ctx->pc = 0x1cb9a8u;
}
