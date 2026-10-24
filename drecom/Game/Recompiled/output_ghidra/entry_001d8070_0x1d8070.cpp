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

// Function: entry_001d8070
// Address: 0x1d8070 - 0x1d80f0
void entry_001d8070_0x1d8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8070_0x1d8070");
#endif

    ctx->pc = 0x1d8070u;

    // 0x1d8070: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1d8070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8074: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8078: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d8078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d807c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1d807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8080: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d8080u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8084: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d8084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1d8088: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d8088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d808c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1d808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8090: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8094: 0x0  nop
    ctx->pc = 0x1d8094u;
    // NOP
    // 0x1d8098: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8098u;
    {
        const bool branch_taken_0x1d8098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8098) {
            ctx->pc = 0x1D80F0u;
            return;
        }
    }
    ctx->pc = 0x1D80A0u;
    // 0x1d80a0: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x1d80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d80a4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1d80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d80a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d80ac: 0x0  nop
    ctx->pc = 0x1d80acu;
    // NOP
    // 0x1d80b0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1D80B0u;
    {
        const bool branch_taken_0x1d80b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d80b0) {
            ctx->pc = 0x1D80F0u;
            return;
        }
    }
    ctx->pc = 0x1D80B8u;
    // 0x1d80b8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d80b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80bc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d80bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d80c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d80c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d80c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1d80c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d80c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d80cc: 0x0  nop
    ctx->pc = 0x1d80ccu;
    // NOP
    // 0x1d80d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D80D0u;
    {
        const bool branch_taken_0x1d80d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d80d0) {
            ctx->pc = 0x1D80F0u;
            return;
        }
    }
    ctx->pc = 0x1D80D8u;
    // 0x1d80d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d80dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d80dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d80e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D80E0u;
    {
        const bool branch_taken_0x1d80e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d80e0) {
            ctx->pc = 0x1D80F0u;
            return;
        }
    }
    ctx->pc = 0x1D80E8u;
    // 0x1d80e8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80ec: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d80ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x1d80f0u;
}
