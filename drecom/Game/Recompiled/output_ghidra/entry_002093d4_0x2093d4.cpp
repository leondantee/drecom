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

// Function: entry_002093d4
// Address: 0x2093d4 - 0x209414
void entry_002093d4_0x2093d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002093d4_0x2093d4");
#endif

    ctx->pc = 0x2093d4u;

    // 0x2093d4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2093d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2093d8: 0xc4e10188  lwc1        $f1, 0x188($a3)
    ctx->pc = 0x2093d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2093dc: 0x3c084348  lui         $t0, 0x4348
    ctx->pc = 0x2093dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17224 << 16));
    // 0x2093e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2093e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2093e4: 0x0  nop
    ctx->pc = 0x2093e4u;
    // NOP
    // 0x2093e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2093e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2093ec: 0x0  nop
    ctx->pc = 0x2093ecu;
    // NOP
    // 0x2093f0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2093F0u;
    {
        const bool branch_taken_0x2093f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093f0) {
            ctx->pc = 0x209414u;
            return;
        }
    }
    ctx->pc = 0x2093F8u;
    // 0x2093f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2093f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2093fc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2093fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209400: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x209400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x209404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209408: 0x0  nop
    ctx->pc = 0x209408u;
    // NOP
    // 0x20940c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20940cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209410: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x209410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x209414u;
}
