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

// Function: entry_001aa38c
// Address: 0x1aa38c - 0x1aa3b4
void entry_001aa38c_0x1aa38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa38c_0x1aa38c");
#endif

    ctx->pc = 0x1aa38cu;

    // 0x1aa38c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa390: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x1aa390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa394: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa398: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa39c: 0x0  nop
    ctx->pc = 0x1aa39cu;
    // NOP
    // 0x1aa3a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA3A0u;
    {
        const bool branch_taken_0x1aa3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa3a0) {
            ctx->pc = 0x1AA3B4u;
            return;
        }
    }
    ctx->pc = 0x1AA3A8u;
    // 0x1aa3a8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa3b0: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x1aa3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    ctx->pc = 0x1aa3b4u;
}
