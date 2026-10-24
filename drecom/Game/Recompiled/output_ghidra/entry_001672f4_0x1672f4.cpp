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

// Function: entry_001672f4
// Address: 0x1672f4 - 0x167348
void entry_001672f4_0x1672f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001672f4_0x1672f4");
#endif

    ctx->pc = 0x1672f4u;

    // 0x1672f4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1672f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1672f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1672f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1672fc: 0x0  nop
    ctx->pc = 0x1672fcu;
    // NOP
    // 0x167300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167304: 0x0  nop
    ctx->pc = 0x167304u;
    // NOP
    // 0x167308: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x167308u;
    {
        const bool branch_taken_0x167308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167308) {
            ctx->pc = 0x167348u;
            return;
        }
    }
    ctx->pc = 0x167310u;
    // 0x167310: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x167310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167318: 0x0  nop
    ctx->pc = 0x167318u;
    // NOP
    // 0x16731c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16731cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167320: 0x0  nop
    ctx->pc = 0x167320u;
    // NOP
    // 0x167324: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x167324u;
    {
        const bool branch_taken_0x167324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167324) {
            ctx->pc = 0x167348u;
            return;
        }
    }
    ctx->pc = 0x16732Cu;
    // 0x16732c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x16732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167334: 0x0  nop
    ctx->pc = 0x167334u;
    // NOP
    // 0x167338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16733c: 0x0  nop
    ctx->pc = 0x16733cu;
    // NOP
    // 0x167340: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x167340u;
    {
        const bool branch_taken_0x167340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167340) {
            ctx->pc = 0x167390u;
            return;
        }
    }
    ctx->pc = 0x167348u;
}
