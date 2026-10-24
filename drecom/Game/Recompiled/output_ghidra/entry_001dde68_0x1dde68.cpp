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

// Function: entry_001dde68
// Address: 0x1dde68 - 0x1ddeb8
void entry_001dde68_0x1dde68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dde68_0x1dde68");
#endif

    ctx->pc = 0x1dde68u;

    // 0x1dde68: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1dde68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde6c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dde70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde74: 0x0  nop
    ctx->pc = 0x1dde74u;
    // NOP
    // 0x1dde78: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DDE78u;
    {
        const bool branch_taken_0x1dde78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dde78) {
            ctx->pc = 0x1DDEB8u;
            return;
        }
    }
    ctx->pc = 0x1DDE80u;
    // 0x1dde80: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde84: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dde84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1dde88: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x1dde88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1dde8c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dde8cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dde90: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1dde90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde94: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dde98: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1dde98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1dde9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dde9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddea0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1ddea0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddea4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1ddea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddea8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1ddea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1ddeac: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1ddeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ddeb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddeb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddeb4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1ddeb4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ddeb8u;
}
