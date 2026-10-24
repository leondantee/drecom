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

// Function: entry_00171398
// Address: 0x171398 - 0x1713d8
void entry_00171398_0x171398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171398_0x171398");
#endif

    ctx->pc = 0x171398u;

    // 0x171398: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x171398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17139c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x17139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1713a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1713a4: 0x0  nop
    ctx->pc = 0x1713a4u;
    // NOP
    // 0x1713a8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1713A8u;
    {
        const bool branch_taken_0x1713a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1713a8) {
            ctx->pc = 0x1713D8u;
            return;
        }
    }
    ctx->pc = 0x1713B0u;
    // 0x1713b0: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1713b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713b4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1713b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1713b8: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1713b8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1713bc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1713bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713c0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1713c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1713c4: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x1713c4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1713c8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1713c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713cc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1713ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1713d0: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1713d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1713d4: 0x0  nop
    ctx->pc = 0x1713d4u;
    // NOP
    ctx->pc = 0x1713d8u;
}
