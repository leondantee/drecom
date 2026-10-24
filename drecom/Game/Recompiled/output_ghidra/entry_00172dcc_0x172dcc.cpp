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

// Function: entry_00172dcc
// Address: 0x172dcc - 0x172e00
void entry_00172dcc_0x172dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172dcc_0x172dcc");
#endif

    ctx->pc = 0x172dccu;

    // 0x172dcc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172dd0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x172dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x172dd4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ddc: 0x0  nop
    ctx->pc = 0x172ddcu;
    // NOP
    // 0x172de0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172de4: 0x0  nop
    ctx->pc = 0x172de4u;
    // NOP
    // 0x172de8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172DE8u;
    {
        const bool branch_taken_0x172de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172de8) {
            ctx->pc = 0x172E00u;
            return;
        }
    }
    ctx->pc = 0x172DF0u;
    // 0x172df0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172df4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x172df8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172DF8u;
    {
        const bool branch_taken_0x172df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172df8) {
            ctx->pc = 0x172E0Cu;
            return;
        }
    }
    ctx->pc = 0x172E00u;
}
