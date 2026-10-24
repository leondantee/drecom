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

// Function: entry_002087a0
// Address: 0x2087a0 - 0x2087d4
void entry_002087a0_0x2087a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002087a0_0x2087a0");
#endif

    ctx->pc = 0x2087a0u;

    // 0x2087a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2087a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087a4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2087a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2087a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2087a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2087ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2087acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2087b0: 0x0  nop
    ctx->pc = 0x2087b0u;
    // NOP
    // 0x2087b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2087b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2087b8: 0x0  nop
    ctx->pc = 0x2087b8u;
    // NOP
    // 0x2087bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2087BCu;
    {
        const bool branch_taken_0x2087bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2087bc) {
            ctx->pc = 0x2087D4u;
            return;
        }
    }
    ctx->pc = 0x2087C4u;
    // 0x2087c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2087c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2087c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2087c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2087cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2087ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087d0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2087d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    ctx->pc = 0x2087d4u;
}
