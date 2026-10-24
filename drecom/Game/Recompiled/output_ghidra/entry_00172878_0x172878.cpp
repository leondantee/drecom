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

// Function: entry_00172878
// Address: 0x172878 - 0x1728a4
void entry_00172878_0x172878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172878_0x172878");
#endif

    ctx->pc = 0x172878u;

    // 0x172878: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17287c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17287cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172880: 0x0  nop
    ctx->pc = 0x172880u;
    // NOP
    // 0x172884: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172888: 0x0  nop
    ctx->pc = 0x172888u;
    // NOP
    // 0x17288c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17288Cu;
    {
        const bool branch_taken_0x17288c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17288c) {
            ctx->pc = 0x1728A4u;
            return;
        }
    }
    ctx->pc = 0x172894u;
    // 0x172894: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172898: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x172898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x17289c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17289Cu;
    {
        const bool branch_taken_0x17289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17289c) {
            ctx->pc = 0x1728B0u;
            return;
        }
    }
    ctx->pc = 0x1728A4u;
}
