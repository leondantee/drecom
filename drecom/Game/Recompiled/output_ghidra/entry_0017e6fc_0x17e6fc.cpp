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

// Function: entry_0017e6fc
// Address: 0x17e6fc - 0x17e754
void entry_0017e6fc_0x17e6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e6fc_0x17e6fc");
#endif

    ctx->pc = 0x17e6fcu;

    // 0x17e6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e700: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17e700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e704: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x17e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e710: 0x0  nop
    ctx->pc = 0x17e710u;
    // NOP
    // 0x17e714: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17e714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17e718: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x17e718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
    // 0x17e71c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e720: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e724: 0xc44101b0  lwc1        $f1, 0x1B0($v0)
    ctx->pc = 0x17e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e728: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e72c: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e730: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17e730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e734: 0x0  nop
    ctx->pc = 0x17e734u;
    // NOP
    // 0x17e738: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17E738u;
    {
        const bool branch_taken_0x17e738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e738) {
            ctx->pc = 0x17E754u;
            return;
        }
    }
    ctx->pc = 0x17E740u;
    // 0x17e740: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e744: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e748: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e74c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e750: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17e750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    ctx->pc = 0x17e754u;
}
