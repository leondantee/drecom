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

// Function: entry_001713d8
// Address: 0x1713d8 - 0x171418
void entry_001713d8_0x1713d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001713d8_0x1713d8");
#endif

    ctx->pc = 0x1713d8u;

    // 0x1713d8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x1713d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1713dc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1713dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1713e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1713e4: 0x0  nop
    ctx->pc = 0x1713e4u;
    // NOP
    // 0x1713e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1713E8u;
    {
        const bool branch_taken_0x1713e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1713e8) {
            ctx->pc = 0x171418u;
            return;
        }
    }
    ctx->pc = 0x1713F0u;
    // 0x1713f0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1713f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713f4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1713f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1713f8: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1713f8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1713fc: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1713fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171400: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x171400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x171404: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x171404u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x171408: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17140c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x17140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x171410: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x171410u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x171414: 0x0  nop
    ctx->pc = 0x171414u;
    // NOP
    ctx->pc = 0x171418u;
}
