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

// Function: entry_00170488
// Address: 0x170488 - 0x1704c8
void entry_00170488_0x170488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170488_0x170488");
#endif

    ctx->pc = 0x170488u;

    // 0x170488: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x170488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17048c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x17048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170490: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170494: 0x0  nop
    ctx->pc = 0x170494u;
    // NOP
    // 0x170498: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x170498u;
    {
        const bool branch_taken_0x170498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170498) {
            ctx->pc = 0x1704C8u;
            return;
        }
    }
    ctx->pc = 0x1704A0u;
    // 0x1704a0: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1704a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704a4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1704a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1704a8: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1704a8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1704ac: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1704acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704b0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1704b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1704b4: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x1704b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1704b8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1704b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704bc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1704bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1704c0: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1704c0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1704c4: 0x0  nop
    ctx->pc = 0x1704c4u;
    // NOP
    ctx->pc = 0x1704c8u;
}
