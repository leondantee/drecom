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

// Function: entry_0026ecb0
// Address: 0x26ecb0 - 0x26ecfc
void entry_0026ecb0_0x26ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ecb0_0x26ecb0");
#endif

    ctx->pc = 0x26ecb0u;

    // 0x26ecb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ecb4: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ecb8: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x26ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x26ecbc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x26ecbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x26ecc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ecc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ecc4: 0x0  nop
    ctx->pc = 0x26ecc4u;
    // NOP
    // 0x26ecc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ecc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26eccc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26ecccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26ecd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ecd4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ecd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ecd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ecdc: 0x0  nop
    ctx->pc = 0x26ecdcu;
    // NOP
    // 0x26ece0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ece0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ece4: 0x0  nop
    ctx->pc = 0x26ece4u;
    // NOP
    // 0x26ece8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26ECE8u;
    {
        const bool branch_taken_0x26ece8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ece8) {
            ctx->pc = 0x26ECFCu;
            return;
        }
    }
    ctx->pc = 0x26ECF0u;
    // 0x26ecf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ecf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ecf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ecf8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26ecf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x26ecfcu;
}
