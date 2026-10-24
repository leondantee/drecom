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

// Function: entry_0035529c
// Address: 0x35529c - 0x3552d4
void entry_0035529c_0x35529c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035529c_0x35529c");
#endif

    ctx->pc = 0x35529cu;

    // 0x35529c: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x35529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3552a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3552a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3552a4: 0x0  nop
    ctx->pc = 0x3552a4u;
    // NOP
    // 0x3552a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3552a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3552ac: 0x0  nop
    ctx->pc = 0x3552acu;
    // NOP
    // 0x3552b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3552B0u;
    {
        const bool branch_taken_0x3552b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3552b0) {
            ctx->pc = 0x3552D4u;
            return;
        }
    }
    ctx->pc = 0x3552B8u;
    // 0x3552b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3552b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3552bc: 0x0  nop
    ctx->pc = 0x3552bcu;
    // NOP
    // 0x3552c0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3552c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3552c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3552c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3552c8: 0x0  nop
    ctx->pc = 0x3552c8u;
    // NOP
    // 0x3552cc: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3552ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3552d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3552d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x3552d4u;
}
