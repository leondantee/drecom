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

// Function: entry_001719d8
// Address: 0x1719d8 - 0x171a18
void entry_001719d8_0x1719d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001719d8_0x1719d8");
#endif

    ctx->pc = 0x1719d8u;

    // 0x1719d8: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1719d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1719dc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1719dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1719e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1719e4: 0x0  nop
    ctx->pc = 0x1719e4u;
    // NOP
    // 0x1719e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1719E8u;
    {
        const bool branch_taken_0x1719e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1719e8) {
            ctx->pc = 0x171A18u;
            return;
        }
    }
    ctx->pc = 0x1719F0u;
    // 0x1719f0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1719f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719f4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1719f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1719f8: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1719f8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1719fc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1719fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a00: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x171a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x171a04: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x171a04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x171a08: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a0c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x171a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x171a10: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x171a10u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x171a14: 0x0  nop
    ctx->pc = 0x171a14u;
    // NOP
    ctx->pc = 0x171a18u;
}
