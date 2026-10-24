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

// Function: entry_00172850
// Address: 0x172850 - 0x172878
void entry_00172850_0x172850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172850_0x172850");
#endif

    ctx->pc = 0x172850u;

    // 0x172850: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x172850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172854: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x172854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172858: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17285c: 0x0  nop
    ctx->pc = 0x17285cu;
    // NOP
    // 0x172860: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172860u;
    {
        const bool branch_taken_0x172860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172860) {
            ctx->pc = 0x172878u;
            return;
        }
    }
    ctx->pc = 0x172868u;
    // 0x172868: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x172868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17286c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x17286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x172870: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x172870u;
    {
        const bool branch_taken_0x172870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172870) {
            ctx->pc = 0x1728B8u;
            return;
        }
    }
    ctx->pc = 0x172878u;
}
