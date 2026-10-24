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

// Function: entry_00171998
// Address: 0x171998 - 0x1719d8
void entry_00171998_0x171998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171998_0x171998");
#endif

    ctx->pc = 0x171998u;

    // 0x171998: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x171998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17199c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x17199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1719a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1719a4: 0x0  nop
    ctx->pc = 0x1719a4u;
    // NOP
    // 0x1719a8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1719A8u;
    {
        const bool branch_taken_0x1719a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1719a8) {
            ctx->pc = 0x1719D8u;
            return;
        }
    }
    ctx->pc = 0x1719B0u;
    // 0x1719b0: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1719b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719b4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1719b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1719b8: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1719b8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1719bc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1719bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719c0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1719c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1719c4: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x1719c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1719c8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1719c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719cc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1719ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1719d0: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1719d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1719d4: 0x0  nop
    ctx->pc = 0x1719d4u;
    // NOP
    ctx->pc = 0x1719d8u;
}
