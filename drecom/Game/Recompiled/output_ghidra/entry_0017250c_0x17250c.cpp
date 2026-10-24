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

// Function: entry_0017250c
// Address: 0x17250c - 0x172534
void entry_0017250c_0x17250c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017250c_0x17250c");
#endif

    ctx->pc = 0x17250cu;

    // 0x17250c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172510: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172514: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172518: 0x0  nop
    ctx->pc = 0x172518u;
    // NOP
    // 0x17251c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17251Cu;
    {
        const bool branch_taken_0x17251c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17251c) {
            ctx->pc = 0x172534u;
            return;
        }
    }
    ctx->pc = 0x172524u;
    // 0x172524: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172528: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x172528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17252c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17252Cu;
    {
        const bool branch_taken_0x17252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17252c) {
            ctx->pc = 0x172574u;
            return;
        }
    }
    ctx->pc = 0x172534u;
}
