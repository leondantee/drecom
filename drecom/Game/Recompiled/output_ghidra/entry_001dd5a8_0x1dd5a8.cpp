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

// Function: entry_001dd5a8
// Address: 0x1dd5a8 - 0x1dd5e8
void entry_001dd5a8_0x1dd5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd5a8_0x1dd5a8");
#endif

    ctx->pc = 0x1dd5a8u;

    // 0x1dd5a8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x1dd5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd5ac: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd5b4: 0x0  nop
    ctx->pc = 0x1dd5b4u;
    // NOP
    // 0x1dd5b8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DD5B8u;
    {
        const bool branch_taken_0x1dd5b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd5b8) {
            ctx->pc = 0x1DD5E8u;
            return;
        }
    }
    ctx->pc = 0x1DD5C0u;
    // 0x1dd5c0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5c4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dd5c8: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1dd5c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dd5cc: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dd5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5d0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dd5d4: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1dd5d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dd5d8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5dc: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dd5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1dd5e0: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x1dd5e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dd5e4: 0x0  nop
    ctx->pc = 0x1dd5e4u;
    // NOP
    ctx->pc = 0x1dd5e8u;
}
