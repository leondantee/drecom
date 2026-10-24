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

// Function: entry_001aa3dc
// Address: 0x1aa3dc - 0x1aa404
void entry_001aa3dc_0x1aa3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa3dc_0x1aa3dc");
#endif

    ctx->pc = 0x1aa3dcu;

    // 0x1aa3dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa3e0: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1aa3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa3e4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa3ec: 0x0  nop
    ctx->pc = 0x1aa3ecu;
    // NOP
    // 0x1aa3f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA3F0u;
    {
        const bool branch_taken_0x1aa3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa3f0) {
            ctx->pc = 0x1AA404u;
            return;
        }
    }
    ctx->pc = 0x1AA3F8u;
    // 0x1aa3f8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa400: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1aa400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x1aa404u;
}
