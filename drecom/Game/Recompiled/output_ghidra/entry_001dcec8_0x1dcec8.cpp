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

// Function: entry_001dcec8
// Address: 0x1dcec8 - 0x1dcf08
void entry_001dcec8_0x1dcec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcec8_0x1dcec8");
#endif

    ctx->pc = 0x1dcec8u;

    // 0x1dcec8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x1dcec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcecc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1dceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dced0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dced0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dced4: 0x0  nop
    ctx->pc = 0x1dced4u;
    // NOP
    // 0x1dced8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DCED8u;
    {
        const bool branch_taken_0x1dced8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dced8) {
            ctx->pc = 0x1DCF08u;
            return;
        }
    }
    ctx->pc = 0x1DCEE0u;
    // 0x1dcee0: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1dcee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcee4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dcee8: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1dcee8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dceec: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcef0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dcef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dcef4: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x1dcef4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dcef8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcefc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dcf00: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1dcf00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcf04: 0x0  nop
    ctx->pc = 0x1dcf04u;
    // NOP
    ctx->pc = 0x1dcf08u;
}
