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

// Function: entry_001aa314
// Address: 0x1aa314 - 0x1aa33c
void entry_001aa314_0x1aa314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa314_0x1aa314");
#endif

    ctx->pc = 0x1aa314u;

    // 0x1aa314: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa318: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1aa318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa31c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa324: 0x0  nop
    ctx->pc = 0x1aa324u;
    // NOP
    // 0x1aa328: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA328u;
    {
        const bool branch_taken_0x1aa328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa328) {
            ctx->pc = 0x1AA33Cu;
            return;
        }
    }
    ctx->pc = 0x1AA330u;
    // 0x1aa330: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa334: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa338: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1aa338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x1aa33cu;
}
