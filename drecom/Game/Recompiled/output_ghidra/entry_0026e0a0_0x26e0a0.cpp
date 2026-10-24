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

// Function: entry_0026e0a0
// Address: 0x26e0a0 - 0x26e0d8
void entry_0026e0a0_0x26e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e0a0_0x26e0a0");
#endif

    ctx->pc = 0x26e0a0u;

    // 0x26e0a0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x26e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e0a4: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e0a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26e0a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e0ac: 0x0  nop
    ctx->pc = 0x26e0acu;
    // NOP
    // 0x26e0b0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x26E0B0u;
    {
        const bool branch_taken_0x26e0b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e0b0) {
            ctx->pc = 0x26E0D8u;
            return;
        }
    }
    ctx->pc = 0x26E0B8u;
    // 0x26e0b8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x26e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e0bc: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e0c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26e0c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26e0c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e0c8: 0x0  nop
    ctx->pc = 0x26e0c8u;
    // NOP
    // 0x26e0cc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x26E0CCu;
    {
        const bool branch_taken_0x26e0cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e0cc) {
            ctx->pc = 0x26E118u;
            return;
        }
    }
    ctx->pc = 0x26E0D4u;
    // 0x26e0d4: 0x0  nop
    ctx->pc = 0x26e0d4u;
    // NOP
    ctx->pc = 0x26e0d8u;
}
