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

// Function: entry_001aa2ec
// Address: 0x1aa2ec - 0x1aa314
void entry_001aa2ec_0x1aa2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa2ec_0x1aa2ec");
#endif

    ctx->pc = 0x1aa2ecu;

    // 0x1aa2ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2f0: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x1aa2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa2f4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa2f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa2f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa2fc: 0x0  nop
    ctx->pc = 0x1aa2fcu;
    // NOP
    // 0x1aa300: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA300u;
    {
        const bool branch_taken_0x1aa300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa300) {
            ctx->pc = 0x1AA314u;
            return;
        }
    }
    ctx->pc = 0x1AA308u;
    // 0x1aa308: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa30c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa310: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x1aa310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    ctx->pc = 0x1aa314u;
}
