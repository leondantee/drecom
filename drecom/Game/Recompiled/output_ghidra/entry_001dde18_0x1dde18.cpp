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

// Function: entry_001dde18
// Address: 0x1dde18 - 0x1dde68
void entry_001dde18_0x1dde18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dde18_0x1dde18");
#endif

    ctx->pc = 0x1dde18u;

    // 0x1dde18: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1dde18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde1c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dde1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dde20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde24: 0x0  nop
    ctx->pc = 0x1dde24u;
    // NOP
    // 0x1dde28: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DDE28u;
    {
        const bool branch_taken_0x1dde28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dde28) {
            ctx->pc = 0x1DDE68u;
            return;
        }
    }
    ctx->pc = 0x1DDE30u;
    // 0x1dde30: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dde30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde34: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dde34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1dde38: 0x13943c  dsll32      $s2, $s3, 16
    ctx->pc = 0x1dde38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1dde3c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dde3cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dde40: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde44: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dde44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1dde48: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1dde48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1dde4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1dde4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1dde50: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1dde50u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1dde54: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dde54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde58: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dde5c: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1dde5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1dde60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dde60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dde64: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1dde64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dde68u;
}
