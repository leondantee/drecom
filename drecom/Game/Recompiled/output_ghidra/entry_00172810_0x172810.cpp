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

// Function: entry_00172810
// Address: 0x172810 - 0x172844
void entry_00172810_0x172810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172810_0x172810");
#endif

    ctx->pc = 0x172810u;

    // 0x172810: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x172810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172814: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x172818: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17281c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17281cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172820: 0x0  nop
    ctx->pc = 0x172820u;
    // NOP
    // 0x172824: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172828: 0x0  nop
    ctx->pc = 0x172828u;
    // NOP
    // 0x17282c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17282Cu;
    {
        const bool branch_taken_0x17282c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17282c) {
            ctx->pc = 0x172844u;
            return;
        }
    }
    ctx->pc = 0x172834u;
    // 0x172834: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172838: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x172838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17283c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17283Cu;
    {
        const bool branch_taken_0x17283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17283c) {
            ctx->pc = 0x172850u;
            return;
        }
    }
    ctx->pc = 0x172844u;
}
