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

// Function: entry_001aa3b4
// Address: 0x1aa3b4 - 0x1aa3dc
void entry_001aa3b4_0x1aa3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa3b4_0x1aa3b4");
#endif

    ctx->pc = 0x1aa3b4u;

    // 0x1aa3b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa3b8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1aa3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa3bc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa3c4: 0x0  nop
    ctx->pc = 0x1aa3c4u;
    // NOP
    // 0x1aa3c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA3C8u;
    {
        const bool branch_taken_0x1aa3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa3c8) {
            ctx->pc = 0x1AA3DCu;
            return;
        }
    }
    ctx->pc = 0x1AA3D0u;
    // 0x1aa3d0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa3d8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1aa3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x1aa3dcu;
}
