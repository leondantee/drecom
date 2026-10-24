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

// Function: entry_00160988
// Address: 0x160988 - 0x1609d0
void entry_00160988_0x160988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160988_0x160988");
#endif

    ctx->pc = 0x160988u;

    // 0x160988: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x160988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16098c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x16098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160990: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160994: 0x0  nop
    ctx->pc = 0x160994u;
    // NOP
    // 0x160998: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x160998u;
    {
        const bool branch_taken_0x160998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160998) {
            ctx->pc = 0x1609E4u;
            return;
        }
    }
    ctx->pc = 0x1609A0u;
    // 0x1609a0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1609a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1609a4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1609a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1609a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1609a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1609ac: 0x0  nop
    ctx->pc = 0x1609acu;
    // NOP
    // 0x1609b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1609B0u;
    {
        const bool branch_taken_0x1609b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1609b0) {
            ctx->pc = 0x1609D0u;
            return;
        }
    }
    ctx->pc = 0x1609B8u;
    // 0x1609b8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1609b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1609bc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1609bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1609c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1609c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1609c4: 0x0  nop
    ctx->pc = 0x1609c4u;
    // NOP
    // 0x1609c8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1609C8u;
    {
        const bool branch_taken_0x1609c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1609c8) {
            ctx->pc = 0x160A28u;
            return;
        }
    }
    ctx->pc = 0x1609D0u;
}
