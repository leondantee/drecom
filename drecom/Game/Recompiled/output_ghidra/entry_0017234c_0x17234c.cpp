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

// Function: entry_0017234c
// Address: 0x17234c - 0x172374
void entry_0017234c_0x17234c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017234c_0x17234c");
#endif

    ctx->pc = 0x17234cu;

    // 0x17234c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x17234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172350: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172354: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172358: 0x0  nop
    ctx->pc = 0x172358u;
    // NOP
    // 0x17235c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17235Cu;
    {
        const bool branch_taken_0x17235c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17235c) {
            ctx->pc = 0x172374u;
            return;
        }
    }
    ctx->pc = 0x172364u;
    // 0x172364: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172368: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17236c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17236Cu;
    {
        const bool branch_taken_0x17236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17236c) {
            ctx->pc = 0x1723B4u;
            return;
        }
    }
    ctx->pc = 0x172374u;
}
