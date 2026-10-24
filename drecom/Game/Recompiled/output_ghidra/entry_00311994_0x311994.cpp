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

// Function: entry_00311994
// Address: 0x311994 - 0x3119c4
void entry_00311994_0x311994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311994_0x311994");
#endif

    ctx->pc = 0x311994u;

    // 0x311994: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x311994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311998: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x311998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x31199c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31199cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3119a0: 0x0  nop
    ctx->pc = 0x3119a0u;
    // NOP
    // 0x3119a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3119a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3119a8: 0x0  nop
    ctx->pc = 0x3119a8u;
    // NOP
    // 0x3119ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3119ACu;
    {
        const bool branch_taken_0x3119ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3119ac) {
            ctx->pc = 0x3119C4u;
            return;
        }
    }
    ctx->pc = 0x3119B4u;
    // 0x3119b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3119b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3119b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3119b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3119bc: 0x0  nop
    ctx->pc = 0x3119bcu;
    // NOP
    // 0x3119c0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3119c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->pc = 0x3119c4u;
}
