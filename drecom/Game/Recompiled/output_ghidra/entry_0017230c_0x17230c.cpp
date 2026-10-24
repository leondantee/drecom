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

// Function: entry_0017230c
// Address: 0x17230c - 0x172340
void entry_0017230c_0x17230c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017230c_0x17230c");
#endif

    ctx->pc = 0x17230cu;

    // 0x17230c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x17230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172310: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x172310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x172314: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17231c: 0x0  nop
    ctx->pc = 0x17231cu;
    // NOP
    // 0x172320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172324: 0x0  nop
    ctx->pc = 0x172324u;
    // NOP
    // 0x172328: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172328u;
    {
        const bool branch_taken_0x172328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172328) {
            ctx->pc = 0x172340u;
            return;
        }
    }
    ctx->pc = 0x172330u;
    // 0x172330: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172334: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x172338: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172338u;
    {
        const bool branch_taken_0x172338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172338) {
            ctx->pc = 0x17234Cu;
            return;
        }
    }
    ctx->pc = 0x172340u;
}
