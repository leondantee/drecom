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

// Function: entry_001de470
// Address: 0x1de470 - 0x1de4c0
void entry_001de470_0x1de470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de470_0x1de470");
#endif

    ctx->pc = 0x1de470u;

    // 0x1de470: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1de470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de474: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de478: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de47c: 0x0  nop
    ctx->pc = 0x1de47cu;
    // NOP
    // 0x1de480: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DE480u;
    {
        const bool branch_taken_0x1de480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de480) {
            ctx->pc = 0x1DE4C0u;
            return;
        }
    }
    ctx->pc = 0x1DE488u;
    // 0x1de488: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de48c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1de490: 0x13943c  dsll32      $s2, $s3, 16
    ctx->pc = 0x1de490u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de494: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1de494u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1de498: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de49c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1de4a0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1de4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de4a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de4a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de4a8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1de4a8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1de4ac: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4b0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1de4b4: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1de4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1de4b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de4b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de4bc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1de4bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1de4c0u;
}
