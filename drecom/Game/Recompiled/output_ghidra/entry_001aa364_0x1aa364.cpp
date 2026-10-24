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

// Function: entry_001aa364
// Address: 0x1aa364 - 0x1aa38c
void entry_001aa364_0x1aa364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa364_0x1aa364");
#endif

    ctx->pc = 0x1aa364u;

    // 0x1aa364: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa368: 0xc4610090  lwc1        $f1, 0x90($v1)
    ctx->pc = 0x1aa368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa36c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa374: 0x0  nop
    ctx->pc = 0x1aa374u;
    // NOP
    // 0x1aa378: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA378u;
    {
        const bool branch_taken_0x1aa378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa378) {
            ctx->pc = 0x1AA38Cu;
            return;
        }
    }
    ctx->pc = 0x1AA380u;
    // 0x1aa380: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa384: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa388: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1aa388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    ctx->pc = 0x1aa38cu;
}
