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

// Function: entry_001cb6cc
// Address: 0x1cb6cc - 0x1cb714
void entry_001cb6cc_0x1cb6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb6cc_0x1cb6cc");
#endif

    ctx->pc = 0x1cb6ccu;

    // 0x1cb6cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb6d0: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1cb6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb6d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1cb6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1cb6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb6dc: 0x0  nop
    ctx->pc = 0x1cb6dcu;
    // NOP
    // 0x1cb6e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb6e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb6e4: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1cb6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x1cb6e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb6ec: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cb6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb6f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb6f4: 0x0  nop
    ctx->pc = 0x1cb6f4u;
    // NOP
    // 0x1cb6f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb6fc: 0x0  nop
    ctx->pc = 0x1cb6fcu;
    // NOP
    // 0x1cb700: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB700u;
    {
        const bool branch_taken_0x1cb700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb700) {
            ctx->pc = 0x1CB714u;
            return;
        }
    }
    ctx->pc = 0x1CB708u;
    // 0x1cb708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb70c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb710: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1cb710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    ctx->pc = 0x1cb714u;
}
